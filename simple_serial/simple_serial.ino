/*
The Vent-display project is a ventilator display that consumes PIRDS data and
performs most clinical respiration calculations. This is an important part of
Public Invention's goal of creating an open-source ventilator ecosystem. This
is a stand-alone .html file with about a thousand lines of JavaScript that
implements a clinical display that doctors want to see of an operating
ventilator. It includes live data trace plots of pressure and flow, as well as
calculated values such as tidal volume.
Copyright (C) 2021 Robert Read, Lauria Clarke, Ben Coombs, and Darío Hereñú.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.
You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

char c;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    c = Serial.read();
    Serial.print(c);
  }
}
