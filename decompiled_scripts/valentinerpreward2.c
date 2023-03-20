#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = 0;
	int iLocal_12 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.29.10";
	iLocal_10 = -1;
	unk_0xFF9F94FD851C212A(0);
	unk_0x20A629A7D3DC97F2();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x09560C7DE2A384BD() + 10000;
	while (unk_0x09560C7DE2A384BD() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_69())
		{
			func_68();
			if (bLocal_2)
			{
				unk_0x892A8C0426DC3D40(0f, 0.23f);
				unk_0xB8662CE6B21E98E9(255, 255, 255, 255);
				func_67(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x1DAD7CE53BEE7710())
		{
			func_66();
			func_54();
			func_51();
			func_50();
			func_45();
			func_42();
			func_32();
			func_27();
			func_26();
			func_25();
			func_21();
			func_10();
			func_8();
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x82706E6C897B0FA1();
}

void func_1()
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	var uVar23;
	
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 4);
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 165)
		{
			if (unk_0x6A4B863200ABAA44(1, iVar0, &Var2, 21))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					if (((func_7() == 999 || func_7() == -1) && (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357()))) && Var2.f_14 == 1)
					{
						func_4();
						func_3(1);
						uVar23 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
						unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
						unk_0x2F2948A2506AA404(&uVar23);
					}
					if ((func_7() == 999 || func_7() == -1) && Var2.f_14 == 1)
					{
						func_2();
					}
				}
			}
		}
		iVar0++;
	}
}

void func_2()
{
	var uVar0[100];
	int iVar101;
	int iVar102;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		iVar101 = unk_0x0CEAB87805B17F2E(unk_0xA16EC202D9D35357(), &uVar0);
	}
	iVar102 = 0;
	while (iVar102 < iVar101)
	{
		if (unk_0x538DF9E5B1DF01EB(uVar0[iVar102]))
		{
			if (!unk_0x88C08C44042AD901(uVar0[iVar102]) == 1)
			{
				if (!unk_0x22349EC06EA5B08B(uVar0[iVar102]) || !unk_0xD8233CB95CB48A7C(uVar0[iVar102], 0))
				{
					if (unk_0x1DAD7CE53BEE7710())
					{
						if (unk_0xFD9706CAB35EA810(uVar0[iVar102]))
						{
							unk_0x7B9576B4E099FB1F(uVar0[iVar102], 0, 1);
						}
					}
					else
					{
						unk_0x7B9576B4E099FB1F(uVar0[iVar102], 1, 1);
					}
				}
				if (!unk_0xE44A580B551C3645(uVar0[iVar102]))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), uVar0[iVar102], 1))
					{
						unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
					}
				}
				if (unk_0xD8233CB95CB48A7C(uVar0[iVar102], 0))
				{
					unk_0x2F2948A2506AA404(&(uVar0[iVar102]));
				}
			}
		}
		iVar102++;
	}
}

void func_3(int iParam0)
{
	Global_2435499 = iParam0;
}

void func_4()
{
	if (func_6() == 0 || unk_0x2B0FFD431FD5A9FA())
	{
		func_5(1);
		unk_0x7D831457C487078A(0);
		unk_0x7D831457C487078A(0);
	}
}

void func_5(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_6()
{
	return Global_1312466.f_20;
}

int func_7()
{
	return Global_24446;
}

void func_8()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 9);
	if (func_9())
	{
		if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_83 == 4 && !iLocal_12)
		{
			if ((((unk_0xEEADA3E26E2DEB63() || unk_0xF930E01864DCE87F()) || unk_0xED66D4B5F258FF93()) || unk_0x084461AB7631806A()) || unk_0x089B7DB946128CC1())
			{
				unk_0xAAA6E267B33C0CFB(42 + 1, 0, 0);
			}
			iLocal_12 = 1;
		}
	}
	else
	{
		iLocal_12 = 0;
	}
}

bool func_9()
{
	return Global_2428577.f_629;
}

void func_10()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 8);
	if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_326 && (!func_19() || func_18()))
	{
		if (Global_1312416.f_1 == 1)
		{
			if (Global_1312416)
			{
				Global_1312416 = 0;
				func_15();
				if ((!unk_0x7A75BEF6DA1EDF3D() && !Global_2428577.f_711) && !func_11(unk_0x1788E93557766241()))
				{
					Global_973956 = 0;
				}
			}
			Global_1312416.f_1 = 0;
		}
	}
}

