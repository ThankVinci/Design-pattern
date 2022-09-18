#include "MediaProcess.h"

MediaProcess::MediaProcess()
{
	ffmpeg = new FFmpeg;
}

void MediaProcess::decode()
{
	ffmpeg->decodev2();
}

void MediaProcess::encode()
{
	ffmpeg->encodev2();
}
