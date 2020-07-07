#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ChatLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C
// 0x00CC (0x02FC - 0x0230)
class UHUD_ChatLine_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URichTextSizable*                            ChatRichText;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SenderIcon;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Duration;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOut;                                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFSDChatMessage                             Msg;                                                      // 0x0250(0x0060) (Edit, BlueprintVisible)
	struct FVector2D                                   PrevSize;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMessageHidden;                                          // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EChatMessageType                                   PreviewMsgType;                                           // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class FString                                      PreviewSender;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EChatSenderType                                    PreviewSenderType;                                        // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class FString                                      PreviewMsg;                                               // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                oldFontSize;                                              // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C");
		return ptr;
	}


	void RemoveTags(class FString* Source, class FString* Result);
	void EncloseText(class FString* Pre, struct FText* Text, class FString* Post, struct FText* Result);
	void StyledText(struct FText* style_Name, struct FText* Text, struct FText* Result);
	void UpdateUserIcon(EChatMessageType* MessageType, EChatSenderType* SenderType);
	void UpdateOpacity();
	void SetMessage(EChatMessageType* MsgType, class FString* SenderStr, EChatSenderType* SenderType, class FString* MsgStr);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void PreConstruct(bool* IsDesignTime);
	void ChangeFontSize(int* NewValue);
	void ExecuteUbergraph_HUD_ChatLine(int* EntryPoint);
	void OnMessageHidden__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
