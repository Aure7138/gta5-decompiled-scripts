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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[5] = { 0, 0, 0, 0, 0 };
	var uLocal_66[5] = { 0, 0, 0, 0, 0 };
	var uLocal_72 = 5;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_30 = 1E+07f;
	Local_31 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_34 = -1;
	Local_49 = { 2136.133f, 4780.563f, 39.9702f };
	Local_54 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_57 = 55.4847f;
	if (unk_0xC11469DCA6FC3BB5(82))
	{
		func_170();
	}
	func_169(17);
	func_168();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (func_167() == 309)
		{
			bLocal_36 = true;
		}
		else
		{
			bLocal_36 = false;
		}
		if (func_154())
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				fLocal_30 = unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_31);
			}
			func_152(&iVar1);
			func_29(&iVar2);
			if (iLocal_46 > 3)
			{
				if (fLocal_30 < 600f)
				{
					if (func_26(0) == 0 && (unk_0x4F67E8ECA7D3F667() - iLocal_80) > 2000)
					{
						iLocal_80 = unk_0x4F67E8ECA7D3F667();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_45)
			{
				if (func_2(104))
				{
					func_1(104, 0, 0);
					Global_97353.f_18237.f_14 = 0;
				}
			}
			else
			{
				Global_97353.f_18237.f_14 = 0;
			}
			if (!bLocal_45)
			{
				if (func_2(105))
				{
					func_1(105, 0, 0);
					Global_97353.f_18237.f_13 = 0;
				}
			}
			else
			{
				Global_97353.f_18237.f_13 = 0;
			}
			iVar0 = 1000;
		}
		unk_0x4EDE34FBADD967A6(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCD82FA174080B3B1(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x8ABD939C2E5D00ED(1);
			unk_0xF2C3C9DA47AAA54A(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x8ABD939C2E5D00ED(0);
		}
	}
}

bool func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return unk_0xCD82FA174080B3B1(Global_24748[iVar0 /*23*/].f_19);
}

