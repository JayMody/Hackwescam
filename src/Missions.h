/*
 * Missions.h
 *
 *  Created on: Feb 7, 2019
 *      Author: slascos
 */

#ifndef SRC_MISSIONS_H_
#define SRC_MISSIONS_H_

void startDrone(int droneId);
void takeoffDrone(int droneId);
void landDrone(int droneId);
void stopDrone(int droneId);
void setFlightAltitude(int droneId, float heightMeters);

void mission1(int droneId);
void missionBox(int droneId);
void missionBoxInv(int droneId);
void missionTForward(int droneId);
void missionTTurn(int droneId);
void missionTurnBack(int droneId);

void missionTriange(int droneId);

void missionLookVertical(int droneId);
void missionLookHorizontal(int droneId);

void missionDance();
void missionDance2();

void missionTrackCenter1(int droneId);
void missionTrackCenter2(int droneId);

void missionOverwatchAlpha(int droneId);
void missionOverwatchBravo(int droneId);
void missionOverwatchCharlie(int droneId);

void alphaCorrection(int droneId, int x, int y);

void missionQual1_1(int droneId);
void missionQual1_2(int droneId, double x, double y);
void missionQual1_3(int droneId);

void wait(int droneId, int time);

void goldenAngel(int droneId);
void ahmed(int droneId);

#endif /* SRC_MISSIONS_H_ */
