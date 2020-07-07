#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LasePointer_SecondaryMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C
// 0x0008 (0x03C0 - 0x03B8)
class ABP_LasePointer_SecondaryMarker_C : public ABP_LaserPointer_Marker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C");
		return ptr;
	}


	void UpdateMaterial();
	void ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
