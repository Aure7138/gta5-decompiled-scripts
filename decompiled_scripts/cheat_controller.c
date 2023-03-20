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
	if (unk_0x7547D7CF93115D6D(34))
	{
		func_112();
	}
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	func_111();
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_88();
	func_69();
	func_23();
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
			if (unk_0x332341B01881B470())
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
	if (unk_0xD291857D0C9C7FEC(iParam0))
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if (unk_0xFD68187442384158(iLocal_67))
			{
				if (!unk_0xE5D56342B0FF1D0D(iLocal_67))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_67, 0))
					{
						Var0 = { unk_0xBF1B13057E5119A4(iLocal_67, 1) };
						fVar3 = unk_0xA9D6B28E708753B6(iLocal_67);
						unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0x10EA498723DC5A09(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x0CAFB9D38494283D(unk_0x507DA4994C3D8EBD(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x0CAFB9D38494283D(unk_0x507DA4994C3D8EBD(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x0CAFB9D38494283D(unk_0x507DA4994C3D8EBD(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = unk_0x546974B676313326(iParam0, Var0, fVar3, 0, 1);
				unk_0xD90C30D269B19096(iLocal_67);
				unk_0xFF467904A8A12BBE(iParam0);
				unk_0xB67623A401171555(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				unk_0xFF467904A8A12BBE(iParam0);
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
		unk_0x3DBE2A7AF9E71C82(&Global_24690, iParam0);
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
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_8()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_11(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_10(unk_0x507DA4994C3D8EBD());
			if (func_9(iVar0) && (!func_13(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		if (func_13(14) && unk_0x8D4100BAA46EE198())
		{
			if (unk_0xA858564DC37EED5E(sParam0, "CHEAT_SUPER_JUMP") && unk_0x332341B01881B470())
			{
				return 0;
			}
			if (unk_0xA858564DC37EED5E(sParam0, "CHEAT_GRAVITY_MOON") && unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
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
	return Global_34909 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x82FD00B995993186("CHEAT_ACTIVATED");
		unk_0x923B18EB34FC2117(sParam0);
		func_15(unk_0x81489E3284B071C0(0, 1));
		unk_0x07CECFE2848241F2(sParam0);
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
	
	unk_0xB72AA272E2B242A6(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x75E01E8585722F89((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x75E01E8585722F89((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x75E01E8585722F89((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0xDA0070A0FA486D72(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xCA97BCE0621BFD25(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x76AC96FD8F95E946(func_17(unk_0xAF65E5A58BE87D95()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x76AC96FD8F95E946(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x76AC96FD8F95E946(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x76AC96FD8F95E946(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x76AC96FD8F95E946(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x76AC96FD8F95E946(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x76AC96FD8F95E946(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x507DA4994C3D8EBD(), 0);
	unk_0xBFABF77FCEA8BA3F(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x0EC55223EB53BF03(uParam0))
	{
		unk_0xCBE6AC5010E5CE5C(uParam0);
		if (unk_0xD291857D0C9C7FEC(uParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	unk_0x82FD00B995993186("CHEAT_DENIED");
	unk_0x923B18EB34FC2117(sParam0);
	func_15(unk_0x81489E3284B071C0(0, 1));
	if (func_13(14))
	{
		if (unk_0xA858564DC37EED5E(sParam0, "CHEAT_NOT_NOW"))
		{
			if (func_21(func_22()))
			{
				func_20("CM_WHLP_CHT_ANI", sParam0, 5000);
			}
			else
			{
				func_20("CM_WHLP_CHT", sParam0, 5000);
			}
		}
	}
}

void func_20(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x923B18EB34FC2117(uParam1);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam2);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

int func_22()
{
	return unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD());
}

void func_23()
{
	func_66();
	func_65();
	func_46();
	func_45();
	func_44();
	func_40();
	func_37();
	func_33();
	func_24();
}

void func_24()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_32(19, 1);
			func_31();
			break;
		
		case 5:
			if ((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_29()) || func_28(23)) || func_28(21)) || func_28(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_26();
			break;
		
		case 9:
			func_25("CHEAT_AIM_SLOW_MO");
			func_32(19, 0);
			unk_0x1580B26E8449D082(1f);
			iLocal_76 = 0;
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_25(char* sParam0)
{
	if (func_12(sParam0))
	{
	}
	else
	{
		unk_0x82FD00B995993186("CHEAT_DEACTIVATED");
		unk_0x923B18EB34FC2117(sParam0);
		func_15(unk_0x81489E3284B071C0(0, 1));
	}
}

void func_26()
{
	if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xBD883E84B4B6E14E(2, 25))
		{
			if (func_27(unk_0x507DA4994C3D8EBD()) != joaat("weapon_unarmed") && func_27(unk_0x507DA4994C3D8EBD()) != joaat("object"))
			{
				unk_0x1580B26E8449D082(fLocal_77);
			}
			else
			{
				unk_0x1580B26E8449D082(1f);
			}
		}
		else
		{
			unk_0x1580B26E8449D082(1f);
		}
	}
}

int func_27(int iParam0)
{
	var uVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &uVar0, 1);
	return uVar0;
}

int func_28(int iParam0)
{
	if (unk_0x61D8FEAF64881CDA(Global_24688, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	if (((((((func_13(0) || func_13(11)) || func_13(4)) || func_13(9)) || func_13(10)) || func_13(3)) || func_13(2)) || func_30(35))
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_31()
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

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_24689, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_24689, iParam0);
	}
}

void func_33()
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_32(16, 1);
			func_36();
			break;
		
		case 5:
			unk_0x500F4CA776CEBD0A(2, 37, 1);
			unk_0x500F4CA776CEBD0A(2, 19, 1);
			if ((((((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_29()) || func_35()) || func_34(1)) || unk_0x02AC213158CF29AE(2, 37)) || unk_0x02AC213158CF29AE(2, 19)) || func_28(23)) || func_28(21)) || func_28(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			unk_0x500F4CA776CEBD0A(2, 37, 1);
			unk_0x500F4CA776CEBD0A(2, 19, 1);
			func_25("CHEAT_SLOW_MO");
			func_32(16, 0);
			iLocal_75 = 0;
			unk_0x1580B26E8449D082(1f);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}

bool func_34(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_35()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

void func_36()
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
			unk_0x1580B26E8449D082(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x1580B26E8449D082(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x1580B26E8449D082(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_62 = 5;
}

void func_37()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 2:
			func_32(17, 1);
			unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), 1);
			unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 1);
			unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x3F9EDC2D18464273(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			uVar3 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
			unk_0xBC5E1C3D489E93FD(Var0, &fVar4);
			fVar4 = (fVar4 + 500f);
			unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), uVar3);
			iLocal_71 = unk_0xF976C624234A4AA8();
			unk_0x7C69A4879766A867(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_39(1000, iLocal_71))
			{
				unk_0x479E7EEEBDEE245D(unk_0x507DA4994C3D8EBD(), 0);
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
				iLocal_71 = unk_0xF976C624234A4AA8();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (func_39(1000, iLocal_71))
			{
				unk_0x500F4CA776CEBD0A(0, 144, 1);
				unk_0x500F4CA776CEBD0A(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0xF2685765B7BEBCB0(unk_0x507DA4994C3D8EBD(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xF2685765B7BEBCB0(unk_0x507DA4994C3D8EBD(), 8, 0, 0, 0);
				}
				unk_0x662E87A876F1069D(250);
				iLocal_71 = unk_0xF976C624234A4AA8();
				func_14("CHEAT_SKYFALL");
				unk_0x1CD86B48C55CAB17(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_29()) || func_28(23)) || func_28(21)) || func_28(17))
			{
				iLocal_63 = 9;
				break;
			}
			unk_0x500F4CA776CEBD0A(0, 144, 1);
			unk_0xD9E638F7F8DCAA60(2);
			if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x5784591F4D03884C(unk_0x507DA4994C3D8EBD(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x5800F5EE75107519(unk_0x507DA4994C3D8EBD()))
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
			func_38();
			func_25("CHEAT_SKYFALL");
			func_32(17, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_38()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xD419CF589B371044(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 0);
		unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x1CD86B48C55CAB17(0);
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF976C624234A4AA8();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_32(15, 1);
			iLocal_61 = 5;
			iLocal_73 = unk_0xF976C624234A4AA8();
			unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 1);
			unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { func_17(unk_0xAF65E5A58BE87D95()) };
			if (((((func_29() || func_35()) || func_28(23)) || func_28(21)) || func_28(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (unk_0xF976C624234A4AA8() - iLocal_73);
			if (unk_0x25531002BCF0D968(joaat("appinternet")) == 0)
			{
				func_41((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 1);
			unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xC1D4C87F0B074654();
			break;
		
		case 9:
			func_25("CHEAT_INVINCIBILITY_OFF");
			func_32(15, 0);
			iLocal_61 = 1;
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 0);
				unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_43(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_42(7, iVar0);
		Global_1328798.f_1664[iVar0] = iParam0;
		StringCopy(&(Global_1328798.f_1664.f_5[iVar0 /*16*/]), sParam1, 64);
		Global_1328798.f_1664.f_70[iVar0] = iParam2;
		Global_1328798.f_1664.f_90[iVar0] = iParam3;
		Global_1328798.f_1664.f_75[iVar0] = iParam4;
		Global_1328798.f_1664.f_80[iVar0] = iParam5;
		Global_1328798.f_1664.f_105[iVar0] = iParam6;
		Global_1328798.f_1664.f_110[iVar0] = iParam7;
		Global_1328798.f_1664.f_85[iVar0] = iParam8;
		Global_1328798.f_1664.f_129[iVar0] = iParam9;
		Global_1328798.f_1664.f_134[iVar0] = iParam10;
		Global_1328798.f_1664.f_148[iVar0] = iParam11;
		Global_1328798.f_1664.f_100[iVar0] = iParam12;
	}
}

void func_42(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_43(int iParam0, int iParam1)
{
	return unk_0x61D8FEAF64881CDA(Global_1328798.f_1912[iParam0], iParam1);
}

void func_44()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_32(12, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(21)) || func_28(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_29())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xC2BBDC5E9309A521(unk_0xAF65E5A58BE87D95());
			break;
		
		case 9:
			func_25("CHEAT_FLAMING_BULLETS");
			func_32(12, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_32(13, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if ((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(21)) || func_28(13)) || func_29())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x450DD675420E0A85(unk_0xAF65E5A58BE87D95());
			break;
		
		case 9:
			func_25("CHEAT_EXPLOSIVE_MELEE");
			func_32(13, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_46()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_32(18, 1);
			func_61(unk_0x507DA4994C3D8EBD());
			func_59(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_29() || !unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95())) || func_28(23)) || func_28(21)) || func_28(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_25("CHEAT_DRUNK");
			func_32(18, 0);
			func_50(unk_0x507DA4994C3D8EBD());
			func_49(1000);
			iLocal_64 = 1;
			break;
		
		case 10:
			func_47(1);
			func_32(18, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_47(bool bParam0)
{
	unk_0xB3A2E1E33B288962(0f);
	unk_0x6D88DBBBECD37E5A(0f);
	unk_0xF78764690DB8F559(0f);
	unk_0xB3BE5EAE7F48BADE(1);
	unk_0x6B5EA708EBD7C0EF(0f);
	unk_0xD6F8F4C71896F304(1);
	unk_0x039A3D11A21B19E6(0);
	if (unk_0xA2A45E58AC3DF6C5("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xAB5C0FE0C680BC7F("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x8FA72E132AAFA62F(&Global_35931))
	{
		if (unk_0xA2A45E58AC3DF6C5(&Global_35931))
		{
			unk_0xAB5C0FE0C680BC7F(&Global_35931);
		}
	}
	if (unk_0x17D71902CA06091B(Global_35920))
	{
		if (unk_0xFC044F5A8CA9782F(Global_35920))
		{
			unk_0xE2C04E90396EAF08(Global_35920, 0f);
			unk_0x60A59DBF922B3037(Global_35920, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xEF9CD83E2E2816E8() != -1 || unk_0x91796810B25FDA18() != -1)
		{
			unk_0x8611FA16C57B4195();
		}
		else if (unk_0xA4ADA92842355D33())
		{
			unk_0x8611FA16C57B4195();
		}
	}
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
	StringCopy(&Global_35931, "", 64);
	StringCopy(&Global_35947, "", 16);
	func_48();
}

void func_48()
{
	Global_35919 = 0;
	Global_35920 = 0;
	Global_35921 = 0;
	Global_35922 = 30000;
	Global_35923 = 0f;
	Global_35925 = 0f;
	Global_35924 = 0f;
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
}

void func_49(int iParam0)
{
	int iVar0;
	
	if (!Global_35919)
	{
		return;
	}
	iVar0 = unk_0xF976C624234A4AA8();
	Global_35921 = (iVar0 + iParam0);
	Global_35922 = iParam0;
}

void func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xFD68187442384158(iParam0))
	{
		return;
	}
	iVar0 = func_58(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_53(1, iVar1, 1);
		return;
	}
	iVar2 = func_52(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_51(iVar2);
}

void func_51(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0x507DA4994C3D8EBD())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	func_54(iParam0, iParam1, iParam2, 0, 0);
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_56(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_55();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_55()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	if (func_57(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58(int iParam0)
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_60(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_60(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_35919)
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
	if (!unk_0xD0FDF77C380EC475())
	{
		unk_0xF1C274C08D24D634("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xCED9A2EF4ECBCD16())
	{
		unk_0x8C565956B6F9E723("DRUNK_SHAKE", (fParam3 * Global_35918));
	}
	if (unk_0x17D71902CA06091B(uParam4))
	{
		unk_0xB98DF10F1936BD70(uParam4, "DRUNK_SHAKE", fParam3);
		Global_35920 = uParam4;
	}
	else
	{
		Global_35920 = 0;
	}
	Global_35919 = 1;
	iVar0 = unk_0xF976C624234A4AA8();
	Global_35921 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35921 = -1;
		}
	}
	Global_35922 = uParam1;
	Global_35923 = fParam2;
	Global_35925 = fParam3;
	Global_35924 = fParam3;
}

int func_61(int iParam0)
{
	return func_62(iParam0, -1, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	iVar0 = func_64(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_52(iParam0);
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
	iVar2 = func_63();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_35730[iVar2 /*5*/] = 0;
	Global_35730[iVar2 /*5*/].f_1 = iParam0;
	Global_35730[iVar2 /*5*/].f_2 = iParam1;
	Global_35730[iVar2 /*5*/].f_3 = iParam1;
	Global_35730[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x507DA4994C3D8EBD())
	{
		Global_35951 = 1;
	}
	Global_35729++;
	return 1;
}

int func_63()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)
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
		if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
		{
			return Global_35756[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_65()
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_32(11, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(21)) || func_28(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_29())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0x9D3C19440954B0A5(unk_0xAF65E5A58BE87D95());
			break;
		
		case 9:
			func_25("CHEAT_BANG_BANG");
			func_32(11, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_66()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_32(14, 1);
			func_68();
			break;
		
		case 5:
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if ((((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_29()) || func_28(23)) || func_28(21)) || func_28(14)) || func_67(17)) || unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
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
			func_25("CHEAT_GRAVITY_MOON");
			func_32(14, 0);
			unk_0xEAF2311B13C121CB(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

int func_67(int iParam0)
{
	if (unk_0x61D8FEAF64881CDA(Global_24689, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_68()
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
			unk_0xEAF2311B13C121CB(1);
			break;
		
		default:
			break;
	}
	iLocal_60 = 5;
}

void func_69()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_73();
	func_70();
}

void func_70()
{
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_28(23) || func_28(22)) || func_28(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x3F9EDC2D18464273(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_71()
{
	if (iLocal_92)
	{
		iLocal_92 = 0;
		return 0;
	}
	if (func_72(0))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_28(23) || func_28(22)) || func_28(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if (unk_0xB916C06719AE0212() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), (iVar0 - 1), 0);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_74()
{
	int iVar0;
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((func_28(23) || func_28(22)) || func_28(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if (unk_0xB916C06719AE0212() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
			if (iVar0 < unk_0xB916C06719AE0212())
			{
				unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), iVar0 + 1, 0);
				unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
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

void func_75()
{
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_28(23) || func_28(22)) || func_28(7)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xC2AE0675A3BC6FEE(unk_0xAF65E5A58BE87D95(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

void func_76()
{
	int iVar0;
	
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((((func_28(23) || func_28(22)) || func_28(6)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x3E16CE93BAE616EE(unk_0x507DA4994C3D8EBD(), unk_0xE32A4C9A9C5EB019(unk_0x507DA4994C3D8EBD()));
			unk_0x97D59B34648267BB(unk_0x507DA4994C3D8EBD(), (unk_0x566F53D732C5E4A2(unk_0xAF65E5A58BE87D95()) - unk_0xCB5E3AD3FD81074F(unk_0x507DA4994C3D8EBD())));
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0x527D4CB4E8181391(unk_0x507DA4994C3D8EBD());
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iVar0))
					{
						unk_0x949A95FF1987531C(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_28(23) || func_28(22)) || func_28(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
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
				unk_0x336484E66DCC4360("EXTRASUNNY");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				unk_0x336484E66DCC4360("CLEAR");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				unk_0x336484E66DCC4360("CLOUDS");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				unk_0x336484E66DCC4360("SMOG");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				unk_0x336484E66DCC4360("OVERCAST");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				unk_0x336484E66DCC4360("RAIN");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_32(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				unk_0x336484E66DCC4360("THUNDER");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				unk_0x336484E66DCC4360("CLEARING");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				unk_0x336484E66DCC4360("XMAS");
				unk_0x3B89C082BD00A29F();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_70 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
		if ((func_28(23) || func_28(22)) || func_28(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_knife"), -1, 0);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_smg"), 300, 0);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_grenade"), 5, 0);
			unk_0x22E3FB128E67BC05(unk_0x507DA4994C3D8EBD(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_79()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_32(3, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if (((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(22)) || func_28(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				unk_0x1E57C47E025777AC(unk_0xAF65E5A58BE87D95(), 1.49f);
				unk_0xC1D4C87F0B074654();
			}
			break;
		
		case 9:
			unk_0x1E57C47E025777AC(unk_0xAF65E5A58BE87D95(), 1f);
			func_25("CHEAT_FAST_SWIM");
			func_32(3, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_32(2, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if ((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD())) || func_28(23)) || func_28(22)) || func_28(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (unk_0x1048D0AFAF445C32(unk_0x507DA4994C3D8EBD()) || (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()) && !unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())))
				{
					unk_0x97B16D7AD1680356(unk_0xAF65E5A58BE87D95(), 1.49f);
				}
				else
				{
					unk_0x97B16D7AD1680356(unk_0xAF65E5A58BE87D95(), 1f);
				}
				unk_0xC1D4C87F0B074654();
			}
			break;
		
		case 9:
			unk_0x97B16D7AD1680356(unk_0xAF65E5A58BE87D95(), 1f);
			func_25("CHEAT_FAST_RUN");
			func_32(2, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_32(1, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if (((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(22)) || func_28(1))
			{
				iLocal_47 = 9;
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (!unk_0xE5D56342B0FF1D0D(iVar0))
				{
					if (unk_0xE634CB9EE7094537(iVar0, -1) == unk_0x507DA4994C3D8EBD())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!unk_0xE5D56342B0FF1D0D(iLocal_68))
							{
								if (func_82(1))
								{
									unk_0x5774326B6DEC114A(iLocal_68, 1);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!unk_0xE5D56342B0FF1D0D(iLocal_68))
							{
								unk_0x5774326B6DEC114A(iLocal_68, 0);
								iLocal_68 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			func_25("CHEAT_SLIDEY_CARS");
			iLocal_47 = 10;
			break;
		
		case 10:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_68))
			{
				unk_0x5774326B6DEC114A(iLocal_68, 0);
				iLocal_68 = 0;
			}
			func_32(1, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		uVar0 = unk_0xF6EA6ED8FFB5B505();
		if (unk_0xFD68187442384158(uVar0))
		{
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				iVar1 = unk_0x26EA758C2A691D06(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x4658BA5921D40213(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xA34706B20AE53D17(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x6149FC3B1572A5B9(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x9C14CED64BA9A516(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xD33827A2E07C4BE6(iVar0, "door_dside_r") != -1 || unk_0xD33827A2E07C4BE6(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xD33827A2E07C4BE6(iVar0, "door_dside_r") == -1 || unk_0xD33827A2E07C4BE6(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xA34706B20AE53D17(iVar1))
					{
						if (unk_0xD33827A2E07C4BE6(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xD33827A2E07C4BE6(iVar0, "seat_dside_r") != -1 || unk_0xD33827A2E07C4BE6(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xD33827A2E07C4BE6(iVar0, "seat_dside_r") == -1 || unk_0xD33827A2E07C4BE6(iVar0, "seat_pside_r") == -1)
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
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x4658BA5921D40213(iVar1) && !unk_0xA34706B20AE53D17(iVar1))
					{
						return 0;
					}
					if (unk_0x9BEA3FC192D22438(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x6438FDFEA7CD1702(iVar0, &uVar3);
					if (!unk_0x8FA72E132AAFA62F(uVar4))
					{
						if (unk_0x3BA42EA02A10243D(uVar4) == unk_0x3BA42EA02A10243D("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
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

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xFD68187442384158(uParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
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
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
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
					if (Global_97173.f_7311.f_99.f_58[119])
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
			else if (Global_97173.f_7311.f_99.f_58[118])
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

void func_87()
{
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_32(0, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if ((((!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) || func_28(23)) || func_28(22)) || func_28(0)) || unk_0x332341B01881B470())
			{
				iLocal_46 = 9;
				return;
			}
			unk_0x2955DFEB27F45F56(unk_0xAF65E5A58BE87D95());
			unk_0xE131FC34DA8AD63F(unk_0x507DA4994C3D8EBD(), 217, 1);
			break;
		
		case 9:
			func_25("CHEAT_SUPER_JUMP");
			func_32(0, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_110() || iLocal_93 != 0) || func_13(14))
	{
		unk_0x500F4CA776CEBD0A(2, 243, 1);
	}
	func_109();
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		return;
	}
	if (unk_0x87AF94EA533AA9EA(unk_0x507DA4994C3D8EBD()))
	{
		return;
	}
	if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		return;
	}
	if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
	{
		return;
	}
	if (func_35() || unk_0xA4ADA92842355D33())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_91)
		{
			func_107();
			iLocal_91 = 1;
		}
		return;
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	if ((unk_0x695803D9947A1969(988027572, 12) || unk_0x8957F2D4DA9D6F68(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((unk_0x695803D9947A1969(-1134279030, 11) || unk_0x8957F2D4DA9D6F68(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((unk_0x695803D9947A1969(971352167, 10) || unk_0x8957F2D4DA9D6F68(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((unk_0x695803D9947A1969(-269863225, 10) || unk_0x8957F2D4DA9D6F68(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((unk_0x695803D9947A1969(458579068, 12) || unk_0x8957F2D4DA9D6F68(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((unk_0x695803D9947A1969(-666513193, 12) || unk_0x8957F2D4DA9D6F68(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((unk_0x695803D9947A1969(-1245984749, 10) || unk_0x8957F2D4DA9D6F68(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((unk_0x695803D9947A1969(2076774618, 12) || unk_0x8957F2D4DA9D6F68(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((unk_0x695803D9947A1969(855685457, 9) || unk_0x8957F2D4DA9D6F68(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((unk_0x695803D9947A1969(-591395876, 12) || unk_0x8957F2D4DA9D6F68(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((unk_0x695803D9947A1969(-1399217582, 10) || unk_0x8957F2D4DA9D6F68(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((unk_0x695803D9947A1969(-375917581, 10) || unk_0x8957F2D4DA9D6F68(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((unk_0x695803D9947A1969(-2124307881, 10) || unk_0x8957F2D4DA9D6F68(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((unk_0x695803D9947A1969(1028964594, 9) || unk_0x8957F2D4DA9D6F68(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((unk_0x695803D9947A1969(-393416581, 11) || unk_0x8957F2D4DA9D6F68(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((unk_0x695803D9947A1969(-296509791, 8) || unk_0x8957F2D4DA9D6F68(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((unk_0x695803D9947A1969(1120820643, 7) || unk_0x8957F2D4DA9D6F68(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((unk_0x695803D9947A1969(-421458016, 9) || unk_0x8957F2D4DA9D6F68(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((unk_0x695803D9947A1969(372390926, 12) || unk_0x8957F2D4DA9D6F68(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((unk_0x695803D9947A1969(606506837, 8) || unk_0x8957F2D4DA9D6F68(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((unk_0x695803D9947A1969(453014206, 12) || unk_0x8957F2D4DA9D6F68(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((unk_0x695803D9947A1969(1773187142, 9) || unk_0x8957F2D4DA9D6F68(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((unk_0x695803D9947A1969(1173296014, 10) || unk_0x8957F2D4DA9D6F68(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((unk_0x695803D9947A1969(-381269753, 10) || unk_0x8957F2D4DA9D6F68(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((unk_0x695803D9947A1969(-2023988698, 11) || unk_0x8957F2D4DA9D6F68(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((unk_0x695803D9947A1969(-835863906, 12) || unk_0x8957F2D4DA9D6F68(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((unk_0x695803D9947A1969(1958387485, 12) || unk_0x8957F2D4DA9D6F68(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((unk_0x695803D9947A1969(-903985180, 9) || unk_0x8957F2D4DA9D6F68(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((unk_0x695803D9947A1969(2087642905, 9) || unk_0x8957F2D4DA9D6F68(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((unk_0x695803D9947A1969(1257820019, 10) || unk_0x8957F2D4DA9D6F68(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((unk_0x695803D9947A1969(1540206179, 7) || unk_0x8957F2D4DA9D6F68(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((unk_0x695803D9947A1969(115565392, 16) || unk_0x8957F2D4DA9D6F68(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((unk_0x695803D9947A1969(-1276513277, 8) || unk_0x8957F2D4DA9D6F68(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((unk_0x695803D9947A1969(2040433593, 9) || unk_0x8957F2D4DA9D6F68(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(16))
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

void func_90()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_64 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_64 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(18))
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

void func_91()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x332341B01881B470())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_28(23) || func_28(21)) || func_28(17)) || func_67(0)) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) || !unk_0x59CDBA417E0AD083())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 0)) || unk_0x25531002BCF0D968(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_63 = 2;
}

void func_92()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(16))
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

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0xAF65E5A58BE87D95()) };
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_28(23) || func_28(21)) || func_28(15)) || Var0.f_2 <= -170f)
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

void func_94()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_28(23) || func_28(21)) || func_28(14)) || func_67(17)) || unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_60 = 4;
}

void func_95()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(13))
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

void func_96()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(12))
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

void func_97()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(11))
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

void func_98()
{
	if ((((func_28(23) || func_28(22)) || func_28(3)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_99()
{
	if ((((func_28(23) || func_28(22)) || func_28(2)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_100()
{
	if ((func_28(23) || func_28(22)) || func_28(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_101()
{
	if (((func_28(23) || func_28(22)) || func_28(0)) || unk_0x332341B01881B470())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

int func_102()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_45 == 1)
	{
		if (((((func_13(9) || unk_0x25531002BCF0D968(joaat("barry1")) > 0) || unk_0x25531002BCF0D968(joaat("tennis")) > 0) || func_28(23)) || func_28(22)) || func_28(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_66 = iParam0;
		sLocal_69 = sParam1;
		iLocal_45 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_18338[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_24691, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_24692)
			{
				unk_0xCD27BF29FB9012E2(&Global_24691, iParam0);
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
			unk_0xCD27BF29FB9012E2(&Global_24691, iParam0);
			iLocal_92 = 1;
			return 1;
		}
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_79[iVar0] != -1)
		{
			unk_0x183A54D9B60DAC36(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()
{
	if (func_13(14) || (!unk_0x8D4100BAA46EE198() && iLocal_93 != 0))
	{
		iLocal_93 = unk_0xF976C624234A4AA8();
	}
	if (iLocal_93 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0xF976C624234A4AA8() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
}

int func_110()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

void func_111()
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

void func_112()
{
	unk_0xBCA5E613960DE570(0);
	if (iLocal_63 == 5)
	{
		func_38();
	}
	if (iLocal_64 == 5)
	{
		func_47(1);
	}
	if (iLocal_62 == 5 || iLocal_65 == 5)
	{
		unk_0x1580B26E8449D082(1f);
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (iLocal_61 == 5)
		{
			unk_0x60D71C675384BFB1(unk_0xAF65E5A58BE87D95(), 0);
			unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x97B16D7AD1680356(unk_0xAF65E5A58BE87D95(), 1f);
		unk_0x1E57C47E025777AC(unk_0xAF65E5A58BE87D95(), 1f);
	}
	unk_0xEAF2311B13C121CB(0);
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	unk_0x883793591E631A3B();
}

