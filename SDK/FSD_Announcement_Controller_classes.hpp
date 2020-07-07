#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C
// 0x003C (0x026C - 0x0230)
class UAnnouncement_Controller_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ResourceFull;                                             // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ResourceFullLabel;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                RootPanel;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UObject*                                     GoldFrenzyComponent;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerCharacter*                            Character;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPlayerHealthComponent*                      HealthComponent;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              NextAnnouncementTime;                                     // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_Controller.Announcement_Controller_C");
		return ptr;
	}


	void CreateVanityAnnouncement(class UVanityItem** VanityItem, class UPlayerCharacterID** VanityOwner);
	void CreatePickaxeAnnouncement(class UPickaxePart** PickaxePart);
	void CreateSchematicAnnouncement(class USchematic** InSchematic);
	void CreateVPAnnouncement(class UVictoryPose** VictoryPose, class UPlayerCharacterID** VPOwner);
	void QueueWidget(class UUserWidget** InWidget);
	float GetStartDelay();
	void CreateSkinAnnouncement(class UItemSkin** Skin, class UItemID** SkinOwner);
	void CreateValueAnnouncement(float* Value, struct FText* Name, struct FLinearColor* Color, int* FractionalDigits, class UTexture2D** Icon, struct FLinearColor* Icon_Tint);
	void CreateTextAnnouncement(struct FText* Text, struct FLinearColor* Color, class UTexture2D** Icon, struct FLinearColor* Icon_Tint);
	void Construct();
	void OnHealed(float* amount);
	void OnResourceFull(class UCappedResource** Resource);
	void OnResourceIncreased(class UCappedResource** Resource, float* amount);
	void Do_Resource_Full(struct FText* Name);
	void OnFullHealthCannotHeal();
	void OnResourceFullStarted();
	void OnResourceFullFinished();
	void OnCollectedSkin(class UItemSkin** Skin, class UItemID** ItemID);
	void OnCollectedVictoryPose_Event_1(class UVictoryPose** pose, class UPlayerCharacterID** characterID);
	void OnCollectedSchematic_Event(class USchematic** Schematic);
	void OnCollectedPickaxePart_Event_1(class UPickaxePart** PickaxePart);
	void OnCollectedVanityItem_Event_1(class UVanityItem** Item, class UPlayerCharacterID** characterID);
	void ExecuteUbergraph_Announcement_Controller(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
