#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_RadarPoint_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_RadarPoint_Player.HUD_RadarPoint_Player_C
// 0x0011 (0x0241 - 0x0230)
class UHUD_RadarPoint_Player_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APlayerCharacter*                            Player;                                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MarkedForDestruction;                                     // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_RadarPoint_Player.HUD_RadarPoint_Player_C");
		return ptr;
	}


	void InitPoint(class URadarPointComponent** RadarComponent, bool* success);
	void Get3dPosition(struct FVector* Pos);
	void UpdatePoint(float* alpha, float* verticalDist, bool* destroy);
	void Deactivate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
