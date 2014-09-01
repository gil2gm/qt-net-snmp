/**
 *  This file is part of Qt-Net-SNMP.
 *
 *  Copyright (c) 2014 Juan Jose Salazar Garcia jjslzgc@gmail.com
 *
 *  Qt-Net-SNMP is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Qt-Net-SNMP is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Qt-Net-SNMP.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

/**
* @file qsnmpmanager.cpp
* @brief Definitions for Atributes and Methods of QSNMPManager class
* @author Juan Jose Salazar Garcia, jjslzgc@gmail.com
*/

#include "qsnmpmanager.h"

QtNetSNMP::QSNMPManager::QSNMPManager(unsigned short port, unsigned short retries, long timeout) : _port(port), _retries(retries), _timeout(timeout)
{

}

QtNetSNMP::QSNMPManager *QtNetSNMP::QSNMPManager::instance()
{
    static QSNMPManager instance;

    return &instance;
}