void func_3()
{
	func_4(&(Global_91351.f_2167), &Global_91351, 0, 1, 1, 0);
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x096275889B8E0EE0();
	}
	if (unk_0xD42BD6EB2E0F1677(iParam2))
	{
		uParam1->f_5 = func_25(iParam2);
	}
	if (func_18(iParam2, &iVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD42BD6EB2E0F1677(iVar0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iVar0))
		{
			if (unk_0x0045A54EC7A22455(iVar0, joaat("skylift")) && unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iVar0, 0))
			{
				func_5(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xB86D29B10F627379(iParam2, 0))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_6(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_89962.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	func_14(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_10(iParam1, 145, 0);
	uParam0->f_11 = func_9(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_8(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xA86D5F069399F44D(iParam1, 1) };
		uParam0->f_6 = unk_0xC230DD956E2F5507(iParam1);
		uParam0->f_3 = { unk_0xC3BBBD114C2B597B(iParam1) };
		if (unk_0xD3151E53134595E5(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_68043 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[iVar0]))
		{
			if (iParam0 == Global_67138.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 145;
	}
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87708[iVar0])
				{
					if (iParam2 == 0 || unk_0xDA76A9F39210D365(iParam0) == func_11(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_13(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_12(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97353.f_7341.f_99.f_58[128] && !Global_97353.f_7341.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97353.f_7341.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_97353.f_7341.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

void func_14(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(iParam0, 0))
	{
		func_17(uParam1);
		uParam1->f_42 = unk_0xDA76A9F39210D365(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF4122ED5ACE92A17(iParam0), 16);
		*uParam1 = unk_0x925BC0BB4ADD9133(iParam0);
		unk_0x5AD07C3CF934E67B(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xF39FAB2FF8EABE36(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5D1A7577B21657BF(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0xE109F71384B0E749(iParam0);
		uParam1->f_43 = unk_0xBC48F968D6EADC0D(iParam0);
		uParam1->f_45 = unk_0xBFBF929D2AB51389(iParam0);
		uParam1->f_46 = unk_0xC867FD144F2469D3(iParam0);
		unk_0xF9F04947622179FC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xC73BFF368F8ECC8E(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x4F929B2CCC8BB671(iParam0, 2))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 28);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 3))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 29);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 30);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x7B7BDDF3BC6C3D0E(iParam0, 0))
		{
			uParam1->f_44 = unk_0x9CD9457A4F02F466(iParam0);
		}
		if (unk_0x6BD83A1CACAF87AD(uParam1->f_42))
		{
			if (unk_0xAE0F16A04C1E6E04(iParam0))
			{
				switch (unk_0xB3DBFFF01F5CD60D(iParam0))
				{
					case 2:
					case 0:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0xD7C60D33FB5EE7FA(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 9);
		}
		if (unk_0x22335D30EB16E6C3(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 10);
		}
		if (unk_0xB3A5CF3449056D6B(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 13);
			unk_0xF33C54EDBFFBFC70(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xC6526C3B8D6D4E0C(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 12);
		}
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), func_15(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x5F655593F79A61BF(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 11);
		}
		if (unk_0xD9D1CDBF3464DCDF(iParam0, "IgnoredByQuickSave") && unk_0xDEF3F1B071ABB197(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 27);
		}
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_16(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB86D29B10F627379(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xAF9BACB8400BED0F(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xDDADBD56AE4C56D3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x6F122920B2E54FF4(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_17(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_18(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			if (iParam0 == unk_0x096275889B8E0EE0())
			{
				*uParam1 = unk_0x2F96E7720B0B19EA();
			}
			else
			{
				*uParam1 = unk_0xB3598EA616C3FFC3(iParam0, 1);
			}
			if (unk_0xD42BD6EB2E0F1677(*uParam1))
			{
				if (unk_0xB86D29B10F627379(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(*uParam1, 1), unk_0xA86D5F069399F44D(iParam0, 1), 1) < 100f)
					{
						if (unk_0x0045A54EC7A22455(*uParam1, joaat("taxi")))
						{
							if (unk_0xD214895E39AA3787(*uParam1, -1) != iParam0 && unk_0xD214895E39AA3787(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_19(*uParam1, func_21(), 1))
						{
							sVar0 = unk_0x8F77B33B6A34D8BA();
							if (!unk_0xD3852F22AB713A1F(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x52BE10F427339B39(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD9D1CDBF3464DCDF(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xDEF3F1B071ABB197(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x0045A54EC7A22455(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_20(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x4ED6CFDFE8D4131A(Global_97353.f_5486[iVar9], 0))
		{
			if (unk_0x31AF177977A69F9B(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_21()
{
	func_22();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_24(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_25(unk_0x096275889B8E0EE0());
			if (func_13(iVar0) && (!func_23(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_23(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_24(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0, Global_34913);
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_29(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar101;
	
	bVar0 = false;
	if (iLocal_52 != 9)
	{
		if (!Global_97353.f_18237.f_13)
		{
			if (Global_97353.f_18237.f_1 == 0 && Global_97353.f_18237.f_2 == 0)
			{
				if (!func_151(Global_97353.f_18237, 32))
				{
					func_148("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_146(&(Global_97353.f_18237), 32);
				}
			}
			func_1(105, 1, 0);
			Global_97353.f_18237.f_13 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(105, 0, 0);
		Global_97353.f_18237.f_13 = 0;
	}
	if (iLocal_52 != 1 && iLocal_52 != 8)
	{
		if (func_145() && !*iParam0)
		{
			func_144(0);
			iLocal_52 = 1;
		}
	}
	switch (iLocal_52)
	{
		case 0:
			iLocal_52 = 1;
			break;
		
		case 1:
			if (!func_145())
			{
				if (fLocal_30 < 50625f)
				{
					iLocal_52 = 2;
				}
				else if (bLocal_36)
				{
					iLocal_52 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xFA28FE3A6246FC30(joaat("dune"));
			iLocal_52 = 3;
			break;
		
		case 3:
			if (unk_0x1283B8B89DD5D1B6(joaat("dune")))
			{
				unk_0x894DDE7F2D919046(Local_54, 4f, 0, 0, 0, 0, 0);
				if (unk_0xD42BD6EB2E0F1677(iLocal_53))
				{
					unk_0xE20A909D8C4A70F8(&iLocal_53);
				}
				iLocal_53 = unk_0xF757863E1E2D8F12(func_143(), Local_54, fLocal_57, 1, 1);
				unk_0x34262200CCA8474C(iLocal_53, 0);
				unk_0x4AD96EF928BD4F9A(func_143());
				if (unk_0xD42BD6EB2E0F1677(iLocal_53))
				{
					if (unk_0xAF5E7E9A7620FFB5(iLocal_53, 1))
					{
						unk_0xBB6F89150BC9D16B(iLocal_53, 1, 1);
					}
					if (unk_0xAF5E7E9A7620FFB5(iLocal_53, 2))
					{
						unk_0xBB6F89150BC9D16B(iLocal_53, 2, 0);
					}
					if (unk_0xAF5E7E9A7620FFB5(iLocal_53, 3))
					{
						unk_0xBB6F89150BC9D16B(iLocal_53, 3, 0);
					}
					unk_0xB375807E9837A2E6(iLocal_53, 0, 0);
				}
				iLocal_52 = 4;
			}
			break;
		
		case 5:
			if (fLocal_30 >= 50625f && !*iParam0)
			{
				func_144(0);
				iLocal_52 = 1;
				return;
			}
			break;
		
		case 4:
			func_142();
			if (!bLocal_36)
			{
				if (fLocal_30 >= 50625f && !*iParam0)
				{
					func_144(0);
					iLocal_52 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_58)
				{
					if (unk_0x52BE10F427339B39(iLocal_27, 0))
					{
						iVar1 = unk_0xAB2034839A6B4CF2(iLocal_27);
						if (iVar1 == iLocal_53)
						{
							iLocal_58 = 1;
							unk_0x6C9B2BE03BBD5C98(&iLocal_53);
							iLocal_52 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x7D5B1F88E7504BBA(iLocal_53))
				{
					unk_0xF80258351D8421EB(unk_0x096275889B8E0EE0(), iLocal_53, -1);
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x7D5B1F88E7504BBA(iLocal_53))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_53, 1))
				{
					func_141();
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(iLocal_53) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					iVar2 = unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0());
					if (iVar2 == iLocal_53)
					{
						if (unk_0xB7A628320EFF8E47(Local_54, unk_0xA86D5F069399F44D(iLocal_27, 1)) < 100f)
						{
							unk_0x46ED607DDD40D7FE("Traffick_Ground");
							if (unk_0xD42BD6EB2E0F1677(iLocal_28) && !unk_0x7D5B1F88E7504BBA(iLocal_28))
							{
								if (unk_0xDA76A9F39210D365(iLocal_28) != joaat("dune") && unk_0xDA76A9F39210D365(iLocal_28) != joaat("cuban800"))
								{
									func_117(iLocal_28, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
								{
									unk_0xB832282F1AB0B1F6(iLocal_28);
								}
							}
							iLocal_52 = 6;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0xE97BD36574F8B0A6("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_115(&iLocal_34, 6, 9, 0, 0);
					iLocal_44 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
					}
					if (!*iParam0)
					{
						func_80("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					iLocal_29 = unk_0xB8BA7F44DF1575E1("Traffick_Ground", &Var4, 97, 17000);
					func_79(16);
					unk_0x0086D3067E1CFD1C("Traffick_Ground");
					unk_0xDC19C288082E586E(iLocal_53, 1, 0);
					unk_0x6C9B2BE03BBD5C98(&iLocal_53);
					if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						if (Global_35957 == 1)
						{
							func_70(unk_0x096275889B8E0EE0());
						}
					}
					iLocal_58 = 0;
					iLocal_52 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_44 = 0;
					func_144(0);
					iLocal_52 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x8ADB0730FFB27333(iLocal_29))
			{
				iLocal_52 = 9;
				if (func_151(Global_96007, 2))
				{
					iLocal_52 = 8;
				}
				else
				{
					func_69(&iLocal_34);
					func_52();
					iLocal_35 = 1;
					iVar101 = func_51();
					func_43(&iVar101, 0, 0, 3, 0, 0, 0);
					Global_97353.f_18237.f_12 = iVar101;
					func_1(105, 0, 0);
					Global_97353.f_18237.f_13 = 0;
				}
				*iParam0 = 0;
				func_41(&Global_96007, 2);
			}
			break;
		
		case 8:
			if (Global_89962 == 10)
			{
				if (Global_89996)
				{
					*iParam0 = 1;
					unk_0x46ED607DDD40D7FE("Traffick_Ground");
					iLocal_52 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_52 = 2;
				}
			}
			else if (Global_89962 == 13)
			{
				func_69(&iLocal_34);
				func_52();
				*iParam0 = 0;
				iLocal_52 = 2;
			}
			break;
		
		case 9:
			if (fLocal_30 >= 50625f && func_30(Global_97353.f_18237.f_12))
			{
				func_144(0);
				iLocal_52 = 1;
			}
			break;
		
		default:
			break;
	}
}

int func_30(int iParam0)
{
	return func_31(func_51(), iParam0);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_37(iParam0);
	iVar1 = func_37(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_33(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_34(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_35(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_36(int iParam0)
{
	return iParam0 & 15;
}

var func_37(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_38(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_38(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_33(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_34(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_37(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_36(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_35(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_41(var uParam0, int iParam1)
{
	func_42(uParam0, iParam1);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_37(*iParam0);
	iVar1 = func_36(*iParam0);
	iVar2 = func_35(*iParam0);
	iVar3 = func_34(*iParam0);
	iVar4 = func_33(*iParam0);
	iVar5 = func_32(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam4);
	func_46(uParam0, iParam5);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_36(*uParam0);
	iVar1 = func_37(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xB6101ABE62B5F080());
	func_49(&uVar0, unk_0x4E162231B823DBBF());
	func_48(&uVar0, unk_0xC82CF208C2B19199());
	func_47(&uVar0, unk_0xDF2FD796C54480A5());
	func_46(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_45(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

void func_52()
{
	func_68();
	func_61();
	func_57();
	func_56();
	func_55();
	func_54();
	Global_89999 = 0;
	Global_84542 = -1;
	unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 17);
	Global_89997 = 0;
	unk_0x66AB6B6C7E72F393(0);
	unk_0x6C9FF40FF1B69F8F(0);
	unk_0xDF3B5846DE5904AF(1);
	unk_0xC6F9721EB8C66431(1);
	unk_0x2552D675C0051FED(1);
	func_53(0);
}

void func_53(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_89962.f_20), 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 13);
	}
}

void func_54()
{
	Global_68485 = { 0f, 0f, 0f };
	Global_68488 = 0f;
	Global_89962.f_21 = 145;
}

void func_55()
{
	StringCopy(&Global_68477, "", 16);
	StringCopy(&Global_68481, "", 16);
}

void func_56()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_89962.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_57()
{
	Global_89962 = 13;
	Global_89962.f_1 = -1;
	Global_89962.f_2 = 0;
	Global_89962.f_30 = 0f;
	unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 25);
	Global_89996 = 0;
	func_60(0);
	func_59();
	func_58();
	Global_89962.f_18 = -1;
	Global_89962.f_19 = -1;
}

void func_58()
{
	unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 22);
	unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 8);
}

void func_59()
{
	if (Global_89962.f_16 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&(Global_89962.f_16));
		Global_89962.f_16 = 0;
	}
	if (Global_89962.f_17 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&(Global_89962.f_17));
		Global_89962.f_17 = 0;
	}
}

void func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_35462 = 1;
	}
	else
	{
		Global_35462 = 0;
	}
}

void func_61()
{
	func_62(&Global_93588);
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_67(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_66(&(uParam0->f_25[0 /*223*/][iVar1 /*74*/]));
		func_66(&(uParam0->f_25[1 /*223*/][iVar1 /*74*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_472[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_472[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_472[iVar1 /*65*/].f_59 = 0;
		uParam0->f_472[iVar1 /*65*/].f_60 = -99;
		uParam0->f_472[iVar1 /*65*/].f_61 = 2;
		uParam0->f_472[iVar1 /*65*/].f_62 = 0;
		uParam0->f_472[iVar1 /*65*/].f_63 = -99;
		uParam0->f_472[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1521[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1521[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1521[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1618[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_65(&(uParam0->f_2161));
	func_64(&(uParam0->f_2167));
	func_63(&(uParam0->f_2233));
}

void func_63(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_64(var uParam0)
{
	func_17(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_65(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_66(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_57[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_68 = 0;
}

void func_67(var uParam0)
{
	*uParam0 = -15;
}

void func_68()
{
	StringCopy(&Global_91343, "", 32);
	func_62(&Global_91351);
}

void func_69(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34875)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
		func_73(1, iVar1, 1);
		return;
	}
	iVar2 = func_72(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_71(iVar2);
}

void func_71(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x096275889B8E0EE0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	func_74(iParam0, iParam1, iParam2, 0, 0);
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_76(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_75();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35841[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (func_77(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
			{
				if (iParam1 == Global_35841[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_79(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
	{
		uVar0 = iParam0;
		unk_0x067FB80C077FC449(8, &uVar0, 1, 1);
	}
	else if (unk_0x588D1C657C1F9299() || unk_0x88CFAE250D3E0C71())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xADD49A5C2FA505B1(8, &cVar1);
	}
}

void func_80(char[4] cParam0, int iParam1)
{
	unk_0x7D1D4A3602B6AD4E(&(Global_89962.f_20), 17);
	func_81(cParam0, iParam1, 0);
}

void func_81(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_83(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		func_82();
		Global_84545 = 0;
	}
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	Global_93588 = Global_91351;
	Global_93588.f_1 = Global_91351.f_1;
	Global_93588.f_6 = Global_91351.f_6;
	Global_93588.f_7 = Global_91351.f_7;
	Global_93588.f_8 = Global_91351.f_8;
	Global_93588.f_2 = Global_91351.f_2;
	Global_93588.f_3 = Global_91351.f_3;
	Global_93588.f_4 = Global_91351.f_4;
	Global_93588.f_5 = Global_91351.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_93588.f_9[iVar1] = Global_91351.f_9[iVar1];
		Global_93588.f_13[iVar1] = Global_91351.f_13[iVar1];
		Global_93588.f_17[iVar1] = Global_91351.f_17[iVar1];
		Global_93588.f_21[iVar1] = Global_91351.f_21[iVar1];
		Global_93588.f_25[0 /*223*/][iVar1 /*74*/] = { Global_91351.f_25[0 /*223*/][iVar1 /*74*/] };
		Global_93588.f_25[1 /*223*/][iVar1 /*74*/] = { Global_91351.f_25[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_93588.f_472[iVar1 /*65*/][iVar0] = Global_91351.f_472[iVar1 /*65*/][iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_13[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_13[iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_26[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_93588.f_472[iVar1 /*65*/].f_59 = Global_91351.f_472[iVar1 /*65*/].f_59;
		Global_93588.f_472[iVar1 /*65*/].f_60 = Global_91351.f_472[iVar1 /*65*/].f_60;
		Global_93588.f_472[iVar1 /*65*/].f_61 = Global_91351.f_472[iVar1 /*65*/].f_61;
		Global_93588.f_472[iVar1 /*65*/].f_62 = Global_91351.f_472[iVar1 /*65*/].f_62;
		Global_93588.f_472[iVar1 /*65*/].f_63 = Global_91351.f_472[iVar1 /*65*/].f_63;
		Global_93588.f_472[iVar1 /*65*/].f_64 = Global_91351.f_472[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_93588.f_472[iVar1 /*65*/].f_39[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_39[iVar0];
			Global_93588.f_472[iVar1 /*65*/].f_49[iVar0] = Global_91351.f_472[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_93588.f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_91351.f_668[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_93588.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_91351.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_93588.f_1521[iVar1 /*32*/][iVar0] = Global_91351.f_1521[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_93588.f_1521[iVar1 /*32*/].f_5[iVar0] = Global_91351.f_1521[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_93588.f_1521[iVar1 /*32*/].f_16[iVar0] = Global_91351.f_1521[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_93588.f_1618[iVar1] = Global_91351.f_1618[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_93588.f_2115[iVar1 /*15*/][iVar0] = Global_91351.f_2115[iVar1 /*15*/][iVar0];
			Global_93588.f_2115[iVar1 /*15*/].f_5[iVar0] = Global_91351.f_2115[iVar1 /*15*/].f_5[iVar0];
			Global_93588.f_2115[iVar1 /*15*/].f_10[iVar0] = Global_91351.f_2115[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_93588.f_1622[iVar1 /*164*/][iVar0] = Global_91351.f_1622[iVar1 /*164*/][iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_4[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_4[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_8[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_8[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_12[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_12[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_16[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_16[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_20[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_20[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_24[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_24[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_28[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_28[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_32[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_32[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_36[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_36[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_40[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_40[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_44[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_44[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_48[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_48[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_52[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_52[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_56[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_56[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_60[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_60[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_64[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_64[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_68[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_68[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_72[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_72[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_76[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_76[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_80[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_80[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_84[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_84[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_88[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_88[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_92[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_92[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_96[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_96[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_100[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_100[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_104[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_104[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_108[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_108[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_112[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_112[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_116[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_116[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_120[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_120[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_124[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_124[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_128[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_128[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_132[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_132[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_136[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_136[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_140[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_140[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_144[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_144[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_148[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_148[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_152[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_152[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_156[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_156[iVar0];
			Global_93588.f_1622[iVar1 /*164*/].f_160[iVar0] = Global_91351.f_1622[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_93588.f_2161 = { Global_91351.f_2161 };
	Global_93588.f_2161.f_3 = Global_91351.f_2161.f_3;
	Global_93588.f_2167 = { Global_91351.f_2167 };
	Global_93588.f_2167.f_3 = { Global_91351.f_2167.f_3 };
	Global_93588.f_2167.f_6 = Global_91351.f_2167.f_6;
	Global_93588.f_2167.f_8 = Global_93588.f_2167.f_8;
	Global_93588.f_2167.f_7 = Global_91351.f_2167.f_7;
	Global_93588.f_2167.f_9 = Global_91351.f_2167.f_9;
	Global_93588.f_2167.f_11 = Global_91351.f_2167.f_11;
	Global_93588.f_2167.f_10 = Global_91351.f_2167.f_10;
	Global_93588.f_2167.f_12 = Global_91351.f_2167.f_12;
	Global_93588.f_2167.f_12.f_1 = { Global_91351.f_2167.f_12.f_1 };
	Global_93588.f_2167.f_12.f_5 = Global_91351.f_2167.f_12.f_5;
	Global_93588.f_2167.f_12.f_6 = Global_91351.f_2167.f_12.f_6;
	Global_93588.f_2167.f_12.f_7 = Global_91351.f_2167.f_12.f_7;
	Global_93588.f_2167.f_12.f_8 = Global_91351.f_2167.f_12.f_8;
	Global_93588.f_2167.f_12.f_9 = { Global_91351.f_2167.f_12.f_9 };
	Global_93588.f_2167.f_12.f_35 = { Global_91351.f_2167.f_12.f_35 };
	Global_93588.f_2167.f_12.f_38 = Global_91351.f_2167.f_12.f_38;
	Global_93588.f_2167.f_12.f_39 = Global_91351.f_2167.f_12.f_39;
	Global_93588.f_2167.f_12.f_40 = Global_91351.f_2167.f_12.f_40;
	Global_93588.f_2167.f_12.f_41 = Global_91351.f_2167.f_12.f_41;
	Global_93588.f_2167.f_12.f_53 = Global_91351.f_2167.f_12.f_53;
	Global_93588.f_2167.f_12.f_42 = Global_91351.f_2167.f_12.f_42;
	Global_93588.f_2167.f_12.f_43 = Global_91351.f_2167.f_12.f_43;
	Global_93588.f_2167.f_12.f_44 = Global_91351.f_2167.f_12.f_44;
	Global_93588.f_2167.f_12.f_45 = Global_91351.f_2167.f_12.f_45;
	Global_93588.f_2167.f_12.f_47 = Global_91351.f_2167.f_12.f_47;
	Global_93588.f_2167.f_12.f_48 = Global_91351.f_2167.f_12.f_48;
	Global_93588.f_2167.f_12.f_49 = Global_91351.f_2167.f_12.f_49;
	Global_93588.f_2167.f_12.f_50 = Global_91351.f_2167.f_12.f_50;
	Global_93588.f_2167.f_12.f_51 = Global_91351.f_2167.f_12.f_51;
	Global_93588.f_2167.f_12.f_52 = Global_91351.f_2167.f_12.f_52;
	Global_93588.f_2233 = Global_91351.f_2233;
	Global_93588.f_2233.f_1 = Global_91351.f_2233.f_1;
	Global_93588.f_2233.f_2 = Global_91351.f_2233.f_2;
	Global_93588.f_2233.f_3 = Global_91351.f_2233.f_3;
}

void func_83(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_21();
	uParam0->f_1 = func_51();
	unk_0x0AC679B2342F14F2(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		func_100(&(uParam0->f_2161), 0);
		func_99(unk_0x096275889B8E0EE0());
		func_93(unk_0x096275889B8E0EE0(), 0);
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_97353.f_1729.f_539.f_294[iVar1];
		if (iVar1 == func_92())
		{
			func_85(unk_0x096275889B8E0EE0(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_97353.f_1729.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_97353.f_1729.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x380F22FED8D528A4(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x380F22FED8D528A4(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x380F22FED8D528A4(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x380F22FED8D528A4(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x380F22FED8D528A4(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x380F22FED8D528A4(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_97353.f_23789.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_97353.f_1729.f_539.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_97353.f_1729.f_539.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_97353.f_1729.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_97353.f_1729.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_97353.f_1729.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_97353.f_1729[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_97353.f_1729[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x380F22FED8D528A4(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	unk_0x380F22FED8D528A4(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	unk_0x380F22FED8D528A4(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_4(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_84(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_84(var uParam0)
{
	*uParam0 = Global_86216;
	uParam0->f_1 = Global_86217;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_13(iVar0))
		{
			uParam1->f_59 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97353.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x03A753E2C8458335() && unk_0xDA76A9F39210D365(iParam0) == unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2035, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_86(740, Global_68104, 0);
			}
			uParam1->f_60 = func_86(741, Global_68104, 0);
			uParam1->f_61 = func_86(742, Global_68104, 0);
		}
		if (unk_0x03A753E2C8458335() && iParam0 == unk_0x096275889B8E0EE0())
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2035, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_86(740, Global_68104, 0);
			}
		}
	}
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_87(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_88();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

var func_88()
{
	return Global_1312737;
}

int func_89(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_87(iParam1)];
	if (unk_0x50A9632CFBD07D9D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x983DBD2F550D8434(iParam0, iParam1);
		*uParam3 = unk_0xACEB4625592804A3(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xAF77A1741517CE53(iParam0) && unk_0xC11A93384E5E56A5(iParam0) != -1)
				{
					*uParam2 = unk_0xC11A93384E5E56A5(iParam0);
					*uParam3 = unk_0x7B9956A10AD92751(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x7F42B7520C9EB853(iParam0, iParam1);
		*uParam3 = unk_0x064618D0F68EFEF2(iParam0, iParam1);
		*uParam4 = unk_0xDF097FCF0E14EBA3(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_92()
{
	func_22();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0x6CFF81397164A1D3(iParam0))
	{
		if (iParam0 == unk_0x096275889B8E0EE0())
		{
			func_94(iParam0, &(Global_97353.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97353.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xBFDA9E959B733A83(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x455A7BBC80CD94B6();
					if (Global_97353.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97353.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x859C11AF880C861E(unk_0x217E9DC48139933D(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xA4DDF5DF95E65EED(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xA4DDF5DF95E65EED(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xA4DDF5DF95E65EED(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_94(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_98(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x592FF86B1A51AC1E(iParam0, func_98(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x25A48127185991E7(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xF73FBE4845C43B5B(&(Var4.f_2), (20 + unk_0x26B1ACC30DD36A3E(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xAF24030046B402EE(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_96(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x351349DC39151635(iParam0, Var4.f_0, iVar2))
						{
							unk_0xF73FBE4845C43B5B(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_96(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x528FD069988D41D8();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x095531E1E3D0077D(iVar7, &Var9) && !func_95(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x32D31669D12B8EB0(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x25A48127185991E7(iParam0, Var4.f_0);
					if (unk_0xB1417B7F0770096C(iParam0, Var4.f_0, 0))
					{
						unk_0xF73FBE4845C43B5B(&(Var4.f_2), (20 + unk_0x26B1ACC30DD36A3E(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xF73FBE4845C43B5B(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xAF24030046B402EE(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x28DF4CB829FCE36D(iVar7))
					{
						if (unk_0xC287B86B29CEC587(iVar7, iVar1, &Var48))
						{
							if (unk_0x351349DC39151635(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xF73FBE4845C43B5B(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xB1417B7F0770096C(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_95(int iParam0)
{
	if (unk_0x03A753E2C8458335())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_97(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x28DF4CB829FCE36D(iVar1))
					{
						if (unk_0xC287B86B29CEC587(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_97(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x528FD069988D41D8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x095531E1E3D0077D(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0x6CFF81397164A1D3(iParam0))
	{
		Global_97353.f_1729.f_539.f_294[iVar0] = unk_0x40B07282BE153AB7(iParam0);
	}
}

void func_100(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	uParam0->f_3 = unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0());
	uParam0->f_5 = unk_0x4BE9C3CC3AA0A36C(unk_0x096275889B8E0EE0());
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		uParam0->f_4 = unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8E34C953364A76DD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_68493, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_68493, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_68493, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_68493, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xAAD6170AA33B13C0(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_104(&iVar0))
		{
			if (func_102(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_21();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_101(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_101(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF291396B517E25B2(Param0))
	{
		iVar0 = unk_0xAAD6170AA33B13C0(Param4, sParam3);
		if (!unk_0x017C1B3159F79F6C(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x5054D1A5218FA696(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_102(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_103(*uParam1, 0f, 0f, 0f);
}

bool func_103(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_104(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (func_114())
		{
			*uParam0 = func_110(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), 5, -1, 0, 1);
			if (func_109(*uParam0) && !func_105(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_105(int iParam0)
{
	return func_106(iParam0, 0, 1);
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_108() == 0)
		{
			return unk_0x4ED6CFDFE8D4131A(func_86(func_107(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_108()
{
	return Global_24444;
}

int func_109(int iParam0)
{
	return func_106(iParam0, 5, 1);
}

int func_110(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_113(iVar0))
		{
			if (!bParam5 || func_112(iVar0))
			{
				fVar1 = unk_0x0BE7F4E3CDBAFB28(Param0, func_111(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_112(int iParam0)
{
	return func_106(iParam0, 0, 0);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_114()
{
	return Global_90014.f_290 > 0;
}

int func_115(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_26(0))
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *iParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_27(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*iParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_116(iParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_117(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0) && unk_0xB86D29B10F627379(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[25]) && unk_0xB86D29B10F627379(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xCF871FAFC4721928(iParam0) || unk_0xDA76A9F39210D365(iParam0) == joaat("bus")) || unk_0xDA76A9F39210D365(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_140(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_14(iParam0, &Var0);
		if (func_103(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0xA86D5F069399F44D(iParam0, 1) };
			fParam4 = unk_0xC230DD956E2F5507(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xFD340785ADF8CFB7(unk_0x8F77B33B6A34D8BA()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = unk_0xFD340785ADF8CFB7(unk_0x8F77B33B6A34D8BA());
			}
		}
		func_134(iParam5, Var0, Param1, fParam4, func_9(iParam0));
		func_118(iParam5, iParam0, 0);
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_133(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x4ED6CFDFE8D4131A(Global_67138.f_555[0 /*21*/].f_9, 12) && !unk_0x4ED6CFDFE8D4131A(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != unk_0xDA76A9F39210D365(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (unk_0xD42BD6EB2E0F1677(iParam1))
	{
		if (unk_0xB86D29B10F627379(iParam1, 0))
		{
			if (!unk_0x138190F64DB4BBD1(iParam1))
			{
				unk_0xDC19C288082E586E(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97353.f_18371.f_4249 = func_51();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_132(iParam0);
					if ((unk_0xD42BD6EB2E0F1677(iVar0) && unk_0xB86D29B10F627379(iVar0, 0)) && iParam1 != iVar0)
					{
						func_119(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_120(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xD214895E39AA3787(iParam0, -1);
		if (!unk_0xD42BD6EB2E0F1677(iVar0))
		{
			iVar0 = unk_0x74583B19FEEAFDA7(iParam0, -1);
		}
		if (unk_0xD42BD6EB2E0F1677(iVar0) && !unk_0x6CFF81397164A1D3(iVar0))
		{
			if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97353.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97353.f_18371.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97353.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97353.f_18371.f_4796 = 1;
	func_14(iParam0, &(Global_97353.f_18371.f_4742));
}

int func_120(int iParam0)
{
	if ((((((((((!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0)) || func_19(iParam0, 0, 0)) || func_19(iParam0, 1, 0)) || func_19(iParam0, 2, 0)) || func_9(iParam0) != 145) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || !func_121(unk_0xDA76A9F39210D365(iParam0)))
	{
		if (func_130(iParam0))
		{
		}
		if (func_130(iParam0))
		{
		}
		if (func_19(iParam0, 0, 0))
		{
		}
		if (func_19(iParam0, 1, 0))
		{
		}
		if (func_19(iParam0, 2, 0))
		{
		}
		if (func_9(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_121(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_122(iParam0))
	{
		return 0;
	}
	if (((unk_0x799CFC7C5B743B15(iParam0) || unk_0x6BD83A1CACAF87AD(iParam0)) || unk_0xB9B56D169DBE14C0(iParam0)) || unk_0xFC08C8F8C1EDF174(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_122(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x354F62672DE7DB0A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("buffalo3") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("gauntlet2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_127())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x575B76101E4810BF())
		{
			if (unk_0x1B7485357D8CFE37(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x32D31669D12B8EB0(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_126() && !func_125()) && !func_124()) && !func_123()) && !func_127())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD1CCC2A2639D325F() || unk_0xB0FB6CFAA5A1C833()) || unk_0x88CFAE250D3E0C71())
		{
		}
		else if (!func_124())
		{
			return 0;
		}
	}
	return 1;
}

int func_123()
{
	return 0;
}

int func_124()
{
	return 1;
}

int func_125()
{
	return 1;
}

int func_126()
{
	if (unk_0x2763DC12BBE2BB6F(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	var uVar0;
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xDA76A9F39210D365(iParam0);
	sVar1 = unk_0xF4122ED5ACE92A17(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD3852F22AB713A1F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_122(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0) && unk_0xB86D29B10F627379(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]) && unk_0xB86D29B10F627379(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xDA76A9F39210D365(Global_87698[iVar0]) == unk_0xDA76A9F39210D365(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

int func_133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 19);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 19);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 20);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 22);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 22);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 22);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 14);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 28);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 27);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 27);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 7);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 27);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 24);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 11);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 10);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 11);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 9);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 9);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 2);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 30);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 2);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 22);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_127())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 2);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 1);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_127())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 13);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 2);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 1);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 0);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 21);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 30);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 30);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 23);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x4ED6CFDFE8D4131A(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97353.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_103(Global_97353.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97353.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97353.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97353.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(uParam0->f_9, 19))
	{
		if (!func_103(Global_97353.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97353.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97353.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(uParam0->f_9, 20))
	{
		if (!func_103(Global_97353.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97353.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97353.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_134(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_133(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_139(iParam0);
			func_138(Param1, &(Global_97353.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x4ED6CFDFE8D4131A(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_97353.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97353.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97353.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97353.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97353.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_135(iParam0, 1);
		}
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_137(iParam0, 0))
		{
			func_136(iParam0, 1, 0);
			func_136(iParam0, 2, 0);
			func_136(iParam0, 3, 0);
			func_136(iParam0, 4, 0);
			func_136(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_136(iParam0, 0, 0);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_18371[iParam0]), iParam1);
	}
}

bool func_137(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_97353.f_18371[iParam0], iParam1);
}

void func_138(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_139(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_133(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD42BD6EB2E0F1677(Global_67138.f_139[iParam0]))
		{
			unk_0xDC19C288082E586E(Global_67138.f_139[iParam0], 1, 1);
			unk_0x6C9B2BE03BBD5C98(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_135(iParam0, 0);
		}
	}
}

void func_140(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_139(iParam0);
	func_135(iParam0, 0);
}

void func_141()
{
	Global_17098.f_6 = 1;
}

void func_142()
{
	int iVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iLocal_28))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_31) < 2500f)
			{
				iLocal_28 = unk_0x2F96E7720B0B19EA();
				if (unk_0xD42BD6EB2E0F1677(iLocal_28))
				{
					iVar0 = unk_0xDA76A9F39210D365(iLocal_28);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_143()
{
	return joaat("dune");
}

void func_144(bool bParam0)
{
	unk_0x4AD96EF928BD4F9A(joaat("dune"));
	if (unk_0xD42BD6EB2E0F1677(iLocal_53))
	{
		if (bParam0)
		{
			unk_0xE20A909D8C4A70F8(&iLocal_53);
		}
		else
		{
			unk_0x6C9B2BE03BBD5C98(&iLocal_53);
		}
	}
}

int func_145()
{
	if (func_26(9))
	{
		if (unk_0x8E34C953364A76DD(joaat("trevor2")) == 1)
		{
			if (!iLocal_37[0])
			{
				iLocal_37[0] = 1;
			}
			return 0;
		}
		if (unk_0x8E34C953364A76DD(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_37[1])
			{
				iLocal_37[1] = 1;
			}
			return 0;
		}
		if (unk_0x8E34C953364A76DD(joaat("traffick_air")) == 1)
		{
			if (!iLocal_37[2])
			{
				iLocal_37[2] = 1;
			}
			return 0;
		}
		if (unk_0x8E34C953364A76DD(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_37[3])
			{
				iLocal_37[3] = 1;
			}
			return 0;
		}
		if (Global_89996)
		{
			return 0;
		}
		if (iLocal_34 != -1)
		{
			return 0;
		}
		if (func_167() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	func_147(uParam0, iParam1);
}

void func_147(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_148(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_149(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_149(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_150();
	}
}

void func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = false;
	if (iLocal_46 != 9)
	{
		if (!Global_97353.f_18237.f_14)
		{
			func_1(104, 1, 0);
			Global_97353.f_18237.f_14 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(104, 0, 0);
		Global_97353.f_18237.f_14 = 0;
	}
	if (iLocal_46 != 1 && iLocal_46 != 8)
	{
		if (func_145() && !*iParam0)
		{
			func_153(0);
			iLocal_46 = 1;
		}
	}
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			if (!func_145())
			{
				if (fLocal_30 < 50625f)
				{
					iLocal_46 = 2;
				}
				else if (bLocal_36)
				{
					iLocal_46 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xFA28FE3A6246FC30(joaat("cuban800"));
			iLocal_46 = 3;
			break;
		
		case 3:
			unk_0xFA28FE3A6246FC30(joaat("cuban800"));
			if (unk_0x1283B8B89DD5D1B6(joaat("cuban800")))
			{
				if (!unk_0xD42BD6EB2E0F1677(iLocal_47))
				{
					unk_0x894DDE7F2D919046(Local_49, 8f, 0, 0, 0, 0, 0);
					iLocal_47 = unk_0xF757863E1E2D8F12(joaat("cuban800"), Local_49, 25.29f, 1, 1);
					unk_0x4AD96EF928BD4F9A(joaat("cuban800"));
					unk_0xC10FAC19094E9309(iLocal_47, 2);
					func_146(&(Global_97353.f_18237), 128);
					iLocal_46 = 4;
				}
				else
				{
					iLocal_46 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xD42BD6EB2E0F1677(iLocal_47))
			{
				if (unk_0x7D5B1F88E7504BBA(iLocal_47) || unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
				{
					iLocal_46 = 9;
					return;
				}
			}
			if (func_26(9))
			{
				if (unk_0x8E34C953364A76DD(joaat("traffick_ground")) == 1)
				{
					if (!unk_0x7D5B1F88E7504BBA(iLocal_47))
					{
						unk_0x96F78A6A075D55D9(iLocal_47, 2);
						return;
					}
				}
			}
			else if (unk_0x8E34C953364A76DD(joaat("traffick_ground")) == 0)
			{
				if (!unk_0x7D5B1F88E7504BBA(iLocal_47))
				{
					unk_0x96F78A6A075D55D9(iLocal_47, 1);
				}
			}
			if (!bLocal_36)
			{
				if (fLocal_30 >= 50625f && !*iParam0)
				{
					func_153(0);
					iLocal_46 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_48)
				{
					if (unk_0x52BE10F427339B39(iLocal_27, 0))
					{
						iVar1 = unk_0xAB2034839A6B4CF2(iLocal_27);
						if (iVar1 == iLocal_47)
						{
							iLocal_48 = 1;
							unk_0x6C9B2BE03BBD5C98(&iLocal_47);
							iLocal_46 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				unk_0xF80258351D8421EB(iLocal_27, iLocal_47, -1);
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x7D5B1F88E7504BBA(iLocal_47))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_47, 1))
				{
					func_141();
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					iVar2 = unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0());
					if (iVar2 == iLocal_47)
					{
						unk_0x46ED607DDD40D7FE("Traffick_Air");
						if (unk_0xD42BD6EB2E0F1677(iLocal_28) && !unk_0x7D5B1F88E7504BBA(iLocal_28))
						{
							if (unk_0xDA76A9F39210D365(iLocal_28) != joaat("dune") && unk_0xDA76A9F39210D365(iLocal_28) != joaat("cuban800"))
							{
								if (!unk_0xD3151E53134595E5(iLocal_28, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, 1, 0))
								{
									func_117(iLocal_28, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
							{
								unk_0xB832282F1AB0B1F6(iLocal_28);
							}
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (unk_0xE97BD36574F8B0A6("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_115(&iLocal_34, 6, 9, 0, 0);
					iLocal_44 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
					}
					if (!*iParam0)
					{
						func_80(unk_0x8F77B33B6A34D8BA(), 0);
					}
					iLocal_29 = unk_0xE81651AD79516E48("Traffick_Air", 17000);
					func_79(15);
					unk_0x0086D3067E1CFD1C("Traffick_Air");
					unk_0x6C9B2BE03BBD5C98(&iLocal_47);
					if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						if (Global_35957 == 1)
						{
							func_70(unk_0x096275889B8E0EE0());
						}
					}
					iLocal_48 = 0;
					iLocal_46 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_44 = 0;
					func_153(0);
					iLocal_46 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x8ADB0730FFB27333(iLocal_29))
			{
				if (func_151(Global_96007, 1))
				{
					iLocal_46 = 8;
				}
				else
				{
					func_69(&iLocal_34);
					func_52();
					uVar4 = func_51();
					func_43(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_97353.f_18237.f_11 = uVar4;
					func_1(104, 0, 0);
					Global_97353.f_18237.f_14 = 0;
					iLocal_46 = 9;
				}
				*iParam0 = 0;
				func_41(&Global_96007, 1);
			}
			break;
		
		case 8:
			if (Global_89962 == 10)
			{
				if (Global_89996)
				{
					*iParam0 = 1;
					if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
					{
						if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
						{
							unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					unk_0xFA28FE3A6246FC30(joaat("cuban800"));
					unk_0x46ED607DDD40D7FE("Traffick_Air");
					if (unk_0x1283B8B89DD5D1B6(joaat("cuban800")))
					{
						unk_0x894DDE7F2D919046(Local_49, 8f, 0, 0, 0, 0, 0);
						iLocal_47 = unk_0xF757863E1E2D8F12(joaat("cuban800"), Local_49, 25.29f, 1, 1);
						unk_0x4AD96EF928BD4F9A(joaat("cuban800"));
						iLocal_46 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_46 = 1;
				}
			}
			else if (Global_89962 == 13)
			{
				func_69(&iLocal_34);
				func_52();
				*iParam0 = 0;
				iLocal_46 = 1;
			}
			break;
		
		case 9:
			if (fLocal_30 >= 50625f && func_30(Global_97353.f_18237.f_11))
			{
				func_153(0);
				iLocal_46 = 1;
			}
			break;
		
		default:
			break;
	}
}

void func_153(bool bParam0)
{
	unk_0x4AD96EF928BD4F9A(joaat("cuban800"));
	if (unk_0xD42BD6EB2E0F1677(iLocal_47))
	{
		if (bParam0)
		{
			unk_0xE20A909D8C4A70F8(&iLocal_47);
		}
		else
		{
			unk_0x6C9B2BE03BBD5C98(&iLocal_47);
		}
	}
	if (func_151(Global_97353.f_18237, 128))
	{
		func_41(&(Global_97353.f_18237), 128);
	}
	iLocal_48 = 0;
}

int func_154()
{
	if (!func_165())
	{
		return 0;
	}
	if (!iLocal_44)
	{
		if (func_167() == 309)
		{
			return 1;
		}
		if (!func_27(9))
		{
			return 0;
		}
	}
	if (unk_0x8E34C953364A76DD(joaat("traffick_ground")) == 1 || unk_0x8E34C953364A76DD(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_27 = unk_0x096275889B8E0EE0();
	if (unk_0x7D5B1F88E7504BBA(iLocal_27))
	{
	}
	if (func_164())
	{
		return 1;
	}
	if (func_21() != 2)
	{
		return 0;
	}
	if (!func_158(6))
	{
		if (unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
		{
			bLocal_45 = true;
		}
		if (!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()))
		{
			bLocal_45 = true;
		}
		if (unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0))
		{
		}
		if (!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()))
		{
		}
		if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
		{
		}
		if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
		{
		}
		if (unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0()))
		{
		}
		if (unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
		{
		}
		if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
		{
		}
		if (unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1))
		{
		}
		if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
		{
		}
		if (Global_96400)
		{
		}
		if (Global_24446)
		{
		}
		if (func_157())
		{
		}
		if (func_156(8, -1))
		{
		}
		if (func_155())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_45 = false;
	}
	return 1;
}

int func_155()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

bool func_157()
{
	return Global_1315900;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				iVar0 = func_21();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_163()) || Global_96400) || Global_24446) || func_157()) || func_156(8, -1)) || func_114()) || func_162()) || func_155()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_163()) || Global_24446) || func_157()) || func_156(8, -1)) || func_155()) || func_114()) || func_162()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_163()) || Global_96400) || Global_24446) || func_157()) || func_156(8, -1)) || func_155()) || func_114()) || func_162()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_163()) || Global_96400) || Global_24446) || func_157()) || func_156(8, -1)) || func_114()) || func_162()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_163() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_156(8, -1)) || func_161()) || func_160()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_156(8, -1) || func_114()) || func_162()) || func_160()) || func_159())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_163()) || Global_24446) || func_157()) || func_156(8, -1)) || func_162()) || func_155()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_163()) || func_162()) || Global_96400) || Global_24446) || func_157()) || Global_35957) || func_156(8, -1)) || func_155()) || func_160()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_163()) || Global_96400) || Global_24446) || func_157()) || func_156(8, -1)) || func_155()) || func_160()) || func_114()) || func_162()) || func_161())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_159()
{
	return Global_90001.f_1;
}

int func_160()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_90014.f_291 > 0;
}

int func_163()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_164()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

int func_165()
{
	if (Global_97353.f_7341)
	{
		return (func_166(0, 15) && func_166(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

int func_167()
{
	if (unk_0xED20CB1F5297791D())
	{
		return Global_88209;
	}
	if (func_161())
	{
		return Global_88209;
	}
	return 318;
}

void func_168()
{
	if (!iLocal_79)
	{
		iLocal_78 = unk_0x55686F8055FF786B(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		iLocal_79 = 1;
	}
}

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_170()
{
	if (iLocal_78 != 0)
	{
		unk_0xE2E2B535953BF59E(iLocal_78, 0);
	}
	func_153(1);
	func_144(1);
	func_173();
	func_171();
	unk_0x5E8B6D17FF91CD59();
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/] && !Global_87300[iVar0 /*17*/].f_1)
		{
			if (Global_87300[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87300[iVar0 /*17*/].f_5 != 88 && Global_87300[iVar0 /*17*/].f_5 != 89) && Global_87300[iVar0 /*17*/].f_5 != 92)
				{
					func_172(Global_87300[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_172(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_173()
{
	int iVar0;
	
	iLocal_35 = 0;
	unk_0x0C2E596982E1AA32(joaat("weapon_combatpistol"));
	unk_0x0C2E596982E1AA32(joaat("weapon_smg"));
	unk_0x0C2E596982E1AA32(joaat("weapon_stickybomb"));
	unk_0x0C2E596982E1AA32(joaat("weapon_assaultshotgun"));
	unk_0x0C2E596982E1AA32(joaat("weapon_rpg"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x7663C03D63716314(uLocal_66[iVar0]))
		{
			unk_0xCB06E9C336EB7B9A(uLocal_66[iVar0]);
		}
		if (unk_0xD42BD6EB2E0F1677(uLocal_60[iVar0]))
		{
			unk_0x931914268722C263(&(uLocal_60[iVar0]));
		}
		iVar0++;
	}
}