int func_11(int iParam0)
{
	if (func_12(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_13(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0);
}

bool func_14(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

void func_15()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_17())
		{
			if (func_16(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 0);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 0);
			}
			unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 1f);
			unk_0x7622D42AC5B41A4A(0);
			unk_0x5687AEB601657A7E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xAD7D800044E4059F(0);
			}
		}
		else
		{
			if (func_16(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 0);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 1);
				unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xAD7D800044E4059F(1);
				}
			}
			unk_0x7622D42AC5B41A4A(1);
			unk_0x5687AEB601657A7E(0);
		}
	}
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
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

bool func_17()
{
	return Global_1312416;
}

bool func_18()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

int func_19()
{
	if (func_20() == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	return Global_1312466.f_18;
}

void func_21()
{
	bool bVar0;
	
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 7);
	bVar0 = false;
	if ((((unk_0x889D01384B54BCE3(Global_90094.f_1272[39], 25) || unk_0x889D01384B54BCE3(Global_90094.f_1272[40], 25)) || unk_0x889D01384B54BCE3(Global_90094.f_1272[41], 25)) || unk_0x889D01384B54BCE3(Global_90094.f_1272[42], 25)) || unk_0x889D01384B54BCE3(Global_90094.f_1272[43], 25))
	{
		bVar0 = true;
	}
	if (!bVar0 && bLocal_11)
	{
		if ((((!unk_0x889D01384B54BCE3(Global_90094.f_1272[39], 16) && !unk_0x889D01384B54BCE3(Global_90094.f_1272[40], 16)) && !unk_0x889D01384B54BCE3(Global_90094.f_1272[41], 16)) && !unk_0x889D01384B54BCE3(Global_90094.f_1272[42], 16)) && !unk_0x889D01384B54BCE3(Global_90094.f_1272[43], 16))
		{
			if (Global_1312416.f_1 == 1)
			{
				func_22(0);
				Global_1312416.f_1 = 0;
			}
		}
	}
	bLocal_11 = bVar0;
}

void func_22(int iParam0)
{
	if (func_17())
	{
		if (iParam0 == 1)
		{
			if (Global_2446992.f_4236 == -1)
			{
				Global_2446992.f_4236 = 60000;
			}
			func_24(&(Global_2446992.f_4234), 0, 0);
			if (Global_2446992.f_4239 == -1)
			{
				Global_2446992.f_4239 = 10000;
			}
			func_24(&(Global_2446992.f_4237), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_15();
		}
		if ((!unk_0x7A75BEF6DA1EDF3D() && !func_23()) && !func_11(unk_0x1788E93557766241()))
		{
			Global_973956 = 0;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 0;
	}
}

bool func_23()
{
	return Global_2428577.f_711;
}

void func_24(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

void func_25()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 6);
	if (iLocal_10 == -1)
	{
		if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, 0))
		{
			if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_69.f_2, 4))
			{
				iLocal_10 = Global_2410646.f_584;
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, 0))
	{
		if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_69.f_2, 4))
		{
			if (iLocal_10 == Global_2410646.f_584)
			{
				Global_2410646.f_584 = -1;
				unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_69.f_2), 4);
				iLocal_10 = -1;
			}
			else
			{
				iLocal_10 = -1;
			}
		}
		else
		{
			iLocal_10 = -1;
		}
	}
}

void func_26()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 5);
	if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_325 && !func_19())
	{
		if (Global_1312416.f_1 == 1)
		{
			if (Global_1312416)
			{
				Global_1312416 = 0;
				func_15();
				if ((!unk_0x7A75BEF6DA1EDF3D() && !Global_2428577.f_711) && !func_11(unk_0x1788E93557766241()))
				{
					Global_973956 = 0;
				}
			}
			Global_1312416.f_1 = 0;
		}
	}
}

