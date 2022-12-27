#include <iostream>
#include "namespace_decleration.h"


void Unreal::Tick() {
	std::cout << "Unreal Tick is called every frame per second" << std::endl;
}

void Unity::Update() {
	std::cout << "Unity Update is called every frame per second" << std::endl;
}
