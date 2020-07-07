#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_E3trailer_AsteroidField_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C
// 0x0040 (0x0370 - 0x0330)
class ABP_E3trailer_AsteroidField_C : public AActor
{
public:
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Radius;                                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         Meshes_to_spawn;                                          // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UInstancedStaticMeshComponent*>       Instanced_meshes;                                         // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Number_of_meshes;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Random_seed;                                              // 0x0364(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Scale;                                                    // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
