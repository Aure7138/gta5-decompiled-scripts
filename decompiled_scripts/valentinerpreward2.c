#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	bool bLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.47.03";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_27 = -1;
	iLocal_28 = -1;
	iLocal_50 = -1;
	iLocal_53 = 261;
	unk_0x9980AE643A60F372(0);
	unk_0x84CFE9237092E41B();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315799 = unk_0x36163153849DFDA1(sLocal_0);
	iVar0 = unk_0xE3903F59E2F22150() + 10000;
	while (unk_0xE3903F59E2F22150() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_193())
		{
			func_192();
			if (bLocal_1)
			{
				unk_0xC56FB1634FB1F447(0f, 0.23f);
				unk_0x762F7A52B1325903(255, 255, 255, 255);
				func_191(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0xB331FCEB94EB05C8() && Global_2456885.f_3)
		{
			func_190();
			func_189();
			func_186();
			func_185();
			func_169();
			func_168();
			func_159();
			func_158();
			func_156();
			func_155();
			func_150();
			func_147();
			func_144();
			func_126();
			func_125();
			func_113();
			func_111();
			func_110();
			func_106();
		}
		if (unk_0xF5DB888C353E2BED())
		{
			func_57();
			func_50();
		}
		func_42();
		func_38();
		func_18();
		if (unk_0x289064CB38B560AA())
		{
			func_17();
			func_15();
			func_1();
		}
		else
		{
			iLocal_52 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x5894DC159447E10A();
}

void func_1()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (unk_0x1B094AC15936B3DB(iVar3))
		{
			iVar4 = unk_0xEB9DC13235C0B345(iVar3);
			if (unk_0xC4DEA49C5B465481(iVar4))
			{
				if (func_14(iVar4, 0) || func_13(iVar4))
				{
					bVar2 = true;
				}
				iVar1++;
				if (iVar1 > 4)
				{
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (func_11() && !iLocal_52)
		{
			iVar6 = Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211;
			if (Global_2449538.f_2846.f_214 == -1)
			{
				Global_2449538.f_2846.f_214 = Global_4456448.f_155687[iVar6];
			}
			if (Global_1312791 || Global_1657075)
			{
				if (!func_14(unk_0x95B959F18401C09A(), 0) && !func_13(unk_0x95B959F18401C09A()))
				{
					if (func_10())
					{
						if (Global_2449538.f_2846.f_214 < 28 || Global_2449538.f_2846.f_214 > 35)
						{
							Global_2449538.f_2846.f_214 = 29;
						}
					}
					else if (func_9())
					{
						if (Global_2449538.f_2846.f_214 < 37 || Global_2449538.f_2846.f_214 > 44)
						{
							Global_2449538.f_2846.f_214 = 39;
						}
					}
					else if (func_8(Global_4456448.f_138474))
					{
						if (Global_2449538.f_2846.f_214 < 67 || Global_2449538.f_2846.f_214 > 72)
						{
							Global_2449538.f_2846.f_214 = 68;
						}
					}
					if (func_7(0))
					{
						if (!func_4(174, -1))
						{
							Global_2449538.f_2846.f_220 = 1;
						}
					}
					iVar0 = 0;
					while (iVar0 < 32)
					{
						iVar7 = iVar0;
						if (unk_0x1B094AC15936B3DB(iVar7))
						{
							iVar8 = unk_0xEB9DC13235C0B345(iVar7);
							if ((unk_0xC4DEA49C5B465481(iVar8) && !func_14(iVar8, 0)) && !func_13(iVar8))
							{
								if (func_2(iVar0))
								{
									Global_2449538.f_2846.f_215[iVar5] = unk_0x771810413D71C060(iVar8);
									iVar5++;
								}
							}
						}
						iVar0++;
					}
					iLocal_52 = 1;
				}
			}
		}
	}
}

int func_2(int iParam0)
{
	if (func_9())
	{
		return 1;
	}
	else if (func_3())
	{
		return 1;
	}
	else if (func_8(Global_4456448.f_138474))
	{
		return 1;
	}
	else if (func_10())
	{
		if (!func_7(0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_3()
{
	return Global_2448756.f_16;
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312745;
}

bool func_7(int iParam0)
{
	if (7 == iParam0)
	{
		return (Global_4456448.f_138474 == Global_262145.f_8918[iParam0] || Global_4456448.f_138474 == Global_262145.f_8927[iParam0]);
	}
	return Global_4456448.f_138474 == Global_262145.f_8918[iParam0];
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5020[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_9()
{
	return Global_2448756.f_14;
}

bool func_10()
{
	return Global_4456448.f_1 == 0;
}

int func_11()
{
	var uVar0;
	int iVar1;
	
	if (((!func_10() && !func_9()) && !func_3()) && !func_8(Global_4456448.f_138474))
	{
		return 0;
	}
	uVar0 = unk_0x72B85B341ADBE9DE();
	iVar1 = Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211;
	if (func_12(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x0E4018692D92041D(Global_969025.f_1, 20))
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0x0E4018692D92041D(Global_969025.f_1, 21))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(Global_969025.f_1, 22))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x0E4018692D92041D(Global_969025.f_1, 23))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_13(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_39.f_18, 14);
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

void func_15()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (func_16(Global_4456448.f_138474) != 2)
	{
		return;
	}
	if (!Global_1312792)
	{
		iLocal_49 = 0;
	}
	if (!unk_0x0E4018692D92041D(iLocal_49, 0))
	{
		if (!Global_1312792)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			uVar1 = unk_0xDD4FFAA17341D382(iVar0);
			if (!unk_0x1B094AC15936B3DB(uVar1))
			{
			}
			else
			{
				uVar2 = unk_0xEB9DC13235C0B345(iVar1);
				uVar3 = unk_0x378BD4B3881338C2(uVar2);
				if (unk_0xBC2FC12AD0FBF72E(uVar3))
				{
				}
				else
				{
					Var4 = { unk_0xFBB1F99A825CAB09(uVar3, 1) };
					if ((unk_0xA4EE7D490EB4E0C9(Var4) || unk_0x90D2E06562D440E1(Var4) == 0) || unk_0x09D41AEC5DBEC2D9(Var4) == 0)
					{
						unk_0x3C3C75D27DE5486B(uVar3);
						if (unk_0xF0D230FB550CD6EB(uVar3, 1))
						{
							uVar7 = unk_0xF2C96862595654B4(uVar3, 1);
							if (unk_0x91D5C8283D19AF49(uVar7, 0))
							{
								unk_0x3C3C75D27DE5486B(uVar7);
								if (unk_0x0A81FE3D92AE2AC9(uVar7))
								{
									unk_0x0CDD28A9DFCE2FCE(uVar7, 1, 0);
								}
							}
						}
						if (unk_0x0A81FE3D92AE2AC9(uVar3))
						{
							unk_0x0CDD28A9DFCE2FCE(uVar3, 1, 0);
						}
					}
				}
			}
			iVar0++;
		}
		unk_0x8950ED5730F62EE8(&iLocal_49, 0);
	}
}

int func_16(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5020[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17()
{
	var uVar0;
	
	if (func_16(Global_4456448.f_138474) != 2)
	{
		return;
	}
	uVar0 = unk_0x33CD235DF1E6A94E();
	if (!Global_1312792)
	{
		unk_0xCE689A8E8C42ED78(&uLocal_48, 4);
		if (unk_0x1D819CC3EBBF0BFB(uVar0, 342, 1))
		{
			unk_0x8950ED5730F62EE8(&uLocal_48, 0);
		}
		if (unk_0x1D819CC3EBBF0BFB(uVar0, 252, 1))
		{
			unk_0x8950ED5730F62EE8(&uLocal_48, 1);
		}
		if (unk_0x1D819CC3EBBF0BFB(uVar0, 141, 1))
		{
			unk_0x8950ED5730F62EE8(&uLocal_48, 3);
		}
		if (unk_0x1D819CC3EBBF0BFB(uVar0, 184, 1))
		{
			unk_0x8950ED5730F62EE8(&uLocal_48, 3);
		}
		unk_0x5FEE418CE11E6DDE(uVar0, 342, true);
		unk_0x5FEE418CE11E6DDE(uVar0, 252, false);
		unk_0x5FEE418CE11E6DDE(uVar0, 141, false);
		unk_0x5FEE418CE11E6DDE(uVar0, 184, true);
	}
	else if (!unk_0x0E4018692D92041D(uLocal_48, 4))
	{
		unk_0x5FEE418CE11E6DDE(uVar0, 342, unk_0x0E4018692D92041D(iLocal_48, 0));
		unk_0x5FEE418CE11E6DDE(uVar0, 252, unk_0x0E4018692D92041D(iLocal_48, 1));
		unk_0x5FEE418CE11E6DDE(uVar0, 141, unk_0x0E4018692D92041D(iLocal_48, 3));
		unk_0x5FEE418CE11E6DDE(uVar0, 184, unk_0x0E4018692D92041D(iLocal_48, 3));
		unk_0x8950ED5730F62EE8(&iLocal_48, 4);
	}
}

void func_18()
{
	if (unk_0x289064CB38B560AA())
	{
		return;
	}
	if (func_36(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (Global_4008468 >= 261 && unk_0xCE3CFF625BEBAA04("CMOD_MOD_T", &(Global_17411.f_1)))
		{
			if (!iLocal_51)
			{
				func_21();
				iLocal_51 = 1;
			}
		}
		else if (iLocal_51)
		{
			func_20();
			iLocal_51 = 0;
		}
	}
	else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xCE3CFF625BEBAA04("CMOD_MOD_T", &(Global_17411.f_1)))
	{
		if (Global_2097152[func_19() /*10778*/].f_6165.f_2 >= 261)
		{
			func_21();
			iLocal_51 = 1;
		}
	}
	else if (iLocal_51)
	{
		func_20();
		iLocal_51 = 0;
	}
}

int func_19()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_95764[iVar0] = 0;
		iVar0++;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = 62;
	iVar0 = 62;
	while (iVar0 <= 94)
	{
		func_22(iVar0, 1);
		iVar0++;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_23(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = (iVar2 % 32);
		iVar1 = (iVar2 / 32);
		if (bParam1)
		{
			if (!unk_0x0E4018692D92041D(Global_95764[iVar1], iVar0))
			{
				unk_0x8950ED5730F62EE8(&(Global_95764[iVar1]), iVar0);
			}
		}
		else if (unk_0x0E4018692D92041D(Global_95764[iVar1], iVar0))
		{
			unk_0xCE689A8E8C42ED78(&(Global_95764[iVar1]), iVar0);
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 3:
			iVar0 = 0;
			break;
		
		case 61:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 58;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("slamvan"))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 62:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 61;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("slamvan"))
			{
				iVar0 = 99;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		
		case 63:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 67;
			}
			else
			{
				iVar0 = 3;
			}
			break;
		
		case 91:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 4;
			}
			break;
		
		case 65:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 31;
			}
			else
			{
				iVar0 = 5;
			}
			break;
		
		case 66:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 85;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("dominator4"))
			{
				iVar0 = 65;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("issi5"))
			{
				iVar0 = 70;
			}
			else
			{
				iVar0 = 6;
			}
			break;
		
		case 67:
			iVar0 = 7;
			break;
		
		case 90:
			iVar0 = 8;
			break;
		
		case 68:
			iVar0 = 9;
			break;
		
		case 69:
			iVar0 = 10;
			break;
		
		case 70:
			iVar0 = 11;
			break;
		
		case 71:
			iVar0 = 12;
			break;
		
		case 72:
			iVar0 = 13;
			break;
		
		case 73:
			iVar0 = 14;
			break;
		
		case 76:
			iVar0 = 15;
			break;
		
		case 77:
			if (func_34())
			{
				iVar0 = 28;
			}
			else
			{
				iVar0 = 16;
			}
			break;
		
		case 78:
			if (func_33())
			{
				iVar0 = 83;
			}
			else
			{
				iVar0 = 17;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar0 = 18;
			break;
		
		case 80:
			iVar0 = 19;
			break;
		
		case 81:
			iVar0 = 20;
			break;
		
		case 82:
			iVar0 = 21;
			break;
		
		case 83:
			iVar0 = 22;
			break;
		
		case 84:
			iVar0 = 23;
			break;
		
		case 92:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("z190"))
			{
				iVar0 = 73;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("s80"))
			{
				iVar0 = 39;
			}
			else
			{
				iVar0 = 24;
			}
			break;
		
		case 4:
			iVar0 = 25;
			break;
		
		case 6:
			if (func_32())
			{
				iVar0 = 30;
			}
			else if (func_31(Global_1323046, Global_1323047) && !unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 42;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 39;
			}
			else
			{
				iVar0 = 26;
			}
			break;
		
		case 5:
			if (func_31(Global_1323046, Global_1323047) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("avenger")))
			{
				iVar0 = 48;
			}
			else
			{
				iVar0 = 27;
			}
			break;
		
		case 7:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("oppressor2")))
			{
				iVar0 = 47;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 42;
			}
			else if (func_34())
			{
				iVar0 = 16;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("rcbandito")))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 28;
			}
			break;
		
		case 8:
			if ((func_30(Global_1323046, Global_1323047) || Global_1323046 == 44) && func_29(Global_1323045))
			{
				iVar0 = 95;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("deluxo")))
			{
				iVar0 = 43;
			}
			else if (((unk_0x541D5C57194E73C4(Global_1323045) == joaat("sc1") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("flashgt")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("zorrusso")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("locust"))
			{
				iVar0 = 38;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 43;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("toros")))
			{
				iVar0 = 75;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("bruiser2")))
			{
				iVar0 = 54;
			}
			else if ((unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus")) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus2"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus3")))
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 29;
			}
			break;
		
		case 9:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 66;
			}
			else if (func_32())
			{
				iVar0 = 26;
			}
			else if (func_31(Global_1323046, Global_1323047) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("khanjali"))
			{
				iVar0 = 70;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("flashgt"))
			{
				iVar0 = 68;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("menacer")))
			{
				iVar0 = 72;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("dynasty")))
			{
				iVar0 = 39;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("drafter")))
			{
				iVar0 = 70;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("thrax")))
			{
				iVar0 = 81;
			}
			else
			{
				iVar0 = 30;
			}
			break;
		
		case 86:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 31;
			}
			break;
		
		case 93:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("fagaloa")))
			{
				iVar0 = 38;
			}
			else if (func_28(Global_1323045))
			{
				iVar0 = 60;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("dynasty")))
			{
				iVar0 = 75;
			}
			else
			{
				iVar0 = 32;
			}
			break;
		
		case 10:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 4;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("avenger")))
			{
				iVar0 = 43;
			}
			else if ((unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus")) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus2"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus3")))
			{
				iVar0 = 34;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser3"))
			{
				iVar0 = 34;
			}
			else
			{
				iVar0 = 33;
			}
			break;
		
		case 89:
			if ((unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus")) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus2"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("brutus3")))
			{
				iVar0 = 29;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser3"))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 34;
			}
			break;
		
		case 11:
			iVar0 = 35;
			break;
		
		case 12:
			if (func_31(Global_1323046, Global_1323047) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("thruster")))
			{
				if (unk_0x541D5C57194E73C4(Global_1323045) != joaat("microlight"))
				{
					iVar0 = 77;
				}
				else
				{
					iVar0 = 69;
				}
			}
			else
			{
				iVar0 = 36;
			}
			break;
		
		case 13:
			iVar0 = 37;
			break;
		
		case 14:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("cheetah2") || func_27(Global_1323045))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("comet4"))
			{
				iVar0 = 40;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("sc1") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("flashgt"))
			{
				iVar0 = 29;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("fagaloa")))
			{
				iVar0 = 32;
			}
			else if ((unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("toros")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("zorrusso")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("locust"))
			{
				iVar0 = 29;
			}
			else
			{
				iVar0 = 38;
			}
			break;
		
		case 15:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 47;
			}
			else if (func_26())
			{
				iVar0 = 64;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gb200"))
			{
				iVar0 = 60;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 26;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("dynasty")))
			{
				iVar0 = 30;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4"))
			{
				iVar0 = 50;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("s80"))
			{
				iVar0 = 24;
			}
			else
			{
				iVar0 = 39;
			}
			break;
		
		case 16:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("comet4"))
			{
				iVar0 = 38;
			}
			else
			{
				iVar0 = 40;
			}
			break;
		
		case 17:
			iVar0 = 41;
			break;
		
		case 18:
			if (func_31(Global_1323046, Global_1323047) && !unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 26;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("strikeforce")))
			{
				iVar0 = 28;
			}
			else
			{
				iVar0 = 42;
			}
			break;
		
		case 19:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("avenger")))
			{
				iVar0 = 33;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("deluxo")))
			{
				iVar0 = 29;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 29;
			}
			else
			{
				iVar0 = 43;
			}
			break;
		
		case 20:
			iVar0 = 44;
			break;
		
		case 21:
			iVar0 = 45;
			break;
		
		case 22:
			iVar0 = 46;
			break;
		
		case 23:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 39;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("infernus2") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("ruston"))
			{
				iVar0 = 74;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("oppressor2"))
			{
				iVar0 = 28;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("zr3802"))
			{
				iVar0 = 66;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("locust"))
			{
				iVar0 = 74;
			}
			else
			{
				iVar0 = 47;
			}
			break;
		
		case 24:
			if (func_31(Global_1323046, Global_1323047) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("avenger")))
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 48;
			}
			break;
		
		case 25:
			iVar0 = 49;
			break;
		
		case 26:
			if (!func_25())
			{
				if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("oppressor") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("oppressor2"))
				{
					iVar0 = 70;
				}
				else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4"))
				{
					iVar0 = 51;
				}
				else
				{
					iVar0 = 50;
				}
			}
			else if (func_30(Global_1323046, Global_1323047) || Global_1323046 == 44)
			{
				iVar0 = 97;
			}
			else
			{
				iVar0 = 50;
			}
			break;
		
		case 27:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("neo")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4"))
			{
				iVar0 = 52;
			}
			else
			{
				iVar0 = 51;
			}
			break;
		
		case 75:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("bruiser2")))
			{
				iVar0 = 29;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("neo")))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4"))
			{
				iVar0 = 39;
			}
			else
			{
				iVar0 = 52;
			}
			break;
		
		case 87:
			iVar0 = 53;
			break;
		
		case 28:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("bruiser2")))
			{
				iVar0 = 52;
			}
			else
			{
				iVar0 = 54;
			}
			break;
		
		case 29:
			iVar0 = 55;
			break;
		
		case 30:
			iVar0 = 56;
			break;
		
		case 85:
			iVar0 = 57;
			break;
		
		case 31:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 58;
			}
			break;
		
		case 32:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("toros"))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("nebula"))
			{
				iVar0 = 65;
			}
			else
			{
				iVar0 = 59;
			}
			break;
		
		case 94:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("sc1"))
			{
				iVar0 = 65;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gb200"))
			{
				iVar0 = 39;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("michelli"))
			{
				iVar0 = 73;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("dominator3") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 91;
			}
			else if (func_28(Global_1323045))
			{
				iVar0 = 32;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("nebula"))
			{
				iVar0 = 73;
			}
			else
			{
				iVar0 = 60;
			}
			break;
		
		case 33:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 61;
			}
			break;
		
		case 34:
			iVar0 = 62;
			break;
		
		case 88:
			iVar0 = 63;
			break;
		
		case 35:
			if (func_26())
			{
				iVar0 = 39;
			}
			else
			{
				iVar0 = 64;
			}
			break;
		
		case 36:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("sc1"))
			{
				iVar0 = 60;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("dominator4"))
			{
				iVar0 = 6;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("nebula"))
			{
				iVar0 = 59;
			}
			else
			{
				iVar0 = 65;
			}
			break;
		
		case 37:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 30;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("zr3802"))
			{
				iVar0 = 47;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet3"))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 66;
			}
			break;
		
		case 38:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 3;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 68;
			}
			else
			{
				iVar0 = 67;
			}
			break;
		
		case 39:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("flashgt"))
			{
				iVar0 = 30;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("patriot2"))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 68;
			}
			break;
		
		case 40:
			if (func_25())
			{
				if (func_30(Global_1323046, Global_1323047) || Global_1323046 == 44)
				{
					iVar0 = 98;
				}
				else
				{
					iVar0 = 69;
				}
			}
			else if (((((func_24() && unk_0x541D5C57194E73C4(Global_1323045) != joaat("torero")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("havok")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("microlight")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("pyro")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("vigilante"))
			{
				iVar0 = 84;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 73;
			}
			else
			{
				iVar0 = 69;
			}
			break;
		
		case 41:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("torero"))
			{
				iVar0 = 91;
			}
			else if (func_31(Global_1323046, Global_1323047) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("khanjali"))
			{
				iVar0 = 30;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("comet4") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("pounder2"))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("oppressor2"))
			{
				iVar0 = 50;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("issi5"))
			{
				iVar0 = 6;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("drafter")))
			{
				iVar0 = 30;
			}
			else
			{
				iVar0 = 70;
			}
			break;
		
		case 42:
			iVar0 = 71;
			break;
		
		case 43:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("menacer")))
			{
				iVar0 = 30;
			}
			else
			{
				iVar0 = 72;
			}
			break;
		
		case 44:
			if (unk_0x57D74362A8BD1490(unk_0x541D5C57194E73C4(Global_1323045)))
			{
				iVar0 = 32;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("z190"))
			{
				iVar0 = 24;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("michelli"))
			{
				iVar0 = 60;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 69;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("nebula"))
			{
				iVar0 = 60;
			}
			else
			{
				iVar0 = 73;
			}
			break;
		
		case 45:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("infernus2") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("ruston"))
			{
				iVar0 = 47;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("schlagen")))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("locust"))
			{
				iVar0 = 47;
			}
			else
			{
				iVar0 = 74;
			}
			break;
		
		case 46:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("fagaloa")))
			{
				iVar0 = 84;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("schlagen")))
			{
				iVar0 = 74;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("toros")))
			{
				iVar0 = 38;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("hellion")))
			{
				iVar0 = 89;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("dynasty")))
			{
				iVar0 = 32;
			}
			else
			{
				iVar0 = 75;
			}
			break;
		
		case 47:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("issi7")))
			{
				iVar0 = 77;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon2"))
			{
				iVar0 = 77;
			}
			else
			{
				iVar0 = 76;
			}
			break;
		
		case 48:
			if (func_31(Global_1323046, Global_1323047) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("thruster")))
			{
				if (unk_0x541D5C57194E73C4(Global_1323045) != joaat("microlight"))
				{
					iVar0 = 36;
				}
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("issi7")))
			{
				iVar0 = 91;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon2"))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 77;
			}
			break;
		
		case 49:
			iVar0 = 78;
			break;
		
		case 50:
			iVar0 = 79;
			break;
		
		case 51:
			iVar0 = 80;
			break;
		
		case 52:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("tampa3"))
			{
				iVar0 = 83;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("thrax")))
			{
				iVar0 = 70;
			}
			else
			{
				iVar0 = 81;
			}
			break;
		
		case 74:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("tampa3"))
			{
				iVar0 = 95;
			}
			else if (func_33())
			{
				iVar0 = 17;
			}
			else
			{
				iVar0 = 82;
			}
			break;
		
		case 53:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("tampa3"))
			{
				iVar0 = 81;
			}
			else if (func_33())
			{
				iVar0 = 82;
			}
			else
			{
				iVar0 = 83;
			}
			break;
		
		case 54:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("xa21") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("dynasty"))
			{
				iVar0 = 91;
			}
			else if ((((func_24() || unk_0x541D5C57194E73C4(Global_1323045) == joaat("havok")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("microlight")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("pyro")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("vigilante"))
			{
				iVar0 = 69;
			}
			else if (((unk_0x541D5C57194E73C4(Global_1323045) == joaat("barrage") || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("pounder2"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("mule4"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("speedo4")))
			{
				iVar0 = 95;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("fagaloa")))
			{
				iVar0 = 75;
			}
			else
			{
				iVar0 = 84;
			}
			break;
		
		case 55:
			if (func_35(Global_1323046, Global_1323047))
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 85;
			}
			break;
		
		case 56:
			iVar0 = 86;
			break;
		
		case 57:
			iVar0 = 87;
			break;
		
		case 58:
			iVar0 = 88;
			break;
		
		case 59:
			if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("hellion")))
			{
				iVar0 = 75;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("drafter")))
			{
				iVar0 = 91;
			}
			else
			{
				iVar0 = 89;
			}
			break;
		
		case 60:
			iVar0 = 90;
			break;
		
		case 95:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gp1"))
			{
				iVar0 = 67;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("xa21") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("dynasty"))
			{
				iVar0 = 84;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("cheetah2") || func_27(Global_1323045))
			{
				iVar0 = 38;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("torero"))
			{
				iVar0 = 70;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("comet4") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("pounder2"))
			{
				iVar0 = 70;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("dominator3")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("freecrawler"))
			{
				iVar0 = 60;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("patriot2"))
			{
				iVar0 = 68;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("toros"))
			{
				iVar0 = 59;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("schlagen")))
			{
				iVar0 = 75;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("rcbandito")))
			{
				iVar0 = 28;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("bruiser3"))
			{
				iVar0 = 33;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("issi7")))
			{
				iVar0 = 76;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("drafter")))
			{
				iVar0 = 89;
			}
			else if (unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("neo")))
			{
				iVar0 = 51;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet4") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("gauntlet3"))
			{
				iVar0 = 66;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("paragon2"))
			{
				iVar0 = 76;
			}
			else
			{
				iVar0 = 91;
			}
			break;
		
		case 96:
			iVar0 = 92;
			break;
		
		case 97:
			iVar0 = 93;
			break;
		
		case 98:
			iVar0 = 94;
			break;
		
		case 99:
			if (func_29(Global_1323045))
			{
				iVar0 = 29;
			}
			else if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("tampa3"))
			{
				iVar0 = 82;
			}
			else if (((unk_0x541D5C57194E73C4(Global_1323045) == joaat("barrage") || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("pounder2"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("mule4"))) || unk_0xD470A4E16E9AAE0E(Global_1323045, joaat("speedo4")))
			{
				iVar0 = 84;
			}
			else
			{
				iVar0 = 95;
			}
			break;
		
		case 100:
			iVar0 = 96;
			break;
		
		case 101:
			if (func_25())
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 97;
			}
			break;
		
		case 102:
			if (func_25())
			{
				iVar0 = 69;
			}
			else
			{
				iVar0 = 98;
			}
			break;
		
		case 103:
			if (unk_0x541D5C57194E73C4(Global_1323045) == joaat("slamvan"))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 99;
			}
			break;
	}
	return iVar0;
}

