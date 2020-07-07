#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_KPI_Tab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_KPI_Tab.UI_KPI_Tab_C
// 0x0000 (0x0230 - 0x0230)
class UUI_KPI_Tab_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KPI_Tab.UI_KPI_Tab_C");
		return ptr;
	}


	void HandleMouseEvent(struct FPointerEvent* InMouseEvent, bool* InUp, bool* OutHandled);
	void HandleKeyEvent(struct FKeyEvent* InKeyEvent, bool* InUp, bool* OutHandled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
