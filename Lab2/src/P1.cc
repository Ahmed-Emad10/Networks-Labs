//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "P1.h"

Define_Module(P1);

void P1::initialize()
{
    // TODO - Generated method body
    cMessage *msg = new cMessage("Start the game:");
    x = int(uniform(0,10));
    send(msg,"P1_out");
    EV<<x<<endl;
}

void P1::handleMessage(cMessage *msg)
{

    // TODO - Generated method body


    if(atoi(msg->getName())==x)
    {
        msg->setName("correct guess");
        EV<<msg->getName()<<endl;
        send(msg,"P1_out");
    }
    else
    {
        msg->setName("wrong guess");
        EV<<msg->getName()<<endl;
        send(msg,"P1_out");

    }
}
