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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x2C897F101BA20806(34))
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_127();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x1162FE3C5A637040())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x2C15B7979450724C(1))
		{
			iVar7 = unk_0x8B6CEAB2AD1BD1CD(1, iVar2);
			switch (iVar7)
			{
				case 186:
					func_124();
					break;
				
				case 187:
					func_123();
					break;
				
				case 188:
					func_117(iVar2);
					break;
				
				case 189:
					func_116(iVar2);
					break;
				
				case 190:
					func_107(iVar2);
					break;
				
				case 208:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x2C15B7979450724C(0))
	{
		iVar0 = unk_0x8B6CEAB2AD1BD1CD(0, iVar2);
		iLocal_88 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0x6A4B863200ABAA44(0, iVar2, &uVar1, 1);
				if (unk_0x538DF9E5B1DF01EB(uVar1))
				{
					if (unk_0x9FF5D51C24AD2308(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_47010.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0xA34B85701D8A1FA8(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_47010.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0x6A4B863200ABAA44(0, iVar2, &uVar1, 1);
				if (unk_0x538DF9E5B1DF01EB(uVar1))
				{
					if (unk_0x9FF5D51C24AD2308(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_47010.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0xA34B85701D8A1FA8(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_47010.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_47010 = iVar3;
	Global_47010.f_12 = iVar4;
	Global_47010.f_24 = iVar5;
	Global_47010.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 39))
	{
		iVar39 = unk_0xA7C741B3A9D116DF(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < unk_0xDC327918AA9556E9())
		{
			if (unk_0x41B3B1D8F6ACF08B(iVar39) || unk_0x0D3A8460AB4B37A8(iVar39))
			{
				if (unk_0x0D3A8460AB4B37A8(iVar39))
				{
					func_53(iVar39);
				}
				else
				{
					unk_0x4DCD706369651C88(iVar39);
				}
				func_52(Var0.f_37, -1);
			}
			else if (func_45())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_44())
		{
			func_43(uParam22);
			return 0;
		}
		if (func_42())
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x765DD998E5AD03DC(&Param23))
		{
			func_43(uParam22);
			return 0;
		}
		if (Global_14337)
		{
			func_43(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_41())
		{
			if (!func_40(0))
			{
				if (bVar1)
				{
					func_43(uParam22);
					return 0;
				}
			}
		}
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_39(unk_0x1788E93557766241()))
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (unk_0x06771AF7795B3ECF(&Param6))
	{
		func_43(uParam22);
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(&Param0))
	{
		func_43(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_38(Var2);
	if (iVar18 != -1)
	{
		func_35(iVar18);
	}
	uVar19 = unk_0xA7C741B3A9D116DF(uParam22);
	iVar20 = unk_0x38EC36CB5B8EE24B(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2394818[iVar21 /*4*/].f_3 && unk_0x09560C7DE2A384BD() < Global_2394818[iVar21 /*4*/].f_2)
		{
			Global_2394818[iVar21 /*4*/].f_2 = unk_0x09560C7DE2A384BD() + 30000;
			iVar21 = 12;
			func_43(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_34(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_33(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_31(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_30(iVar34, Var22.f_1);
		iVar33 = func_29(&Var22);
		Var36 = { func_28(&Var22, 0) };
		Var52 = { func_27(&Var22) };
		iVar69 = 1;
		iVar68 = func_26(&Var22, 0);
		iVar73 = func_25(&Var22);
		bVar74 = func_20(&Var22);
		if (!bVar74)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar75 = false;
		if (func_18(unk_0x1788E93557766241()))
		{
			if (!unk_0x1DAD7CE53BEE7710())
			{
				bVar75 = true;
			}
			else
			{
				func_43(uParam22);
				if ((unk_0xD5560895105F1405() || unk_0x75C4BB2E54262038()) && !unk_0x1DAD7CE53BEE7710())
				{
					func_17();
				}
				else
				{
					func_15(0);
				}
				return 0;
			}
		}
		if (!bVar75)
		{
			if (func_13(unk_0x1788E93557766241()))
			{
				func_43(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!func_12())
		{
			func_43(uParam22);
			bVar76 = true;
			func_15(bVar76);
			return 0;
		}
		bVar77 = false;
		if (!bVar75)
		{
			if (func_7(Param23, &bVar77))
			{
				func_43(uParam22);
				func_15(bVar77);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar78 = Global_1336140;
	if (iVar78 >= 12)
	{
		iVar78 = (iVar78 - 1);
	}
	iVar79 = (iVar78 - 1);
	while (iVar79 >= 0)
	{
		Global_2392879[iVar78 /*96*/] = { Global_2392879[iVar79 /*96*/] };
		iVar78 = (iVar78 - 1);
		iVar79 = (iVar79 - 1);
	}
	Global_1336140++;
	if (Global_1336140 > 12)
	{
		Global_1336140 = 12;
	}
	iVar80 = 0;
	Global_2392879[iVar80 /*96*/] = 0;
	Global_2392879[iVar80 /*96*/].f_1 = 0;
	Global_2392879[iVar80 /*96*/].f_5 = 0;
	Global_2392879[iVar80 /*96*/].f_2 = iVar70;
	Global_2392879[iVar80 /*96*/].f_3 = 0;
	Global_2392879[iVar80 /*96*/].f_4 = iVar71;
	Global_2392879[iVar80 /*96*/].f_6 = { Param0 };
	Global_2392879[iVar80 /*96*/].f_12 = { Param6 };
	StringCopy(&(Global_2392879[iVar80 /*96*/].f_28), "", 64);
	Global_2392879[iVar80 /*96*/].f_46 = iVar34;
	Global_2392879[iVar80 /*96*/].f_47 = iVar32;
	Global_2392879[iVar80 /*96*/].f_48 = iVar33;
	Global_2392879[iVar80 /*96*/].f_88 = uParam22;
	Global_2392879[iVar80 /*96*/].f_54 = { Var36 };
	Global_2392879[iVar80 /*96*/].f_70 = { Var52 };
	Global_2392879[iVar80 /*96*/].f_49 = iVar68;
	Global_2392879[iVar80 /*96*/].f_50 = 0;
	Global_2392879[iVar80 /*96*/].f_50.f_1 = 0;
	Global_2392879[iVar80 /*96*/].f_50.f_2 = 0;
	Global_2392879[iVar80 /*96*/].f_53 = iVar69;
	Global_2392879[iVar80 /*96*/].f_87 = uParam36;
	Global_2392879[iVar80 /*96*/].f_89 = -1;
	Global_2392879[iVar80 /*96*/].f_90 = iVar72;
	Global_2392879[iVar80 /*96*/].f_91 = Global_2394870;
	Global_2392879[iVar80 /*96*/].f_92 = iVar73;
	Global_2392879[iVar80 /*96*/].f_95 = unk_0x765DD998E5AD03DC(&Param23);
	if (Global_2392879[iVar80 /*96*/].f_47 == 0)
	{
		if (Global_2392879[iVar80 /*96*/].f_48 == 1)
		{
			Global_2392879[iVar80 /*96*/].f_53 = 0;
		}
	}
	Global_2392879[iVar80 /*96*/].f_93 = func_6(Param23, iVar80);
	Global_2392879[iVar80 /*96*/].f_94 = 0;
	Global_2392879[iVar80 /*96*/].f_86 = iParam37;
	Global_2394870++;
	Global_2392879[iVar80 /*96*/].f_44 = func_5(Param23);
	if (Global_2392879[iVar80 /*96*/].f_44 != -1)
	{
		Global_2392879[iVar80 /*96*/].f_45 = unk_0x09560C7DE2A384BD() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!unk_0x9F979F481F18EB48())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = unk_0x7FDF61DC3D33F5DF(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x765DD998E5AD03DC(&uParam0))
	{
		return 0;
	}
	if (Global_2392879[iParam13 /*96*/].f_87 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0x9F979F481F18EB48())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1))
	{
		return 1;
	}
	Var0 = { func_8(unk_0x1788E93557766241()) };
	if (!unk_0x89B9FBB8830D6DF1(&Var0, &uParam0))
	{
		if (!unk_0x765DD998E5AD03DC(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x75C4BB2E54262038() || (unk_0x660675ADB09E441F() && iParam0 == 0))
	{
		if (unk_0xBABFA3519D8F7A45(1) == 0 || unk_0x4076712F1D2AF6DD(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBABFA3519D8F7A45(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x75C4BB2E54262038() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0xD5560895105F1405() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if ((unk_0x660675ADB09E441F() && unk_0xC6F9DC8B9E6D41AE() == 0) && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0x9F979F481F18EB48() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0xF6BAF9F0C2863FFE() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x75C4BB2E54262038() || (unk_0x660675ADB09E441F() && iParam0 == 0))
	{
		if (unk_0xBABFA3519D8F7A45(0) == 0 || unk_0x4076712F1D2AF6DD(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBABFA3519D8F7A45(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0xD5560895105F1405())
	{
		return 1;
	}
	return unk_0x018F7277C3350C31();
}

int func_13(int iParam0)
{
	if (!func_14(iParam0))
	{
		if (!unk_0xBABFA3519D8F7A45(0))
		{
			if (!unk_0xBABFA3519D8F7A45(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xD5560895105F1405())
		{
			return;
		}
	}
	iVar0 = unk_0x09560C7DE2A384BD();
	if (iVar0 < Global_2394867)
	{
		return;
	}
	if (unk_0x11A809BBE3889742())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2394867 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_17()
{
	int iVar0;
	
	if (!unk_0xD5560895105F1405() && !unk_0x75C4BB2E54262038())
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	iVar0 = unk_0x09560C7DE2A384BD();
	if (iVar0 < Global_2394867)
	{
		return;
	}
	if (unk_0x11A809BBE3889742())
	{
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2394867 = (iVar0 + 1800000);
}

int func_18(int iParam0)
{
	if (!func_14(iParam0))
	{
		if (!func_19())
		{
			return 1;
		}
	}
	return 0;
}

int func_19()
{
	if (unk_0xD31E1D2B17B1EF04() == 0)
	{
		return 0;
	}
	if (unk_0x75C4BB2E54262038())
	{
		if (unk_0x4076712F1D2AF6DD(1, 0))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	if (unk_0x660675ADB09E441F())
	{
		if (unk_0xBABFA3519D8F7A45(1))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		if (unk_0xEC80AF60BD7582EE(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x4076712F1D2AF6DD(0, 0))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return unk_0x889D01384B54BCE3(Global_2394872.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x889D01384B54BCE3(Global_2397629.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x889D01384B54BCE3(Global_794538.f_4[iVar1 /*86*/].f_76, 14);
		
		case 62:
			return unk_0x889D01384B54BCE3(Global_904178.f_1204[iVar1 /*86*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (unk_0x06771AF7795B3ECF(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x889D01384B54BCE3(Global_794538.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (unk_0x9BA82E09A986BA4B(&(Global_794538.f_4[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x889D01384B54BCE3(Global_794538.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x889D01384B54BCE3(Global_794538.f_4[iVar0 /*86*/].f_76, 13))
				{
					if (unk_0x9BA82E09A986BA4B(&(Global_794538.f_4[iVar0 /*86*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x889D01384B54BCE3(Global_904178.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (unk_0x9BA82E09A986BA4B(&(Global_904178.f_1204[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x889D01384B54BCE3(Global_904178.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x889D01384B54BCE3(Global_904178.f_1204[iVar0 /*86*/].f_76, 13))
				{
					if (unk_0x9BA82E09A986BA4B(&(Global_904178.f_1204[iVar0 /*86*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		if (unk_0x889D01384B54BCE3(Global_946224.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_946224.f_5[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_946224.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x889D01384B54BCE3(Global_946224.f_5[iVar0 /*86*/].f_76, 13))
			{
				if (unk_0x9BA82E09A986BA4B(&(Global_946224.f_5[iVar0 /*86*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_22(var uParam0)
{
	if (Global_2397629)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_2397629.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_23(int iParam0)
{
	return iParam0 == 9999;
}

int func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2394872.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x9BA82E09A986BA4B(&(Global_2394872.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0x889D01384B54BCE3(Global_2394872.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return unk_0x889D01384B54BCE3(Global_2394872.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x889D01384B54BCE3(Global_2397629.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x889D01384B54BCE3(Global_794538.f_4[iVar1 /*86*/].f_76, 17);
		
		case 62:
			return unk_0x889D01384B54BCE3(Global_904178.f_1204[iVar1 /*86*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_26(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (unk_0x889D01384B54BCE3(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397763.f_513[uParam0->f_9];
			}
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397629.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794538.f_4[iVar1 /*86*/].f_54;
		
		case 62:
			return Global_904178.f_1204[iVar1 /*86*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return Global_946224.f_5[iVar1 /*86*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_27(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_24(uParam0))
	{
		return Global_2394872.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397629.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794538.f_4[iVar16 /*86*/].f_38;
		
		case 62:
			return Global_904178.f_1204[iVar16 /*86*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return Global_946224.f_5[iVar16 /*86*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_28(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (unk_0x889D01384B54BCE3(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397763[uParam0->f_9 /*16*/];
			}
			return Global_2394872.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397629.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794538.f_4[iVar16 /*86*/].f_22;
		
		case 62:
			return Global_904178.f_1204[iVar16 /*86*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return Global_946224.f_5[iVar16 /*86*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_24(uParam0))
	{
		return Global_2394872.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397629.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794538.f_4[iVar1 /*86*/].f_68;
		
		case 62:
			return Global_904178.f_1204[iVar1 /*86*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1788E93557766241())
	{
		return Global_946224.f_5[iVar1 /*86*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	if (func_23(iParam1))
	{
		if (Global_2397629)
		{
			return Global_2397629.f_1.f_53;
		}
		return 147;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794538.f_4[iParam1 /*86*/].f_65;
		
		case 62:
			return Global_904178.f_1204[iParam1 /*86*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x1788E93557766241())
	{
		return Global_946224.f_5[iParam1 /*86*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 147;
	}
	return 147;
}

int func_31(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x889D01384B54BCE3(Global_794538.f_4[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_794538.f_4[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_794538.f_4[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794538.f_4[iVar0 /*86*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0x889D01384B54BCE3(Global_904178.f_1204[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_904178.f_1204[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_904178.f_1204[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0x889D01384B54BCE3(Global_946224.f_5[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_946224.f_5[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_946224.f_5[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x1788E93557766241();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 65;
		
		case 14:
			return 66;
		
		case 122:
			return 70;
		
		case 11:
			return 67;
		
		case 13:
			return 68;
		
		case 12:
			return 69;
		
		case 8:
			return 72;
		
		case 1:
			return 73;
		
		case 5:
			return 71;
		
		case 6:
			return 74;
		
		case 3:
			return 77;
		
		case 0:
			return 75;
		
		case 2:
			return 76;
		
		default:
	}
	return 0;
}

int func_33(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (unk_0x06771AF7795B3ECF(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0xF2EC0D50FCCB3CE1(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xC7B7096C20939188(sParam0, 0, 5), 8);
	if (!unk_0x9BA82E09A986BA4B(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xC7B7096C20939188(sParam0, 5, 12), 16);
	if (unk_0x9BA82E09A986BA4B(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x9BA82E09A986BA4B(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x9BA82E09A986BA4B(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x9BA82E09A986BA4B(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x9BA82E09A986BA4B(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x9BA82E09A986BA4B(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, unk_0xC7B7096C20939188(sParam0, 12, iVar0), 8);
	if (!unk_0xAC9D9784D85BD7BE(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1336140)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x09560C7DE2A384BD() > Global_2394818[iVar0 /*4*/].f_2 || Global_2394818[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xDC327918AA9556E9() > 0 && Global_2392879[iParam0 /*96*/].f_88 < unk_0xDC327918AA9556E9())
			{
				Global_2394818[iVar0 /*4*/].f_3 = unk_0x38EC36CB5B8EE24B(Global_2392879[iParam0 /*96*/].f_88);
				Global_2394818[iVar0 /*4*/].f_2 = unk_0x09560C7DE2A384BD() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392879[iParam0 /*96*/].f_89 != -1)
	{
		unk_0x465FBA277E9176E4(Global_2392879[iParam0 /*96*/].f_89);
	}
	if (!Global_2392879[iParam0 /*96*/].f_53)
	{
		if (Global_2392879[iParam0 /*96*/].f_49 != 0)
		{
			unk_0xB56076FE42B43420(Global_2392879[iParam0 /*96*/].f_49);
		}
	}
	func_43(Global_2392879[iParam0 /*96*/].f_88);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1336140)
	{
		Global_2392879[iVar1 /*96*/] = { Global_2392879[iVar2 /*96*/] };
		iVar1++;
		iVar2++;
	}
	func_37(iVar1);
	Global_1336140 = (Global_1336140 - 1);
	if (Global_1336113)
	{
		if (Global_1336111 > 0)
		{
			func_36();
		}
	}
}

void func_36()
{
	Global_1336113 = 0;
}

void func_37(int iParam0)
{
	Global_2392879[iParam0 /*96*/] = 0;
	Global_2392879[iParam0 /*96*/].f_1 = 0;
	Global_2392879[iParam0 /*96*/].f_5 = 0;
	StringCopy(&(Global_2392879[iParam0 /*96*/].f_12), "", 64);
	StringCopy(&(Global_2392879[iParam0 /*96*/].f_28), "", 64);
	Global_2392879[iParam0 /*96*/].f_44 = -1;
	Global_2392879[iParam0 /*96*/].f_45 = unk_0x09560C7DE2A384BD();
	Global_2392879[iParam0 /*96*/].f_46 = -1;
	Global_2392879[iParam0 /*96*/].f_47 = -1;
	Global_2392879[iParam0 /*96*/].f_48 = -1;
	Global_2392879[iParam0 /*96*/].f_49 = 0;
	Global_2392879[iParam0 /*96*/].f_50 = 0;
	Global_2392879[iParam0 /*96*/].f_50.f_1 = 0;
	Global_2392879[iParam0 /*96*/].f_50.f_2 = 0;
	Global_2392879[iParam0 /*96*/].f_53 = 0;
	StringCopy(&(Global_2392879[iParam0 /*96*/].f_54), "", 64);
	StringCopy(&(Global_2392879[iParam0 /*96*/].f_70), "", 64);
	Global_2392879[iParam0 /*96*/].f_86 = 0;
	Global_2392879[iParam0 /*96*/].f_87 = 0;
	Global_2392879[iParam0 /*96*/].f_88 = -1;
	Global_2392879[iParam0 /*96*/].f_89 = -1;
	Global_2392879[iParam0 /*96*/].f_90 = 0;
	Global_2392879[iParam0 /*96*/].f_91 = -1;
	Global_2392879[iParam0 /*96*/].f_92 = 0;
	Global_2392879[iParam0 /*96*/].f_93 = 0;
	Global_2392879[iParam0 /*96*/].f_94 = 0;
	Global_2392879[iParam0 /*96*/].f_95 = 0;
}

int func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336140)
	{
		if (unk_0x9BA82E09A986BA4B(&uParam0, &(Global_2392879[iVar0 /*96*/].f_12)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_124, 22);
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

int func_41()
{
	if (Global_97439.f_7341.f_328[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 2);
}

void func_43(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA7C741B3A9D116DF(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xDC327918AA9556E9())
	{
		return;
	}
	if (unk_0x900CEBD64ECBB584(iVar0))
	{
		return;
	}
}

bool func_44()
{
	return Global_1315849 == 10;
}

int func_45()
{
	if (!Global_68325)
	{
		return 1;
	}
	else if (func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	return func_47(120, -1);
}

int func_47(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2471573[iParam0 /*5*/][func_48(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312729;
}

bool func_50()
{
	return Global_1315879;
}

bool func_51()
{
	return Global_1315881;
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_49();
	}
	Global_1315869[iVar0] = uParam0;
}

void func_53(int iParam0)
{
	func_100();
	if (func_99(1))
	{
		if (!func_90())
		{
			if (!func_78(1))
			{
				if (unk_0x7A75BEF6DA1EDF3D())
				{
					func_77();
				}
				func_56(1, 0);
				unk_0x4DCD706369651C88(iParam0);
				func_55();
				func_54();
			}
		}
	}
}

void func_54()
{
	Global_1690155.f_7 = 1;
}

void func_55()
{
	Global_1690155.f_6 = 1;
}

void func_56(int iParam0, bool bParam1)
{
	if (func_99(iParam0))
	{
		Global_1690155.f_16[iParam0 /*44*/].f_5 = 1;
		func_58(iParam0, 0);
		func_57();
		if (bParam1)
		{
			Global_1690155 = 1;
		}
	}
}

void func_57()
{
	Global_1690155.f_2 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x7A75BEF6DA1EDF3D())
	{
		if (bParam1)
		{
			func_76();
			func_70(unk_0x1788E93557766241(), 0, 81920, 1);
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_83 = 8;
			func_69();
			func_68();
		}
		func_67(iParam0);
		func_66(iParam0);
		func_64();
		func_63();
		func_57();
	}
	Var0 = { func_62(iParam0) };
	func_61(iParam0);
	func_59(&Var0);
}

void func_59(char* sParam0)
{
	StringCopy(&(Global_2428577.f_729), sParam0, 24);
	if (func_60())
	{
		StringCopy(&(Global_965784.f_42), sParam0, 24);
	}
}

bool func_60()
{
	return unk_0x889D01384B54BCE3(Global_2429337.f_1.f_2807, 5);
}

void func_61(int iParam0)
{
	Global_1690155.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_62(int iParam0)
{
	return Global_1690155.f_16[iParam0 /*44*/].f_6;
}

void func_63()
{
	Global_2428577.f_4 = 100;
}

void func_64()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 5);
	func_65();
}

void func_65()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 8);
}

void func_66(var uParam0)
{
	Global_1690155.f_8 = uParam0;
}

void func_67(var uParam0)
{
	Global_1690155.f_9 = uParam0;
}

void func_68()
{
	Global_2435030.f_1 = 0;
}

void func_69()
{
	char* sVar0;
	
	StringCopy(&(Global_2428577.f_729), sVar0, 24);
}

void func_70(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	var uVar24;
	int iVar25;
	
	if (bParam1)
	{
		if (unk_0x6A132B76AB7C7138())
		{
			unk_0xD2238E59B5C4A250(0);
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		uVar0 = iParam2;
		unk_0xC92B5D880C803814(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		if (!func_74())
		{
			bVar23 = false;
			if (bParam1 == 1)
			{
				bVar23 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar23 = true;
			}
			if (bVar9 == 1)
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x38FA37FE3518BA38(iParam0) && unk_0x2AF80829930084FD(iParam0))
		{
			uVar24 = unk_0xFF34D923BFB5E9FB(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1DAD7CE53BEE7710())
				{
					unk_0x738AEBA425C3D093(1);
				}
				else
				{
					unk_0x423D1EBE54B18555(uVar24, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1DAD7CE53BEE7710() && !bVar18)
					{
						unk_0x738AEBA425C3D093(0);
					}
					Global_2414327[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_73(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(uVar24, true, 0);
					}
				}
				if (!unk_0x5A6F774C8E17AA21(uVar24))
				{
					if (!bVar20)
					{
						unk_0x3CC3106305C40A28(uVar24, false);
					}
					unk_0x940C6B8BF42B190B(uVar24, 1);
				}
				else if (!bVar20)
				{
					unk_0x3CC3106305C40A28(uVar24, false);
				}
				unk_0xA8BC819B54F5B824(uVar24, true);
				unk_0x68068FC275E8AC83(iParam0, 0);
				unk_0xEDD99DCB19EC7C49(uVar24);
				unk_0x551186C5C186D1DC(uVar24, 1);
				func_72();
				func_71();
				if (unk_0xA5B13BF6970E2A56())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xA84F80DD9F675CED())
				{
				}
				Global_2414327[iParam0 /*255*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_73(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(uVar24, !bVar14, 0);
					}
					if (!unk_0x5A6F774C8E17AA21(uVar24))
					{
						if (!bVar20)
						{
							unk_0x3CC3106305C40A28(uVar24, bVar15);
						}
						if (!bVar15)
						{
							unk_0x940C6B8BF42B190B(uVar24, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x68068FC275E8AC83(iParam0, 0);
				}
				else
				{
					unk_0x68068FC275E8AC83(iParam0, 1);
				}
				unk_0xA8BC819B54F5B824(uVar24, bVar16);
				if (bVar2)
				{
					if (!unk_0xF10879F2BBA41065(uVar24) && !unk_0x202EF5D8203705EF(uVar24, 0))
					{
						unk_0x9AB8F163FA160890(uVar24);
					}
				}
			}
			iVar25 = 0;
			if (bVar1)
			{
				iVar25 |= 2;
			}
			if (bVar2)
			{
				iVar25 |= 4;
			}
			if (bVar3)
			{
				iVar25 |= 8;
			}
			if (bVar4)
			{
				iVar25 |= 16;
			}
			if (bVar5)
			{
				iVar25 |= 32;
			}
			if (bVar6)
			{
				iVar25 |= 64;
			}
			if (bVar7)
			{
				iVar25 |= 128;
			}
			if (bVar8)
			{
				iVar25 |= 256;
			}
			if (bVar9)
			{
				iVar25 |= 512;
			}
			if (bVar10)
			{
				iVar25 |= 1024;
			}
			if (bVar11)
			{
				iVar25 |= 2048;
			}
			if (bVar12)
			{
				iVar25 |= 4096;
			}
			unk_0xC92B5D880C803814(iParam0, bParam1, iVar25);
		}
	}
}

void func_71()
{
	struct<2> Var0;
	
	Global_2422491.f_689 = 0;
	Global_2422491.f_690 = 0;
	Global_2422491.f_691 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404570.f_1419 = { Var0 };
}

void func_72()
{
	Global_2404570.f_580 = 0;
	Global_2404570.f_1460 = 0;
	Global_2404570.f_453 = 0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_204 = 0;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x221AC1EF116F6053(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	if (func_75() == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	return Global_1312466.f_18;
}

void func_76()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 7);
}

void func_77()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2428577.f_2), 15);
}

int func_78(int iParam0)
{
	if (iParam0 || func_89())
	{
		if (!func_88(0, 1))
		{
			return 1;
		}
		if (!func_80(1))
		{
			return 1;
		}
		if (!func_79())
		{
			return 1;
		}
		if (unk_0x2E6B8314347DDE48())
		{
			return 1;
		}
	}
	return 0;
}

bool func_79()
{
	return Global_1690155.f_4;
}

int func_80(bool bParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if ((func_83(func_84(-1), 0) >= 3 || func_47(123, -1)) && func_47(133, -1))
	{
		func_82();
		return 1;
	}
	else if (bParam0)
	{
		func_81();
	}
	return 0;
}

void func_81()
{
	Global_1690155.f_5 = 1;
}

void func_82()
{
	Global_1690155.f_4 = 1;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_84(int iParam0)
{
	return Global_1336491[func_48(iParam0)];
}

int func_85()
{
	if (func_87() && func_86(0))
	{
		return 1;
	}
	return 0;
}

var func_86(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_87()
{
	return func_86(func_49() + 1);
}

int func_88(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 2))
		{
			return 1;
		}
	}
	if (unk_0x620D8FF311E738AE())
	{
		if (!bParam1 || unk_0x54CE0989F263D8A3())
		{
			if (!unk_0x75C4BB2E54262038() && !unk_0x660675ADB09E441F())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xC6F9DC8B9E6D41AE())
		{
			return 0;
		}
	}
	if (unk_0x620D8FF311E738AE())
	{
		return 1;
	}
	return 0;
}

var func_89()
{
	return Global_1690155.f_2;
}

int func_90()
{
	if (((((func_98() || !func_96(-1)) || !func_94()) || !func_93()) || !func_92()) || func_91())
	{
		return 1;
	}
	return 0;
}

var func_91()
{
	return Global_2435568;
}

int func_92()
{
	if (unk_0x7058289E8DD601D6(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0xE963DF7A5B3AC715(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_95(iVar0) == 1)
		{
			iVar0 = 4;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_47(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_97(iParam0);
	uVar1 = unk_0x7058289E8DD601D6(uVar0);
	if (unk_0x889D01384B54BCE3(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_49();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_98()
{
	return Global_2428577.f_616;
}

bool func_99(int iParam0)
{
	return Global_1690155.f_16[iParam0 /*44*/].f_4;
}

void func_100()
{
	int iVar0;
	int iVar1;
	
	func_106();
	if (unk_0xC07D72E532B70985() && !func_103())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xD48E72C923B2B921(func_102(iVar0));
			if (iVar1 > 0)
			{
				Global_1690155.f_16[iVar0 /*44*/] = iVar1;
				func_101(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1690155.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (unk_0xA62FF9EB1AD3B86A(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1690155.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xA62FF9EB1AD3B86A(iParam1, "playlist", &Var1))
	{
		Global_1690155.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xCFE27311228BF1C0(iParam1, &Var1))
	{
		Global_1690155.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x230310C826A5B6A1(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1690155.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1690155.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1690155.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x230310C826A5B6A1(iParam1, "eventSubType", &uVar17))
		{
			Global_1690155.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1690155.f_1 = 1;
		}
		Global_1690155.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1690155.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_103()
{
	if (!func_104())
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_105())
	{
		return 0;
	}
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_105()
{
	return Global_2435628;
}

void func_106()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1690155 = { Var0 };
}

void func_107(int iParam0)
{
	var uVar0;
	
	if (Global_68325)
	{
		unk_0xC2E1777941B4536E(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0xC2E1777941B4536E(-1, "Hang_Up", &Global_14383, 1);
	}
	if (unk_0x6A4B863200ABAA44(1, iParam0, &uVar0, 21))
	{
		func_109();
	}
	Global_2451624.f_1 = 0;
	Global_2451624.f_33 = -1;
	Global_2451624.f_34 = -1;
	StringCopy(&(Global_2451624.f_4), "", 64);
	func_108(&(Global_2451624.f_20));
}

void func_108(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_109()
{
	Global_2451624.f_2 = 1;
	Global_2451624.f_38 = 1;
	if (unk_0x54CE0989F263D8A3())
	{
		if (unk_0xBAB3F4F44450BC7B())
		{
			while (unk_0x20DA36028A840E31())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xD39A4B661438BC72();
			Global_2451624 = 0;
			Global_2451624.f_2 = 0;
		}
		else if (func_115(Global_2451624.f_20))
		{
			if (unk_0x765DD998E5AD03DC(&(Global_2451624.f_20)))
			{
				if (!unk_0x7FDDBE39292F85FD(&(Global_2451624.f_20)))
				{
					func_114();
				}
			}
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}
	if (Global_2451624.f_37)
	{
		func_110(0);
	}
	Global_2451624.f_37 = 0;
	Global_2451624.f_3 = 0;
}

void func_110(int iParam0)
{
	if (Global_14552)
	{
		func_112(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_111())
	{
		Global_14394.f_1 = 3;
	}
}

int func_111()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_113(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	Global_2451624.f_1 = 0;
	Global_2451624 = 0;
	Global_2451624.f_2 = 0;
	Global_2451624.f_33 = -1;
	Global_2451624.f_34 = -1;
	StringCopy(&(Global_2451624.f_4), "", 64);
	StringCopy(&(Global_2451624.f_39[0 /*16*/]), "", 64);
	Global_2451624.f_38 = 0;
	Global_2451624.f_56 = 0;
	Global_2451624.f_57 = 0;
	Global_2451624.f_58 = -2;
	Global_2451624.f_3 = 0;
	func_108(&(Global_2451624.f_20));
}

bool func_115(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6812E31A0CF4755C(&uParam0, 13);
}

void func_116(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 15))
	{
		Global_2451624.f_33 = Var0.f_1;
		Global_2451624.f_34 = Var0.f_0;
	}
}

void func_117(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 21))
	{
		if (Global_2451624.f_3 == 0)
		{
			if (!func_118(&(Var0.f_8)))
			{
				unk_0x2E5BAE30295C2AA7(0, 2);
			}
			else
			{
				Global_2451624.f_3 = 1;
				MemCopy(&(Global_2451624.f_4), {Var0}, 16);
				Global_2451624.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2451624.f_39[0 /*16*/]), "", 64);
				Global_2451624.f_58 = -2;
				Global_2451624.f_56 = 0;
				Global_2451624.f_57 = 0;
			}
		}
		else if (!func_118(&(Var0.f_8)))
		{
			unk_0x2E5BAE30295C2AA7(0, 2);
		}
		else
		{
			Global_2451624.f_3 = 1;
			MemCopy(&(Global_2451624.f_4), {Var0}, 16);
			Global_2451624.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2451624.f_39[0 /*16*/]), "", 64);
			Global_2451624.f_58 = -2;
			Global_2451624.f_56 = 0;
			Global_2451624.f_57 = 0;
		}
	}
}

int func_118(var uParam0)
{
	if (Global_68325)
	{
		if (func_46() == 0)
		{
			return 0;
		}
		if (func_122(unk_0x1788E93557766241(), 1, 1))
		{
			if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xB3657CF9F85DD6EB(unk_0xA16EC202D9D35357()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	if (Global_2451624.f_1)
	{
	}
	if (Global_14560 == 1)
	{
		return 0;
	}
	if (Global_1573710)
	{
		return 0;
	}
	if (Global_2451624.f_36)
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (((Global_34915 != 6 && Global_34915 != 8) && Global_34915 != 12) && Global_34915 != 15)
	{
		return 0;
	}
	if (func_121() && !func_120(12))
	{
		return 0;
	}
	if (unk_0xBE029393332523D7())
	{
		return 0;
	}
	if (unk_0x326BF57075FB3421())
	{
		return 0;
	}
	if (!func_119(0))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (Global_68585)
	{
		return 0;
	}
	if (unk_0xB8C1BADB8BB645DC())
	{
		if (!unk_0xE3A7814A7A3CB594(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 0;
	}
	if (unk_0xE545250CC148D65F(uParam0) || unk_0xEF5803CA81136061(uParam0))
	{
		return 0;
	}
	if (unk_0x9FD8641C0647F454(uParam0) || unk_0xA9490A1F5EB3DEA6(uParam0))
	{
		return 0;
	}
	if (unk_0xE978CCD2FB13A088())
	{
		if (unk_0x9F979F481F18EB48())
		{
			if (unk_0xCDB9D8CABAF0F60D())
			{
				return 0;
			}
		}
		else if (unk_0x660675ADB09E441F())
		{
			return 0;
		}
	}
	return 1;
}

int func_119(int iParam0)
{
	struct<13> Var0;
	
	if (unk_0xD31E1D2B17B1EF04() == 0)
	{
		return 0;
	}
	if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		if (unk_0x4076712F1D2AF6DD(0, iParam0))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		if (iParam0 == 0 || iParam0 == unk_0x1788E93557766241())
		{
			if (unk_0xEC80AF60BD7582EE(0, -3, 1) || unk_0x4076712F1D2AF6DD(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_8(iParam0) };
			if (unk_0x4076712F1D2AF6DD(0, 0) || (unk_0x4076712F1D2AF6DD(1, 0) && unk_0x765DD998E5AD03DC(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x4076712F1D2AF6DD(0, iParam0))
		{
			if (unk_0x018F7277C3350C31())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_121()
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0x38FA37FE3518BA38(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_123()
{
	func_114();
}

void func_124()
{
	Global_2451624.f_1 = 1;
	Global_2451624.f_33 = -1;
	Global_2451624.f_34 = -1;
	if (unk_0xC8378A96673BCC40(Global_14375) == 1)
	{
		if (Global_14382)
		{
			func_125(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14337)
			{
				func_125(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_125(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_125(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_126(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(iParam8))
	{
		func_126(iParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_126(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_126(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_126(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_126(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_127()
{
	int iVar0;
	
	if (iLocal_88)
	{
		Global_47010 = 0;
		Global_47010.f_12 = 0;
		Global_47010.f_24 = 0;
		Global_47010.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_47010.f_1[iVar0] = 0;
			Global_47010.f_13[iVar0] = 0;
			Global_47010.f_25[iVar0] = 0;
			Global_47010.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_88 = 0;
	}
}

