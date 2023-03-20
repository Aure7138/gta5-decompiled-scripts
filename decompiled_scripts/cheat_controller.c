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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x2EC83C7ACA23E8A4(34))
	{
		func_111();
	}
	Global_25430 = 0;
	Global_25429 = 0;
	Global_25431 = 0;
	Global_25432 = 0;
	Global_25434 = 0;
	Global_25433 = 0;
	func_110();
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_86();
	func_66();
	func_20();
	func_2(iLocal_67);
}

void func_2(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xA1D9579C5525304B())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_18(iParam0);
			}
			break;
		
		case 4:
			func_3(iParam0);
			break;
		
		default:
			break;
	}
}

void func_3(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	bVar4 = false;
	if (unk_0x2C1B5A0D3E233FC3(iParam0))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0xD3FACCDA4D66AEAD(iLocal_68))
			{
				if (!unk_0x912AD5A10E7633F0(iLocal_68, 0))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_68, 0))
					{
						Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_68, 1) };
						fVar3 = unk_0x5E6FDC4F3A8C8EDE(iLocal_68);
						unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xEFA1F34A28EE763C(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0xE044C77D0FC9DB66(iParam0, Var0, fVar3, 0, 1);
				unk_0x74207974B5483203(iLocal_68);
				unk_0x2C07692AA3545079(iParam0);
				unk_0x615DE34FC732CF11(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				unk_0x2C07692AA3545079(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_4(int iParam0)
{
	if (!func_13(14) && !func_12(""))
	{
		unk_0x88B0F0DC270164B7(&Global_25431, iParam0);
		Global_25434 = 1;
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = func_7();
	switch (iVar0)
	{
		case 0:
			func_6(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_6(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_6(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_8()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_11(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_10(unk_0xA0081090911D13E5());
			if (func_9(iVar0) && (!func_13(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_9(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_13(14) && unk_0xB20CA7A3EE29687A())
		{
			if (unk_0x28C1B9853548BD8E(sParam0, "CHEAT_SUPER_JUMP") && unk_0xA1D9579C5525304B())
			{
				return 0;
			}
			if ((unk_0x28C1B9853548BD8E(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0)) && unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x754E61FE98961B39("CHEAT_ACTIVATED");
		unk_0xBDE6EEC5F6BDC060(sParam0);
		func_15(unk_0xBCD67D962E393B66(0, 1));
		unk_0x15428070A3E24A8A(sParam0);
	}
}

void func_15(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

int func_16(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0[9];
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	unk_0xA27A0E75635DD922(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x7466327978A6A24C((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x7466327978A6A24C((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x7466327978A6A24C((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x8461D93FE2207D3A(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0x9EAA10271825C2DB(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x08C67619D2B30F94(func_17(unk_0x0C1D3C552325765B()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x08C67619D2B30F94(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x08C67619D2B30F94(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x08C67619D2B30F94(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x08C67619D2B30F94(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x08C67619D2B30F94(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x08C67619D2B30F94(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xA0081090911D13E5(), 0);
	unk_0x41C19A4A352B09E1(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x3217B792F2F3BB7B(uParam0))
	{
		unk_0x491067A8E906F22D(uParam0);
		if (unk_0x2C1B5A0D3E233FC3(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0x754E61FE98961B39("CHEAT_DENIED");
		unk_0xBDE6EEC5F6BDC060(sParam0);
		func_15(unk_0xBCD67D962E393B66(0, 1));
	}
}

void func_20()
{
	func_63();
	func_62();
	func_43();
	func_42();
	func_41();
	func_37();
	func_34();
	func_30();
	func_21();
}

void func_21()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0xC6B7F8BBCF4D8221(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_22(char* sParam0)
{
	if (func_12(sParam0))
	{
	}
	else
	{
		unk_0x754E61FE98961B39("CHEAT_DEACTIVATED");
		unk_0xBDE6EEC5F6BDC060(sParam0);
		func_15(unk_0xBCD67D962E393B66(0, 1));
	}
}

void func_23()
{
	if (unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
	{
		if (unk_0x7F6103BD34B839B0(2, 25))
		{
			if (func_24(unk_0xA0081090911D13E5()) != joaat("weapon_unarmed") && func_24(unk_0xA0081090911D13E5()) != joaat("object"))
			{
				unk_0xC6B7F8BBCF4D8221(fLocal_78);
			}
			else
			{
				unk_0xC6B7F8BBCF4D8221(1f);
			}
		}
		else
		{
			unk_0xC6B7F8BBCF4D8221(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x79DEFA3570360EAF(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_25429, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	if (((((((func_13(0) || func_13(11)) || func_13(4)) || func_13(9)) || func_13(10)) || func_13(3)) || func_13(2)) || func_27(35))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_99.f_58[iParam0];
}

void func_28()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&Global_25430, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_25430, iParam0);
	}
}

void func_30()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			unk_0xABC36CFE4F3421A0(2, 37, 1);
			unk_0xABC36CFE4F3421A0(2, 19, 1);
			if ((((((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_26()) || func_32()) || func_31(1)) || unk_0x5E429C409D2CBD68(2, 37)) || unk_0x5E429C409D2CBD68(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0xABC36CFE4F3421A0(2, 37, 1);
			unk_0xABC36CFE4F3421A0(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			unk_0xC6B7F8BBCF4D8221(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_32()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

void func_33()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			unk_0xC6B7F8BBCF4D8221(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0xC6B7F8BBCF4D8221(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0xC6B7F8BBCF4D8221(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_34()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 1);
			unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 1);
			unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x8942ADC0DB9F81E4(unk_0xA0081090911D13E5(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			uVar3 = unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5());
			unk_0x776447CD667051CD(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), uVar3);
			iLocal_72 = unk_0xDF658EB6CA91DFBC();
			unk_0xF215E3B07B7990BC(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				iLocal_72 = unk_0xDF658EB6CA91DFBC();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				unk_0xABC36CFE4F3421A0(0, 144, 1);
				unk_0xABC36CFE4F3421A0(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0xA27FDFE5C0EBB875(unk_0xA0081090911D13E5(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xA27FDFE5C0EBB875(unk_0xA0081090911D13E5(), 8, 0, 0, 0);
				}
				unk_0xA0303A6B8C99DD6A(250);
				iLocal_72 = unk_0xDF658EB6CA91DFBC();
				func_14("CHEAT_SKYFALL");
				unk_0xF25FB6A7A13A935D(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0xABC36CFE4F3421A0(0, 144, 1);
			unk_0x7ABD1B29E6C2963D(2);
			if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
			{
				unk_0xCEDEF78614936959(unk_0xA0081090911D13E5(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x55D9E756AFC7AF1D(unk_0xA0081090911D13E5()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0xB09984D51448364F(unk_0xA0081090911D13E5(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 0);
		unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xF25FB6A7A13A935D(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xDF658EB6CA91DFBC();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37()
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0xDF658EB6CA91DFBC();
			unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 1);
			unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_17(unk_0x0C1D3C552325765B()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0xDF658EB6CA91DFBC() - iLocal_74);
			if (unk_0xA96867DD0A63C62C(joaat("appinternet")) == 0)
			{
				func_38((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 1);
			unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x8DCBDDB88592378C();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 0);
				unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_40(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_39(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_41()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x0A47204F15F1BE8D(unk_0x0C1D3C552325765B());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x4F35D04FBD144183(unk_0x0C1D3C552325765B());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			func_58(unk_0xA0081090911D13E5());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0xA0081090911D13E5());
			func_46(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_44(1);
			func_29(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_44(bool bParam0)
{
	unk_0x828E2FE4BF9B3DDF(0f);
	unk_0x5001EA127FDD8208(0f);
	unk_0xDD90E0980BB277E2(0f);
	unk_0x684D46085CBC939C(1);
	unk_0x5A1DDA7C7C1FAEA9(0f);
	unk_0x84BED6C7E8B0DD06(1);
	unk_0x88E94C2B463D2CE0(0);
	if (unk_0x6DEB8F88FFE09057("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x7C1793252FA472B6("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x509383441597090D(&Global_36884))
	{
		if (unk_0x6DEB8F88FFE09057(&Global_36884))
		{
			unk_0x7C1793252FA472B6(&Global_36884);
		}
	}
	if (unk_0x0D2E3F017CBCB8A8(Global_36873))
	{
		if (unk_0xB9A03175F1C0EC4E(Global_36873))
		{
			unk_0x95CDEE1B0E45B05E(Global_36873, 0f);
			unk_0x8A33BD71F3FB5A6A(Global_36873, 1);
		}
	}
	if (unk_0xD7BD59EF8A498940())
	{
		unk_0x638B6A0DAE124D02(0);
	}
	if (bParam0)
	{
		if (unk_0x8E565AC3E8559D14() != -1 || unk_0x5AFA3A506B8EFE7E() != -1)
		{
			unk_0x5A58126D345E3A13();
		}
		else if (unk_0xC740F8182E7E9681())
		{
			unk_0x5A58126D345E3A13();
		}
	}
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
	StringCopy(&Global_36884, "", 64);
	StringCopy(&Global_36900, "", 16);
	func_45();
}

void func_45()
{
	Global_36872 = 0;
	Global_36873 = 0;
	Global_36874 = 0;
	Global_36875 = 30000;
	Global_36876 = 0f;
	Global_36878 = 0f;
	Global_36877 = 0f;
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36872)
	{
		return;
	}
	iVar0 = unk_0xDF658EB6CA91DFBC();
	Global_36874 = (iVar0 + iParam0);
	Global_36875 = iParam0;
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36709[iVar0 /*5*/];
		func_50(1, iVar1, 1);
		return;
	}
	iVar2 = func_49(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_48(iVar2);
}

void func_48(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36683[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36683[iParam0 /*5*/].f_1 == unk_0xA0081090911D13E5())
		{
			Global_36904 = 0;
		}
	}
	Global_36683[iParam0 /*5*/] = 13;
	Global_36683[iParam0 /*5*/].f_1 = 0;
	Global_36683[iParam0 /*5*/].f_2 = 0;
	Global_36683[iParam0 /*5*/].f_3 = 0;
	Global_36683[iParam0 /*5*/].f_4 = 0;
	Global_36682 = (Global_36682 - 1);
	if (Global_36682 < 0)
	{
		Global_36682 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36683[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	func_51(iParam0, iParam1, iParam2, 0, 0);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_53(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_52();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36790[iVar0 /*5*/] = iParam0;
	Global_36790[iVar0 /*5*/].f_1 = iParam1;
	Global_36790[iVar0 /*5*/].f_2 = iParam2;
	Global_36790[iVar0 /*5*/].f_3 = iParam3;
	Global_36790[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36790[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (func_54(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36790[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36790[iVar0 /*5*/])
			{
				if (iParam1 == Global_36790[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0)
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
		if (!Global_36709[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_56(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_57(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_57(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_36872)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x9CE7F23542F47D14())
	{
		unk_0xF739099EF2A2F292("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x23721F933285401A())
	{
		unk_0x613AC5736DC3F029("DRUNK_SHAKE", (fParam3 * Global_36871));
	}
	if (unk_0x0D2E3F017CBCB8A8(uParam4))
	{
		unk_0xE54CCCC537E33A2F(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36873 = uParam4;
	}
	else
	{
		Global_36873 = 0;
	}
	Global_36872 = 1;
	iVar0 = unk_0xDF658EB6CA91DFBC();
	Global_36874 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36874 = -1;
		}
	}
	Global_36875 = uParam1;
	Global_36876 = fParam2;
	Global_36878 = fParam3;
	Global_36877 = fParam3;
}

int func_58(int iParam0)
{
	return func_59(iParam0, -1, 1);
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_49(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_60();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36683[iVar2 /*5*/] = 0;
	Global_36683[iVar2 /*5*/].f_1 = iParam0;
	Global_36683[iVar2 /*5*/].f_2 = iParam1;
	Global_36683[iVar2 /*5*/].f_3 = iParam1;
	Global_36683[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xA0081090911D13E5())
	{
		Global_36904 = 1;
	}
	Global_36682++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36683[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)
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
		if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
		{
			return Global_36709[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_62()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x5D8E4FFB8DB78FBE(unk_0x0C1D3C552325765B());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if ((((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			unk_0xD99453139C6FCD7B(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_25430, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			unk_0xD99453139C6FCD7B(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_66()
{
	func_85();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_72();
	func_71();
	func_70();
	func_67();
}

void func_67()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_25(23) || func_25(22)) || func_25(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x8942ADC0DB9F81E4(unk_0xA0081090911D13E5(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_68()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return 0;
	}
	if (func_69(0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_25(23) || func_25(22)) || func_25(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x34E98013CA352B7E() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), (iVar0 - 1), 0);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_71()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_25(23) || func_25(22)) || func_25(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x34E98013CA352B7E() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
			if (iVar0 < unk_0x34E98013CA352B7E())
			{
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), iVar0 + 1, 0);
				unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				func_14("CHEAT_WANTED_UP");
				func_4(8);
			}
			else
			{
				func_19("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_72()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0x556141FBAE639225(func_73())) || !unk_0x65B84BA97650305B(unk_0x0C1D3C552325765B()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xC9A6E20817C1D957(unk_0x0C1D3C552325765B(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5());
}

void func_74()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_25(23) || func_25(22)) || func_25(6)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0xA082D4AC00BC651A(unk_0xA0081090911D13E5(), unk_0xD268E288469BAB3B(unk_0xA0081090911D13E5()));
			unk_0xDE7177B120AF7F62(unk_0xA0081090911D13E5(), (unk_0x32EF11C499A679A8(unk_0x0C1D3C552325765B()) - unk_0x61609F079F9721BE(unk_0xA0081090911D13E5())));
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
				if (unk_0xD3FACCDA4D66AEAD(iVar0))
				{
					if (!unk_0x912AD5A10E7633F0(iVar0, 0))
					{
						unk_0xEEE264130F2EA9E2(iVar0);
					}
				}
			}
		}
	}
}

void func_75()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_25(23) || func_25(22)) || func_25(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_4(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0x4E68434FD275549E("EXTRASUNNY");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x4E68434FD275549E("CLEAR");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x4E68434FD275549E("CLOUDS");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x4E68434FD275549E("SMOG");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x4E68434FD275549E("OVERCAST");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x4E68434FD275549E("RAIN");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x4E68434FD275549E("THUNDER");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x4E68434FD275549E("CLEARING");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x4E68434FD275549E("XMAS");
				unk_0x4E9F6A9CAA59E6BD();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_76()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_25(23) || func_25(22)) || func_25(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_knife"), -1, 0);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_smg"), 300, 0);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_grenade"), 5, 0);
			unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_77()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0x16C2341D489E0A25(unk_0x0C1D3C552325765B(), 1.49f);
				unk_0x8DCBDDB88592378C();
			}
			break;
		
		case 9:
			unk_0x16C2341D489E0A25(unk_0x0C1D3C552325765B(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0xA5528F7B3922ED70(unk_0xA0081090911D13E5()) || (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()) && !unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())))
				{
					unk_0x613B5486B356043F(unk_0x0C1D3C552325765B(), 1.49f);
				}
				else
				{
					unk_0x613B5486B356043F(unk_0x0C1D3C552325765B(), 1f);
				}
				unk_0x8DCBDDB88592378C();
			}
			break;
		
		case 9:
			unk_0x613B5486B356043F(unk_0x0C1D3C552325765B(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					if (unk_0x8FD32443A080784B(iVar0, -1, 0) == unk_0xA0081090911D13E5())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x912AD5A10E7633F0(iLocal_69, 0))
							{
								if (func_80(1))
								{
									unk_0x4DCC14D351314CFA(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x912AD5A10E7633F0(iLocal_69, 0))
							{
								unk_0x4DCC14D351314CFA(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x912AD5A10E7633F0(iLocal_69, 0))
			{
				unk_0x4DCC14D351314CFA(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_29(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_80(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		uVar0 = unk_0x525584039F375488();
		if (unk_0xD3FACCDA4D66AEAD(uVar0))
		{
			if (unk_0x1F1B2B6E500380C5(iVar0, 0))
			{
				iVar1 = unk_0x705BC1BB91F530B5(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x0778B61C8A904D0B(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xBFD32C1D4D54E09B(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xFC4346F9DE2AB4AE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xE3C6E31B7236489F(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x72759B1F07CD05E3(iVar0, "door_dside_r") != -1 || unk_0x72759B1F07CD05E3(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x72759B1F07CD05E3(iVar0, "door_dside_r") == -1 || unk_0x72759B1F07CD05E3(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xBFD32C1D4D54E09B(iVar1))
					{
						if (unk_0x72759B1F07CD05E3(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x72759B1F07CD05E3(iVar0, "seat_dside_r") != -1 || unk_0x72759B1F07CD05E3(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x72759B1F07CD05E3(iVar0, "seat_dside_r") == -1 || unk_0x72759B1F07CD05E3(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_9(iVar2))
					{
						return 0;
					}
					if (func_83(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x0778B61C8A904D0B(iVar1) && !unk_0xBFD32C1D4D54E09B(iVar1))
					{
						return 0;
					}
					if (unk_0x29626AAD56D23B62(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x31A36F72D3ABDCD7(iVar0, &uVar3);
					if (!unk_0x509383441597090D(uVar4))
					{
						if (unk_0x3BB8D1C5FAAB25B3(uVar4) == unk_0x3BB8D1C5FAAB25B3("taxiService"))
						{
							return 0;
						}
					}
					if (func_81(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD3FACCDA4D66AEAD(uParam0) || !unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x08BA6DD398CA197C(Global_101553.f_6084[iVar9], 0))
		{
			if (unk_0xE994FC7025A2258D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_83(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_84(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_84(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101553.f_7940.f_99.f_58[128] && !Global_101553.f_7940.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101553.f_7940.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
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
			else if (Global_101553.f_7940.f_99.f_58[118])
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
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_85()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0xA1D9579C5525304B())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0xA4472AAD14B4D0A3(unk_0x0C1D3C552325765B());
			unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 217, 1);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if ((func_109() || iLocal_94 != 0) || func_13(14))
	{
		unk_0xABC36CFE4F3421A0(2, 243, 1);
	}
	func_108();
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (unk_0x5A2B04607A5BA87C(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		return;
	}
	if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
	{
		return;
	}
	if (func_32() || unk_0xC740F8182E7E9681())
	{
		return;
	}
	if (func_107())
	{
		if (!iLocal_92)
		{
			func_106();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_105(988027572, 12) || unk_0xBA4E4F60477943BE(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0xBA4E4F60477943BE(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0xBA4E4F60477943BE(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0xBA4E4F60477943BE(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0xBA4E4F60477943BE(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0xBA4E4F60477943BE(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0xBA4E4F60477943BE(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0xBA4E4F60477943BE(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0xBA4E4F60477943BE(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0xBA4E4F60477943BE(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0xBA4E4F60477943BE(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0xBA4E4F60477943BE(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0xBA4E4F60477943BE(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0xBA4E4F60477943BE(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0xBA4E4F60477943BE(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0xBA4E4F60477943BE(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0xBA4E4F60477943BE(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0xBA4E4F60477943BE(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0xBA4E4F60477943BE(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || unk_0xBA4E4F60477943BE(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || unk_0xBA4E4F60477943BE(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0xBA4E4F60477943BE(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0xBA4E4F60477943BE(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0xBA4E4F60477943BE(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0xBA4E4F60477943BE(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0xBA4E4F60477943BE(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0xBA4E4F60477943BE(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0xBA4E4F60477943BE(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0xBA4E4F60477943BE(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0xBA4E4F60477943BE(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0xBA4E4F60477943BE(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0xBA4E4F60477943BE(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0xBA4E4F60477943BE(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0xBA4E4F60477943BE(joaat("deadeye"))) || func_104(19, 0))
	{
		func_87();
	}
}

void func_87()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_88()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_89()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xA1D9579C5525304B())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) || !unk_0x76E840F466FECF8E())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 0)) || unk_0xA96867DD0A63C62C(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_90()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_91()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0x0C1D3C552325765B()) };
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_25(23) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_92()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_93()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(13))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_94()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(12))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_95()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_96()
{
	if ((((func_25(23) || func_25(22)) || func_25(3)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_97()
{
	if ((((func_25(23) || func_25(22)) || func_25(2)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_98()
{
	if ((func_25(23) || func_25(22)) || func_25(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_99()
{
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0xA1D9579C5525304B())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_100()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					iVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&iVar0, 0);
					unk_0xDA842F3F06329D8C(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_13(9) || unk_0xA96867DD0A63C62C(joaat("barry1")) > 0) || unk_0xA96867DD0A63C62C(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_102(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_103(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_103(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_103(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_101553.f_18972[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0x08BA6DD398CA197C(Global_25432, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25433)
			{
				unk_0x09C86C0C5CA26B1E(&Global_25432, iParam0);
				iLocal_93 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&Global_25432, iParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	if (!func_13(14))
	{
		return unk_0x825F6A45DAD6A6EB(iParam0, iParam1);
	}
	return 0;
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x5AF920EE00652664(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_91406 == 13 || Global_91406 == 10) || Global_91406 == 11) || Global_91406 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0xB20CA7A3EE29687A() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0xDF658EB6CA91DFBC();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0xDF658EB6CA91DFBC() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_69877)
	{
		return 1;
	}
	else if (Global_55810 && !Global_55816)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_111()
{
	unk_0x2CDB228334E3A78F(0);
	if (iLocal_64 == 5)
	{
		func_35();
	}
	if (iLocal_65 == 5)
	{
		func_44(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0xC6B7F8BBCF4D8221(1f);
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x8F2CF88C37D4A413(unk_0x0C1D3C552325765B(), 0);
			unk_0xC2407AC016215F2D(unk_0xA0081090911D13E5(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x613B5486B356043F(unk_0x0C1D3C552325765B(), 1f);
		unk_0x16C2341D489E0A25(unk_0x0C1D3C552325765B(), 1f);
	}
	unk_0xD99453139C6FCD7B(0);
	Global_25430 = 0;
	Global_25429 = 0;
	Global_25431 = 0;
	Global_25432 = 0;
	Global_25434 = 0;
	Global_25433 = 0;
	unk_0x78C587487CD40B92();
}

