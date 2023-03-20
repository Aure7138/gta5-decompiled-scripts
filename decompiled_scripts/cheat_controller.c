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
	if (unk_0x24862A9CDC8F8874(34))
	{
		func_111();
	}
	Global_25360 = 0;
	Global_25359 = 0;
	Global_25361 = 0;
	Global_25362 = 0;
	Global_25364 = 0;
	Global_25363 = 0;
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
			if (unk_0x750E86E98EAACEA9())
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
	if (unk_0x0845149A26DABBA5(iParam0))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if (unk_0x95CCECA3948CFE7B(iLocal_68))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_68))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_68, 0))
					{
						Var0 = { unk_0x44C17CCB85A88A1F(iLocal_68, 1) };
						fVar3 = unk_0x59DD203239FBDCAD(iLocal_68);
						unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0x95F5F15D238A7F1C(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0xCC31DB73C65552D8(unk_0xC8B93D94F8954288(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0xCC31DB73C65552D8(unk_0xC8B93D94F8954288(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0xCC31DB73C65552D8(unk_0xC8B93D94F8954288(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0xD53B4DCC7B2C8551(iParam0, Var0, fVar3, 0, 1);
				unk_0xF18809B65D87E197(iLocal_68);
				unk_0x4BBD72565A0AF033(iParam0);
				unk_0xEF84021B2AB5E334(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				unk_0x4BBD72565A0AF033(iParam0);
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
		unk_0x59A0729D503ED758(&Global_25361, iParam0);
		Global_25364 = 1;
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
	
	unk_0x5F0618A5FDAD55C4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x071958EFED9481F5(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_11(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_10(unk_0xC8B93D94F8954288());
			if (func_9(iVar0) && (!func_13(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_9(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
		if (func_13(14) && unk_0xB66DD474AA9E764E())
		{
			if (unk_0xF8D041B05C3D1FD4(sParam0, "CHEAT_SUPER_JUMP") && unk_0x750E86E98EAACEA9())
			{
				return 0;
			}
			if ((unk_0xF8D041B05C3D1FD4(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288())) && unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
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
	return Global_35700 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x12F4A48D84A3989D("CHEAT_ACTIVATED");
		unk_0xCE59E3E42586D52D(sParam0);
		func_15(unk_0xC754466C15BD85AC(0, 1));
		unk_0xDAA4C957F0A48CE8(sParam0);
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
	
	unk_0xA8349C905E4A8DE7(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0xA3C5926D6E5619AE((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0xA3C5926D6E5619AE((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0xA3C5926D6E5619AE((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0xE79F1883B253E5B8(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xE836A83D85A0F1C3(Param1))
	{
		return 0;
	}
	uVar50 = unk_0xA948350DB6F08108(func_17(unk_0xA34E7C2A5118D638()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0xA948350DB6F08108(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0xA948350DB6F08108(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0xA948350DB6F08108(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0xA948350DB6F08108(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0xA948350DB6F08108(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0xA948350DB6F08108(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xC8B93D94F8954288(), 0);
	unk_0x1728AE8531450BFE(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0xE85F777AD06F7310(uParam0))
	{
		unk_0x7567CEA8E6B5340B(uParam0);
		if (unk_0x0845149A26DABBA5(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0x12F4A48D84A3989D("CHEAT_DENIED");
		unk_0xCE59E3E42586D52D(sParam0);
		func_15(unk_0xC754466C15BD85AC(0, 1));
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
			if ((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0x196C7025F0C44A36(1f);
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
		unk_0x12F4A48D84A3989D("CHEAT_DEACTIVATED");
		unk_0xCE59E3E42586D52D(sParam0);
		func_15(unk_0xC754466C15BD85AC(0, 1));
	}
}

void func_23()
{
	if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x0139E142C27412BC(2, 25))
		{
			if (func_24(unk_0xC8B93D94F8954288()) != joaat("weapon_unarmed") && func_24(unk_0xC8B93D94F8954288()) != joaat("object"))
			{
				unk_0x196C7025F0C44A36(fLocal_78);
			}
			else
			{
				unk_0x196C7025F0C44A36(1f);
			}
		}
		else
		{
			unk_0x196C7025F0C44A36(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0xA51F11E1DC7307BB(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_25359, iParam0))
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
	return Global_100976.f_7719.f_99.f_58[iParam0];
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
		unk_0x59A0729D503ED758(&Global_25360, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25360, iParam0);
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
			unk_0x2BE3C7FA4FCCA784(2, 37, 1);
			unk_0x2BE3C7FA4FCCA784(2, 19, 1);
			if ((((((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_26()) || func_32()) || func_31(1)) || unk_0x3BE6F47A1187EFE0(2, 37)) || unk_0x3BE6F47A1187EFE0(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x2BE3C7FA4FCCA784(2, 37, 1);
			unk_0x2BE3C7FA4FCCA784(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			unk_0x196C7025F0C44A36(1f);
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
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_32()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
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
			unk_0x196C7025F0C44A36(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x196C7025F0C44A36(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x196C7025F0C44A36(0.2f);
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
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
			unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 1);
			unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x640290651A86938B(unk_0xC8B93D94F8954288(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			uVar3 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
			unk_0x32B7B9548CC32D81(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uVar3);
			iLocal_72 = unk_0x693EBB4F13506457();
			unk_0x00F9843B9C06C2E9(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				iLocal_72 = unk_0x693EBB4F13506457();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				unk_0x2BE3C7FA4FCCA784(0, 144, 1);
				unk_0x2BE3C7FA4FCCA784(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 8, 0, 0, 0);
				}
				unk_0x31E6EB2040318451(250);
				iLocal_72 = unk_0x693EBB4F13506457();
				func_14("CHEAT_SKYFALL");
				unk_0x63E7E25783E6FD80(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x2BE3C7FA4FCCA784(0, 144, 1);
			unk_0x68A38902ADFD05FE(2);
			if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
			{
				unk_0x3A2304A561B7D162(unk_0xC8B93D94F8954288(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x955A04DD5208F4B7(unk_0xC8B93D94F8954288()))
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
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xDDA35844870E2C3A(unk_0xC8B93D94F8954288(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 0);
		unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x63E7E25783E6FD80(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x693EBB4F13506457();
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
			iLocal_74 = unk_0x693EBB4F13506457();
			unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 1);
			unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_17(unk_0xA34E7C2A5118D638()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x693EBB4F13506457() - iLocal_74);
			if (unk_0xCBC8FFE55DC722B5(joaat("appinternet")) == 0)
			{
				func_38((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 1);
			unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x91A00773EB809977();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 0);
				unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
		Global_1339929.f_1 = 1;
		func_39(7, iVar0);
		Global_1339929.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = iParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = iParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
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
			if (((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xC9A0D190C31FEF6E(unk_0xA34E7C2A5118D638());
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
			if ((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x021CC38E5A02C8E8(unk_0xA34E7C2A5118D638());
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
			func_58(unk_0xC8B93D94F8954288());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0xC8B93D94F8954288());
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
	unk_0x9B42304CF6BA754C(0f);
	unk_0x509885C9E540EEB1(0f);
	unk_0xB24A9C603103659F(0f);
	unk_0x764018CEDFACA24C(1);
	unk_0x00F9C495069B37C5(0f);
	unk_0x2342C8BD856DDFC7(1);
	unk_0x63E7027E4629C463(0);
	if (unk_0xB5F5536784683C33("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDB9D78E5137EE7AD("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB8A06E7E729EED0A(&Global_36728))
	{
		if (unk_0xB5F5536784683C33(&Global_36728))
		{
			unk_0xDB9D78E5137EE7AD(&Global_36728);
		}
	}
	if (unk_0x844838E5D8A21336(Global_36717))
	{
		if (unk_0x182287FAF327C182(Global_36717))
		{
			unk_0xBE191D8A04BC7DFF(Global_36717, 0f);
			unk_0x9F8E593BD9272C2E(Global_36717, 1);
		}
	}
	if (unk_0x48F1EC063D38EB03())
	{
		unk_0xF88B48D85C78AF92(0);
	}
	if (bParam0)
	{
		if (unk_0xE0FA5DECA3886F33() != -1 || unk_0x1C3E6739D384D123() != -1)
		{
			unk_0xBB221FC3969254DE();
		}
		else if (unk_0xA8D4B6BDCF6DE72B())
		{
			unk_0xBB221FC3969254DE();
		}
	}
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
	StringCopy(&Global_36728, "", 64);
	StringCopy(&Global_36744, "", 16);
	func_45();
}

void func_45()
{
	Global_36716 = 0;
	Global_36717 = 0;
	Global_36718 = 0;
	Global_36719 = 30000;
	Global_36720 = 0f;
	Global_36722 = 0f;
	Global_36721 = 0f;
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36716)
	{
		return;
	}
	iVar0 = unk_0x693EBB4F13506457();
	Global_36718 = (iVar0 + iParam0);
	Global_36719 = iParam0;
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
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
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
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
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
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
	if (Global_36716)
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
	if (!unk_0x0B1DB39CC4656E42())
	{
		unk_0x765B522B5DC2A3B6("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x6729F137F4F07F82())
	{
		unk_0x122B2006E8417964("DRUNK_SHAKE", (fParam3 * Global_36715));
	}
	if (unk_0x844838E5D8A21336(uParam4))
	{
		unk_0xB61A035EB3575B09(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36717 = uParam4;
	}
	else
	{
		Global_36717 = 0;
	}
	Global_36716 = 1;
	iVar0 = unk_0x693EBB4F13506457();
	Global_36718 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36718 = -1;
		}
	}
	Global_36719 = uParam1;
	Global_36720 = fParam2;
	Global_36722 = fParam3;
	Global_36721 = fParam3;
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
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
	Global_36527[iVar2 /*5*/] = 0;
	Global_36527[iVar2 /*5*/].f_1 = iParam0;
	Global_36527[iVar2 /*5*/].f_2 = iParam1;
	Global_36527[iVar2 /*5*/].f_3 = iParam1;
	Global_36527[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xC8B93D94F8954288())
	{
		Global_36748 = 1;
	}
	Global_36526++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
		{
			return Global_36553[iVar0 /*5*/];
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
			if (((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x761BA49083046BE4(unk_0xA34E7C2A5118D638());
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
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if ((((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
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
			unk_0xAE17D4E4BA90AC45(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_25360, iParam0))
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
			unk_0xAE17D4E4BA90AC45(1);
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x640290651A86938B(unk_0xC8B93D94F8954288(), joaat("gadget_parachute"), 1, 1, 1);
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
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if (unk_0xECB10B5C06DD2F31() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), (iVar0 - 1), 0);
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if (unk_0xECB10B5C06DD2F31() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
			if (iVar0 < unk_0xECB10B5C06DD2F31())
			{
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), iVar0 + 1, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
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
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0x912E36B10A734945(func_73())) || !unk_0xB0CC7B3C065A450A(unk_0xA34E7C2A5118D638()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0xAB91953B6FAD60F6(unk_0xA34E7C2A5118D638(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288());
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0xFE93132CC8944C8C(unk_0xC8B93D94F8954288(), unk_0x3117325A963F173E(unk_0xC8B93D94F8954288()));
			unk_0x562360F85F669C46(unk_0xC8B93D94F8954288(), (unk_0xB1BE6030822F5B43(unk_0xA34E7C2A5118D638()) - unk_0x590AD2E91FB5951F(unk_0xC8B93D94F8954288())));
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
				if (unk_0x95CCECA3948CFE7B(iVar0))
				{
					if (!unk_0xB6900B8CB0ABBD2B(iVar0))
					{
						unk_0x0E592F1973122876(iVar0);
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
				unk_0x648DC62DE2D28DC3("EXTRASUNNY");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x648DC62DE2D28DC3("CLEAR");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x648DC62DE2D28DC3("CLOUDS");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x648DC62DE2D28DC3("SMOG");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x648DC62DE2D28DC3("OVERCAST");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x648DC62DE2D28DC3("RAIN");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x648DC62DE2D28DC3("THUNDER");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x648DC62DE2D28DC3("CLEARING");
				unk_0xC1C36EDF2DACDE51();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x648DC62DE2D28DC3("XMAS");
				unk_0xC1C36EDF2DACDE51();
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_knife"), -1, 0);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_smg"), 300, 0);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_grenade"), 5, 0);
			unk_0x21EC660480DA1A3C(unk_0xC8B93D94F8954288(), joaat("weapon_rpg"), 5, 0);
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
			if (((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0x8716939313F28D6A(unk_0xA34E7C2A5118D638(), 1.49f);
				unk_0x91A00773EB809977();
			}
			break;
		
		case 9:
			unk_0x8716939313F28D6A(unk_0xA34E7C2A5118D638(), 1f);
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
			if ((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x5B43F0FBFA2CD021(unk_0xC8B93D94F8954288()) || (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()) && !unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())))
				{
					unk_0x24264C82BFC73A85(unk_0xA34E7C2A5118D638(), 1.49f);
				}
				else
				{
					unk_0x24264C82BFC73A85(unk_0xA34E7C2A5118D638(), 1f);
				}
				unk_0x91A00773EB809977();
			}
			break;
		
		case 9:
			unk_0x24264C82BFC73A85(unk_0xA34E7C2A5118D638(), 1f);
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
			if (((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if (!unk_0xB6900B8CB0ABBD2B(iVar0))
				{
					if (unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_69))
							{
								if (func_80(1))
								{
									unk_0x9F55928BFCF75B1C(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0xB6900B8CB0ABBD2B(iLocal_69))
							{
								unk_0x9F55928BFCF75B1C(iLocal_69, 0);
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
			if (!unk_0xB6900B8CB0ABBD2B(iLocal_69))
			{
				unk_0x9F55928BFCF75B1C(iLocal_69, 0);
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
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		uVar0 = unk_0x974516F979AD07BC();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				iVar1 = unk_0x6D5BB810CC209E15(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x1B477DDE9D088A91(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xE6CB12C10EE5D793(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xAF40E7422A6D9D80(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x9DABB329596B1BD6(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x71EC6CC1E45B4DF1(iVar0, "door_dside_r") != -1 || unk_0x71EC6CC1E45B4DF1(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x71EC6CC1E45B4DF1(iVar0, "door_dside_r") == -1 || unk_0x71EC6CC1E45B4DF1(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xE6CB12C10EE5D793(iVar1))
					{
						if (unk_0x71EC6CC1E45B4DF1(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x71EC6CC1E45B4DF1(iVar0, "seat_dside_r") != -1 || unk_0x71EC6CC1E45B4DF1(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x71EC6CC1E45B4DF1(iVar0, "seat_dside_r") == -1 || unk_0x71EC6CC1E45B4DF1(iVar0, "seat_pside_r") == -1)
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
					if (!unk_0x1B477DDE9D088A91(iVar1) && !unk_0xE6CB12C10EE5D793(iVar1))
					{
						return 0;
					}
					if (unk_0xA298102257816428(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0xFBF56D2226163A9E(iVar0, &uVar3);
					if (!unk_0xB8A06E7E729EED0A(uVar4))
					{
						if (unk_0x7CBED6EFED40E7EB(uVar4) == unk_0x7CBED6EFED40E7EB("taxiService"))
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
	
	if (!unk_0x95CCECA3948CFE7B(uParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
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
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
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
					if (Global_100976.f_7719.f_99.f_58[119])
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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
			if ((((!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0x750E86E98EAACEA9())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x81A044E1F4A72C4E(unk_0xA34E7C2A5118D638());
			unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 217, 1);
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
		unk_0x2BE3C7FA4FCCA784(2, 243, 1);
	}
	func_108();
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	if (unk_0x0004D91ADE7A063A(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		return;
	}
	if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
	{
		return;
	}
	if (func_32() || unk_0xA8D4B6BDCF6DE72B())
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
	if ((func_105(988027572, 12) || unk_0xBA5483EC2E316555(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0xBA5483EC2E316555(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0xBA5483EC2E316555(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0xBA5483EC2E316555(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0xBA5483EC2E316555(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0xBA5483EC2E316555(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0xBA5483EC2E316555(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0xBA5483EC2E316555(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0xBA5483EC2E316555(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0xBA5483EC2E316555(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0xBA5483EC2E316555(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0xBA5483EC2E316555(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0xBA5483EC2E316555(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0xBA5483EC2E316555(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0xBA5483EC2E316555(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0xBA5483EC2E316555(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0xBA5483EC2E316555(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0xBA5483EC2E316555(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0xBA5483EC2E316555(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || unk_0xBA5483EC2E316555(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || unk_0xBA5483EC2E316555(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0xBA5483EC2E316555(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0xBA5483EC2E316555(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0xBA5483EC2E316555(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0xBA5483EC2E316555(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0xBA5483EC2E316555(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0xBA5483EC2E316555(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0xBA5483EC2E316555(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0xBA5483EC2E316555(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0xBA5483EC2E316555(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0xBA5483EC2E316555(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0xBA5483EC2E316555(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0xBA5483EC2E316555(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0xBA5483EC2E316555(joaat("deadeye"))) || func_104(19, 0))
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
	if (unk_0x750E86E98EAACEA9())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) || !unk_0x1DC541CCFC2C3635())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 0)) || unk_0xCBC8FFE55DC722B5(joaat("respawn_controller")) > 0)
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
	
	Var0 = { func_17(unk_0xA34E7C2A5118D638()) };
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
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
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0x750E86E98EAACEA9())
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
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
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
		if (((((func_13(9) || unk_0xCBC8FFE55DC722B5(joaat("barry1")) > 0) || unk_0xCBC8FFE55DC722B5(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
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
	return unk_0xDCC86F723E82125E(Global_100976.f_18751[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0xDCC86F723E82125E(Global_25362, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25363)
			{
				unk_0x77621132305B133B(&Global_25362, iParam0);
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
			unk_0x77621132305B133B(&Global_25362, iParam0);
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
		return unk_0xAE3254BD80784569(iParam0, iParam1);
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
			unk_0x69BE07152CD8DBFA(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0xB66DD474AA9E764E() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x693EBB4F13506457();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x693EBB4F13506457() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
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
	unk_0xEE6B1784C83C018C(0);
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
		unk_0x196C7025F0C44A36(1f);
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 0);
			unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x24264C82BFC73A85(unk_0xA34E7C2A5118D638(), 1f);
		unk_0x8716939313F28D6A(unk_0xA34E7C2A5118D638(), 1f);
	}
	unk_0xAE17D4E4BA90AC45(0);
	Global_25360 = 0;
	Global_25359 = 0;
	Global_25361 = 0;
	Global_25362 = 0;
	Global_25364 = 0;
	Global_25363 = 0;
	unk_0xA4E0D8FD51F2A6F7();
}

