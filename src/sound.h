/*
 * Elite - The New Kind.
 *
 * Reverse engineered from the BBC disk version of Elite.
 * Additional material by C.J.Pinder.
 *
 * The original Elite code is (C) I.Bell & D.Braben 1984.
 * This version re-engineered in C by C.J.Pinder 1999-2001.
 *
 * email: <christian@newkind.co.uk>
 *
 *
 */

/**
 * SDL/OpenGL Port by Mark Follett 2001-2002
 * email: <mef123@geocities.com>
 **/

/*
 * sound.h
 */
 
#ifndef SOUND_H
#define SOUND_H

#define MUSIC_MP3    0
#define MUSIC_MIDI   1
#define MUSIC_WAV    2

#define SND_FREQ_11KHZ  0
#define SND_FREQ_22KHZ  1
#define SND_FREQ_44KHZ  2

#define SND_MONO     0
#define SND_STEREO   1

#define SND_FORMAT_8BIT   0
#define SND_FORMAT_16BIT  1

#define SOUND_DIRECTORY "./sounds"
#define MUSIC_DIRECTORY "./music"

#define SND_LAUNCH		0
#define SND_CRASH		1
#define SND_DOCK		2
#define SND_GAMEOVER	3
#define SND_PULSE		4
#define SND_HIT_ENEMY	5
#define SND_EXPLODE		6
#define SND_ECM			7
#define SND_MISSILE		8
#define SND_HYPERSPACE	9
#define SND_INCOMMING_FIRE_1	10
#define SND_INCOMMING_FIRE_2	11
#define SND_BEEP		12
#define SND_BOOP		13

#define SND_ELITE_THEME 0
#define SND_BLUE_DANUBE 1

void snd_sound_startup (void);
void snd_sound_shutdown (void);
void snd_play_sample (int sample_no);
void snd_play_midi (int midi_no, int repeat);
void snd_update_sound (void);
void snd_stop_midi (void);

#endif
