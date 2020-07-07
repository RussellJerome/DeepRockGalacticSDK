#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_WormholeSpecial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C
// 0x0050 (0x0158 - 0x0108)
class UDE_WormholeSpecial_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerCharacter*                            Character;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FTransform                                  On_Start_Transform;                                       // 0x0120(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class ABP_WormholeLocation_Base_C*                 ActiveWormhole;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_WormholeSpecial.DE_WormholeSpecial_C");
		return ptr;
	}


	void Disable_Older_Active_Wormhole_Effects();
	void IsLastActiveWormholeEffect(bool* was_last_effect);
	void Set_Original_position();
	void ReceiveTick(float* DeltaSeconds);
	void OnStartEffect(class APlayerCharacter** Character);
	void OnStopEffect();
	void Spawn_Teleport_Effects();
	void Disable_Active_Location_Effects();
	void ExecuteUbergraph_DE_WormholeSpecial(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
