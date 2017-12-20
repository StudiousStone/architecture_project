#ifndef _CONSTANT_HPP
#define _CONSTANT_HPP

/****** cifar database and image constant ******/
const unsigned char CIFAR_DB_IMAGE_WIDTH=32;
const unsigned char CIFAR_DB_IMAGE_HEIGHT=32;
const unsigned char CIFAR_DB_IMAGE_COLOR=3;
const unsigned int CIFAR_DB_IMAGE_NUMBER=1;
const unsigned int CIFAR_IMAGE_BYTES_SIZE=(CIFAR_DB_IMAGE_HEIGHT
					   *CIFAR_DB_IMAGE_WIDTH*
					   CIFAR_DB_IMAGE_COLOR);
const unsigned int CIFAR_DB_BYTES_SIZE=(CIFAR_IMAGE_BYTES_SIZE*
					CIFAR_DB_IMAGE_NUMBER);
const unsigned char CIFAR_NUMBER_OF_CLASS=10;


/****** cnn parameters ******/

const unsigned char CONVLAYER1_CHANNELNUM=64;
const unsigned char CONVLAYER2_CHANNELNUM=32;
const unsigned char CONVLAYER3_CHANNELNUM=20;
const unsigned char FCLAYER_CHANNELNUM=10;

const unsigned char KERNELCONV_SIZE=5;
const unsigned char KERNELCONVLAYER1_CHANNEL_IN_NUM=3;
const unsigned char KERNELCONVLAYER2_CHANNEL_IN_NUM=64;
const unsigned char KERNELCONVLAYER3_CHANNEL_IN_NUM=32;
const unsigned int KERNELCONVLAYER1_SIZE=(KERNELCONV_SIZE*KERNELCONV_SIZE
					  *KERNELCONVLAYER1_CHANNEL_IN_NUM
					  *CONVLAYER1_CHANNELNUM);
const unsigned int KERNELCONVLAYER2_SIZE=(KERNELCONV_SIZE*KERNELCONV_SIZE
					  *KERNELCONVLAYER2_CHANNEL_IN_NUM
					  *CONVLAYER2_CHANNELNUM);
const unsigned int KERNELCONVLAYER3_SIZE=(KERNELCONV_SIZE*KERNELCONV_SIZE
					  *KERNELCONVLAYER3_CHANNEL_IN_NUM
					  *CONVLAYER3_CHANNELNUM);

const unsigned char BIASCONVLAYER1_SIZE=CONVLAYER1_CHANNELNUM;
const unsigned char BIASCONVLAYER2_SIZE=CONVLAYER2_CHANNELNUM;
const unsigned char BIASCONVLAYER3_SIZE=CONVLAYER3_CHANNELNUM;
const unsigned char BIASFCLAYER_SIZE=FCLAYER_CHANNELNUM;

const unsigned char NORMALIZED_IMAGE_SIZE=24;

const unsigned char MAXPOOL_LAYER1_OUT_SIZE=12;
const unsigned char MAXPOOL_LAYER2_OUT_SIZE=6;
const unsigned char MAXPOOL_LAYER3_OUT_SIZE=3;
const unsigned char MAXPOOL_SIZE=3;
const unsigned char MAXPOOL_LAYER1_STRIDE=2;

const unsigned char RESHAPE_SIZE=(CONVLAYER3_CHANNELNUM*
				  MAXPOOL_LAYER3_OUT_SIZE);

#endif
