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
	if (unk_0xBCA819F9975BEDFA(34))
	{
		func_111();
	}
	Global_25435 = 0;
	Global_25434 = 0;
	Global_25436 = 0;
	Global_25437 = 0;
	Global_25439 = 0;
	Global_25438 = 0;
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
			if (unk_0x7C78CD7E10D3835F())
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
	if (unk_0x9F746898F7881612(iParam0))
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x23E9113C762466ED(iLocal_68))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_68, 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_68, 0))
					{
						Var0 = { unk_0x57240623C1BC6E88(iLocal_68, 1) };
						fVar3 = unk_0x638527C9799F2AE4(iLocal_68);
						unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0x813865264334331D(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x854ED33E6D715648(unk_0x17B5CC8A8615737D(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x854ED33E6D715648(unk_0x17B5CC8A8615737D(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x854ED33E6D715648(unk_0x17B5CC8A8615737D(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0x692A2891A2BA7352(iParam0, Var0, fVar3, 0, 1);
				unk_0x482AE8C0EAF5AE07(iLocal_68, 1084227584);
				unk_0x924CDE68BA2ED3BA(iParam0);
				unk_0x921CF98C637B0043(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				unk_0x924CDE68BA2ED3BA(iParam0);
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
		unk_0xEB79FECD9022AAF0(&Global_25436, iParam0);
		Global_25439 = 1;
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
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_11(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_10(unk_0x17B5CC8A8615737D());
			if (func_9(iVar0) && (!func_13(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_9(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
		if (func_13(14) && unk_0x30F06AB0772AFB80())
		{
			if (unk_0x6A7B0D91FD88D9EE(sParam0, "CHEAT_SUPER_JUMP") && unk_0x7C78CD7E10D3835F())
			{
				return 0;
			}
			if ((unk_0x6A7B0D91FD88D9EE(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0)) && unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
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
	return Global_35781 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0xBD18006F0815A298("CHEAT_ACTIVATED");
		unk_0x34D84D73B5DF8E80(sParam0);
		func_15(unk_0x23048DD0C6E21613(0, 1));
		unk_0xF6932EE3C82E0FF5(sParam0);
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
	
	unk_0x9475086C69ACF470(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0xE851F22ED3518011((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0xE851F22ED3518011((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0xE851F22ED3518011((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x3CE07141081BBC2B(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xB0A41EC77A49B189(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x8EE4A0ABB2B98E41(func_17(unk_0xBE369BE1BC57A796()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x8EE4A0ABB2B98E41(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x8EE4A0ABB2B98E41(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x8EE4A0ABB2B98E41(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x8EE4A0ABB2B98E41(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x8EE4A0ABB2B98E41(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x8EE4A0ABB2B98E41(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x17B5CC8A8615737D(), 0);
	unk_0x20122FD3E8B8C933(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x021538A59EA44D7A(uParam0))
	{
		unk_0xE1324F59713746FA(uParam0);
		if (unk_0x9F746898F7881612(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0xBD18006F0815A298("CHEAT_DENIED");
		unk_0x34D84D73B5DF8E80(sParam0);
		func_15(unk_0x23048DD0C6E21613(0, 1));
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
			if ((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0x8ADF92E4B51709E2(1f);
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
		unk_0xBD18006F0815A298("CHEAT_DEACTIVATED");
		unk_0x34D84D73B5DF8E80(sParam0);
		func_15(unk_0x23048DD0C6E21613(0, 1));
	}
}

void func_23()
{
	if (unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x79888727131C6854(2, 25))
		{
			if (func_24(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed") && func_24(unk_0x17B5CC8A8615737D()) != joaat("object"))
			{
				unk_0x8ADF92E4B51709E2(fLocal_78);
			}
			else
			{
				unk_0x8ADF92E4B51709E2(1f);
			}
		}
		else
		{
			unk_0x8ADF92E4B51709E2(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_25434, iParam0))
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
	return Global_101700.f_8044.f_99.f_58[iParam0];
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
		unk_0xEB79FECD9022AAF0(&Global_25435, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_25435, iParam0);
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
			unk_0xD1BB2AD73E7FC3A7(2, 37, 1);
			unk_0xD1BB2AD73E7FC3A7(2, 19, 1);
			if ((((((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_26()) || func_32()) || func_31(1)) || unk_0x698C9A4C14BF3957(2, 37)) || unk_0x698C9A4C14BF3957(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0xD1BB2AD73E7FC3A7(2, 37, 1);
			unk_0xD1BB2AD73E7FC3A7(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			unk_0x8ADF92E4B51709E2(1f);
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
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
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
			unk_0x8ADF92E4B51709E2(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x8ADF92E4B51709E2(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x8ADF92E4B51709E2(0.2f);
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
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 1);
			unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 1);
			unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			uVar3 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
			unk_0x4F34E573D7F5024B(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), uVar3);
			iLocal_72 = unk_0x94E3E074F38DF86C();
			unk_0x50FD1894558DE186(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 0);
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				iLocal_72 = unk_0x94E3E074F38DF86C();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				unk_0xD1BB2AD73E7FC3A7(0, 144, 1);
				unk_0xD1BB2AD73E7FC3A7(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0x2F933BB106547968(unk_0x17B5CC8A8615737D(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x2F933BB106547968(unk_0x17B5CC8A8615737D(), 8, 0, 0, 0);
				}
				unk_0xC7845898207D067F(250);
				iLocal_72 = unk_0x94E3E074F38DF86C();
				func_14("CHEAT_SKYFALL");
				unk_0xFFE4319CE7BE2DBA(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0xD1BB2AD73E7FC3A7(0, 144, 1);
			unk_0xE57F94EA937AAD99(2);
			if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
			{
				unk_0x5C9883713FC5A923(unk_0x17B5CC8A8615737D(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0xDF0087E7822095AA(unk_0x17B5CC8A8615737D()))
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x9CA872E9BF4DF131(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 0);
		unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xFFE4319CE7BE2DBA(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x94E3E074F38DF86C();
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
			iLocal_74 = unk_0x94E3E074F38DF86C();
			unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 1);
			unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_17(unk_0xBE369BE1BC57A796()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x94E3E074F38DF86C() - iLocal_74);
			if (unk_0x82F1A060D8F4583B(joaat("appinternet")) == 0)
			{
				func_38((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 1);
			unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xF1F99D8BB06613B7();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 0);
				unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 0, 0, 0, 0, 0, 0, 0, 0);
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
		Global_1354542.f_1 = 1;
		func_39(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
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
			if (((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x589B148F0D998C4C(unk_0xBE369BE1BC57A796());
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
			if ((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x54CB1C87BB13C9D2(unk_0xBE369BE1BC57A796());
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
			func_58(unk_0x17B5CC8A8615737D());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0x17B5CC8A8615737D());
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
	unk_0x6BB28C952AFE4B00(0f);
	unk_0x53C8D69A01C4E4AD(0f);
	unk_0xB1C84F480C11C413(0f);
	unk_0xF1C53F353A5EB55F(1);
	unk_0x450C8FB521762758(0f);
	unk_0xFD6E64AFF9352C00(1);
	unk_0xC98DC0B52A9709C5(0);
	if (unk_0x4E1850F5FF023071("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB8CAC5F3774894A1("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9C88EB7B70229335(&Global_36890))
	{
		if (unk_0x4E1850F5FF023071(&Global_36890))
		{
			unk_0xB8CAC5F3774894A1(&Global_36890);
		}
	}
	if (unk_0x0F1BF24ED3B7ED40(Global_36879))
	{
		if (unk_0x0C1C2DD5505D4E04(Global_36879))
		{
			unk_0xB0655D4540B8DF38(Global_36879, 0f);
			unk_0x6E850356BCA62F5C(Global_36879, 1);
		}
	}
	if (unk_0xE77D3AC9C1449801())
	{
		unk_0x011AE968D1EA959B(0);
	}
	if (bParam0)
	{
		if (unk_0xAE38B3AA7D13F9CE() != -1 || unk_0x2F149D71502DBBB8() != -1)
		{
			unk_0xC1AB7E5821CAB578();
		}
		else if (unk_0xE9E6B5364105A000())
		{
			unk_0xC1AB7E5821CAB578();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_45();
}

void func_45()
{
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36878)
	{
		return;
	}
	iVar0 = unk_0x94E3E074F38DF86C();
	Global_36880 = (iVar0 + iParam0);
	Global_36881 = iParam0;
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
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36715[iVar0 /*5*/];
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
	if (!Global_36689[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36689[iParam0 /*5*/].f_1 == unk_0x17B5CC8A8615737D())
		{
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688 = (Global_36688 - 1);
	if (Global_36688 < 0)
	{
		Global_36688 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36689[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/])
			{
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1)
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
		if (!Global_36715[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
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
	if (Global_36878)
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
	if (!unk_0x5D865887C1F6B69A())
	{
		unk_0x4037B8BAB7E279CF("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x4B4822665CC22060())
	{
		unk_0x6D88E5E936ADD868("DRUNK_SHAKE", (fParam3 * Global_36877));
	}
	if (unk_0x0F1BF24ED3B7ED40(uParam4))
	{
		unk_0x2F0C4DC7A4D75C2E(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36879 = uParam4;
	}
	else
	{
		Global_36879 = 0;
	}
	Global_36878 = 1;
	iVar0 = unk_0x94E3E074F38DF86C();
	Global_36880 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36880 = -1;
		}
	}
	Global_36881 = uParam1;
	Global_36882 = fParam2;
	Global_36884 = fParam3;
	Global_36883 = fParam3;
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
	if (!unk_0x23E9113C762466ED(iParam0))
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
	Global_36689[iVar2 /*5*/] = 0;
	Global_36689[iVar2 /*5*/].f_1 = iParam0;
	Global_36689[iVar2 /*5*/].f_2 = iParam1;
	Global_36689[iVar2 /*5*/].f_3 = iParam1;
	Global_36689[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x17B5CC8A8615737D())
	{
		Global_36910 = 1;
	}
	Global_36688++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36689[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
		{
			return Global_36715[iVar0 /*5*/];
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
			if (((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x11CD732DC8DC84A1(unk_0xBE369BE1BC57A796());
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
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if ((((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
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
			unk_0x8D41D1D1BAB3D4C1(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_25435, iParam0))
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
			unk_0x8D41D1D1BAB3D4C1(1);
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"), 1, 1, 1);
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
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x21B9C652ECEE5A6D() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), (iVar0 - 1), 0);
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x21B9C652ECEE5A6D() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
			if (iVar0 < unk_0x21B9C652ECEE5A6D())
			{
				unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), iVar0 + 1, 0);
				unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
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
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0xDBE9845E4347B9B9(func_73())) || !unk_0x61BE528D623E6AA1(unk_0xBE369BE1BC57A796()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xF74BF04E3FF80B44(unk_0xBE369BE1BC57A796(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D());
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x4B04B4FAE554FA03(unk_0x17B5CC8A8615737D(), unk_0xCB889EF93F21460A(unk_0x17B5CC8A8615737D()));
			unk_0x89355F5A211BA286(unk_0x17B5CC8A8615737D(), (unk_0x525FDE9356F4170E(unk_0xBE369BE1BC57A796()) - unk_0x55C72967EFB9CECF(unk_0x17B5CC8A8615737D())));
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (!unk_0xA929B2923D14E2F8(iVar0, 0))
					{
						unk_0x31589F3476134C55(iVar0);
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
				unk_0xA40F9C430C6F7D6A("EXTRASUNNY");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xA40F9C430C6F7D6A("CLEAR");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xA40F9C430C6F7D6A("CLOUDS");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xA40F9C430C6F7D6A("SMOG");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xA40F9C430C6F7D6A("OVERCAST");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xA40F9C430C6F7D6A("RAIN");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xA40F9C430C6F7D6A("THUNDER");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xA40F9C430C6F7D6A("CLEARING");
				unk_0x0DBC59D848A695B9();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xA40F9C430C6F7D6A("XMAS");
				unk_0x0DBC59D848A695B9();
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_knife"), -1, 0);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_smg"), 300, 0);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_grenade"), 5, 0);
			unk_0xBA8CA9172F194131(unk_0x17B5CC8A8615737D(), joaat("weapon_rpg"), 5, 0);
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
			if (((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xAF6BF84845852C1F(unk_0xBE369BE1BC57A796(), 1.49f);
				unk_0xF1F99D8BB06613B7();
			}
			break;
		
		case 9:
			unk_0xAF6BF84845852C1F(unk_0xBE369BE1BC57A796(), 1f);
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
			if ((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x2E2AFA316F567F4B(unk_0x17B5CC8A8615737D()) || (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()) && !unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())))
				{
					unk_0xC403E60714279361(unk_0xBE369BE1BC57A796(), 1.49f);
				}
				else
				{
					unk_0xC403E60714279361(unk_0xBE369BE1BC57A796(), 1f);
				}
				unk_0xF1F99D8BB06613B7();
			}
			break;
		
		case 9:
			unk_0xC403E60714279361(unk_0xBE369BE1BC57A796(), 1f);
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
			if (((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (!unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) == unk_0x17B5CC8A8615737D())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0xA929B2923D14E2F8(iLocal_69, 0))
							{
								if (func_80(1))
								{
									unk_0xF6EF9E157515D6EC(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0xA929B2923D14E2F8(iLocal_69, 0))
							{
								unk_0xF6EF9E157515D6EC(iLocal_69, 0);
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
			if (!unk_0xA929B2923D14E2F8(iLocal_69, 0))
			{
				unk_0xF6EF9E157515D6EC(iLocal_69, 0);
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
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		uVar0 = unk_0x0C00E753D78DEA62();
		if (unk_0x23E9113C762466ED(uVar0))
		{
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				iVar1 = unk_0x0324EEB10F81965F(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xC2AFD5CFEDC8F22A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xD28959FE5BC2D14D(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xC5082382D5482C0C(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xA55B002FED5A9858(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x36ACE2C7E56D90D6(iVar0, "door_dside_r") != -1 || unk_0x36ACE2C7E56D90D6(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x36ACE2C7E56D90D6(iVar0, "door_dside_r") == -1 || unk_0x36ACE2C7E56D90D6(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xD28959FE5BC2D14D(iVar1))
					{
						if (unk_0x36ACE2C7E56D90D6(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x36ACE2C7E56D90D6(iVar0, "seat_dside_r") != -1 || unk_0x36ACE2C7E56D90D6(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x36ACE2C7E56D90D6(iVar0, "seat_dside_r") == -1 || unk_0x36ACE2C7E56D90D6(iVar0, "seat_pside_r") == -1)
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
					if (!unk_0xC2AFD5CFEDC8F22A(iVar1) && !unk_0xD28959FE5BC2D14D(iVar1))
					{
						return 0;
					}
					if (unk_0x3C6792805E3BEB1B(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x1F1F11C691B0636E(iVar0, &uVar3);
					if (!unk_0x9C88EB7B70229335(uVar4))
					{
						if (unk_0x765F5B806B517045(uVar4) == unk_0x765F5B806B517045("taxiService"))
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
	
	if (!unk_0x23E9113C762466ED(uParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
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
			if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131])
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
					if (Global_101700.f_8044.f_99.f_58[119])
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
			else if (Global_101700.f_8044.f_99.f_58[118])
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
			if ((((!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0x7C78CD7E10D3835F())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x4CA76B1CA16E74F4(unk_0xBE369BE1BC57A796());
			unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 217, 1);
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
		unk_0xD1BB2AD73E7FC3A7(2, 243, 1);
	}
	func_108();
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	if (unk_0x8ABAB1F335EBFAC2(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		return;
	}
	if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
	{
		return;
	}
	if (func_32() || unk_0xE9E6B5364105A000())
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
	if ((func_105(988027572, 12) || unk_0x29339E08A465FCF7(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0x29339E08A465FCF7(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0x29339E08A465FCF7(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0x29339E08A465FCF7(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0x29339E08A465FCF7(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0x29339E08A465FCF7(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0x29339E08A465FCF7(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0x29339E08A465FCF7(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0x29339E08A465FCF7(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0x29339E08A465FCF7(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0x29339E08A465FCF7(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0x29339E08A465FCF7(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0x29339E08A465FCF7(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0x29339E08A465FCF7(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0x29339E08A465FCF7(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0x29339E08A465FCF7(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0x29339E08A465FCF7(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0x29339E08A465FCF7(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0x29339E08A465FCF7(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || unk_0x29339E08A465FCF7(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || unk_0x29339E08A465FCF7(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0x29339E08A465FCF7(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0x29339E08A465FCF7(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0x29339E08A465FCF7(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0x29339E08A465FCF7(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0x29339E08A465FCF7(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0x29339E08A465FCF7(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0x29339E08A465FCF7(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0x29339E08A465FCF7(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0x29339E08A465FCF7(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0x29339E08A465FCF7(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0x29339E08A465FCF7(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0x29339E08A465FCF7(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0x29339E08A465FCF7(joaat("deadeye"))) || func_104(19, 0))
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
	if (unk_0x7C78CD7E10D3835F())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0)) || !unk_0x354EBDB72A54F91B())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 0)) || unk_0x82F1A060D8F4583B(joaat("respawn_controller")) > 0)
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
	
	Var0 = { func_17(unk_0xBE369BE1BC57A796()) };
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
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
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0x7C78CD7E10D3835F())
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
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
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
		if (((((func_13(9) || unk_0x82F1A060D8F4583B(joaat("barry1")) > 0) || unk_0x82F1A060D8F4583B(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
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
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0x48B8265059381CD0(Global_25437, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25438)
			{
				unk_0x21E7933CCC7B3724(&Global_25437, iParam0);
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
			unk_0x21E7933CCC7B3724(&Global_25437, iParam0);
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
		return unk_0xC90736C320239102(iParam0, iParam1);
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
			unk_0x20F0B569F9F3A02A(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0x30F06AB0772AFB80() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x94E3E074F38DF86C();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x94E3E074F38DF86C() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
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
	unk_0x37E45C3155551029(0);
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
		unk_0x8ADF92E4B51709E2(1f);
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xF7A1A67D26D29975(unk_0xBE369BE1BC57A796(), 0);
			unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0xC403E60714279361(unk_0xBE369BE1BC57A796(), 1f);
		unk_0xAF6BF84845852C1F(unk_0xBE369BE1BC57A796(), 1f);
	}
	unk_0x8D41D1D1BAB3D4C1(0);
	Global_25435 = 0;
	Global_25434 = 0;
	Global_25436 = 0;
	Global_25437 = 0;
	Global_25439 = 0;
	Global_25438 = 0;
	unk_0x921053BAF754303D();
}

