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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
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
	char* sLocal_69 = NULL;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = 1;
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
	iLocal_66 = joaat("bmx");
	iLocal_72 = 300000;
	fLocal_77 = 1f;
	if (unk_0xD63E63DFACCEB80E(34))
	{
		func_109();
	}
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	func_108();
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_85();
	func_66();
	func_20();
	func_2(iLocal_66);
}

void func_2(int iParam0)
{
	switch (iLocal_45)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x5BB61188C2E01F20())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_45 = 1;
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
	if (unk_0x149162179DBAEDB0(iParam0))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x746960881FB19A89(iLocal_67))
			{
				if (!unk_0x0BA451447C3B1A8D(iLocal_67))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_67, 0))
					{
						Var0 = { unk_0x77009B1C011405A9(iLocal_67, 1) };
						fVar3 = unk_0xE691E4EA6B4440C6(iLocal_67);
						unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xCD3EBB4EAE50293F(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x20CBCBD58A2C73B4(unk_0x9F92518438215DD0(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x20CBCBD58A2C73B4(unk_0x9F92518438215DD0(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x20CBCBD58A2C73B4(unk_0x9F92518438215DD0(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = unk_0xB0694AD0A3BB8936(iParam0, Var0, fVar3, 0, 1);
				unk_0x77C765087051EDD6(iLocal_67);
				unk_0x0880E86251A44B7F(iParam0);
				unk_0x9187463EB4918A4D(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				unk_0x0880E86251A44B7F(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_45 = 1;
		}
	}
}

void func_4(int iParam0)
{
	if (!func_13(14) && !func_12(""))
	{
		unk_0xEDB9A377CD8B7F03(&Global_24690, iParam0);
		Global_24693 = 1;
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
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_11(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_10(unk_0x9F92518438215DD0());
			if (func_9(iVar0) && (!func_13(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(char* sParam0)
{
	if (iLocal_93 != 0)
	{
		if (func_13(14) && unk_0x9685D9855970A029())
		{
			if (unk_0x6B08EC9A88700FBB(sParam0, "CHEAT_SUPER_JUMP") && unk_0x5BB61188C2E01F20())
			{
				return 0;
			}
			if ((unk_0x6B08EC9A88700FBB(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0())) && unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
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
	return Global_34913 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x3BE5C2319988C0DB("CHEAT_ACTIVATED");
		unk_0xDB4BC767CEF09274(sParam0);
		func_15(unk_0x21B9348B2F3B9A98(0, 1));
		unk_0x88E670B63DC4F63A(sParam0);
	}
}

void func_15(int iParam0)
{
	iLocal_79[iLocal_90] = iParam0;
	iLocal_90++;
	if (iLocal_90 >= 10)
	{
		iLocal_90 = 0;
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
	
	unk_0x6BD8057B0B6EC46D(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0xE3DAC530D2CCDAE3((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0xE3DAC530D2CCDAE3((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0xE3DAC530D2CCDAE3((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x81D32A4E7E765EA7(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xB0164DDCBF420548(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x451890C8F79BB209(func_17(unk_0xCFC72E446B0B3AD7()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x451890C8F79BB209(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x451890C8F79BB209(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x451890C8F79BB209(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x451890C8F79BB209(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x451890C8F79BB209(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x451890C8F79BB209(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x9F92518438215DD0(), 0);
	unk_0xD200D7E3AEDD340D(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x23EA0079E2840B6D(uParam0))
	{
		unk_0x3BC6D217451D6BB7(uParam0);
		if (unk_0x149162179DBAEDB0(uParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0x3BE5C2319988C0DB("CHEAT_DENIED");
		unk_0xDB4BC767CEF09274(sParam0);
		func_15(unk_0x21B9348B2F3B9A98(0, 1));
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
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0xA4AD332FF0239A37(1f);
			iLocal_76 = 0;
			iLocal_65 = 1;
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
		unk_0x3BE5C2319988C0DB("CHEAT_DEACTIVATED");
		unk_0xDB4BC767CEF09274(sParam0);
		func_15(unk_0x21B9348B2F3B9A98(0, 1));
	}
}

void func_23()
{
	if (unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()))
	{
		if (unk_0x859C6F0CEF1CB9FE(2, 25))
		{
			if (func_24(unk_0x9F92518438215DD0()) != joaat("weapon_unarmed") && func_24(unk_0x9F92518438215DD0()) != joaat("object"))
			{
				unk_0xA4AD332FF0239A37(fLocal_77);
			}
			else
			{
				unk_0xA4AD332FF0239A37(1f);
			}
		}
		else
		{
			unk_0xA4AD332FF0239A37(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x9DA0F3A686A566A6(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0x94E72F17611BCD3C(Global_24688, iParam0))
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
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_99.f_58[iParam0];
}

void func_28()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_76 = 0;
		iLocal_65 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_77 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_77 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_77 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_65 = 5;
}

void func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_24689, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_24689, iParam0);
	}
}

void func_30()
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			unk_0x6A6A41C66448AD09(2, 37, 1);
			unk_0x6A6A41C66448AD09(2, 19, 1);
			if ((((((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_26()) || func_32()) || func_31(1)) || unk_0x4841051C33809BC4(2, 37)) || unk_0x4841051C33809BC4(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			unk_0x6A6A41C66448AD09(2, 37, 1);
			unk_0x6A6A41C66448AD09(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_75 = 0;
			unk_0xA4AD332FF0239A37(1f);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_32()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

void func_33()
{
	iLocal_75++;
	if (iLocal_75 > 3)
	{
		iLocal_62 = 9;
		return;
	}
	switch (iLocal_75)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			unk_0xA4AD332FF0239A37(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0xA4AD332FF0239A37(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0xA4AD332FF0239A37(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_62 = 5;
}

void func_34()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
			unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 1);
			unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x46D3B8FF073CD238(unk_0x9F92518438215DD0(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			uVar3 = unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0());
			unk_0x7844FB9DB5F9220C(Var0, &fVar4);
			fVar4 = (fVar4 + 500f);
			unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uVar3);
			iLocal_71 = unk_0x17103F66FBB44C3C();
			unk_0xC6EA7B53F52F1DF9(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_71))
			{
				unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
				iLocal_71 = unk_0x17103F66FBB44C3C();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_71))
			{
				unk_0x6A6A41C66448AD09(0, 144, 1);
				unk_0x6A6A41C66448AD09(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xB27BF64B02C0107E(unk_0x9F92518438215DD0(), 8, 0, 0, 0);
				}
				unk_0xF391B7BD1F131C3F(250);
				iLocal_71 = unk_0x17103F66FBB44C3C();
				func_14("CHEAT_SKYFALL");
				unk_0xA65F8C84413BA46B(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_63 = 9;
				break;
			}
			unk_0x6A6A41C66448AD09(0, 144, 1);
			unk_0xAB10BEEBB0614A3E(2);
			if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
			{
				unk_0xDFA7F2CAB9E5A4D4(unk_0x9F92518438215DD0(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x7F55198EDB8C65EC(unk_0x9F92518438215DD0()))
				{
					iLocal_63 = 9;
				}
			}
			else
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x014E6B439CFE3432(unk_0x9F92518438215DD0(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xA65F8C84413BA46B(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x17103F66FBB44C3C();
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
	
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_61 = 5;
			iLocal_73 = unk_0x17103F66FBB44C3C();
			unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 1);
			unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { func_17(unk_0xCFC72E446B0B3AD7()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (unk_0x17103F66FBB44C3C() - iLocal_73);
			if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) == 0)
			{
				func_38((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 1);
			unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xDA71972AB6C9EE41();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_61 = 1;
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 0);
				unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
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
		Global_1328872.f_1 = 1;
		func_39(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_1328872.f_3613[iParam0], iParam1);
}

void func_41()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x2432FA6AE0589555(unk_0xCFC72E446B0B3AD7());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if ((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xD4CCF13D80880DB1(unk_0xCFC72E446B0B3AD7());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			func_58(unk_0x9F92518438215DD0());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0x9F92518438215DD0());
			func_46(1000);
			iLocal_64 = 1;
			break;
		
		case 10:
			func_44(1);
			func_29(18, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_44(bool bParam0)
{
	unk_0xC7A0DCE047211B6B(0f);
	unk_0xE370C3D7626B060B(0f);
	unk_0x8F0D00E28BC8810C(0f);
	unk_0xAB692B364BE900EC(1);
	unk_0x6A9ECC7051FBEA73(0f);
	unk_0x3D1A7305CA86F26D(1);
	unk_0xBF6BDED4E5A12AC5(0);
	if (unk_0x370603716EC2D420("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x6041FBFC1EE8196A("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9E9AFDBF482248F6(&Global_35935))
	{
		if (unk_0x370603716EC2D420(&Global_35935))
		{
			unk_0x6041FBFC1EE8196A(&Global_35935);
		}
	}
	if (unk_0x5329DB72517417AE(Global_35924))
	{
		if (unk_0x25640493C2F3B9AE(Global_35924))
		{
			unk_0x04DB9E91DE9A1825(Global_35924, 0f);
			unk_0x8323D198B0FC05E0(Global_35924, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0x8F1265EDECD7B235() != -1 || unk_0xB2D5DAA151970AE4() != -1)
		{
			unk_0x014430DA270E9A92();
		}
		else if (unk_0x2D8FCFBC4E01FF7C())
		{
			unk_0x014430DA270E9A92();
		}
	}
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
	StringCopy(&Global_35935, "", 64);
	StringCopy(&Global_35951, "", 16);
	func_45();
}

void func_45()
{
	Global_35923 = 0;
	Global_35924 = 0;
	Global_35925 = 0;
	Global_35926 = 30000;
	Global_35927 = 0f;
	Global_35929 = 0f;
	Global_35928 = 0f;
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_35923)
	{
		return;
	}
	iVar0 = unk_0x17103F66FBB44C3C();
	Global_35925 = (iVar0 + iParam0);
	Global_35926 = iParam0;
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
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35760[iVar0 /*5*/];
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
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x9F92518438215DD0())
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

int func_49(int iParam0)
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
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
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
	if (Global_35923)
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
	if (!unk_0xE1F9C9B97C74989F())
	{
		unk_0x5EAF15C18CA6669A("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x827FC4B6A826E43D())
	{
		unk_0xC3D12EE6A541D787("DRUNK_SHAKE", (fParam3 * Global_35922));
	}
	if (unk_0x5329DB72517417AE(uParam4))
	{
		unk_0x79DDEE9A5547C864(uParam4, "DRUNK_SHAKE", fParam3);
		Global_35924 = uParam4;
	}
	else
	{
		Global_35924 = 0;
	}
	Global_35923 = 1;
	iVar0 = unk_0x17103F66FBB44C3C();
	Global_35925 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35925 = -1;
		}
	}
	Global_35926 = uParam1;
	Global_35927 = fParam2;
	Global_35929 = fParam3;
	Global_35928 = fParam3;
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
	if (!unk_0x746960881FB19A89(iParam0))
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
	Global_35734[iVar2 /*5*/] = 0;
	Global_35734[iVar2 /*5*/].f_1 = iParam0;
	Global_35734[iVar2 /*5*/].f_2 = iParam1;
	Global_35734[iVar2 /*5*/].f_3 = iParam1;
	Global_35734[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x9F92518438215DD0())
	{
		Global_35955 = 1;
	}
	Global_35733++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
		{
			return Global_35760[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_62()
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0x3662535D9697FDA2(unk_0xCFC72E446B0B3AD7());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if ((((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
				{
					iLocal_60 = 9;
				}
			}
			else
			{
				iLocal_60 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			unk_0x4868DBF2F62DB070(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0x94E72F17611BCD3C(Global_24689, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iLocal_78++;
	if (iLocal_78 > 1)
	{
		iLocal_60 = 9;
		return;
	}
	switch (iLocal_78)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			unk_0x4868DBF2F62DB070(1);
			break;
		
		default:
			break;
	}
	iLocal_60 = 5;
}

void func_66()
{
	func_84();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
	func_70();
	func_67();
}

void func_67()
{
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x46D3B8FF073CD238(unk_0x9F92518438215DD0(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_68()
{
	if (iLocal_92)
	{
		iLocal_92 = 0;
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
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x2C0F5A1F2CB58F70() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), (iVar0 - 1), 0);
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
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x2C0F5A1F2CB58F70() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7());
			if (iVar0 < unk_0x2C0F5A1F2CB58F70())
			{
				unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), iVar0 + 1, 0);
				unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
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
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xBB814297973E28B3(unk_0xCFC72E446B0B3AD7(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x5C66176FC9E6724C(unk_0x9F92518438215DD0(), unk_0x9B2AE70D0A8DA929(unk_0x9F92518438215DD0()));
			unk_0xDD4E878E124B78C0(unk_0x9F92518438215DD0(), (unk_0x871FB8AA559C339B(unk_0xCFC72E446B0B3AD7()) - unk_0xF70927A56B84E48A(unk_0x9F92518438215DD0())));
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (!unk_0x0BA451447C3B1A8D(iVar0))
					{
						unk_0x407153DCFFCB4657(iVar0);
					}
				}
			}
		}
	}
}

void func_74()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
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
		switch (iLocal_70)
		{
			case 0:
				iLocal_70 = 1;
			
			case 1:
				unk_0x93FBA6F54760D38C("EXTRASUNNY");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				unk_0x93FBA6F54760D38C("CLEAR");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				unk_0x93FBA6F54760D38C("CLOUDS");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				unk_0x93FBA6F54760D38C("SMOG");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				unk_0x93FBA6F54760D38C("OVERCAST");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				unk_0x93FBA6F54760D38C("RAIN");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				unk_0x93FBA6F54760D38C("THUNDER");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				unk_0x93FBA6F54760D38C("CLEARING");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				unk_0x93FBA6F54760D38C("XMAS");
				unk_0xB9A5D9462AB62F5C();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_70 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_75()
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_knife"), -1, 0);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_smg"), 300, 0);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_grenade"), 5, 0);
			unk_0x3CD9EE39C1A990B1(unk_0x9F92518438215DD0(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_76()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if (((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				unk_0xD06B7AB57194D1CA(unk_0xCFC72E446B0B3AD7(), 1.49f);
				unk_0xDA71972AB6C9EE41();
			}
			break;
		
		case 9:
			unk_0xD06B7AB57194D1CA(unk_0xCFC72E446B0B3AD7(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_77()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if ((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (unk_0xD691B6C291EBE1AB(unk_0x9F92518438215DD0()) || (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()) && !unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())))
				{
					unk_0xBCD4EA1A6B835F0B(unk_0xCFC72E446B0B3AD7(), 1.49f);
				}
				else
				{
					unk_0xBCD4EA1A6B835F0B(unk_0xCFC72E446B0B3AD7(), 1f);
				}
				unk_0xDA71972AB6C9EE41();
			}
			break;
		
		case 9:
			unk_0xBCD4EA1A6B835F0B(unk_0xCFC72E446B0B3AD7(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if (((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_47 = 9;
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (!unk_0x0BA451447C3B1A8D(iVar0))
				{
					if (unk_0xB5BBEB12C77EE430(iVar0, -1) == unk_0x9F92518438215DD0())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!unk_0x0BA451447C3B1A8D(iLocal_68))
							{
								if (func_79(1))
								{
									unk_0x7AF256259482FBE7(iLocal_68, 1);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!unk_0x0BA451447C3B1A8D(iLocal_68))
							{
								unk_0x7AF256259482FBE7(iLocal_68, 0);
								iLocal_68 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_47 = 10;
			break;
		
		case 10:
			if (!unk_0x0BA451447C3B1A8D(iLocal_68))
			{
				unk_0x7AF256259482FBE7(iLocal_68, 0);
				iLocal_68 = 0;
			}
			func_29(1, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

int func_79(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		uVar0 = unk_0x228A016F863DED95();
		if (unk_0x746960881FB19A89(uVar0))
		{
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				iVar1 = unk_0xB6A50C909A8FABC3(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x80D7E1622143A2A0(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x8D759C5DD707B910(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xAAF77E03CD60491E(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x567194A60F82D51A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xB96C39A95065BDE2(iVar0, "door_dside_r") != -1 || unk_0xB96C39A95065BDE2(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xB96C39A95065BDE2(iVar0, "door_dside_r") == -1 || unk_0xB96C39A95065BDE2(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x8D759C5DD707B910(iVar1))
					{
						if (unk_0xB96C39A95065BDE2(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xB96C39A95065BDE2(iVar0, "seat_dside_r") != -1 || unk_0xB96C39A95065BDE2(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xB96C39A95065BDE2(iVar0, "seat_dside_r") == -1 || unk_0xB96C39A95065BDE2(iVar0, "seat_pside_r") == -1)
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
					if (func_82(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x80D7E1622143A2A0(iVar1) && !unk_0x8D759C5DD707B910(iVar1))
					{
						return 0;
					}
					if (unk_0x2A210BAD0D74322B(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0xC6FE92FD1DF5318E(iVar0, &uVar3);
					if (!unk_0x9E9AFDBF482248F6(uVar4))
					{
						if (unk_0x398F092142D37E17(uVar4) == unk_0x398F092142D37E17("taxiService"))
						{
							return 0;
						}
					}
					if (func_80(iVar0, iVar2, 0))
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

int func_80(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x746960881FB19A89(uParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_81(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_82(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_83(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_83(int iParam0, var uParam1, int iParam2)
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
			if (Global_97358.f_7341.f_99.f_58[128] && !Global_97358.f_7341.f_99.f_58[131])
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
					if (Global_97358.f_7341.f_99.f_58[119])
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
			else if (Global_97358.f_7341.f_99.f_58[118])
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

void func_84()
{
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if ((((!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0x5BB61188C2E01F20())
			{
				iLocal_46 = 9;
				return;
			}
			unk_0xFF17BFF96C42ED45(unk_0xCFC72E446B0B3AD7());
			unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 217, 1);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if ((func_107() || iLocal_93 != 0) || func_13(14))
	{
		unk_0x6A6A41C66448AD09(2, 243, 1);
	}
	func_106();
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return;
	}
	if (unk_0x7D4A8E01FDD0D4C8(unk_0x9F92518438215DD0()))
	{
		return;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		return;
	}
	if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
	{
		return;
	}
	if (func_32() || unk_0x2D8FCFBC4E01FF7C())
	{
		return;
	}
	if (func_105())
	{
		if (!iLocal_91)
		{
			func_104();
			iLocal_91 = 1;
		}
		return;
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	if ((unk_0xDF38F31147C1DED0(988027572, 12) || unk_0x4D6A29FCF3BF4A67(joaat("buzzoff"))) || func_103(20, joaat("buzzard")))
	{
		func_100(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((unk_0xDF38F31147C1DED0(-1134279030, 11) || unk_0x4D6A29FCF3BF4A67(joaat("bandit"))) || func_103(20, joaat("bmx")))
	{
		func_100(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((unk_0xDF38F31147C1DED0(971352167, 10) || unk_0x4D6A29FCF3BF4A67(joaat("holein1"))) || func_103(20, joaat("caddy")))
	{
		func_100(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((unk_0xDF38F31147C1DED0(-269863225, 10) || unk_0x4D6A29FCF3BF4A67(joaat("comet"))) || func_103(20, joaat("comet2")))
	{
		func_100(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((unk_0xDF38F31147C1DED0(458579068, 12) || unk_0x4D6A29FCF3BF4A67(joaat("flyspray"))) || func_103(20, joaat("duster")))
	{
		func_100(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((unk_0xDF38F31147C1DED0(-666513193, 12) || unk_0x4D6A29FCF3BF4A67(joaat("rocket"))) || func_103(20, joaat("pcj")))
	{
		func_100(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((unk_0xDF38F31147C1DED0(-1245984749, 10) || unk_0x4D6A29FCF3BF4A67(joaat("rapidgt"))) || func_103(20, joaat("rapidgt")))
	{
		func_100(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((unk_0xDF38F31147C1DED0(2076774618, 12) || unk_0x4D6A29FCF3BF4A67(joaat("offroad"))) || func_103(20, joaat("sanchez")))
	{
		func_100(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((unk_0xDF38F31147C1DED0(855685457, 9) || unk_0x4D6A29FCF3BF4A67(joaat("vinewood"))) || func_103(20, joaat("stretch")))
	{
		func_100(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((unk_0xDF38F31147C1DED0(-591395876, 12) || unk_0x4D6A29FCF3BF4A67(joaat("barnstorm"))) || func_103(20, joaat("stunt")))
	{
		func_100(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((unk_0xDF38F31147C1DED0(-1399217582, 10) || unk_0x4D6A29FCF3BF4A67(joaat("trashed"))) || func_103(20, joaat("trash")))
	{
		func_100(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_99())
	{
		if ((unk_0xDF38F31147C1DED0(-375917581, 10) || unk_0x4D6A29FCF3BF4A67(joaat("extinct"))) || func_103(20, joaat("dodo")))
		{
			func_100(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((unk_0xDF38F31147C1DED0(-2124307881, 10) || unk_0x4D6A29FCF3BF4A67(joaat("deathcar"))) || func_103(20, joaat("dukes2")))
		{
			func_100(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((unk_0xDF38F31147C1DED0(1028964594, 9) || unk_0x4D6A29FCF3BF4A67(joaat("bubbles"))) || func_103(20, joaat("submersible2")))
		{
			func_100(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((unk_0xDF38F31147C1DED0(-393416581, 11) || unk_0x4D6A29FCF3BF4A67(joaat("hoptoit"))) || func_103(0, 0))
	{
		func_98();
	}
	if ((unk_0xDF38F31147C1DED0(-296509791, 8) || unk_0x4D6A29FCF3BF4A67(joaat("snowday"))) || func_103(1, 0))
	{
		func_97();
	}
	if ((unk_0xDF38F31147C1DED0(1120820643, 7) || unk_0x4D6A29FCF3BF4A67(joaat("catchme"))) || func_103(2, 0))
	{
		func_96();
	}
	if ((unk_0xDF38F31147C1DED0(-421458016, 9) || unk_0x4D6A29FCF3BF4A67(joaat("gotgills"))) || func_103(3, 0))
	{
		func_95();
	}
	if ((unk_0xDF38F31147C1DED0(372390926, 12) || unk_0x4D6A29FCF3BF4A67(joaat("toolup"))) || func_103(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(606506837, 8) || unk_0x4D6A29FCF3BF4A67(joaat("makeitrain"))) || func_103(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(453014206, 12) || unk_0x4D6A29FCF3BF4A67(joaat("turtle"))) || func_103(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(1773187142, 9) || unk_0x4D6A29FCF3BF4A67(joaat("powerup"))) || func_103(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(1173296014, 10) || unk_0x4D6A29FCF3BF4A67(joaat("fugitive"))) || func_103(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(-381269753, 10) || unk_0x4D6A29FCF3BF4A67(joaat("lawyerup"))) || func_103(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(-2023988698, 11) || unk_0x4D6A29FCF3BF4A67(joaat("skydive"))) || func_103(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((unk_0xDF38F31147C1DED0(-835863906, 12) || unk_0x4D6A29FCF3BF4A67(joaat("highex"))) || func_103(11, 0))
	{
		func_94();
	}
	if ((unk_0xDF38F31147C1DED0(1958387485, 12) || unk_0x4D6A29FCF3BF4A67(joaat("incendiary"))) || func_103(12, 0))
	{
		func_93();
	}
	if ((unk_0xDF38F31147C1DED0(-903985180, 9) || unk_0x4D6A29FCF3BF4A67(joaat("hothands"))) || func_103(13, 0))
	{
		func_92();
	}
	if ((unk_0xDF38F31147C1DED0(2087642905, 9) || unk_0x4D6A29FCF3BF4A67(joaat("floater"))) || func_103(14, 0))
	{
		func_91();
	}
	if ((unk_0xDF38F31147C1DED0(1257820019, 10) || unk_0x4D6A29FCF3BF4A67(joaat("painkiller"))) || func_103(15, 0))
	{
		func_90();
	}
	if ((unk_0xDF38F31147C1DED0(1540206179, 7) || unk_0x4D6A29FCF3BF4A67(joaat("slowmo"))) || func_103(16, 0))
	{
		func_89();
	}
	if ((unk_0xDF38F31147C1DED0(115565392, 16) || unk_0x4D6A29FCF3BF4A67(joaat("skyfall"))) || func_103(17, 0))
	{
		func_88();
	}
	if ((unk_0xDF38F31147C1DED0(-1276513277, 8) || unk_0x4D6A29FCF3BF4A67(joaat("liquor"))) || func_103(18, 0))
	{
		func_87();
	}
	if ((unk_0xDF38F31147C1DED0(2040433593, 9) || unk_0x4D6A29FCF3BF4A67(joaat("deadeye"))) || func_103(19, 0))
	{
		func_86();
	}
}

void func_86()
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
	if (iLocal_62 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_65 = 4;
	}
}

void func_87()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_64 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_64 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_64 = 1;
		return;
	}
	if (iLocal_64 == 1)
	{
		iLocal_64 = 4;
	}
	else if (iLocal_64 == 5)
	{
		iLocal_64 = 9;
	}
}

void func_88()
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
	if (unk_0x5BB61188C2E01F20())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) || !unk_0x0B33D73C6EF5FDD9())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0x7B47A371E2D93C2C(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_63 = 2;
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
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_65 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_62 = 4;
	}
}

void func_90()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0xCFC72E446B0B3AD7()) };
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
	if (iLocal_61 == 1)
	{
		iLocal_61 = 4;
	}
	else if (iLocal_61 == 5)
	{
		iLocal_61 = 9;
	}
}

void func_91()
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_60 = 4;
}

void func_92()
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
	if ((func_25(23) || func_25(21)) || func_25(13))
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

void func_93()
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
	if ((func_25(23) || func_25(21)) || func_25(12))
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

void func_94()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_57 = 1;
		return;
	}
	if (iLocal_57 == 1)
	{
		iLocal_57 = 4;
	}
	else if (iLocal_57 == 5)
	{
		iLocal_57 = 9;
	}
}

void func_95()
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
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_96()
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
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_97()
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
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

void func_98()
{
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0x5BB61188C2E01F20())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_46 == 1)
	{
		iLocal_46 = 4;
	}
	else if (iLocal_46 == 5)
	{
		iLocal_46 = 9;
	}
}

int func_99()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_100(int iParam0, char* sParam1)
{
	if (iLocal_45 == 1)
	{
		if (((((func_13(9) || unk_0x7B47A371E2D93C2C(joaat("barry1")) > 0) || unk_0x7B47A371E2D93C2C(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_101(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_66 = iParam0;
		sLocal_69 = sParam1;
		iLocal_45 = 2;
	}
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_102(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_102(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_102(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x94E72F17611BCD3C(Global_97358.f_18371[iParam0], iParam1);
}

int func_103(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_24691, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_24692)
			{
				unk_0xF76EE56D3E7DAF1B(&Global_24691, iParam0);
				iLocal_92 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&Global_24691, iParam0);
			iLocal_92 = 1;
			return 1;
		}
	}
	return 0;
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_79[iVar0] != -1)
		{
			unk_0x78CC79D76C58772C(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_105()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

void func_106()
{
	if (func_13(14) || (!unk_0x9685D9855970A029() && iLocal_93 != 0))
	{
		iLocal_93 = unk_0x17103F66FBB44C3C();
	}
	if (iLocal_93 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x17103F66FBB44C3C() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
}

int func_107()
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

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_79[iVar0] = -1;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_90 = 0;
}

void func_109()
{
	unk_0xA9D3F0BE12DAD59E(0);
	if (iLocal_63 == 5)
	{
		func_35();
	}
	if (iLocal_64 == 5)
	{
		func_44(1);
	}
	if (iLocal_62 == 5 || iLocal_65 == 5)
	{
		unk_0xA4AD332FF0239A37(1f);
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (iLocal_61 == 5)
		{
			unk_0xC243E2F8392527C0(unk_0xCFC72E446B0B3AD7(), 0);
			unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0xBCD4EA1A6B835F0B(unk_0xCFC72E446B0B3AD7(), 1f);
		unk_0xD06B7AB57194D1CA(unk_0xCFC72E446B0B3AD7(), 1f);
	}
	unk_0x4868DBF2F62DB070(0);
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	unk_0xE60DEFFB2A853900();
}

