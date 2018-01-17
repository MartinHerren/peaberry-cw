// Peaberry CW - Transceiver for Peaberry SDR
// Copyright (C) 2015 David Turnbull AE9RB
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef AUDIO_ALSA_H
#define AUDIO_ALSA_H

#include "audio.h"
#include <array>

class Audio : public AudioBase
{
    Q_OBJECT
public:
    explicit Audio(class Radio *radio = 0);
    ~Audio();
    QString error;

private:

public slots:
    void start();
    void stop();
};

#endif // AUDIO_ALSA_H
