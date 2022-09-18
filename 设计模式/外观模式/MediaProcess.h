#pragma once
#include "FFmpeg.h"
class MediaProcess
{
private:
	FFmpeg* ffmpeg;
public:
	MediaProcess();
	void decode();
	void encode();
};

