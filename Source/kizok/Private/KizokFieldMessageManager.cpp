#include "KizokFieldMessageManager.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

void AKizokFieldMessageManager::StopMessageAI() {
}

void AKizokFieldMessageManager::RestartMessageAI() {
}

AKizokFieldMessageManager::AKizokFieldMessageManager() {
    this->BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BTComponent"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BBComponent"));
}

