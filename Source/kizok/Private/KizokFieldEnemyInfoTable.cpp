#include "KizokFieldEnemyInfoTable.h"

FKizokFieldEnemyInfoTable::FKizokFieldEnemyInfoTable() {
    this->FieldEnemyID = 0;
    this->PartyType = FIELD_ENEMY_PARTY_TYPE::NORMAL;
    this->PartyLevel = 0;
    this->MoveSpeed = 0;
    this->ChaseSpeed = 0;
    this->LookingTime = 0;
    this->SearchRange = 0;
    this->SearchAngle = 0;
    this->ChaseTime = 0;
    this->EscapeTime = 0;
    this->RespawnTime = 0;
    this->NonHitTime = 0;
    this->TargetPosX = 0.00f;
    this->TargetPosY = 0.00f;
    this->TargetPosZ = 0.00f;
    this->MoveShapeType = FIELD_ENEMY_MOVE_SHAPE_TYPE::CIRCLE;
    this->MoveRange = 0.00f;
    this->MoveType = FIELD_ENEMY_MOVE_TYPE::PATROL;
    this->SquareRangeX = 0.00f;
    this->SquareRangeY = 0.00f;
    this->SphereRange = 0.00f;
    this->SphereMoveType = FIELD_ENEMY_SPHERE_MOVE_TYPE::RIGHT;
    this->RoundTripRange = 0.00f;
    this->RandomMoveRange = 0.00f;
}