void func_27()
{
	if (unk_0x1DC4113FA381E26C("AM_KING_OF_THE_CASTLE", -1, 1, 0) || unk_0x1DC4113FA381E26C("AM_CHALLENGES", -1, 1, 0))
	{
		if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 0))
		{
			if (!func_31(&uLocal_8))
			{
				func_30(&uLocal_8, 0, 0);
			}
			else if (func_29(&uLocal_8, 1500000, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 0);
			}
		}
	}
	else
	{
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 0);
		}
		if (func_31(&uLocal_8))
		{
			func_28(&uLocal_8);
		}
	}
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_29(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_30(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_30(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

bool func_31(var uParam0)
{
	return uParam0->f_1;
}

void func_32()
{
	var uVar0;
	var uVar1;
	
	if (!unk_0x7A75BEF6DA1EDF3D())
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			uVar0 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
			if (unk_0x22349EC06EA5B08B(uVar0))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xFD03B2968C4DD469(uVar0, &uVar1), "am_hot_target"))
				{
					if (!func_41(unk_0x1788E93557766241()))
					{
						if (func_40())
						{
							func_39();
							func_38();
						}
						unk_0x628A32FDDC40D0CD(uVar0, unk_0x1788E93557766241(), 0);
						if (func_35(unk_0x1788E93557766241()))
						{
							func_22(0);
							unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 9);
						}
					}
					else if (func_34())
					{
						func_33();
					}
				}
			}
		}
	}
}

void func_33()
{
	Global_2422491.f_613.f_10 = 0;
}

bool func_34()
{
	return Global_2422491.f_613.f_10;
}

