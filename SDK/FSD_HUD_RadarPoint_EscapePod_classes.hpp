#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_RadarPoint_EscapePod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C
// 0x0018 (0x0248 - 0x0230)
class UHUD_RadarPoint_EscapePod_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URadarPointComponent*                        Component;                                                // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TimeoutDelay;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_RadarPoint_EscapePod.HUD_RadarPoint_EscapePod_C");
		return ptr;
	}


	void InitPoint(class URadarPointComponent** RadarComponent, bool* success);
	void Get3dPosition(struct FVector* Pos);
	void UpdatePoint(float* alpha, float* verticalDist, bool* destroy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
