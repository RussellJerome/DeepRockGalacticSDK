#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Screen_BaseLoadLevel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Screen_BaseLoadLevel.Screen_BaseLoadLevel_C
// 0x0008 (0x0238 - 0x0230)
class UScreen_BaseLoadLevel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Screen_BaseLoadLevel.Screen_BaseLoadLevel_C");
		return ptr;
	}


	void StartLoadSeq();
	void StopLoader();
	void ExecuteUbergraph_Screen_BaseLoadLevel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