bool func_35(int iParam0)
{
	if (iParam0 == unk_0x1788E93557766241())
	{
		if ((func_17() && !func_37()) || func_36(unk_0x1788E93557766241(), 21))
		{
			return 1;
		}
		if (func_31(&(Global_1573734.f_13)))
		{
			if (!func_29(&(Global_1573734.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_28(&(Global_1573734.f_13));
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 9);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

bool func_37()
{
	return Global_1312416.f_1;
}

void func_38()
{
	Global_2422491.f_613.f_10 = 1;
}

void func_39()
{
	if (func_40())
	{
		Global_2422491.f_613.f_16 = 1;
	}
}

int func_40()
{
	if (Global_2422491.f_613.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

void func_42()
{
	var uVar0;
	
	if (Global_2429337.f_3493)
	{
		uVar0 = unk_0xB49BA83A5C224F40();
		if (unk_0x538DF9E5B1DF01EB(uVar0))
		{
			if (unk_0xECFECDAD51A6184F(uVar0, 0))
			{
				if (unk_0x67BE6A47B59A2390("Veh_Modded_By_Player", 3))
				{
					if (unk_0x53D28141CF743B83(uVar0, "Veh_Modded_By_Player"))
					{
						if (unk_0xD0997DAAAB203234(uVar0, "Veh_Modded_By_Player") != unk_0xB793F1A0B6CC4AE1(unk_0xF3E5891C26514A74(unk_0x1788E93557766241())))
						{
							if (!Global_2429337.f_3491)
							{
								Global_2429337.f_3493 = 0;
								Global_2429337.f_3494 = 0;
							}
							else
							{
								func_43(&(Global_2429337.f_3085));
								Global_2429337.f_3496 = { 0f, 0f, 0f };
								Global_2429337.f_3499 = 0f;
								Global_2429337.f_3491 = 0;
								Global_2429337.f_3506 = 0;
								Global_2429337.f_3493 = 0;
								Global_2429337.f_3494 = 0;
							}
						}
					}
				}
			}
		}
	}
}

void func_43(var uParam0)
{
	func_44(uParam0);
	uParam0->f_54 = -1;
	uParam0->f_55 = 0f;
	uParam0->f_56 = 0;
	uParam0->f_56.f_1 = 0;
	uParam0->f_56.f_2 = 0;
	uParam0->f_56.f_3 = 0;
	uParam0->f_56.f_4 = 0;
	uParam0->f_56.f_5 = 0;
	uParam0->f_56.f_6 = 0;
	uParam0->f_56.f_7 = 0;
	uParam0->f_56.f_8 = 0;
	uParam0->f_56.f_9 = 0;
	uParam0->f_56.f_10 = 0;
	uParam0->f_56.f_11 = 0;
	uParam0->f_56.f_12 = 0;
	uParam0->f_70 = 0;
	uParam0->f_69 = 0;
	uParam0->f_71 = -1;
}

void func_44(var uParam0)
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

void func_45()
{
	struct<13> Var0;
	int iVar13;
	
	if (!unk_0x7A75BEF6DA1EDF3D())
	{
		if ((func_49() || func_48()) || func_47())
		{
			if (func_46() == 7 || func_46() == 9)
			{
				if (Global_2429337.f_1.f_835 <= 0)
				{
					Global_2429337.f_1.f_835 = 1;
				}
				if (Global_2428577.f_617)
				{
					if (Global_2429337.f_1.f_835 > 1)
					{
						Global_2429337.f_1.f_835 = 1;
						iVar13 = 0;
						while (iVar13 < 32)
						{
							Global_2429337.f_1.f_417[iVar13 /*13*/] = { Var0 };
							iVar13++;
						}
					}
				}
			}
		}
	}
}

int func_46()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173;
}

var func_47()
{
	return Global_2428577.f_613;
}

var func_48()
{
	return Global_2428577.f_9;
}

var func_49()
{
	return Global_2428577.f_746;
}

void func_50()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 3);
	if (!func_31(&uLocal_6))
	{
		func_30(&uLocal_6, 1, 0);
	}
	else if (func_29(&uLocal_6, 2000, 1))
	{
		if (func_16(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xBDA58D5914C57881())
			{
				if (!unk_0x01F2C76388A112CD(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
					{
						if (func_29(&uLocal_6, 5000, 1))
						{
							unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 1);
							func_28(&uLocal_6);
						}
					}
					else
					{
						func_28(&uLocal_6);
					}
				}
				else
				{
					func_28(&uLocal_6);
				}
			}
			else
			{
				func_28(&uLocal_6);
			}
		}
		else
		{
			func_28(&uLocal_6);
		}
	}
}

void func_51()
{
	int iVar0;
	
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 2);
	iVar0 = func_53(joaat("mpply_bg_script_int_00"));
	if (!unk_0x889D01384B54BCE3(iVar0, 0))
	{
		func_52(joaat("mpply_timetrial_completed_week"), -1);
		unk_0xD0E2BFCE93AE3ABD(&iVar0, 0);
		func_52(joaat("mpply_bg_script_int_00"), iVar0);
	}
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
}

int func_53(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54()
{
	if (func_65() == 26)
	{
		unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 1);
		func_55(func_64());
	}
}

void func_55(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_63(1269, uParam0, 0) > 30)
	{
		func_61(1269, 30, uParam0);
	}
	if (func_63(1270, uParam0, 0) > 15)
	{
		func_61(1270, 15, uParam0);
	}
	if (func_63(1271, uParam0, 0) > 5)
	{
		func_61(1271, 5, uParam0);
	}
	if (func_63(65, uParam0, 0) > 10)
	{
		func_61(65, 10, uParam0);
	}
	if (func_63(66, uParam0, 0) > 10)
	{
		func_61(66, 10, uParam0);
	}
	if (func_63(1092, uParam0, 0) > 20)
	{
		func_61(1092, 20, uParam0);
	}
	if (func_63(1872, uParam0, 0) > 10)
	{
		func_61(1872, 10, uParam0);
	}
	if (func_63(1873, uParam0, 0) > 10)
	{
		func_61(1873, 10, uParam0);
	}
	if (func_63(1874, uParam0, 0) > 10)
	{
		func_61(1874, 10, uParam0);
	}
	if (func_63(1875, uParam0, 0) > 10)
	{
		func_61(1875, 10, uParam0);
	}
	if (func_63(1876, uParam0, 0) > 10)
	{
		func_61(1876, 10, uParam0);
	}
	iVar0 = unk_0xF2DB717A73826179((50f * Global_262145.f_98));
	if (func_63(811, uParam0, 0) > iVar0)
	{
		func_61(811, iVar0, uParam0);
	}
	iVar3 = 0;
	while (iVar3 <= 68)
	{
		iVar2 = func_60(iVar3);
		if (unk_0x5F299C0D4A092A76(unk_0xA16EC202D9D35357(), iVar2, &iVar1))
		{
			if (func_59(iVar2, uParam0) > iVar1)
			{
				func_56(iVar2, iVar1, uParam0);
			}
		}
		iVar3++;
	}
	if (func_63(73, uParam0, 0) > 100)
	{
		func_61(73, 0, uParam0);
	}
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 < 3025)
	{
		func_61(iVar0, iParam1, uParam2);
	}
}

int func_57(int iParam0)
{
	if (func_7() == 0 || func_58() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				return 253;
				break;
			
			case joaat("weapon_combatpistol"):
				return 263;
				break;
			
			case joaat("weapon_appistol"):
				return 283;
				break;
			
			case joaat("weapon_microsmg"):
				return 293;
				break;
			
			case joaat("weapon_smg"):
				return 303;
				break;
			
			case joaat("weapon_assaultrifle"):
				return 322;
				break;
			
			case joaat("weapon_carbinerifle"):
				return 331;
				break;
			
			case joaat("weapon_advancedrifle"):
				return 340;
				break;
			
			case joaat("weapon_mg"):
				return 349;
				break;
			
			case joaat("weapon_combatmg"):
				return 358;
				break;
			
			case joaat("weapon_pumpshotgun"):
				return 376;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return 386;
				break;
			
			case joaat("weapon_assaultshotgun"):
				return 404;
				break;
			
			case joaat("weapon_sniperrifle"):
				return 423;
				break;
			
			case joaat("weapon_grenadelauncher"):
				return 441;
				break;
			
			case joaat("weapon_rpg"):
				return 448;
				break;
			
			case joaat("weapon_minigun"):
				return 457;
				break;
			
			case joaat("weapon_grenade"):
				return 465;
				break;
			
			case joaat("weapon_smokegrenade"):
				return 474;
				break;
			
			case joaat("weapon_stickybomb"):
				return 482;
				break;
			
			case joaat("weapon_stungun"):
				return 414;
				break;
			
			case joaat("gadget_parachute"):
				return 579;
				break;
			
			case joaat("weapon_molotov"):
				return 491;
				break;
			
			case joaat("weapon_petrolcan"):
				return 582;
				break;
			
			case joaat("weapon_knife"):
				return 195;
				break;
			
			case joaat("weapon_nightstick"):
				return 202;
				break;
			
			case joaat("weapon_bat"):
				return 237;
				break;
			
			case joaat("weapon_heavysniper"):
				return 432;
				break;
			
			case joaat("weapon_golfclub"):
				return 244;
				break;
			
			case joaat("weapon_crowbar"):
				return 209;
				break;
			
			case joaat("weapon_hammer"):
				return 230;
				break;
			
			case joaat("weapon_pistol50"):
				return 273;
				break;
			
			case -572349828:
				return 367;
				break;
			
			case joaat("weapon_assaultsmg"):
				return 313;
				break;
			
			case 392730790:
				return 435;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				return 395;
				break;
			
			case joaat("weapon_bottle"):
				return 1730;
				break;
			
			case joaat("weapon_specialcarbine"):
				return 2561;
				break;
			
			case joaat("weapon_snspistol"):
				return 1740;
				break;
			
			case joaat("weapon_heavypistol"):
				return 2551;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 2571;
				break;
			
			case joaat("weapon_gusenberg"):
				return 2581;
				break;
			
			case joaat("weapon_vintagepistol"):
				return 2864;
				break;
			
			case joaat("weapon_flaregun"):
				return 2657;
				break;
			
			case joaat("weapon_firework"):
				return 2874;
				break;
			
			case joaat("weapon_musket"):
				return 2884;
				break;
			
			case joaat("weapon_dagger"):
				return 2854;
				break;
			
			case joaat("weapon_heavyshotgun"):
				return 2962;
				break;
			
			case joaat("weapon_marksmanrifle"):
				return 2972;
				break;
			
			case joaat("weapon_hominglauncher"):
				return 2996;
				break;
			
			case joaat("weapon_proxmine"):
				return 2988;
				break;
			
			case joaat("weapon_combatpdw"):
				return 3006;
				break;
			
			case joaat("weapon_knuckle"):
				return 3013;
				break;
			
			case joaat("weapon_marksmanpistol"):
				return 3023;
				break;
			
			case joaat("weapon_hatchet"):
				return 2980;
				break;
			}
	}
	return 3025;
}

