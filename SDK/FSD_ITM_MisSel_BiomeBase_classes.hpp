#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_BiomeBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C
// 0x0000 (0x0230 - 0x0230)
class UITM_MisSel_BiomeBase_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C");
		return ptr;
	}


	void GetBasePanel(class UCanvasPanel** Panel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
