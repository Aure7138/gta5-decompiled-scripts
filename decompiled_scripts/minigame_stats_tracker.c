#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0xBD7D7877C82BE42F("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x5C716BBF766E1C70(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0xB9B61C4A0E0C6D75(uLocal_46, "SET_MISSION_TITLE", ScriptParam_0.f_0, ScriptParam_0.f_1, 0, 0, 0);
				unk_0x7F28ACE4A214000D(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_5.f_2))
				{
					unk_0xFCFC4ADF446E9DE6(uLocal_46, "SET_TOTAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x7F28ACE4A214000D(uLocal_46, "SET_MEDAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_46, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(ScriptParam_0.f_9[iVar0 /*7*/]);
					unk_0x22DD5585E00B80C3(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x22DD5585E00B80C3(2);
						unk_0x22DD5585E00B80C3(0);
						unk_0x22DD5585E00B80C3(0);
						unk_0x0ECBA72FAFCEBA59("STRING");
						unk_0x1635DC214B2BB352(unk_0xF34EE736CF047844((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0xC30401186AC91B01();
						if (!unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x0ECBA72FAFCEBA59(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							unk_0xB4179F7E88F4C4BF(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							unk_0xC30401186AC91B01();
						}
					}
					else
					{
						unk_0x22DD5585E00B80C3(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x954263F3D07BEFC2(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x0ECBA72FAFCEBA59("NUMBER");
							unk_0xEF512794542297CA(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							unk_0xC30401186AC91B01();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x954263F3D07BEFC2(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x0ECBA72FAFCEBA59("NUMBER");
							unk_0xEF512794542297CA(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							unk_0xC30401186AC91B01();
						}
						if (!unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xE2B30EB9B14EEAB2();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_5.f_2))
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_46, "SET_TOTAL");
					unk_0x22DD5585E00B80C3(ScriptParam_0.f_5);
					if (!unk_0xE0C4A595CD61B7F2(ScriptParam_0.f_5.f_3))
					{
						func_16(ScriptParam_0.f_5.f_3);
					}
					else
					{
						unk_0x954263F3D07BEFC2(ScriptParam_0.f_5.f_1);
					}
					func_16(ScriptParam_0.f_5.f_2);
					unk_0xE2B30EB9B14EEAB2();
				}
				unk_0x76F4FB5EFF5BDED5(uLocal_46, "DRAW_MENU_LIST");
				unk_0xE2B30EB9B14EEAB2();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_104551.f_19067, 4096))
				{
					func_6(&(Global_104551.f_19067), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || unk_0xEC0ECEF2AF3FDA8D()) || Global_25377)
				{
					func_17();
				}
				else
				{
					func_1(1);
					unk_0xC1C40A3B8772D9BA(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xA9CC0DE677D82334(10))
					{
						unk_0xE05212008FE9A018(10);
					}
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_17();
}

void func_1(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (Global_14615)
	{
		func_14(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_13())
	{
		Global_14453.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_16(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_17()
{
	unk_0xEBE532BFFE618875(&uLocal_46);
	Global_25377 = 0;
	func_1(0);
	unk_0x810C5D6462DD69E6();
}