int func_58()
{
	return Global_24447;
}

int func_59(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 < 3025)
	{
		return func_63(iVar0, uParam1, 0);
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 34:
			return joaat("weapon_knife");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_combatpistol");
			break;
		
		case 3:
			return joaat("weapon_appistol");
			break;
		
		case 5:
			return joaat("weapon_smg");
			break;
		
		case 7:
			return joaat("weapon_microsmg");
			break;
		
		case 8:
			return joaat("weapon_assaultrifle");
			break;
		
		case 9:
			return joaat("weapon_carbinerifle");
			break;
		
		case 11:
			return joaat("weapon_advancedrifle");
			break;
		
		case 12:
			return joaat("weapon_mg");
			break;
		
		case 13:
			return joaat("weapon_combatmg");
			break;
		
		case 15:
			return joaat("weapon_stickybomb");
			break;
		
		case 16:
			return joaat("weapon_grenade");
			break;
		
		case 17:
			return joaat("weapon_smokegrenade");
			break;
		
		case 60:
			return joaat("weapon_proxmine");
			break;
		
		case 18:
			return joaat("weapon_remotesniper");
			break;
		
		case 20:
			return joaat("weapon_sniperrifle");
			break;
		
		case 21:
			return joaat("weapon_heavysniper");
			break;
		
		case 56:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 22:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 24:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 25:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 55:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 26:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 27:
			return joaat("weapon_rpg");
			break;
		
		case 28:
			return joaat("weapon_minigun");
			break;
		
		case 61:
			return joaat("weapon_hominglauncher");
			break;
		
		case 31:
			return joaat("weapon_stungun");
			break;
		
		case 33:
			return joaat("gadget_parachute");
			break;
		
		case 35:
			return joaat("weapon_nightstick");
			break;
		
		case 43:
			return joaat("weapon_petrolcan");
			break;
		
		case 45:
			return joaat("weapon_bottle");
			break;
		
		case 46:
			return joaat("weapon_specialcarbine");
			break;
		
		case 47:
			return joaat("weapon_snspistol");
			break;
		
		case 48:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 49:
			return joaat("weapon_heavypistol");
			break;
		
		case 23:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 50:
			return joaat("weapon_gusenberg");
			break;
		
		case 51:
			return joaat("weapon_dagger");
			break;
		
		case 52:
			return joaat("weapon_vintagepistol");
			break;
		
		case 57:
			return joaat("weapon_flaregun");
			break;
		
		case 53:
			return joaat("weapon_musket");
			break;
		
		case 54:
			return joaat("weapon_firework");
			break;
		
		case 58:
			return joaat("weapon_hatchet");
			break;
		
		case 59:
			return joaat("weapon_railgun");
			break;
		
		case 64:
			return joaat("weapon_combatpdw");
			break;
		
		case 62:
			return joaat("weapon_knuckle");
			break;
		
		case 63:
			return joaat("weapon_marksmanpistol");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_61(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_62(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
}

int func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_64();
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

int func_63(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_62(uParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_64()
{
	return Global_1312729;
}

int func_65()
{
	return Global_1315824;
}

void func_66()
{
	unk_0xD0E2BFCE93AE3ABD(&uLocal_1, 0);
	if (!iLocal_5)
	{
		if (Global_1583548.f_140)
		{
			if (func_16(unk_0x1788E93557766241(), 1, 1))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					uLocal_4 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x67BE6A47B59A2390("Player_Vehicle", 3) && unk_0x53D28141CF743B83(uLocal_4, "Player_Vehicle"))
					{
					}
					else if (unk_0x67BE6A47B59A2390("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x0AB30E4FF0AE0C22(uLocal_4, "Not_Allow_As_Saved_Veh", 1);
						iLocal_5 = 1;
					}
				}
			}
		}
	}
	else if (!Global_1583548.f_140)
	{
		iLocal_5 = 0;
	}
}

void func_67(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x9FBED7BEC6BDE9B6(sParam3);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

void func_68()
{
	if (!bLocal_2)
	{
		if (unk_0x2B0FFD431FD5A9FA())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x1453F50088A91E4E(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x1453F50088A91E4E(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0x1453F50088A91E4E(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0x1453F50088A91E4E(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0x1453F50088A91E4E(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x2B0FFD431FD5A9FA())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x1453F50088A91E4E(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x1453F50088A91E4E(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0x1453F50088A91E4E(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0x1453F50088A91E4E(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0x1453F50088A91E4E(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_69()
{
	return unk_0xD5883629B43B6F20(-1762644250);
}