int func_24()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		switch (unk_0x541D5C57194E73C4(Global_1323045))
		{
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("dune3"):
			case joaat("tampa3"):
			case joaat("trailersmall2"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("oppressor"):
			case joaat("comet4"):
			case joaat("deluxo"):
			case joaat("revolter"):
			case joaat("savestra"):
			case joaat("viseris"):
			case joaat("caracara"):
			case joaat("oppressor2"):
			case joaat("cerberus"):
			case joaat("monster3"):
			case joaat("slamvan4"):
			case -398987772:
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("imperator"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("slamvan5"):
			case joaat("issi5"):
			case joaat("monster4"):
			case joaat("cerberus2"):
			case joaat("dominator5"):
			case joaat("slamvan6"):
			case joaat("issi6"):
			case joaat("monster5"):
			case joaat("cerberus3"):
			case joaat("dominator6"):
			case joaat("imperator2"):
			case joaat("imperator3"):
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_25()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		if (unk_0x91D5C8283D19AF49(Global_1323045, 0))
		{
			if ((((unk_0x541D5C57194E73C4(Global_1323045) == joaat("nero2") || unk_0x541D5C57194E73C4(Global_1323045) == joaat("comet3")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("elegy")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("italigtb2")) || unk_0x541D5C57194E73C4(Global_1323045) == joaat("specter2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_26()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		switch (unk_0x541D5C57194E73C4(Global_1323045))
		{
			case joaat("apc"):
			case joaat("dune3"):
			case joaat("halftrack"):
			case joaat("tampa3"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("oppressor"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_27(var uParam0)
{
	switch (unk_0x541D5C57194E73C4(uParam0))
	{
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("slamvan4"):
		case joaat("bruiser"):
		case joaat("brutus"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi5"):
		case joaat("slamvan5"):
		case joaat("bruiser2"):
		case joaat("brutus2"):
		case joaat("issi6"):
		case joaat("slamvan6"):
		case joaat("bruiser3"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

int func_28(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0))
	{
		if (unk_0x91D5C8283D19AF49(uParam0, 0))
		{
			switch (unk_0x541D5C57194E73C4(uParam0))
			{
				case joaat("scarab"):
				case joaat("bruiser"):
				case joaat("monster3"):
				case joaat("impaler2"):
				case joaat("issi4"):
				case joaat("deathbike"):
				case joaat("dominator4"):
				case joaat("slamvan4"):
				case joaat("zr380"):
				case joaat("cerberus"):
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("brutus"):
				case joaat("deathbike3"):
				case joaat("deathbike2"):
				case joaat("impaler3"):
				case joaat("brutus2"):
				case joaat("bruiser2"):
				case joaat("slamvan5"):
				case joaat("issi5"):
				case joaat("monster4"):
				case joaat("scarab2"):
				case joaat("cerberus2"):
				case joaat("dominator5"):
				case joaat("zr3802"):
				case joaat("impaler4"):
				case joaat("brutus3"):
				case joaat("bruiser3"):
				case joaat("slamvan6"):
				case joaat("issi6"):
				case joaat("monster5"):
				case joaat("scarab3"):
				case joaat("cerberus3"):
				case joaat("dominator6"):
				case joaat("zr3803"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_29(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0, 0))
	{
		if (unk_0x541D5C57194E73C4(uParam0) == joaat("nero2") || unk_0x541D5C57194E73C4(uParam0) == joaat("elegy"))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (((iParam1 == 6 || iParam1 == 7) || iParam1 == 8) || iParam1 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		switch (unk_0x541D5C57194E73C4(Global_1323045))
		{
			case joaat("apc"):
			case joaat("halftrack"):
			case joaat("dune3"):
			case joaat("tampa3"):
			case joaat("trailersmall2"):
			case joaat("insurgent3"):
			case joaat("technical3"):
			case joaat("pounder2"):
			case joaat("speedo4"):
			case joaat("mule4"):
			case joaat("imperator"):
			case joaat("deathbike"):
			case joaat("cerberus"):
			case joaat("bruiser"):
			case joaat("dominator4"):
			case joaat("zr380"):
			case joaat("issi4"):
			case joaat("imperator2"):
			case joaat("deathbike2"):
			case joaat("cerberus2"):
			case joaat("bruiser2"):
			case joaat("dominator5"):
			case joaat("zr3802"):
			case joaat("issi5"):
			case joaat("imperator3"):
			case joaat("deathbike3"):
			case joaat("cerberus3"):
			case joaat("bruiser3"):
			case joaat("dominator6"):
			case joaat("zr3803"):
			case joaat("issi6"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_33()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		if (unk_0x91D5C8283D19AF49(Global_1323045, 0))
		{
			switch (unk_0x541D5C57194E73C4(Global_1323045))
			{
				case joaat("monster3"):
				case joaat("cerberus"):
				case joaat("bruiser"):
				case joaat("brutus"):
				case joaat("scarab"):
				case joaat("dominator4"):
				case joaat("impaler2"):
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("zr380"):
				case joaat("issi4"):
				case joaat("slamvan4"):
				case -398987772:
				case joaat("rcbandito"):
				case joaat("impaler3"):
				case joaat("brutus2"):
				case joaat("bruiser2"):
				case joaat("slamvan5"):
				case joaat("issi5"):
				case joaat("monster4"):
				case joaat("scarab2"):
				case joaat("cerberus2"):
				case joaat("dominator5"):
				case joaat("zr3802"):
				case joaat("impaler4"):
				case joaat("brutus3"):
				case joaat("bruiser3"):
				case joaat("slamvan6"):
				case joaat("issi6"):
				case joaat("monster5"):
				case joaat("scarab3"):
				case joaat("cerberus3"):
				case joaat("dominator6"):
				case joaat("zr3803"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_34()
{
	if (unk_0x765F6FEEFF39224F(Global_1323045))
	{
		if (unk_0x91D5C8283D19AF49(Global_1323045, 0))
		{
			switch (unk_0x541D5C57194E73C4(Global_1323045))
			{
				case 276065473:
				case joaat("monster3"):
				case joaat("cerberus"):
				case joaat("bruiser"):
				case joaat("brutus"):
				case joaat("scarab"):
				case joaat("dominator4"):
				case joaat("impaler2"):
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
				case joaat("zr380"):
				case joaat("issi4"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
				case joaat("slamvan4"):
				case -398987772:
				case joaat("impaler3"):
				case joaat("brutus2"):
				case joaat("bruiser2"):
				case joaat("slamvan5"):
				case joaat("issi5"):
				case joaat("monster4"):
				case joaat("scarab2"):
				case joaat("cerberus2"):
				case joaat("dominator5"):
				case joaat("zr3802"):
				case joaat("impaler4"):
				case joaat("brutus3"):
				case joaat("bruiser3"):
				case joaat("slamvan6"):
				case joaat("issi6"):
				case joaat("monster5"):
				case joaat("scarab3"):
				case joaat("cerberus3"):
				case joaat("dominator6"):
				case joaat("zr3803"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_37())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	return -1;
}

void func_38()
{
	if (unk_0x0E4018692D92041D(Global_1671295, 12))
	{
		if (!func_40() || func_39())
		{
			unk_0xCE689A8E8C42ED78(&Global_1671295, 12);
			unk_0xCE689A8E8C42ED78(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_344), 29);
			Global_1671295.f_2687 = 0;
			Global_1671295.f_2688 = -1;
			Global_1671295.f_2689 = 0;
			unk_0xCE689A8E8C42ED78(&(Global_1671295.f_1), 4);
			unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_1), 5);
			unk_0xCE689A8E8C42ED78(&(Global_1671295.f_1), 22);
		}
	}
}

bool func_39()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

int func_40()
{
	if (func_41() == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	return Global_1312467.f_18;
}

void func_42()
{
	if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_1, 7) || unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309, 8))
	{
		unk_0xA584E193C941898B();
		unk_0xFBBF1C21B43E77DB();
		if (!unk_0x15C85368E432C647())
		{
			unk_0x144904D2EAA84341(0, 200);
			unk_0x144904D2EAA84341(2, 200);
		}
		unk_0x3FD9339AA95E323F(0, 200, 1);
		unk_0x3FD9339AA95E323F(2, 200, 1);
		func_49(&uLocal_36, 0, 0);
	}
	if (func_48(&uLocal_36))
	{
		if ((!func_47(&uLocal_36, 5000, 0) || !unk_0x73DA1542B2F0C458()) && !func_44(unk_0x95B959F18401C09A()))
		{
			unk_0xA584E193C941898B();
			unk_0xFBBF1C21B43E77DB();
			if (!unk_0x15C85368E432C647())
			{
				unk_0x144904D2EAA84341(0, 200);
				unk_0x144904D2EAA84341(2, 200);
			}
			unk_0x3FD9339AA95E323F(0, 200, 1);
			unk_0x3FD9339AA95E323F(2, 200, 1);
		}
		else if ((func_47(&uLocal_36, 5000, 0) && unk_0x73DA1542B2F0C458()) || func_44(unk_0x95B959F18401C09A()))
		{
			func_43(&uLocal_36);
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_44(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_37())
			{
				return func_45(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_47(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_49(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_48(var uParam0)
{
	return uParam0->f_1;
}

void func_49(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

void func_50()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if ((bLocal_24 || func_56() == 0) || Global_1312867)
	{
		if (iLocal_30)
		{
			func_54();
		}
		else if (iLocal_32)
		{
			bVar0 = (func_56() == 999 && func_53() == 999);
			if (!bVar0)
			{
				if (func_52())
				{
					iLocal_29 = 0;
					iLocal_30 = 0;
					iLocal_28 = -1;
					Global_2458630 = 1;
					iLocal_23 = 1;
					func_51(168);
					func_51(167);
				}
				else if (func_56() == 0 && func_53() != -1)
				{
					iLocal_30 = 1;
				}
				else
				{
					Global_2458630 = 1;
					iLocal_29 = 1;
				}
				iLocal_32 = 0;
			}
		}
		else if ((func_53() != 0 || Global_1312867) && !iLocal_29)
		{
			if (iLocal_28 == -1)
			{
				iLocal_28 = unk_0xEF4753434B24594D();
			}
			else if (!Global_2458630)
			{
				iVar1 = (unk_0xEF4753434B24594D() - iLocal_28);
				bVar2 = (func_56() == 999 && func_53() == 999);
				if (iVar1 > 90)
				{
					if ((func_56() == 0 && func_53() != -1) || ((Global_1312867 && func_53() == -1) && func_56() == 999))
					{
						iLocal_30 = 1;
					}
					else if (bVar2)
					{
						iLocal_32 = 1;
					}
					else if ((func_56() == 0 && func_53() == -1) && Global_1312867)
					{
						iLocal_30 = 1;
					}
					else if (func_56() == 0 && !bLocal_24)
					{
						iLocal_30 = 1;
					}
					else
					{
						Global_2458630 = 1;
						iLocal_29 = 1;
					}
					iLocal_28 = -1;
				}
				else if (unk_0xEF4753434B24594D() != iLocal_28)
				{
					iLocal_28 = unk_0xEF4753434B24594D();
				}
			}
		}
		else if (func_53() == 0)
		{
			if (!Global_1312867 && iLocal_29)
			{
				iLocal_29 = 0;
			}
			iLocal_28 = -1;
		}
	}
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1387618.f_22 <= 0)
	{
		return;
	}
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1387618.f_22)
	{
		if (Global_1387618.f_23[iVar0] == iVar1)
		{
			Global_1387618.f_23[iVar0] = 0;
		}
		iVar0++;
	}
}

int func_52()
{
	if (((func_53() == -1 && !unk_0x71EC91BA8C88BCE0()) && func_40()) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_53()
{
	return Global_25765;
}

void func_54()
{
	if (iLocal_31)
	{
		if (func_52() && unk_0x73DA1542B2F0C458())
		{
			iLocal_29 = 0;
			iLocal_30 = 0;
			iLocal_31 = 0;
			Global_2458630 = 1;
			iLocal_23 = 1;
			iLocal_28 = -1;
			func_51(168);
			func_51(167);
		}
	}
	else if (func_53() == 0 && !Global_1312867)
	{
		unk_0xDB03EC449C340E55(1, 0, 0);
		func_55(168);
		iLocal_31 = 1;
	}
	else if (func_53() == -1 && func_52())
	{
		iLocal_29 = 0;
		iLocal_30 = 0;
		iLocal_28 = -1;
		func_51(168);
		func_51(167);
	}
}

void func_55(int iParam0)
{
	var uVar0;
	
	if (Global_1387618.f_22 >= 20)
	{
		return;
	}
	uVar0 = iParam0;
	Global_1387618.f_23[Global_1387618.f_22] = uVar0;
	Global_1387618.f_22++;
}

int func_56()
{
	return Global_25766;
}

void func_57()
{
	bool bVar0;
	int iVar1;
	
	if (iLocal_25)
	{
		if (Global_2445420.f_9 == 7)
		{
			iLocal_25 = 0;
		}
		else if (Global_1312801 != 13)
		{
			if (Global_2445420.f_1 == 1)
			{
				func_61();
				iLocal_26 = 1;
				func_55(168);
				func_55(167);
				unk_0x86FA82A9DA72649A(1);
			}
			else
			{
				Global_2445420.f_9 = 7;
				iLocal_26 = 1;
				func_55(168);
				func_55(167);
				unk_0x86FA82A9DA72649A(1);
			}
			iLocal_25 = 0;
		}
	}
	else if ((Global_1312801 == 4 || Global_1312801 == 13) && Global_2445420.f_9 != 7)
	{
		bVar0 = false;
		if (iLocal_27 == -1)
		{
			iLocal_27 = unk_0xEF4753434B24594D();
		}
		else
		{
			iVar1 = (unk_0xEF4753434B24594D() - iLocal_27);
			if (iVar1 > 30)
			{
				bVar0 = true;
			}
			else
			{
				iLocal_27 = unk_0xEF4753434B24594D();
			}
		}
		if (bVar0)
		{
			if (Global_1312801 == 13)
			{
				iLocal_25 = 1;
			}
			else if (Global_2445420.f_1 == 1)
			{
				func_61();
				iLocal_26 = 1;
				func_55(168);
				func_55(167);
				unk_0x86FA82A9DA72649A(1);
			}
			else
			{
				Global_2445420.f_9 = 7;
				iLocal_26 = 1;
				func_55(168);
				func_55(167);
				unk_0x86FA82A9DA72649A(1);
			}
			iLocal_27 = -1;
		}
	}
	else if (iLocal_27 != -1)
	{
		iLocal_27 = -1;
	}
	if (iLocal_26 && func_52())
	{
		func_51(168);
		func_51(167);
		iLocal_26 = 0;
		Global_2458630 = 1;
		iLocal_23 = 1;
		unk_0x86FA82A9DA72649A(0);
	}
	func_58();
}

void func_58()
{
	if (iLocal_22)
	{
		if (Global_2458630 == 0)
		{
			Global_2458630 = 1;
		}
		iLocal_22 = 0;
	}
	if (iLocal_23)
	{
		if (unk_0xE4E9C79867C15B1F())
		{
			iLocal_23 = 0;
		}
		else
		{
			func_59();
		}
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 168)
		{
			if (!unk_0xE4E9C79867C15B1F())
			{
				if (Global_2458630 == 0)
				{
					Global_2458630 = 1;
				}
				iLocal_22 = 1;
			}
		}
		iVar0++;
	}
	if (!iLocal_22)
	{
		if (func_60())
		{
			if (Global_2458630 == 0)
			{
				Global_2458630 = 1;
				iLocal_23 = 0;
				iLocal_22 = 1;
			}
		}
	}
}

bool func_60()
{
	return unk_0x0E4018692D92041D(Global_1312424, 0);
}

void func_61()
{
	func_105(1);
	func_102();
	func_82();
	if (unk_0x0F9852A4091E9C08() || func_81())
	{
		unk_0x64B7F9F8020D2EBC(0);
		unk_0x7EDEAEAED85BEE4F(0);
	}
	func_80(0);
	func_78();
	if (func_77())
	{
		func_76(0);
		func_74(31);
		func_63(5);
	}
	else
	{
		func_76(0);
		func_62(-1);
		func_74(32);
		func_63(57);
	}
	unk_0xEDF90B96BED57BCE(1);
}

void func_62(int iParam0)
{
	Global_25766 = iParam0;
}

void func_63(int iParam0)
{
	var uVar0;
	char* sVar1;
	var uVar2;
	
	uVar0 = func_73();
	if (Global_1312867)
	{
		sVar1 = func_72(iParam0);
		uVar2 = unk_0x36163153849DFDA1(sVar1);
		func_71(&Global_2460870, 1, 0);
		unk_0x85C5C63938D1C23B(uVar2, 1, uVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_64();
	}
	Global_1312802 = iParam0;
}

void func_64()
{
	if (Global_2458524)
	{
		if (func_66())
		{
			unk_0x7EDEAEAED85BEE4F(0);
			func_65();
		}
	}
}

void func_65()
{
	if (Global_2458521)
	{
		if (!Global_2458520)
		{
			Global_2458520 = 1;
			Global_2458528 = unk_0xE3903F59E2F22150();
			Global_2458527 = 1;
		}
	}
}

int func_66()
{
	if (Global_2449538.f_6378 && Global_2458521)
	{
		if (func_67())
		{
			if (func_40() && !unk_0xBB5E373390A5F824())
			{
				if (Global_2449538.f_6400 == 122)
				{
					return 1;
				}
				if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_68.f_2, 26))
				{
					return 1;
				}
				if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_68.f_2, 27))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_67()
{
	if (func_70(unk_0x95B959F18401C09A()) && unk_0x0E4018692D92041D(Global_1671295.f_4, 22))
	{
		return 0;
	}
	if (Global_1315680)
	{
		return 0;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	if ((Global_2458522 && func_68()) || Global_2458522 == 0)
	{
		return 1;
	}
	if (Global_2458523)
	{
		if (Global_2449538.f_6400 == 122)
		{
			return 1;
		}
	}
	return 0;
}

bool func_68()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_69()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 11);
}

int func_70(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_45(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x78DCC5D0CB43DEBA();
		}
		else
		{
			*uParam0 = unk_0x765FF3592EC81689();
		}
	}
	else
	{
		*uParam0 = unk_0xE3903F59E2F22150();
	}
	uParam0->f_1 = 1;
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

var func_73()
{
	return Global_1312802;
}

void func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = func_75();
	Global_1312801 = iParam0;
}

var func_75()
{
	return Global_1312801;
}

void func_76(int iParam0)
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0xF0508C5B5E0B2722("LOCK_RIGHTMOUSE_CLICK");
		unk_0x295B86DE57A0721D(iParam0);
		unk_0x818901B332D5541D();
	}
}

bool func_77()
{
	return Global_1312836;
}

void func_78()
{
	if (func_79())
	{
		unk_0xB7C3933D6DDA77A8();
	}
	else
	{
		unk_0xB4C456243C3EDB69();
	}
}

bool func_79()
{
	return Global_1573282.f_4;
}

void func_80(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBDD4EE948C7B9BB5("PlayMenuMusic", 1);
	}
	else if (bParam0 == 0)
	{
		unk_0xBDD4EE948C7B9BB5("PlayMenuMusic", 0);
	}
}

var func_81()
{
	return Global_2458535;
}

void func_82()
{
	Global_1312746 = 0;
	func_101(0);
	func_100(0);
	func_99(0);
	func_98(0);
	func_97(0);
	func_96(0);
	func_95(0, -1);
	func_94(0);
	func_93(0);
	func_92(0);
	func_91(0);
	func_94(0);
	func_90(0);
	func_89(0);
	func_88(0);
	func_87(0);
	func_86(0);
	func_85(0);
	func_84(0);
	func_83(0);
}

void func_83(int iParam0)
{
	Global_2460855 = iParam0;
}

void func_84(int iParam0)
{
	Global_1312757 = iParam0;
}

void func_85(int iParam0)
{
	Global_1312756 = iParam0;
}

void func_86(int iParam0)
{
	Global_2460927 = iParam0;
}

void func_87(int iParam0)
{
	Global_1312751 = iParam0;
}

void func_88(int iParam0)
{
	Global_2460150 = iParam0;
}

void func_89(int iParam0)
{
	Global_2458612 = iParam0;
}

void func_90(int iParam0)
{
	Global_2459775 = iParam0;
}

void func_91(int iParam0)
{
	Global_2460153 = iParam0;
}

void func_92(int iParam0)
{
	Global_1312758 = iParam0;
}

void func_93(int iParam0)
{
	Global_2460151 = iParam0;
}

void func_94(int iParam0)
{
	Global_2460156 = iParam0;
}

void func_95(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

void func_96(int iParam0)
{
	Global_1312754 = iParam0;
}

void func_97(int iParam0)
{
	Global_2460811 = iParam0;
}

void func_98(int iParam0)
{
	Global_2460812 = iParam0;
}

void func_99(int iParam0)
{
	Global_1312752 = iParam0;
}

void func_100(int iParam0)
{
	Global_1312866 = iParam0;
}

void func_101(int iParam0)
{
	Global_1312749 = iParam0;
}

void func_102()
{
	func_104();
	func_103();
	unk_0xCE689A8E8C42ED78(&Global_1312424, 2);
	unk_0xCE689A8E8C42ED78(&Global_1312424, 4);
	unk_0xCE689A8E8C42ED78(&Global_1312424, 5);
	unk_0xCE689A8E8C42ED78(&Global_1312424, 6);
	Global_1312441 = 0;
}

void func_103()
{
	unk_0xCE689A8E8C42ED78(&Global_1312424, 1);
}

void func_104()
{
	unk_0xCE689A8E8C42ED78(&Global_1312424, 0);
}

void func_105(int iParam0)
{
	Global_1312873 = iParam0;
}

void func_106()
{
	if (func_109(123))
	{
		switch (iLocal_54)
		{
			case 0:
				Global_1671295.f_3603.f_3 = 123;
				iLocal_54 = 1;
				break;
			
			case 1:
				if (Global_1671295.f_3603.f_1 == 14 && func_108() == 0)
				{
					iLocal_54 = 2;
				}
				else if ((Global_1671295.f_3603.f_1 == 0 || Global_1671295.f_3603.f_1 == 6) || func_108() != 0)
				{
					iLocal_54 = 3;
				}
				break;
			
			case 2:
				if (Global_1671295.f_3603.f_1 == 8)
				{
					iLocal_54 = 3;
					if (func_107(unk_0x33CD235DF1E6A94E()))
					{
						unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
					}
				}
				else if (Global_1671295.f_3603.f_1 == 19)
				{
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				break;
		}
	}
	else if (iLocal_54 != 0)
	{
		iLocal_54 = 0;
		Global_1671295.f_3603.f_3 = -1;
	}
}

int func_107(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0))
	{
		if (!unk_0xD62C4419A41F106A(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_108()
{
	return Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_23;
}

bool func_109(int iParam0)
{
	return Global_1671295.f_3600 == iParam0;
}

void func_110()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (Global_1323594[iLocal_53 /*141*/].f_66 != 0)
		{
			unk_0x8950ED5730F62EE8(&(Global_1323594[iLocal_53 /*141*/].f_102), 2);
		}
		iLocal_53++;
		if (iLocal_53 >= 271)
		{
			iLocal_53 = 261;
		}
	}
}

void func_111()
{
	if (func_112(2))
	{
		unk_0x6770BF761B8E6EF7(Global_93734.f_338);
	}
}

bool func_112(int iParam0)
{
	return Global_2413825 == iParam0;
}

void func_113()
{
	int iVar0;
	int iVar1;
	
	if (!func_122())
	{
		return;
	}
	iVar0 = func_121();
	if (Global_1689918 == -1)
	{
		Global_1689901 = unk_0xEF4753434B24594D();
		if (iLocal_50 != -1)
		{
			iVar1 = func_119(iVar0);
			if (iVar1 < 0)
			{
				func_114(iVar0, iLocal_50);
			}
			else if (iVar1 != iLocal_50 && iVar1 > iLocal_50 + 60)
			{
				func_114(iVar0, iLocal_50);
			}
			iLocal_50 = -1;
		}
	}
	else
	{
		iLocal_50 = func_119(iVar0);
	}
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_118((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_117(iVar14);
		iVar0++;
	}
	func_116(&uVar1, iParam0, 12, iParam1);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar15 = func_118((iVar13 + iVar0));
		func_115(uVar15, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_115(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, uParam1, 1);
	}
}

void func_116(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar3) / 32f));
	iVar5 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (unk_0x0E4018692D92041D(uParam3, iVar6))
			{
				unk_0x8950ED5730F62EE8(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0xCE689A8E8C42ED78(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_117(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x75D54ED6C1AD1642(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_118(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x36163153849DFDA1(&cVar0);
}

int func_119(int iParam0)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return 0;
		}
		iVar14 = func_118((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_117(iVar14);
		iVar0++;
	}
	return func_120(&uVar1, iParam0, 12);
}

int func_120(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar4) / 32f));
	iVar6 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0x8950ED5730F62EE8(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_121()
{
	return func_117(joaat("mpply_cas_cur_gmblng_hr"));
}

int func_122()
{
	if (func_124(0) && (func_124(1) || func_123(1) == 0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_4(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

var func_124(int iParam0)
{
	return Global_1312373[iParam0];
}

void func_125()
{
	if (unk_0x0E4018692D92041D(Global_1671295.f_3, 5))
	{
		if (!func_48(&uLocal_46))
		{
			func_49(&uLocal_46, 0, 0);
		}
		else if (unk_0x73DA1542B2F0C458())
		{
			if (func_47(&uLocal_46, 5000, 0))
			{
				unk_0x7EDEAEAED85BEE4F(500);
			}
		}
		else
		{
			func_43(&uLocal_46);
		}
	}
	else
	{
		func_43(&uLocal_46);
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	
	if (!func_143(unk_0x95B959F18401C09A()) && !unk_0x289064CB38B560AA())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if ((iVar1 != unk_0x95B959F18401C09A() && func_46(iVar1, 1, 1)) && func_141(iVar1, 212))
			{
				if (func_140(iVar1))
				{
					func_127(iVar1, 212);
				}
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_139(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0 /*46*/].f_4 && Global_2394180[iVar0 /*46*/])
	{
		Global_2394180[iVar0 /*46*/].f_4 = 1;
		func_131();
	}
	func_128(iVar0);
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1382407)
	{
		return;
	}
	if (Global_2394180[iParam0 /*46*/].f_26 != -1)
	{
		unk_0x98E765CB9E761233(Global_2394180[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1382407)
	{
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_130(iVar0);
	Global_1382407 = (Global_1382407 - 1);
	if (Global_1382378)
	{
		if (Global_1382376 > 0)
		{
			func_129();
		}
	}
}

void func_129()
{
	Global_1382378 = 0;
}

void func_130(int iParam0)
{
	Global_2394180[iParam0 /*46*/] = 0;
	Global_2394180[iParam0 /*46*/].f_2 = 0;
	Global_2394180[iParam0 /*46*/].f_3 = 0;
	Global_2394180[iParam0 /*46*/].f_4 = 0;
	Global_2394180[iParam0 /*46*/].f_5 = func_37();
	Global_2394180[iParam0 /*46*/].f_6 = 145;
	Global_2394180[iParam0 /*46*/].f_7 = 1;
	Global_2394180[iParam0 /*46*/].f_8 = -1;
	Global_2394180[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_10), "", 64);
	Global_2394180[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_27), "", 32);
	Global_2394180[iParam0 /*46*/].f_35 = -1;
	Global_2394180[iParam0 /*46*/].f_36 = -1;
	Global_2394180[iParam0 /*46*/].f_37 = 0;
	Global_2394180[iParam0 /*46*/].f_39 = 0;
	Global_2394180[iParam0 /*46*/].f_40 = -1;
	Global_2394180[iParam0 /*46*/].f_41 = 0;
	Global_2394180[iParam0 /*46*/].f_42 = 0;
	Global_2394180[iParam0 /*46*/].f_43 = 0;
	Global_2394180[iParam0 /*46*/].f_45 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		Global_2394180[iParam0 /*46*/].f_38 = unk_0x78DCC5D0CB43DEBA();
	}
}

void func_131()
{
	Global_16929 = (Global_16929 - 1);
	if (Global_16929 < 0)
	{
		func_138("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_132();
}

void func_132()
{
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_137(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_133(1);
			func_137(Global_14534, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_136(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_135(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_134(Global_14534, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2430[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_134(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(uParam7))
	{
		func_135(uParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam8))
	{
		func_135(iParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam9))
	{
		func_135(iParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam10))
	{
		func_135(iParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(iParam11))
	{
		func_135(iParam11);
	}
	unk_0x818901B332D5541D();
}

void func_135(var uParam0)
{
	unk_0x713FEBE56D2BD403(uParam0);
	unk_0x36F3AA9FFAAF8606();
}

bool func_136(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_137(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x818901B332D5541D();
}

void func_138(char* sParam0)
{
	if (Global_16929 != 0)
	{
		if (!unk_0x786AF4A44E1B5B4B(sParam0))
		{
		}
		Global_16929 = 0;
	}
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1382407)
	{
		if (Global_2394180[iVar0 /*46*/].f_7)
		{
			if (Global_2394180[iVar0 /*46*/].f_5 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_140(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_45(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_142())
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	return 1;
}

bool func_142()
{
	return Global_1312827 == 10;
}

int func_143(int iParam0)
{
	if (iParam0 != func_37())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 29);
	}
	return 0;
}

void func_144()
{
	if (func_140(unk_0x95B959F18401C09A()))
	{
		if (!iLocal_45 && !unk_0x289064CB38B560AA())
		{
			if ((((((!func_146(unk_0x95B959F18401C09A()) && Global_1671289 == 7) && unk_0x51EBF893ED085755()) && !func_145()) && unk_0x73DA1542B2F0C458()) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && func_40())
			{
				Global_1671295.f_158 = 1;
				iLocal_45 = 1;
			}
		}
	}
	else
	{
		iLocal_45 = 0;
	}
}

bool func_145()
{
	return unk_0x0E4018692D92041D(Global_1671295.f_6, 12);
}

int func_146(int iParam0)
{
	if (iParam0 != func_37() && func_46(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

void func_147()
{
	if (func_149(unk_0x95B959F18401C09A()))
	{
		if (Global_2528542.f_791)
		{
			iLocal_44 = 1;
		}
	}
	else if (iLocal_44)
	{
		if (Global_2528542.f_791)
		{
			func_148();
			iLocal_44 = 0;
		}
		else
		{
			iLocal_44 = 0;
		}
	}
}

void func_148()
{
	Global_2528542.f_791 = 0;
}

int func_149(int iParam0)
{
	if (iParam0 != func_37())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_1, 29);
	}
	return 0;
}

void func_150()
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	
	if (func_70(unk_0x95B959F18401C09A()))
	{
		if (unk_0xF29C37CB006AE9DD())
		{
			if (!iLocal_40)
			{
				iLocal_40 = 1;
			}
		}
		else if (iLocal_40)
		{
			iLocal_40 = 0;
		}
		if (unk_0x95B959F18401C09A() == Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8)
		{
			if (!iLocal_41)
			{
				iLocal_41 = 1;
			}
		}
		else if (iLocal_41)
		{
			iLocal_41 = 0;
		}
	}
	if (func_70(unk_0x95B959F18401C09A()) && !unk_0xF29C37CB006AE9DD())
	{
		if (unk_0x95B959F18401C09A() == Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_309.f_8)
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_17411.f_4690), "CMOD_SEL") && unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_195, 9))
			{
				if (!iLocal_39)
				{
					iLocal_39 = 1;
				}
			}
			if (func_154(unk_0x95B959F18401C09A()))
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (((unk_0x15C85368E432C647() && unk_0x5FA68380229D9210() == 15890625) && unk_0x5FA68380229D9210() != 0) || ((unk_0x15C85368E432C647() && unk_0x5FA68380229D9210() == 358620163) && unk_0x5FA68380229D9210() != 0))
					{
						func_153(0);
					}
				}
			}
			if (iLocal_39)
			{
				if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_195, 9))
				{
					if (!func_48(&uLocal_42))
					{
						func_49(&uLocal_42, 0, 0);
					}
					else if (func_47(&uLocal_42, 10000, 0))
					{
						func_43(&uLocal_42);
						iLocal_39 = 0;
					}
					return;
				}
				else
				{
					func_43(&uLocal_42);
					iLocal_39 = 0;
				}
			}
			if ((((((!func_154(unk_0x95B959F18401C09A()) && !unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196, 22)) && !unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_195, 9)) && !unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_195, 11)) && !unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_273, 28)) && unk_0x73DA1542B2F0C458()) || !func_40())
			{
				iVar16 = unk_0x2437CAE892D2F387(unk_0x33CD235DF1E6A94E(), &uVar0);
				iVar17 = 0;
				while (iVar17 < iVar16)
				{
					if (((unk_0x765F6FEEFF39224F(uVar0[iVar17]) && unk_0x680558231C80291D(uVar0[iVar17])) && !unk_0xD62C4419A41F106A(uVar0[iVar17], 0)) && !unk_0xD470A4E16E9AAE0E(uVar0[iVar17], joaat("rcbandito")))
					{
						if ((((unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(uVar0[iVar17], 1), 204.6f, 5180.8f, -89.7f, 1) < 3.5f || unk_0xD4B4F68F3449CBEC(uVar0[iVar17], 208.924f, 5180.386f, -89.99876f, 172.1084f, 5180.182f, -85.07375f, 6.5f, 0, 1, 0)) || (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(uVar0[iVar17], 1), 204.6f, 5180.8f, -89.7f, 1) > 2.5f && unk_0x90D54DCF679C0BBE(uVar0[iVar17]) == joaat("Arena_Mod_Rm"))) && func_151() == 0) || ((unk_0xD4B4F68F3449CBEC(uVar0[iVar17], 172.3511f, 5216.716f, 10.07497f, 172.4333f, 5163.599f, 13.82492f, 8.75f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(uVar0[iVar17], 190.5412f, 5186.568f, 9.678089f, 167.7094f, 5187.524f, 14.97465f, 11.75f, 0, 1, 0)) && func_151() != 0))
						{
							if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), uVar0[iVar17], 0))
							{
								unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
							}
							uLocal_38 = uVar0[iVar17];
						}
					}
					iVar17++;
				}
			}
		}
	}
	else if (!func_70(unk_0x95B959F18401C09A()))
	{
		if (iLocal_39)
		{
			func_43(&uLocal_42);
			iLocal_39 = 0;
		}
	}
	if (unk_0x765F6FEEFF39224F(uLocal_38))
	{
		if (unk_0x0A81FE3D92AE2AC9(uLocal_38))
		{
			unk_0x0D21E1FDE062ED99(uLocal_38, 0, 1);
			unk_0x7AC8DF0B83EB4C6B(&uLocal_38);
		}
		else
		{
			unk_0xA5F44EC021F96C6B(uLocal_38);
		}
	}
	if (!func_40())
	{
		if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196, 22))
		{
			unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196), 22);
		}
	}
}

int func_151()
{
	return func_152(unk_0x95B959F18401C09A());
}

var func_152(int iParam0)
{
	return unk_0xA8B379916562FD8E(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196, 23))
		{
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196), 23);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196, 23))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196), 23);
	}
}

bool func_154(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_196, 23);
}

void func_155()
{
	if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_196, 24))
	{
		unk_0xA584E193C941898B();
	}
}

void func_156()
{
	if (func_46(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (unk_0xFA97BC0260D58ADD(unk_0x33CD235DF1E6A94E(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 1, 0))
		{
			if (!func_157())
			{
				if (!iLocal_35)
				{
					if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) && unk_0x73DA1542B2F0C458())
					{
						if (!func_48(&uLocal_33))
						{
							func_49(&uLocal_33, 0, 0);
						}
						else if (func_47(&uLocal_33, 10000, 0))
						{
							iLocal_35 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_35 = 0;
				func_43(&uLocal_33);
			}
		}
		if (iLocal_35)
		{
			if (!unk_0xBB5E373390A5F824())
			{
				unk_0x7EDEAEAED85BEE4F(500);
			}
			else if (!func_40() && func_41() != 1)
			{
				unk_0xC7C47D4054903839(unk_0x33CD235DF1E6A94E(), 291.9964f, 179.742f, 103.2897f, 0, 0, 1);
				unk_0xACCDA78123DB57B0(500);
				iLocal_35 = 0;
				func_43(&uLocal_33);
			}
		}
	}
}

bool func_157()
{
	int iVar0;
	
	iVar0 = unk_0x1BCDA92AD0A7835B(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x6C7B3B04B7D86C9E("AM_MP_SMPL_INTERIOR_INT", Global_1671295.f_2489, 1, 0));
}

void func_158()
{
	if (((unk_0xB331FCEB94EB05C8() && func_46(unk_0x95B959F18401C09A(), 1, 1)) && !Global_1574191) && Global_25765 == 0)
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("animal_controller")) != 0)
		{
			unk_0xDB03EC449C340E55(-201, 0, 0);
		}
	}
}

void func_159()
{
	if ((func_40() && func_53() == 0) && !Global_1312867)
	{
		if (((((unk_0x130EFDEF56EB4C27() && func_167()) && !func_165(unk_0x95B959F18401C09A())) && !Global_2506343) || func_163()) || func_161())
		{
			if (func_160())
			{
				unk_0xE8917592107A062A();
			}
		}
	}
}

int func_160()
{
	int iVar0;
	
	iVar0 = joaat("player_zero");
	unk_0xB815670C37E03CDE(iVar0);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		unk_0x080B98C6DEDFC3F8(unk_0x95B959F18401C09A(), iVar0);
		unk_0xFFBFB76A07EA7E94(0);
		return 1;
	}
	return 0;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar0 == func_162(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("player_one");
		
		case 1:
			return joaat("player_two");
		
		case 2:
			return joaat("player_zero");
		
		case 3:
			return joaat("ig_amandatownley");
		
		case 4:
			return joaat("ig_beverly");
		
		case 5:
			return joaat("ig_brad");
		
		case 6:
			return joaat("ig_chrisformage");
		
		case 7:
			return joaat("ig_davenorton");
		
		case 8:
			return joaat("ig_devin");
		
		case 9:
			return joaat("ig_drfriedlander");
		
		case 10:
			return joaat("ig_fabien");
		
		case 11:
			return joaat("ig_floyd");
		
		case 12:
			return joaat("ig_jimmydisanto");
		
		case 13:
			return joaat("ig_lamardavis");
		
		case 14:
			return joaat("ig_lazlow");
		
		case 15:
			return joaat("ig_lestercrest");
		
		case 16:
			return joaat("ig_maude");
		
		case 17:
			return joaat("ig_mrs_thornhill");
		
		case 18:
			return joaat("ig_nervousron");
		
		case 19:
			return joaat("ig_patricia");
		
		case 20:
			return joaat("ig_siemonyetarian");
		
		case 21:
			return joaat("ig_solomon");
		
		case 22:
			return joaat("ig_stevehains");
		
		case 23:
			return joaat("ig_stretch");
		
		case 24:
			return joaat("ig_tanisha");
		
		case 25:
			return joaat("ig_taocheng");
		
		case 26:
			return joaat("ig_tracydisanto");
		
		case 27:
			return joaat("ig_wade");
		
		default:
	}
	return 0;
	return 0;
}

int func_163()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (iVar0 == func_164(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("u_m_y_hippie_01");
		
		case 1:
			return joaat("u_m_y_baygor");
		
		case 2:
			return joaat("u_m_o_finguru_01");
		
		case 3:
			return joaat("u_m_y_militarybum");
		
		case 4:
			return joaat("u_m_m_griff_01");
		
		case 5:
			return joaat("u_f_y_comjane");
		
		case 6:
			return joaat("s_m_m_strpreach_01");
		
		case 7:
			return joaat("u_m_m_jesus_01");
		
		case 8:
			return joaat("u_m_y_mani");
		
		case 9:
			return joaat("s_m_y_mime");
		
		case 10:
			return joaat("u_f_o_moviestar");
		
		case 11:
			return joaat("u_m_y_imporage");
		
		case 12:
			return joaat("u_m_y_zombie_01");
		
		default:
	}
	return 0;
	return 0;
}

int func_165(int iParam0)
{
	if (func_166(iParam0) == 146)
	{
		if (iParam0 == Global_2528542.f_4814)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_167()
{
	int iVar0;
	
	iVar0 = unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
	switch (iVar0)
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

void func_168()
{
	if ((Global_105511 && unk_0x1BCDA92AD0A7835B(joaat("director_mode")) <= 0) && func_40())
	{
		unk_0xE8917592107A062A();
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_48(&uLocal_14))
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
		if (func_47(&uLocal_14, 60000, 0))
		{
			func_71(&uLocal_14, 0, 0);
			func_43(&uLocal_14);
		}
	}
	if (func_48(&uLocal_12) && func_47(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_21 = unk_0x8CCC0A0504C52531();
				unk_0xE9739440E5BF08EE(iLocal_21, "05", unk_0x33CD235DF1E6A94E(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_47(&uLocal_12, 4000, 0))
		{
			if (!unk_0x66DE54BD13B1BD88(iLocal_21))
			{
				unk_0xCBE6AF58552C63B2(iLocal_21);
			}
			unk_0x44D426446FAF55FB(iLocal_21);
			iLocal_21 = -1;
			unk_0x7CED302277C0F3D3("DLC_GR_CS2_General_Scene");
			func_71(&uLocal_12, 0, 0);
			func_43(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_178())
	{
		return;
	}
	iLocal_6 = 1;
	unk_0x8950ED5730F62EE8(&Global_2424, 2);
	if (!unk_0x765F6FEEFF39224F(uLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0xB815670C37E03CDE(iVar0);
		if (unk_0x5D98D654CDC2165A(iVar0))
		{
			uLocal_5 = unk_0xDD9A603448A23A17(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0x71CA80D41E1338B4(iVar0);
			unk_0xF70578F5CD9822CB(uLocal_5, 1);
			unk_0x3D258435016D9F74(uLocal_5, 8000);
			iVar1 = func_177(7866, -1, 0);
			func_176(7866, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			unk_0xE3F45F2E5162B2C7(&Var2);
			Local_16 = { unk_0xFBB1F99A825CAB09(uLocal_5, 0) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_175();
		if (unk_0x73DA1542B2F0C458() || unk_0xD33DAC8D0D70A78C())
		{
			if (iLocal_20 == -1)
			{
				unk_0xDEFB5E2E5CBD460A("DLC_GR_CS2_General_Scene");
				iLocal_20 = unk_0x8CCC0A0504C52531();
				unk_0xE9739440E5BF08EE(iLocal_20, "07", uLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_7)
			{
				if (func_47(&uLocal_8, 4500, 0))
				{
					unk_0xF70578F5CD9822CB(uLocal_5, 0);
					func_71(&uLocal_8, 0, 0);
					func_43(&uLocal_8);
					func_49(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar46 = (unk_0xBBDA792448DB5A89(func_174(&uLocal_10, 0, 0)) / unk_0xBBDA792448DB5A89(func_173()));
				fVar47 = (unk_0xBBDA792448DB5A89(func_174(&uLocal_8, 0, 0)) / unk_0xBBDA792448DB5A89(func_172()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_170(Local_16, func_171(), fVar47) };
				unk_0xBEADAF07D2339505(uLocal_5, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_19++;
					Local_16 = { unk_0xFBB1F99A825CAB09(uLocal_5, 0) };
					func_71(&uLocal_8, 0, 0);
					func_43(&uLocal_8);
					if (func_172() == -1)
					{
						unk_0xEC26F4BFC9942A0C(&uLocal_5);
						unk_0xE073A021DC60BE5E();
						if (!unk_0x66DE54BD13B1BD88(iLocal_20))
						{
							unk_0xCBE6AF58552C63B2(iLocal_20);
						}
						unk_0x44D426446FAF55FB(iLocal_20);
						iLocal_20 = -1;
						func_49(&uLocal_12, 0, 0);
						func_49(&uLocal_14, 0, 0);
						func_71(&uLocal_10, 0, 0);
						func_43(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_170(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_171()
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_172()
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_173()
{
	return 3150;
}

var func_174(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0);
		}
		else
		{
			return unk_0x5009A219B22D2352(unk_0x765FF3592EC81689(), *uParam0);
		}
	}
	return unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0);
}

void func_175()
{
	struct<3> Var0;
	
	Var0 = { unk_0x60B5C1FD066CB864(uLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0x1C8705F667F673EA(uLocal_5, Var0, 2, 1);
}

void func_176(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, uParam1, iParam3);
	}
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x75D54ED6C1AD1642(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_178()
{
	if (((((((func_182(22107, -1, -1) && Global_2409274 == 7) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0)) && func_181(unk_0x33CD235DF1E6A94E(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2449538.f_3072.f_178 >= 1) && Global_2449538.f_3072.f_178 < 4) && func_180()) && func_179())
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	if (func_182(15476, -1, -1) && func_177(5450, func_6(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x615E8CCE4183DFB7(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_181(var uParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xFBB1F99A825CAB09(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_184(iParam0, iParam1);
	uVar2 = func_183(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

void func_185()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1574201)
		{
			iVar0 = func_117(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10017 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574201)
	{
		iLocal_4 = 0;
	}
}

void func_186()
{
	if (!iLocal_3)
	{
		if (Global_1574201)
		{
			if (func_188() || func_187())
			{
				Global_262145.f_19571 = 1;
			}
			else
			{
				Global_262145.f_19571 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1574201)
	{
		iLocal_3 = 0;
	}
}

int func_187()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_117(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10126)
	{
		return 0;
	}
	uVar1[0] = func_117(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_117(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_117(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_117(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10122 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10126)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_188()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_117(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10125)
	{
		return 0;
	}
	uVar1[0] = func_117(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_117(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_117(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_117(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10121 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10125)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_189()
{
	int iVar0;
	
	if (unk_0x4CE1DD5CFC1F941E())
	{
		iVar0 = 0;
		while (iVar0 < Global_1589819)
		{
			unk_0x8950ED5730F62EE8(&(Global_1589819[iVar0 /*818*/].f_679), 1);
			iVar0++;
		}
	}
}

void func_190()
{
	if (Global_262145.f_10101 != 120)
	{
		Global_262145.f_10101 = 120;
	}
}

void func_191(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0x21471CA300278599(sParam3);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

void func_192()
{
	if (!bLocal_1)
	{
		if (unk_0xD9C92B0885A075F8())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x833B1A3D9F713E03(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x833B1A3D9F713E03(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x833B1A3D9F713E03(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x833B1A3D9F713E03(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x833B1A3D9F713E03(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xD9C92B0885A075F8())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x833B1A3D9F713E03(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x833B1A3D9F713E03(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x833B1A3D9F713E03(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x833B1A3D9F713E03(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x833B1A3D9F713E03(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_193()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

