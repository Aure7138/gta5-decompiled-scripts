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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<11> Local_89 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_100 = 0;
	struct<3> Local_101[32];
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_203 = 20;
	if (unk_0x63C468D583002D23() && func_65(unk_0xBE369BE1BC57A796(), 0, 1))
	{
		func_58(ScriptParam_0);
	}
	else
	{
		func_54();
	}
	while (true)
	{
		func_53();
		if (func_43() || func_39(9))
		{
			func_54();
		}
		if (unk_0x51FDEF56E23A7C33())
		{
			func_54();
		}
		switch (func_38(unk_0xCA1D9459B2CC7619()))
		{
			case 0:
				if (func_37() == 1)
				{
					func_36();
					Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 1;
				}
				else if (func_37() == 4)
				{
					Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_37() == 1)
				{
					func_34();
				}
				else if (func_37() == 4)
				{
					Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_32(&(Local_89.f_10));
				if (func_31(&(Local_89.f_10)))
				{
					Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 4;
			
			case 4:
				func_54();
				break;
		}
		if (unk_0x415DF132F15085E8())
		{
			switch (func_37())
			{
				case 0:
					if (func_30())
					{
						if (func_8())
						{
							Local_89.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_89.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_89.f_9 == 0)
	{
		if (!func_4(Local_89.f_2))
		{
			return 1;
		}
		else if (func_3(Local_89.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_206 == 1)
			{
				if (unk_0x48B8265059381CD0(Local_89.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x2315BB1606BC3DC3(unk_0xDE2767751C03729D(Local_89.f_3), unk_0xC7C67E717B20DA89(Local_89.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return unk_0xCA41A00932714525(unk_0xDE2767751C03729D(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return !func_5(unk_0xC7C67E717B20DA89(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_89.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iLocal_205 == 0)
	{
		iLocal_206 = 0;
		unk_0xEB79FECD9022AAF0(&(Local_89.f_1), 0);
	}
	if (func_4(Local_89.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_205)))
	{
		iVar1 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_205));
		uVar2 = unk_0xDF7CE83326F434E9(iVar1);
		if (func_65(iVar1, 1, 1))
		{
			if (unk_0x48B8265059381CD0(Local_89.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x4E84D2C9B54F79BA(uVar2, unk_0xC7C67E717B20DA89(Local_89.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x21E7933CCC7B3724(&(Local_89.f_1), 0);
					}
				}
				else
				{
					unk_0x21E7933CCC7B3724(&(Local_89.f_1), 0);
				}
			}
		}
	}
	iLocal_205++;
	if (iLocal_205 == unk_0xCF8627766CD5D4CE())
	{
		iLocal_205 = 0;
		iLocal_206 = 1;
	}
}

int func_8()
{
	if (unk_0x4B112D7DC17F0DDE(1, 1, 0, 0))
	{
		if (func_29(Local_89.f_4) && func_29(Local_89.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0x49C2DB27EDED0049(Local_89.f_3) && func_29(Local_89.f_5)) && unk_0x49C2DB27EDED0049(Local_89.f_2))
	{
		if (func_4(Local_89.f_2))
		{
			if (func_11(&(Local_89.f_3), Local_89.f_2, 22, Local_89.f_5, -1, 1, 1, 1))
			{
				unk_0x38FF4F54BBF14419(unk_0xDE2767751C03729D(Local_89.f_3), 0);
				if (func_10())
				{
					unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_89.f_3), Global_1574722);
				}
				else
				{
					unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_89.f_3), Global_1574725);
				}
				unk_0x650BB0E111420EAF(unk_0xDE2767751C03729D(Local_89.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x0E29C61F26D96FDB(0, 10);
					if (iVar0 < 5)
					{
						unk_0xBA8CA9172F194131(unk_0xDE2767751C03729D(Local_89.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0xBA8CA9172F194131(unk_0xDE2767751C03729D(Local_89.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0xBA8CA9172F194131(unk_0xDE2767751C03729D(Local_89.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x0E29C61F26D96FDB(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x8B54B100C5719325(unk_0xDE2767751C03729D(Local_89.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x8B54B100C5719325(unk_0xDE2767751C03729D(Local_89.f_3), 2);
				}
				else
				{
					unk_0x8B54B100C5719325(unk_0xDE2767751C03729D(Local_89.f_3), 1);
				}
				iVar0 = unk_0x0E29C61F26D96FDB(0, 4);
				if (iVar0 == 0)
				{
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_89.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_89.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_89.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_89.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_89.f_3), 2, 1);
				}
				iVar0 = unk_0x0E29C61F26D96FDB(0, 4);
				if (iVar0 == 0)
				{
					unk_0x2937901439E611F5(unk_0xDE2767751C03729D(Local_89.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x2937901439E611F5(unk_0xDE2767751C03729D(Local_89.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x2937901439E611F5(unk_0xDE2767751C03729D(Local_89.f_3), 3);
				}
				unk_0xD4ECEB990D2F6EC6(unk_0xDE2767751C03729D(Local_89.f_3), 1);
				unk_0x5E36942B3AE4C67F(unk_0xDE2767751C03729D(Local_89.f_3), 1);
				unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_89.f_3), 29, 1);
				unk_0x290EF12D0174E093(unk_0xDE2767751C03729D(Local_89.f_3), 3);
				unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_89.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_153)));
				unk_0x4A34751849E57DD5(unk_0xC7C67E717B20DA89(Local_89.f_2), 1);
				unk_0x3C87A0A1456D6253(unk_0xC7C67E717B20DA89(Local_89.f_2), 1);
				func_36();
				unk_0x00E85C3B3BD34B10(unk_0xDE2767751C03729D(Local_89.f_3), uLocal_199);
				unk_0x924CDE68BA2ED3BA(Local_89.f_5);
			}
		}
	}
	if (!unk_0x49C2DB27EDED0049(Local_89.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x49C2DB27EDED0049(Local_89.f_2))
	{
		if (func_29(Local_89.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_89.f_2), Local_89.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0))
				{
					unk_0x524A422B74847594(unk_0xC7C67E717B20DA89(Local_89.f_2), 1, 1, 0);
					unk_0x3F1D5D367E15601E(unk_0xC7C67E717B20DA89(Local_89.f_2), 1);
					unk_0xBE993A95A7771E1E(unk_0xC7C67E717B20DA89(Local_89.f_2), 1);
					unk_0xE4190D6FE693F9EC(unk_0xC7C67E717B20DA89(Local_89.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x924CDE68BA2ED3BA(Local_89.f_4);
				}
			}
		}
	}
	if (!unk_0x49C2DB27EDED0049(Local_89.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	var uVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x692A2891A2BA7352(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam10);
		if (unk_0x04DB71A22837F85C(uVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(uVar0, iParam9);
		unk_0xBF95E912FF7B9A12(uVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(uVar0);
			unk_0x800D9F6E9FDC9680(uVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

bool func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0xDA47289BC25292A5(&(Local_89.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x25F8DA4A9E82297D(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0x369F7C4FB0B633FC(*uParam0) == joaat("City"))
			{
				if (unk_0x3DC4639D5F23DEA2(-1367.557f, -3220.598f, 12.9448f, Local_89.f_6, 1) >= 600f && unk_0x3DC4639D5F23DEA2(750f, -3200f, 6f, Local_89.f_6, 1) >= 700f)
				{
					if (unk_0x3DC4639D5F23DEA2(func_28(unk_0xBE369BE1BC57A796()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_204 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_89.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_203 += 4;
		if (iLocal_203 >= 80)
		{
			iLocal_203 = 20;
			iLocal_204++;
		}
	}
	return bVar0;
}

int func_15(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_16(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_65(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_28(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_65(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312735;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_65(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_28(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_27(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_26(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_23(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_25(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_24();
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(uParam0, &Var0, 13);
	return Var0;
}

int func_27(int iParam0, var uParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_26(iParam0) };
		Global_2482066 = { func_26(uParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
}

bool func_30()
{
	if (!unk_0x48B8265059381CD0(uLocal_198, 1))
	{
		if (unk_0x50FED0D38D06E0E6(func_28(unk_0xBE369BE1BC57A796()), iLocal_202, &(Local_89.f_6), 4, 1077936128, 0))
		{
			unk_0xEB79FECD9022AAF0(&iLocal_198, 1);
		}
		else
		{
			iLocal_202++;
		}
	}
	return unk_0x48B8265059381CD0(iLocal_198, 1);
}

int func_31(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x415DF132F15085E8())
		{
			func_33(uParam0, 0, 0);
		}
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

void func_34()
{
	switch (Local_101[unk_0xCA1D9459B2CC7619() /*3*/].f_2)
	{
		case 0:
			func_36();
			func_35();
			if (Local_89.f_9 > 0)
			{
				Local_101[unk_0xCA1D9459B2CC7619() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_54();
			break;
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x48B8265059381CD0(Local_101[unk_0xCA1D9459B2CC7619() /*3*/].f_1, 0))
	{
		if (func_4(Local_89.f_2) && !func_3(Local_89.f_3))
		{
			iVar0 = unk_0xB5DF060B138CD2EA(unk_0xC7C67E717B20DA89(Local_89.f_2));
			fVar1 = unk_0x13B7ACE69D27E3E4(unk_0xC7C67E717B20DA89(Local_89.f_2));
			if (iVar0 < 200)
			{
				func_36();
				unk_0x00E85C3B3BD34B10(unk_0xDE2767751C03729D(Local_89.f_3), uLocal_201);
				unk_0xEB79FECD9022AAF0(&(Local_101[unk_0xCA1D9459B2CC7619() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x879A5482D4D7A218(unk_0xC7C67E717B20DA89(Local_89.f_2)) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_89.f_2), 3, 10000)) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_89.f_2), 1, 10000)) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_89.f_2), 0, 10000)) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_89.f_2), 2, 10000))
				{
					func_36();
					unk_0x00E85C3B3BD34B10(unk_0xDE2767751C03729D(Local_89.f_3), uLocal_200);
					unk_0xEB79FECD9022AAF0(&(Local_101[unk_0xCA1D9459B2CC7619() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_36()
{
	if (!unk_0x48B8265059381CD0(iLocal_198, 0))
	{
		if (func_4(Local_89.f_2))
		{
			unk_0x86DD54980FE55567(&uLocal_199);
			unk_0x83315F81FAC58A20(0, unk_0xC7C67E717B20DA89(Local_89.f_2), Local_89.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0x9178B6CFE95D27C6(0, unk_0xC7C67E717B20DA89(Local_89.f_2), 30f, 786468);
			unk_0x007AE2AA9E15FA7B(uLocal_199);
			unk_0x86DD54980FE55567(&uLocal_200);
			unk_0x83150B7E65C16AFE(0, 0, 1);
			unk_0x007AE2AA9E15FA7B(uLocal_200);
			unk_0x86DD54980FE55567(&uLocal_201);
			unk_0x83315F81FAC58A20(0, unk_0xC7C67E717B20DA89(Local_89.f_2), Local_89.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x83150B7E65C16AFE(0, 0, 1);
			unk_0x007AE2AA9E15FA7B(uLocal_201);
			unk_0xEB79FECD9022AAF0(&iLocal_198, 0);
		}
	}
}

int func_37()
{
	return Local_89.f_0;
}

int func_38(int iParam0)
{
	return Local_101[iParam0 /*3*/];
}

bool func_39(int iParam0)
{
	return !func_40(iParam0);
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5567)
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5568)
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5569)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5570)
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_65(unk_0x0C36F33B3F746611(iVar0), 0, 1))
		{
			if (unk_0x48B8265059381CD0(Global_2421664[iVar0 /*358*/].f_211, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_43()
{
	bool bVar0;
	var uVar1;
	
	func_50(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_49())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47(157))
	{
		if (!func_46())
		{
			return 1;
		}
	}
	if (func_47(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_44() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_44()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	switch (func_45())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_45()
{
	return Global_25190;
}

bool func_46()
{
	return Global_2443134.f_577;
}

int func_47(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_2452525;
}

bool func_49()
{
	return Global_2443134.f_572;
}

void func_50(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_51(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_65(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(uVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(uVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_52(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_52(var uParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(uParam0))
		{
			if (unk_0xFB2400809D8DC8C7(uParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(uParam0)))
				{
					unk_0xF0F77C99098F999B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(uParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_54()
{
	func_57();
	if (func_37() == 4 && Local_89.f_4 != 0)
	{
		unk_0xD90CB3CF9A40791C(Local_89.f_4, 0);
	}
	if (func_4(Local_89.f_2))
	{
		unk_0x6741124666983482(unk_0xC7C67E717B20DA89(Local_89.f_2), 0f);
	}
	unk_0xB8CAC5F3774894A1("JOYRIDER_RADIO_SCENE");
	func_56(9, 0);
	func_55();
}

void func_55()
{
	unk_0x921053BAF754303D();
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
	}
}

void func_57()
{
	unk_0x08377FB2AE4C6899(&uLocal_199);
}

void func_58(struct<20> Param0)
{
	int iVar0;
	
	func_63(func_64(Param0.f_0), Param0);
	unk_0x06EC4FFE0DCCA716(1);
	unk_0x43FD798CD0523B1F(1);
	func_61(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_89, 12);
	unk_0x0C3BA36587E6FBEE(&Local_101, 97);
	if (!func_60())
	{
		func_54();
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		if (unk_0x415DF132F15085E8())
		{
			if (Global_2494199.f_4248 == 0)
			{
				iVar0 = unk_0x0E29C61F26D96FDB(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_89.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_89.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_89.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_89.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_89.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_89.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_89.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_89.f_4 = Global_2494199.f_4248;
				Global_2494199.f_4248 = 0;
			}
			unk_0xD90CB3CF9A40791C(Local_89.f_4, 1);
			Local_89.f_5 = func_59(1);
		}
		func_56(9, 1);
		unk_0x4A5D4AD0FE6ACF73("JOYRIDER_RADIO_SCENE");
		Local_101[unk_0xCA1D9459B2CC7619() /*3*/] = 0;
	}
	else
	{
		func_54();
	}
}

int func_59(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0E29C61F26D96FDB(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
		{
			return 1;
		}
		if (func_49())
		{
			return 0;
		}
		if (func_47(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
		if (!func_62())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_49())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_47(155))
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x9AD8CE0019487D7C())
			{
				if (!bParam2)
				{
					func_55();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x9AD8CE0019487D7C())
	{
		if (!bParam2)
		{
			func_55();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_62()
{
	return Global_1315210;
}

void func_63(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_55();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

