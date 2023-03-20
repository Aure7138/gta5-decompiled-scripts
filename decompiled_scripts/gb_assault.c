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
	var uLocal_56 = 0;
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<65> Local_99 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_164[32];
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<8> Local_363[15];
	struct<3> Local_484 = { 0, 0, 0 } ;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	struct<3> Local_499 = { 0, 0, 0 } ;
	struct<3> Local_502 = { 0, 0, 0 } ;
	var uLocal_505 = 0;
	int iLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	Local_360 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_492 = -1;
	iLocal_493 = -1;
	iLocal_495 = -1;
	iLocal_496 = -1;
	if (unk_0x1995B52453EF6537() && func_959(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
	{
		func_944(ScriptParam_0);
	}
	else
	{
		func_892();
	}
	while (true)
	{
		func_891();
		if (func_884())
		{
			func_892();
		}
		else if (func_881(1))
		{
			func_892();
		}
		Global_1759248.f_2 = Local_99.f_63;
		Global_1759248.f_3 = Local_99.f_64;
		switch (func_880(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_879() == 1)
				{
					if (func_878())
					{
						if (unk_0x1B982A8B37108B3C(Local_99.f_12))
						{
						}
						func_877();
						if (func_876())
						{
							func_861(159, 1, -1, 1);
							unk_0xE7838AA03E82E887(1);
						}
						else
						{
							func_861(159, 0, -1, 1);
							if (unk_0x1B982A8B37108B3C(Local_99.f_12))
							{
								unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
							}
						}
						if (func_860() == 1)
						{
							unk_0x6FE7B9647FC3C004("CS3_07_MPGates");
							unk_0xB8A73E7DA87B2968(&uLocal_357, 4);
							unk_0xFA03BA297FE81584(joaat("rhino"), 1);
						}
						else if (func_860() == 2)
						{
							func_859();
						}
						else if (func_860() == 3)
						{
							func_858();
						}
						if (func_857(1))
						{
							unk_0xB8A73E7DA87B2968(&uLocal_358, 5);
						}
						if (unk_0x1B982A8B37108B3C(Local_99.f_12))
						{
							unk_0x274499581D5A2F1E(unk_0x629B43A8C1BDED52(Local_99.f_12), 1200);
						}
						func_856();
						func_849();
						Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 1;
					}
				}
				else if (func_879() == 4)
				{
					Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_879() == 1)
				{
					func_848();
					func_840();
					func_359();
					func_354();
					if (func_876() || func_353())
					{
						func_199(&(Global_1342709.f_527), &Global_1342709, 24, &(Global_1342709.f_1), &(Global_1342709.f_110), -1, 0);
					}
				}
				else if (func_879() == 4)
				{
					Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 3;
				}
				func_198();
				break;
			
			case 3:
				func_197(&(Local_99.f_52));
				if (func_196(&(Local_99.f_52)))
				{
					Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 4;
				}
				func_198();
				break;
			
			case 2:
				func_198();
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 4;
			
			case 4:
				func_892();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_879())
			{
				case 0:
					if (func_860() != -1)
					{
						if ((func_186() && func_44()) && func_26())
						{
							func_25();
							func_23();
							if (func_860() == 3)
							{
								unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 6);
							}
							Local_99.f_0 = 1;
							Local_99.f_8 = unk_0x1E7FB1CA38C403F6();
							Local_99.f_9 = unk_0xFB6B3EEFAB2DD12C();
							func_861(159, 1, -1, 1);
							unk_0x87B63DFBDD3C9326(&(Local_99.f_63), &(Local_99.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_99.f_0 = 4;
					}
					else if (func_1())
					{
						Local_99.f_0 = 4;
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
	if (Global_2494149.f_4710.f_20)
	{
		Global_2494149.f_4710.f_20 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_99.f_51 > 0)
	{
		if (Local_99.f_0 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_99.f_51)
	{
		case 0:
			Local_99.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (unk_0xF44A5E894FE76438(Local_99.f_1, 7))
			{
				Local_99.f_51 = 2;
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 20))
			{
				if (Local_99.f_5 != -1)
				{
					Local_99.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 6))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_13[0]))
				{
					if (func_10(Local_99.f_13[0]))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()
{
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 16))
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 20))
		{
			if (!func_9(&(Local_99.f_60)))
			{
				func_8(&(Local_99.f_60), 0, 0);
			}
			else if (func_6(&(Local_99.f_60), func_7(), 0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_99.f_54)))
	{
		if (unk_0xF44A5E894FE76438(Local_99.f_1, 2))
		{
			func_8(&(Local_99.f_54), 0, 0);
		}
	}
	else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 4))
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 3))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
			{
				if (func_6(&(Local_99.f_54), func_12(), 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_10948;
}

void func_13()
{
	int iVar0;
	
	if (!unk_0x04DE35D10A718EEF())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_99.f_35[iVar0])
		{
			case 0:
				if (unk_0x1B982A8B37108B3C(Local_99.f_13[iVar0]))
				{
					if (func_860() != 2)
					{
						Local_99.f_35[iVar0] = 3;
					}
					else
					{
						Local_99.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0xF44A5E894FE76438(Local_99.f_1, 11))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0xF44A5E894FE76438(Local_99.f_1, 12))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0xF44A5E894FE76438(Local_99.f_1, 13))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0xF44A5E894FE76438(Local_99.f_1, 14))
				{
					Local_99.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Local_99.f_0 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = unk_0x7A4693BB354F3CD3(iVar3);
			if (unk_0x1E0256D6F1052B31(iVar4))
			{
				if (unk_0xBF474853319C6A20(iVar4))
				{
					iLocal_359 = unk_0xCA5CB25B27CC9477(iVar4);
					if (func_959(iVar4, 1, 1))
					{
						func_15(iLocal_359, 0);
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 2))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 2);
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 7))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 7))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 7);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 11))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 12))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 11);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 12))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 13))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 12);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 13))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 14))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 13);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 14))
					{
						if (Local_164[iLocal_359 /*6*/].f_2 != 0)
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_359;
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 4))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
						{
							if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 3))
							{
								Local_99.f_6 = iVar4;
								unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_359;
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 8))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 9))
						{
							Local_99.f_6 = iVar4;
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 8);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 10))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 11))
						{
							if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 5))
							{
								Local_99.f_6 = iVar4;
							}
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 10);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 15))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 15))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 15);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 18))
					{
						if (unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 16))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 18);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((unk_0xF44A5E894FE76438(Local_99.f_1, 1) || unk_0xF44A5E894FE76438(Local_99.f_1, 3)) || unk_0xF44A5E894FE76438(Local_99.f_1, 4)) || unk_0xF44A5E894FE76438(Local_99.f_1, 5)) || unk_0xF44A5E894FE76438(Local_99.f_1, 8)) || unk_0xF44A5E894FE76438(Local_99.f_1, 9)) || unk_0xF44A5E894FE76438(Local_99.f_1, 10)) || unk_0xF44A5E894FE76438(Local_99.f_1, 15)) || unk_0xF44A5E894FE76438(Local_99.f_1, 18))
							{
								if (!unk_0xF44A5E894FE76438(Local_164[iLocal_359 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 5))
				{
					if (Local_99.f_9 > -1)
					{
						if (iVar3 == Local_99.f_9)
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 5);
						}
					}
				}
			}
			else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 5))
			{
				if (Local_99.f_9 > -1)
				{
					if (iVar3 == Local_99.f_9)
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 4))
			{
				if (Local_99.f_5 != iVar0)
				{
					Local_99.f_5 = iVar0;
					if (Local_99.f_5 == -1)
					{
					}
					else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 16))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 16);
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 8))
		{
			if (Local_99.f_7 != iVar1)
			{
				Local_99.f_7 = iVar1;
				if (Local_99.f_7 == -1)
				{
				}
				else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 16))
				{
					unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 16);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
		{
			if (!bVar2)
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_860() == 1)
	{
		if (!unk_0xF44A5E894FE76438(Local_99.f_2, iParam0))
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_29[iParam1]))
			{
				if (func_21(Local_99.f_29[iParam1]))
				{
					iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_99.f_9 > -1)
					{
						iVar1 = unk_0x7A4693BB354F3CD3(Local_99.f_9);
						if (unk_0x1E0256D6F1052B31(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								unk_0xB8A73E7DA87B2968(&(Local_99.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						unk_0x7DB7C94CC67E6154(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam1]), iVar0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_99.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_18())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_18())
			{
				if (Global_1618089[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_18())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return !func_22(unk_0xE95C934718B1A4FF(uParam0));
	}
	return 0;
}

int func_22(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
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

void func_23()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 17))
	{
		Var0 = { 200f, 200f, 200f };
		Var3 = { func_24() };
		unk_0xE6C975AE756267A4(Var3 - Var0, Var3 + Var0, 0, 1);
		unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 17);
	}
}

Vector3 func_24()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_860();
	iVar1 = func_25();
	Var2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					Var2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					Var2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					Var2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					Var2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					Var2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					Var2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					Var2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					Var2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					Var2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					Var2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					Var2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					Var2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return Var2;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_4 != -1)
	{
		return Local_99.f_4;
	}
	iVar0 = 0;
	iVar1 = func_860();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x7BC26452241AC7C9(0, 3);
			break;
	}
	Local_99.f_4 = iVar0;
	return Local_99.f_4;
}

int func_26()
{
	switch (Local_99.f_3)
	{
		case 1:
			func_28(0, joaat("rhino"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("fbi"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("superd"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("hexer"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("hexer"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	switch (func_860())
	{
		case 1:
			if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]) && unk_0x1B982A8B37108B3C(Local_99.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]) && unk_0x1B982A8B37108B3C(Local_99.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x1B982A8B37108B3C(Local_99.f_29[iParam0]))
	{
		unk_0x4ACD1E4CBA159ED1(iParam1);
		if (unk_0x7AD0E9452821C95D(iParam1))
		{
			if (unk_0xDAA10C24602AFD31(0, 1, 0, 0))
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_10, iParam0))
				{
					unk_0x500FFA49AC5ABB1D(Param2, 5f, 1, 0, 0, 0);
					unk_0xB8A73E7DA87B2968(&(Local_99.f_10), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_99.f_29[iParam0]), iParam1, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0))
					{
						unk_0xD09A5BC5752CAEDE(unk_0x0DE80E23B2BD02BD(Local_99.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 2);
						}
						else
						{
							unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1);
						}
						unk_0x0C4CBD605A865339(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1);
						unk_0xA684CDD2089A6AE7(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 0);
						unk_0x4790D4CCED5150A0(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 0, 0);
						unk_0x28874DB1CA2EB0D2(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1);
						unk_0xBBAF4B768DDB7572(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 0);
						unk_0x35A8A01CFABC004E(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1);
						unk_0x7D326D5F253C92C7(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]));
						unk_0x09AB636BA0F9BE90(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1, 1, 0);
						unk_0x0BD3F78CDD5346A8(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 1);
						unk_0x25041ED63D93D755(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), 0);
						if (func_860() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = unk_0xBBDA792448DB5A89(unk_0xB38A470B669AC00B(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								unk_0xE81D470B804DC69A(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0x5C0EF8ACF10EF629(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0x525451C25B51E42B(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), fVar0);
								unk_0xFC35FDA015D05A4C(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), fVar0);
								unk_0x26F5F15AFEF0CC8A(unk_0xE95C934718B1A4FF(Local_99.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x1B982A8B37108B3C(Local_99.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_10954;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_31(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_38(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_32(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

int func_32(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_959(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_37(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
		if (func_959(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_33(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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

int func_33(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312731;
}

Vector3 func_37(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_38(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_959(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam9) && bParam6) && func_39(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_37(iVar1), Param0, 1) < fParam3)
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

int func_39(int iParam0)
{
	if (func_43(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_42(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_40(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_41(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_41(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_18();
}

struct<13> func_42(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_43(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_42(iParam0) };
		Global_2482018 = { func_42(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_44()
{
	switch (Local_99.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_45(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_45(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<26> Var1;
	struct<3> Var27;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_25 = -1082130432;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		unk_0x4ACD1E4CBA159ED1(iVar0);
		if (unk_0x7AD0E9452821C95D(iVar0))
		{
			if (unk_0xC802318C234A1488(1))
			{
				Var27 = { func_185() };
				if (!func_9(&(Local_99.f_58)))
				{
					func_8(&(Local_99.f_58), 0, 0);
				}
				if (func_46(Var27, 5f, &Local_484, &uLocal_487, Var1) || unk_0xF44A5E894FE76438(Local_99.f_1, 19))
				{
					if (unk_0xF44A5E894FE76438(Local_99.f_1, 19))
					{
						Local_484 = { Var27 };
					}
					Local_99.f_12 = unk_0x2068F4FA88DFDA14(unk_0xED43F9B9C8B5F1F9(joaat("pickup_portable_crate_fixed_incar"), Local_484, 1, iVar0));
					unk_0x8D7D9565420EE4B0(Local_99.f_12, 1);
					unk_0x5477ED2CB1DDA160(unk_0x629B43A8C1BDED52(Local_99.f_12), Local_484 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x8188DB74546FF484(iVar0);
					unk_0x0A924F4E6E826379(unk_0x629B43A8C1BDED52(Local_99.f_12), 1);
					unk_0x0BD3F78CDD5346A8(unk_0x629B43A8C1BDED52(Local_99.f_12), 1);
					if (bParam0)
					{
						if (unk_0x1B982A8B37108B3C(Local_99.f_13[iParam1]))
						{
							if (!func_10(Local_99.f_13[iParam1]))
							{
								unk_0x5EBA9610960911F5(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						unk_0x5477ED2CB1DDA160(unk_0x629B43A8C1BDED52(Local_99.f_12), Var27 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 19))
				{
					if (func_6(&(Local_99.f_58), 15000, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 19);
					}
				}
			}
		}
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var44;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_47(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var44 = { Param0 - Var0[0 /*3*/] };
			if (Var44.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_47(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar84;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404994.f_2019 == *uParam0 || !Global_2404994.f_2019.f_1 == uParam0->f_1) || !Global_2404994.f_2019.f_2 == uParam0->f_2) || !Global_2404994.f_2022 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2) || !Global_2404994.f_2039 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404994.f_2017 == 1)
		{
			if (unk_0x597C1E51157E5516(Global_2404994.f_2026))
			{
				if (Global_2404994.f_2026 == unk_0x3ED6DDB11A7AD67F())
				{
					if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_184(0))
					{
						return 0;
					}
				}
				else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_184(0))
				{
					return 0;
				}
			}
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_183();
		}
		Global_2404994.f_2017 = 0;
	}
	else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) > func_184(0))
	{
		Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x491763F024B284EB(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404994.f_2017)
	{
		unk_0xE8565300808F0BF9();
		unk_0xFFDCA3284D1BB27E();
		func_183();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_31(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xE9B2C327B97A0FE2())
		{
			Global_2404994.f_2040 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404994.f_2019 = { *uParam0 };
					Global_2404994.f_2022 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = 0f;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = uParam0->f_14;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_182(Var8.f_0, Var8.f_1);
			}
			Global_2404994.f_2018 = 1;
			Global_2404994.f_2017 = 1;
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2026 = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404994.f_2017)
	{
		if (Global_2404994.f_2018 == 1)
		{
			if (unk_0x5AF533059A5816BC(fVar4, fVar5, fVar6, fVar7) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 5000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					func_163(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_162(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404994.f_2018 = 9;
				}
				else
				{
					Global_2404994.f_2018 = 2;
				}
			}
		}
		if (Global_2404994.f_2018 == 2)
		{
			if ((unk_0x5800AAD1409A90F2(Var11, Var14) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 15000) || unk_0xD6486010C4575E7D(Var11, Var14) == 0)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam0->f_5 && !func_34(unk_0xFB6B3EEFAB2DD12C(), 0))
				{
					Global_2404994.f_2018 = 3;
				}
				else
				{
					Global_2404994.f_2018 = 4;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2028) > 7000)
			{
				func_161(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404994.f_2018 == 3)
		{
			if (func_160() || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 10000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 4;
			}
		}
		if (Global_2404994.f_2018 == 4)
		{
			if (unk_0xE9B2C327B97A0FE2())
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
			}
			else
			{
				iVar0 = 0;
				func_154();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xD476586AFC38802E(unk_0xFB6B3EEFAB2DD12C(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 1:
							func_153(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 2:
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_153(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404994.f_2018 == 5)
		{
			if (func_91(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404994.f_2044.f_5)
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 6;
				}
				else
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404994.f_2018 = 9;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 6)
		{
			iVar0 = 0;
			Global_2404994.f_2044.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_90(uParam0->f_4))
				{
					if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_89(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_153(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404994.f_2018 == 7)
		{
			if (func_91(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404994.f_2155[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_162(Global_2404994.f_2155[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_87(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x1FA2886237245376(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_50(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404994.f_2018 = 9;
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_49(Global_2404994.f_476))
				{
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_48(uParam2, &(Global_2404994.f_2044.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar84 = false;
				}
				else
				{
					bVar84 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404994.f_2019 };
				func_50(uParam2[0 /*3*/], 0, bVar84, 0, 0, uParam0, uParam1);
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 9;
		}
		if (Global_2404994.f_2018 == 9)
		{
			Global_2404994.f_2017 = 0;
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_183();
			return 1;
		}
		Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
	}
	return 0;
}

void func_48(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_49(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar62;
	int iVar63;
	bool bVar64;
	int iVar65;
	struct<3> Var66;
	struct<3> Var69;
	struct<3> Var72;
	float fVar75;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar65 = 0;
	}
	else
	{
		iVar65 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar65 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var66 = { *uParam5 };
						if (func_90(uParam5->f_4) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 1:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_89(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 2:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_89(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar65 += 4;
		}
	}
	if (func_52(*uParam0, &Var0, iVar65, iParam3, 1))
	{
	}
	else
	{
		bVar64 = true;
	}
	if (bVar64)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar63 = 0;
		while (iVar63 < 2)
		{
			Var4.f_38[iVar63 /*3*/] = { uParam6->f_13[iVar63 /*3*/] };
			Var4.f_45[iVar63] = uParam6->f_20[iVar63];
			iVar63++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_163(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var69 = { *uParam5 };
				fVar75 = uParam5->f_4;
				break;
			
			case 1:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				break;
			
			case 2:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				fVar75 = uParam5->f_14;
				break;
		}
		if (!func_51(Var0, uParam5->f_7, Var69, Var72, fVar75))
		{
			if (func_52(*uParam0, &Var0, iVar65, iParam3, 0))
			{
				if (!func_51(Var0, uParam5->f_7, Var69, Var72, fVar75))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var69 };
					}
					if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
					{
						Var0.f_2 = uVar62;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var69 };
				}
				if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
				{
					Var0.f_2 = uVar62;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404994.f_616 = 1;
}

int func_51(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_87(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_52(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_86(Param0, uParam3))
	{
		if (func_53(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x97FC103562922B9C(Param0, 0, uParam3, iParam4))
	{
		if (func_53(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_68(Global_2404994.f_493, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_60(*uParam3, 1056964608))
			{
				if (!func_54(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_59(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_58(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_58(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_55(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_57(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_56(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_56(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_57(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_57(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_56(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_56(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_56(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_57(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_58(struct<3> Param0, var uParam3)
{
	return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_59(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410148[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410148[1])
	{
		if (Param0.f_0 < Global_2410152[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410148[2])
	{
		if (Param0.f_0 < Global_2410152[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410152[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410152[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_60(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_65(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (Global_1632166.f_43047 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_43047)
			{
				if (Global_1632166.f_43048[iVar0 /*59*/].f_7 != 0)
				{
					if (func_61(Param0, Global_1632166.f_43048[iVar0 /*59*/], Global_1632166.f_43048[iVar0 /*59*/].f_6, Global_1632166.f_43048[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_40786 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_40786)
			{
				if (Global_1632166.f_40789[iVar0 /*92*/].f_16 != 0)
				{
					if (func_61(Param0, Global_1632166.f_40789[iVar0 /*92*/], Global_1632166.f_40789[iVar0 /*92*/].f_3, Global_1632166.f_40789[iVar0 /*92*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_55074 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_55074)
			{
				if (Global_1632166.f_55078[iVar0 /*137*/].f_12 != 0)
				{
					if (func_61(Param0, Global_1632166.f_55078[iVar0 /*137*/], Global_1632166.f_55078[iVar0 /*137*/].f_3, Global_1632166.f_55078[iVar0 /*137*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_61(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_64(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_63(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_62(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xC3D3EC28F0EB3C6D((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xC3D3EC28F0EB3C6D((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xC3D3EC28F0EB3C6D((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x1FA2886237245376(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0xA8DA2E2DC299ED17(iParam0))
	{
		unk_0xB1C5AB29009DDB95(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_63(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_64(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_62(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_66(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_66(int iParam0)
{
	return func_67(iParam0);
}

bool func_67(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_68(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_80(Param0))
	{
		if (func_79(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_71(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_70(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_69(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_63(&Var0, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0f, 360f));
		}
		else
		{
			func_63(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_70(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_2258[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_76(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_73(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_76(Var2, &uVar1) || func_72(Var2))
			{
				Var2 = { *uParam0 };
				func_73(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404994.f_561 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_558);
		if (fVar0 < Global_2404994.f_561)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_75(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_75(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_75(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_69(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_74(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_55(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_74(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_75(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_69(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_74(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_55(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x3A6A7A8FACA42CE3(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_162(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_87(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x1FA2886237245376(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_76(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_78();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9 == 1)
		{
			if (func_77(Param0, &(Global_2404994.f_355[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_162(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404994.f_2256) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_87(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409172[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409172[iVar0 /*17*/].f_16))
			{
				if (func_77(*uParam0, &(Global_2409172[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409172[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409172[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_73(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_79(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_73(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_80(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404994.f_496)
	{
		if (!Global_2404994.f_43.f_311)
		{
			if (!func_84(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 1;
			}
			if (!func_83(Param0, 1008981770))
			{
				if (!func_79(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_79(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_82(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_81(&(Global_2404994.f_43[iVar0 /*12*/])) };
					if (!func_79(&Var1, 0, 0, 0))
					{
						if (!func_79(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_81(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_82(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_77(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_83(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_77(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_84(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_85(iParam0) != 0;
	}
	return func_65(iParam0, bParam1);
}

int func_85(int iParam0)
{
	if (func_959(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_86(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404994.f_1816[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404994.f_1816[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_87(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_88(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_88(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_89(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_90(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_91(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404994.f_2044.f_1 == 0 && Global_2404994.f_2044 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x9F963199250B6023(&(Global_2404994.f_2044.f_1)))
			{
				case 0:
					func_151(uParam1, uParam2);
					if (!Global_2404994.f_2044.f_2)
					{
						if (uParam2->f_7 && Global_2404994.f_525.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
							}
							if (uParam1->f_5 && func_49(Global_2404994.f_476))
							{
								if (!Global_2404994.f_2044.f_5)
								{
									Global_2404994.f_2044.f_5 = 1;
								}
								else
								{
									func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_50(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_151(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xE9B2C327B97A0FE2())
		{
			if (!unk_0x67CEA645920D77B3())
			{
				if (unk_0x7552418F5ADA016B())
				{
					func_151(uParam1, uParam2);
					Global_2404994.f_2044.f_1 = unk_0x90D3312D14B7087F();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xFFDCA3284D1BB27E();
				func_151(uParam1, uParam2);
				if (!Global_2404994.f_2044.f_2)
				{
					Global_2404994.f_2044.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_148(Global_2404994.f_525, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67));
	}
	if (uParam2->f_7 && !Global_2404994.f_2044.f_4)
	{
		Global_2404994.f_2044.f_4 = 1;
		func_99(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404994.f_2044.f_1 > 0 || Global_2404994.f_2044 > 0)
	{
		if (uParam1->f_5 || unk_0xE9B2C327B97A0FE2())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404994.f_2044.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404994.f_2044.f_3)
					{
						iVar4 = Global_2404994.f_2044.f_3 + 1;
					}
					if (iVar4 > (Global_2404994.f_2044.f_1 - 1))
					{
						iVar4 = (Global_2404994.f_2044.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x5EF985FA07E6F1E5(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x90EED921185F6A10(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x0525FDD030AB268F(iVar4);
					}
					else
					{
						unk_0x8B60801B70487753(iVar4, &iVar5);
					}
					func_99(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404994.f_2044.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404994.f_2044.f_1;
		}
		if (Global_2404994.f_2044.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404994.f_2349)
			{
				func_93(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_49(Global_2404994.f_476))
			{
				if (Global_2404994.f_2044.f_2)
				{
					func_48(uParam0, &(Global_2404994.f_2044.f_6));
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_48(uParam0, &(Global_2404994.f_2044.f_6));
				func_92(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x7BC26452241AC7C9(0, Global_2404994.f_2044.f_1);
				unk_0x5EF985FA07E6F1E5(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_54(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
				func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
				func_92(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
		if (uParam1->f_5 && func_49(Global_2404994.f_476))
		{
			if (!Global_2404994.f_2044.f_5)
			{
				Global_2404994.f_2044.f_5 = 1;
			}
			else
			{
				func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_50(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
		func_92(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_92(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404994.f_2155[(3 - iVar0) /*3*/] = { Global_2404994.f_2155[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404994.f_2155[0 /*3*/] = { Param0 };
}

void func_93(var uParam0, var uParam1, var uParam2)
{
	if (func_49(Global_2404994.f_476) && func_98() < 4096)
	{
		func_97(uParam0, 0f);
		func_97(uParam1, uParam0->f_2);
		func_97(uParam2, uParam1->f_2);
	}
	else
	{
		func_96(uParam0);
		func_95(uParam2, uParam0->f_4);
		func_94(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_94(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_95(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_96(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_1;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_97(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_2 < fVar1 && Global_2407344[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_2;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407344[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_99(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	struct<9> Var24;
	bool bVar33;
	bool bVar34;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404994.f_476 == 1)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Global_2404994.f_493.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_145(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_144(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_38(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_138(Param0, fParam3, uParam4->f_15, func_143(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404994.f_3;
		}
	}
	else if (!func_135(Param0, 25f, unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_32(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_32(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			Var11 = { Global_2404994.f_493 };
			if (Global_2404994.f_476 == 26)
			{
				Var11 = { Global_2404994.f_525.f_18 };
			}
			if (func_80(Var11))
			{
				if (!func_79(&Param0, 0, 0, 0) && !func_134(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_134(&Param0, 0) && !func_70(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_133(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_132(unk_0xFB6B3EEFAB2DD12C()) && func_130(unk_0xFB6B3EEFAB2DD12C())))
		{
			if (!func_129(&Param0, &(Global_2404994.f_2044.f_67), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_130(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!func_128(Param0, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_127(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_49(Global_2404994.f_476))
			{
				if (func_83(Param0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_126(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404994.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			if (!func_71(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_54(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar15 = func_82(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_125(Param0, &Var16, &Var19, &fVar22);
			if (!func_120(&(Global_2404994.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_60(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_119(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404994.f_2349 && uParam4->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_111(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_111(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_49(Global_2404994.f_476) && iVar7 < 4096)
			{
				Var24.f_2 = func_109(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_108(Var24);
			Global_2404994.f_2044.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (iVar7 >= Global_2404994.f_2044.f_6[iVar23 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar33)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_111(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_111(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_49(Global_2404994.f_476) && iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_109(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404994.f_2044.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_107(Var24, iVar23);
							Global_2404994.f_2044.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar0 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_107(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar33)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_106(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_101(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_100(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_100(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar3 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_107(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_100(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_101(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_959(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xFB6B3EEFAB2DD12C() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_102(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x2A7336F1C6B39623(iVar11) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (!unk_0x2A7336F1C6B39623(iVar11) == -1 || !func_84(unk_0xFB6B3EEFAB2DD12C(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar11) || !bParam6)
					{
						if (func_33(iVar11))
						{
							Var5 = { func_37(iVar11) };
							if (!iVar11 == unk_0xFB6B3EEFAB2DD12C())
							{
								Var8 = { unk_0x17518BAFABBB281B(unk_0x4572B13EE70C8F52(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var5, 1);
							fVar2 = unk_0x8E92CDAEB8357ABD(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_102(int iParam0)
{
	if (func_959(iParam0, 0, 1))
	{
		if (!func_104(iParam0))
		{
			if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam0))
			{
				if (!unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_65(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_103(unk_0x2A7336F1C6B39623(iParam0), unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
				{
					if (!func_65(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_39(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

float func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_959(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_959(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_33(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam7 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_107(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404994.f_2044.f_6[iParam9 /*9*/] };
	Global_2404994.f_2044.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 2)
	{
		func_107(Var0, iParam9 + 1);
	}
}

void func_108(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_98();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] < iVar10)
		{
			Global_2407344[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] == 0)
		{
			Global_2407344[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407344[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407344[iVar12 /*9*/] = { Param0 };
	}
}

float func_109(struct<3> Param0)
{
	var uVar0;
	
	return func_110(Param0, &(Global_2404994.f_43), &uVar0);
}

float func_110(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404994.f_2256) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_111(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_100(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_101(Param0, 1, 0, 0, 1);
	fVar0 = func_100(fVar4, 0f, func_118(), func_116(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_114(Param0);
	fVar0 = func_100(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !func_84(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_113(Param0, unk_0xFB6B3EEFAB2DD12C(), 0);
	fVar0 = func_100(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_112(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_100(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_100(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_100(unk_0x2A488C176D52CCA5(Global_2404994.f_493, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_112(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x41C8568FB0571C52(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xF669A52DFC02740C(uVar3))
	{
		unk_0x2C9EE1500AAEA57C(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_113(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_959(iVar3, 0, 1))
			{
				if (unk_0x2A7336F1C6B39623(iVar3) != unk_0x2A7336F1C6B39623(iParam3) || (unk_0x2A7336F1C6B39623(iVar3) == -1 && unk_0x2A7336F1C6B39623(iParam3) == -1))
				{
					if (Global_2415705.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_114(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x7887B64A08364778(uVar6[iVar2]))
		{
			if (!unk_0xB529B2A4B7C64D6D(uVar6[iVar2], 0))
			{
				if (func_115(uVar6[iVar2]))
				{
					Var3 = { unk_0xC086F8D75730FA3A(uVar6[iVar2], 1) };
					fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_115(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x627440686F6E9BBB(uParam0);
	switch (unk_0x57BF91AE106AF0F8(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574648[unk_0xFB6B3EEFAB2DD12C()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 0)
	{
		iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574359[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_116()
{
	if (func_117())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_117()
{
	if (Global_2404994.f_43.f_65 && !Global_2404994.f_43.f_298)
	{
		if (!func_104(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

float func_118()
{
	if (func_117())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_119(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x9B85F36406C920C4(Param0, fParam7)) || (fVar0 > 0f && unk_0x4FC351BF8E970FDA(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x8341BF4B03057509(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x8341BF4B03057509(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_124(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_123(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_121(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_121(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_122(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_122(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_57(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_123(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_124(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_125(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_59(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_58(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_58(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_126(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404994.f_43.f_55)
	{
		if (unk_0x7B66213B5E371C3F(Global_2404994.f_43.f_56))
		{
			if (!unk_0x2A962D5F6CB393D4(Param0))
			{
				uVar0 = unk_0x21CE631D8E3F8ECA(Param0);
				if (unk_0x7B66213B5E371C3F(uVar0))
				{
					iVar1 = unk_0x1A315FE9AC133A2D(uVar0);
					if (!iVar1 == Global_2404994.f_43.f_57)
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
		}
	}
	return 1;
}

int func_127(struct<3> Param0)
{
	switch (Global_2404994.f_2040)
	{
		case 0:
			return func_162(Param0, Global_2404994.f_2019, Global_2404994.f_2022, 0, 0);
			break;
		
		case 1:
			return func_87(Param0, Global_2404994.f_2033, Global_2404994.f_2036, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Global_2404994.f_2033, Global_2404994.f_2036, Global_2404994.f_2039, 0, 1);
			break;
	}
	return 0;
}

int func_128(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x1FA2886237245376(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_129(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_69(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_131(iParam0))
			{
				if (Global_1589933[iParam0 /*601*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

int func_132(int iParam0)
{
	if (func_65(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404994.f_2155[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_134(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_72(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xB5FEA1F26F05B9F5(0.01f, 360f);
			func_69(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 0, fVar4);
			if (func_76(Var1, &uVar0) || func_72(Var1))
			{
				Var1 = { *uParam0 };
				func_69(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_137(Param0, fParam3, iParam4, iParam5, 0) || func_136(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415705.f_556[iVar0] == 0)
			{
				if (func_61(Param0, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 1036831949))
				{
					if (func_959(iVar1, 0, 1) && func_959(iParam3, 0, 1))
					{
						return 1;
					}
					else
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

int func_137(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_959(iVar1, 0, 1) && func_959(iParam4, 0, 1))
				{
					if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_959(iVar1, 0, 1) && func_959(iParam4, 0, 1))
				{
					if (Global_2415705.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_37(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415705.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_959(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_37(iVar1), Param0) < 1f)
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

int func_138(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404994.f_3 = 0;
	if (!func_135(Param0, 0.5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
	{
		Global_2404994.f_3++;
		if (bParam5)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_142(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_142(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_139(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404994.f_3++;
						if (!func_60(Param0, 1056964608))
						{
							Global_2404994.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (func_31(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			if (!func_142(Param0, fParam12))
			{
				Global_2404994.f_3++;
				if (!func_139(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404994.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
		}
	}
	return 0;
}

int func_139(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xFB6B3EEFAB2DD12C() == iVar1)
		{
			if ((func_959(iVar1, 1, 1) && func_33(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (!func_141(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
				{
					if (func_140(func_37(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_140(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x1FA2886237245376(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_142(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_959(iVar1, 1, 1) && func_33(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
		{
			if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && unk_0x2A7336F1C6B39623(iVar1) == -1) && !func_84(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 0;
			}
			else if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !unk_0xFB6B3EEFAB2DD12C() == iVar1) || !func_141(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_37(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0)
{
	if ((Global_2404994.f_476 == 9 || Global_2404994.f_476 == 9) || (Global_2404994.f_476 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_144(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_959(iVar1, 1, 1))
			{
				if ((!func_34(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1)) && iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x2A7336F1C6B39623(iVar1) == iVar3)
					{
						if (unk_0x8E92CDAEB8357ABD(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_145(int iParam0)
{
	if ((func_84(iParam0, 1) || func_147(iParam0)) || func_146(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_148(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_150(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_149(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_149(var uParam0, var uParam1, int iParam2)
{
	Global_2411136 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_149(&Global_2411136, uParam1, iParam2 + 1);
	}
}

void func_150(var uParam0, var uParam1, int iParam2)
{
	Global_2411132 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_150(&Global_2411132, uParam1, iParam2 + 1);
	}
}

void func_151(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			if (func_152(Global_2404994.f_1816[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404994.f_1816[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404994.f_1816[iVar0 /*4*/] };
					fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
				}
				func_99(Global_2404994.f_1816[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404994.f_2044++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404994.f_2349)
	{
		func_93(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
	}
}

int func_152(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_51(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_51(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_153(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_88(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_154()
{
	func_159();
	func_158();
	func_157();
	func_156();
	func_155();
}

void func_155()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407344[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_156()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404994.f_2044.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_157()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404994.f_2044.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_158()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404994.f_2044.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_159()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404994.f_2044 = { Var0 };
}

var func_160()
{
	return Global_1310987.f_4;
}

void func_161(var uParam0, var uParam1)
{
	func_183();
	func_182(uParam0, uParam1);
}

bool func_162(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_163(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404994.f_1685 > 0 && func_181(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_164(uParam0, uParam1, uParam2);
	}
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_68(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_180(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411146.f_162 = 0;
	Global_2411146.f_163 = 0;
	Global_2411146.f_164 = -99;
	Global_2411146.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411146.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0x41C8568FB0571C52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xF669A52DFC02740C(iVar8))
		{
			unk_0x2C9EE1500AAEA57C(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411146.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411146.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x22A8AA230C8648B4(iVar8)) || unk_0xDE4C795F44220EAC(iVar8))
			{
				unk_0x1E9574637C99DDAD(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_134(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_179(Var1))
									{
										Var1 = { func_177(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_60(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_176(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_180(&Var1, 0)) || uParam2->f_48 == 0)
															{
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_171(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_68(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_31(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					else if (func_31(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_170(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_169(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162)
																										{
																											Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411146.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411146.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411146.f_162 == 0)
																									{
																										Global_2411146[0 /*3*/] = { Var1 };
																										Global_2411146.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_168(Var1, fVar4, iVar16);
																													iVar16 = Global_2411146.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411146.f_162++;
																									if (Global_2411146.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
																									Global_2411146.f_121[Global_2411146.f_162] = fVar4;
																									Global_2411146.f_162++;
																									if (func_176(Var1, uParam2))
																									{
																										Global_2411146.f_163++;
																									}
																									if (Global_2411146.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411146.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
					else
					{
						if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
						{
							func_166(0, uParam2);
						}
						iVar24 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
						Var25 = { Global_2411146[0 /*3*/] };
						uVar28 = Global_2411146.f_121[0];
						Global_2411146[0 /*3*/] = { Global_2411146[iVar24 /*3*/] };
						Global_2411146.f_121[0] = Global_2411146.f_121[iVar24];
						Global_2411146[iVar24 /*3*/] = { Var25 };
						Global_2411146.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_164(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x7BC26452241AC7C9((1 + iVar15), (40 + iVar15));
						unk_0x7BFF9C1108FDE842(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_177(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_68(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_180(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_164(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_164(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_165(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411146.f_164 = iVar8;
	}
}

void func_165(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_135(*(uParam0[iVar2 /*4*/]), 5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_166(int iParam0, var uParam1)
{
	if (!func_176(Global_2411146[iParam0 /*3*/], uParam1))
	{
		Global_2411146.f_162 = (Global_2411146.f_162 - 1);
		func_167(iParam0);
		if (Global_2411146.f_162 > Global_2411146.f_163)
		{
			func_166(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_166(iParam0 + 1, uParam1);
	}
}

void func_167(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411146[iParam0 /*3*/] = { Global_2411146[iParam0 + 1 /*3*/] };
			Global_2411146.f_121[iParam0] = Global_2411146.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_168(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411146[iParam4 /*3*/] };
	uVar3 = Global_2411146.f_121[iParam4];
	Global_2411146[iParam4 /*3*/] = { Param0 };
	Global_2411146.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411146.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_168(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_169(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_102(iVar5))
		{
			Var1 = { func_37(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_170(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam9 == 0)
		{
			if (func_959(iVar1, bParam5, bParam6))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam8 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam10) && bParam7) && func_39(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_171(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_175(Param0, fParam3, iParam4, iParam5, iParam6) || func_172(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_172(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_174(Param0, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_556[iVar0]))
			{
				if (func_173(Param0, fParam3, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 0))
				{
					if (func_959(iVar1, 0, 1) && func_959(iParam5, 0, 1))
					{
						return 1;
					}
					else
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

int func_173(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_61(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_62(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xC3D3EC28F0EB3C6D((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xC3D3EC28F0EB3C6D((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xC3D3EC28F0EB3C6D((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_63(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_63(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_61(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_173(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_64(iParam3, 1008981770);
	fVar1 = func_64(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_175(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_959(iVar1, 0, 1) && func_959(iParam5, 0, 1))
			{
				if (Global_2415705.f_260[iVar0])
				{
					if (func_61(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415705.f_260[iVar0])
			{
				if (func_61(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_959(iVar1, 0, 0))
			{
				if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
				{
					if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_176(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_162(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_87(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_177(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_178(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x1E9574637C99DDAD(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xA9F875A86914FAA6(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_62(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_178(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x0A0C20E171493CD0(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x0BFEFDC804C62B90(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_62(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_178(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_63(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_56(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_179(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_59(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410860[iVar1])
	{
		if (func_58(Param0, &(Global_2410157[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410860[8])
	{
		if (func_58(Param0, &(Global_2410157[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_180(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404994.f_26.f_16)
	{
		switch (Global_2404994.f_26.f_15)
		{
			case 0:
				if (func_162(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_87(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_75(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, Global_2404994.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_181(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404994.f_1685 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_68(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_180(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411146.f_162 = 0;
		Global_2411146.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411146.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1685)
		{
			Var1 = { Global_2404994.f_1686[iVar0 /*4*/] };
			fVar4 = Global_2404994.f_1686[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
				{
					if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
					{
						if ((uParam2->f_12 && !func_171(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
						{
							if (!uParam2->f_15 || !func_68(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
							{
								if (uParam2->f_8)
								{
									iVar6 = uParam2->f_31;
									bVar7 = true;
									iVar8 = 1;
									fVar9 = uParam2->f_49;
									if (!uParam2->f_55)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										fVar9 = 1f;
									}
									else if (uParam2->f_17)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
									else
									{
										bVar7 = true;
										iVar8 = 1;
										if (uParam2->f_28)
										{
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
									}
									bVar10 = false;
									if (uParam2->f_3 > 7f)
									{
										if (func_31(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
										{
											bVar10 = true;
										}
									}
									else if (func_31(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_170(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
									if (bVar10)
									{
										if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
										{
											fVar12 = 0f;
											if (uParam2->f_52)
											{
												iVar11 = func_169(Var1, uParam2->f_54, &fVar12);
											}
											if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
											{
												if (uParam2->f_52)
												{
													if (iVar11 < uParam2->f_53)
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162)
														{
															Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
															Global_2411146.f_121[iVar5] = 0f;
															iVar5++;
														}
														Global_2411146.f_162 = 0;
														uParam2->f_53 = iVar11;
													}
												}
												if (uParam2->f_30)
												{
													if (Global_2411146.f_162 == 0)
													{
														Global_2411146[0 /*3*/] = { Var1 };
														Global_2411146.f_121[0] = fVar4;
													}
													else
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162 + 1)
														{
															if (iVar5 < 40)
															{
																if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar5 /*3*/], uParam2->f_35))
																{
																	func_168(Var1, fVar4, iVar5);
																	iVar5 = Global_2411146.f_162 + 1;
																}
															}
															iVar5++;
														}
													}
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 5)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
												else
												{
													Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
													Global_2411146.f_121[Global_2411146.f_162] = fVar4;
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 10)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
											}
										}
										else
										{
											*uParam0 = { Var1 };
											*uParam1 = fVar4;
											return 1;
										}
									}
								}
								else
								{
									*uParam0 = { Var1 };
									*uParam1 = fVar4;
									return 1;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411146.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
				{
					func_166(0, uParam2);
				}
				iVar13 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
				Var14 = { Global_2411146[0 /*3*/] };
				uVar17 = Global_2411146.f_121[0];
				Global_2411146[0 /*3*/] = { Global_2411146[iVar13 /*3*/] };
				Global_2411146.f_121[0] = Global_2411146.f_121[iVar13];
				Global_2411146[iVar13 /*3*/] = { Var14 };
				Global_2411146.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_181(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_164(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_182(var uParam0, var uParam1)
{
	unk_0x972722D5CDECF6C9(uParam0, uParam1, 0.1f);
	Global_2404994.f_2027 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_2025 = 1;
	Global_2404994.f_2028 = unk_0x7414B386C0020BEC();
}

void func_183()
{
	if (Global_2404994.f_2025)
	{
		if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_2027)
		{
			unk_0xF917823066DAF89F();
		}
		else
		{
			unk_0xF917823066DAF89F();
		}
		Global_2404994.f_2025 = 0;
	}
}

int func_184(bool bParam0)
{
	if (unk_0x7E3640C27B17457C())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_185()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_860();
	Var1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			Var1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			Var1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			Var1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			Var1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return Var1;
}

int func_186()
{
	switch (Local_99.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_187())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	uVar0 = func_195();
	iVar1 = func_194();
	if (func_860() == 0)
	{
		iVar7 = Global_1574684;
	}
	else if (func_860() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1574687;
	}
	switch (func_860())
	{
		case 1:
			func_193(&Var2, &uVar6, &uVar5);
			func_192(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_191((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_189(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_193(&Var2, &uVar6, &uVar5);
			func_192(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_191((iVar8 - 1), &Var2, &uVar6, &uVar5);
				if (iVar8 <= 2)
				{
					iVar1 = joaat("s_m_m_fibsec_01");
				}
				else
				{
					iVar1 = func_194();
				}
				func_189(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_193(&Var2, &uVar6, &uVar5);
			func_192(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_194();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_191((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_189(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_193(&Var2, &uVar6, &uVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_191((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_189(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_188())
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	switch (func_860())
	{
		case 1:
			if ((((unk_0x1B982A8B37108B3C(Local_99.f_13[0]) && unk_0x1B982A8B37108B3C(Local_99.f_13[1])) && unk_0x1B982A8B37108B3C(Local_99.f_13[2])) && unk_0x1B982A8B37108B3C(Local_99.f_13[3])) && unk_0x1B982A8B37108B3C(Local_99.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((unk_0x1B982A8B37108B3C(Local_99.f_13[0]) && unk_0x1B982A8B37108B3C(Local_99.f_13[1])) && unk_0x1B982A8B37108B3C(Local_99.f_13[2])) && unk_0x1B982A8B37108B3C(Local_99.f_13[3])) && unk_0x1B982A8B37108B3C(Local_99.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((unk_0x1B982A8B37108B3C(Local_99.f_13[0]) && unk_0x1B982A8B37108B3C(Local_99.f_13[1])) && unk_0x1B982A8B37108B3C(Local_99.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((unk_0x1B982A8B37108B3C(Local_99.f_13[1]) && unk_0x1B982A8B37108B3C(Local_99.f_13[2])) && unk_0x1B982A8B37108B3C(Local_99.f_13[3])) && unk_0x1B982A8B37108B3C(Local_99.f_13[4])) && unk_0x1B982A8B37108B3C(Local_99.f_13[5])) && unk_0x1B982A8B37108B3C(Local_99.f_13[6])) && unk_0x1B982A8B37108B3C(Local_99.f_13[7])) && unk_0x1B982A8B37108B3C(Local_99.f_13[8])) && unk_0x1B982A8B37108B3C(Local_99.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_189(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_99.f_13[iParam0]))
	{
		unk_0x4ACD1E4CBA159ED1(iParam1);
		if (unk_0x7AD0E9452821C95D(iParam1))
		{
			if (unk_0xDAA10C24602AFD31(1, 0, 0, 0))
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_11, iParam0))
				{
					unk_0x500FFA49AC5ABB1D(Param2, 2f, 1, 0, 0, 0);
					unk_0xB8A73E7DA87B2968(&(Local_99.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_190(&(Local_99.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), iParam7);
						unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1, 0);
						unk_0xD6E6C197BF8B123B(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 0);
						unk_0x9A786A618DB6198F(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0xCC1ADAE00A66FF6C(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0xABB48CA0EFB4A847(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xCEFA2AEA28935397(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 0, 1);
						unk_0x37B0D239F4029CF2(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x67439B36E65B7EB9(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 42, 1);
						unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 200);
						unk_0x0D8C87B6FED97F37(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xBC0082E17CEB6616(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), Param2, uParam6, 0, 0);
						if (func_860() == 2)
						{
							unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						}
					}
				}
			}
		}
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_190(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	uVar0 = unk_0x8C855D8124E955CE(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x3EE3A80A2D8115F8(uVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(uVar0, iParam9);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam7)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_860())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*uParam2 = 252.5942f;
					*uParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*uParam2 = 47.6051f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*uParam2 = 107.9506f;
					*uParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*uParam2 = 323.9433f;
					*uParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*uParam2 = 357.3127f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*uParam2 = 219.4789f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*uParam2 = 62.113f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*uParam2 = 28.2234f;
					*uParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*uParam2 = 65.8332f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*uParam2 = 323.2079f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*uParam2 = 296.486f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*uParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*uParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*uParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*uParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*uParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*uParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*uParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*uParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*uParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*uParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_192(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_99.f_13[iParam0]))
	{
		unk_0x4ACD1E4CBA159ED1(uParam1);
		if (unk_0x7AD0E9452821C95D(iParam1))
		{
			if (unk_0xDAA10C24602AFD31(0, 1, 0, 0))
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_11, iParam0))
				{
					unk_0x500FFA49AC5ABB1D(Param2, 2f, 1, 0, 0, 0);
					unk_0xB8A73E7DA87B2968(&(Local_99.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_190(&(Local_99.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), iParam7);
						unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1, 0);
						if (func_860() == 1)
						{
							unk_0x5BD2F51088536150(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 3, 0, 0, 0);
							unk_0x5BD2F51088536150(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 8, 0, 0, 0);
							unk_0x5BD2F51088536150(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 10, 0, 0, 0);
							unk_0xA89A57E40879561F(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 0, 1, 0, 0);
						}
						else
						{
							unk_0xD6E6C197BF8B123B(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 0);
						}
						unk_0x9A786A618DB6198F(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0xCC1ADAE00A66FF6C(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0xABB48CA0EFB4A847(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xCEFA2AEA28935397(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 0, 1);
						unk_0x37B0D239F4029CF2(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x67439B36E65B7EB9(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 42, 1);
						unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 200);
						unk_0x0D8C87B6FED97F37(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), 1);
						unk_0xBC0082E17CEB6616(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iParam0]), Param2, uParam6, 0, 0);
					}
				}
			}
		}
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	switch (func_860())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*uParam1 = 346.3493f;
			*uParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*uParam1 = 155.4586f;
			*uParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*uParam1 = 235.3724f;
			*uParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*uParam1 = 22.5507f;
			*uParam2 = 1f;
			break;
	}
}

int func_194()
{
	int iVar0;
	
	switch (func_860())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_195()
{
	int iVar0;
	
	switch (func_860())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_196(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_198()
{
	if (unk_0xF44A5E894FE76438(uLocal_357, 29))
	{
		if (unk_0xF44A5E894FE76438(iLocal_357, 28))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_357, 25))
			{
				if (unk_0xF44A5E894FE76438(uLocal_358, 0))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_358, 1))
					{
						unk_0xE64FA07C00C340C6(1);
						unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xF44A5E894FE76438(iLocal_357, 26))
				{
					if (unk_0xC86A1E7DAC7A9357("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 26);
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_357, 26))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 27))
					{
						if (unk_0xC86A1E7DAC7A9357("APT_FADE_IN_RADIO"))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_357, 27);
						}
					}
					if (unk_0xF44A5E894FE76438(iLocal_357, 27))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 25);
					}
				}
			}
		}
	}
}

void func_199(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_337(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_335() || iParam2 == 24)
	{
		if (func_284(uParam1, iParam2, uParam3, Global_1574103, 0, func_333()))
		{
			func_283(1);
			if ((!func_281() && !func_279()) || unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
			{
				if (func_278())
				{
					func_275();
				}
				else
				{
					unk_0x8C8A1913314B5A90(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_274(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574251 != 1)
						{
							func_273(uParam1);
							if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
							{
								unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_959(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x1E8AEE4F02F8E526(iVar35, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar35 /*358*/].f_239 != -1) || func_131(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_272(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_269(unk_0xFB6B3EEFAB2DD12C(), 0) && func_268(unk_0xFB6B3EEFAB2DD12C()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_266())
							{
								if (func_959(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
								}
								else
								{
									iVar35 = func_18();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_265(iVar35) && func_259(iVar35, iParam2)) && func_959(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
								Var38 = { func_254(iVar35) };
								if (iVar35 == unk_0xFB6B3EEFAB2DD12C())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x7746E8ACE891BFA4(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
								iVar37 = func_248(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
								}
								Global_1574103++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_266())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_243(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_242(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_235(iVar35, 0);
								if (bVar34)
								{
									if (func_19(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_234(iParam5))
								{
									func_233(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_233(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xB8A73E7DA87B2968(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							if (func_959(iVar35, 0, 1) && !unk_0xF44A5E894FE76438(iVar49, iVar35))
							{
								iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_265(iVar35))
							{
								if (func_959(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
									Var38 = { func_254(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
									iVar37 = func_248(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
									}
									Global_1574103++;
									iVar51 = func_235(iVar35, 1);
									if (bVar34)
									{
										if (func_19(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_213(iVar35, unk_0x7746E8ACE891BFA4(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							func_210(uParam3, uParam1);
						}
						func_209(&(uParam3->f_21));
						func_208();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 7))
						{
							func_207(uParam3, uParam1);
							func_206(uParam1, 0, 1);
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 7);
						}
						func_207(uParam3, uParam1);
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 11);
						}
						if (func_202(uParam3))
						{
							Global_1574251 = 1;
						}
						func_200(uParam3);
						if (Global_1574251 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574251 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x52622CA85B1C304B(*uParam1))
					{
						unk_0xCF1B9EC03D5AB61E(7);
						unk_0x733D2C5CCB2A212B(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xCF1B9EC03D5AB61E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_208();
			func_274(0);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 7))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 7);
			}
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 10))
			{
				unk_0x4EA098C870B73AB7(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_200(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_209(&(uParam0->f_21));
		func_201(0);
	}
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574251 != 2)
		{
			Global_1574251 = 2;
		}
	}
	else
	{
		switch (Global_1574251)
		{
			case 0:
				Global_1574251 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_202(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7A4693BB354F3CD3(uParam0->f_37);
	if (iVar15 != func_18() && func_959(iVar15, 0, 1))
	{
		Var2 = { func_42(iVar15) };
		iVar1 = func_205(uParam0, uParam0->f_37);
		if (func_204(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_203(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_203(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_203(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_203(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x0661F477B16B2070(&Var2))
						{
							iVar16 = 1;
							func_203(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_203(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5A7D76211B9373CD(&uParam0, 13);
}

var func_205(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3B6EF6403E3F1CAC(*uParam0, "COLLAPSE"))
	{
		unk_0x2C310F11D2096992(iParam1);
		unk_0xBBAAC5B2437ACF2A();
	}
	if (iParam2 == 1)
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

void func_207(var uParam0, var uParam1)
{
	if (!unk_0xF44A5E894FE76438(uParam0->f_33, 10))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam1, "SET_HIGHLIGHT");
		unk_0x1B215CC37BF52E79(uParam0->f_35);
		unk_0xBBAAC5B2437ACF2A();
		unk_0xB8A73E7DA87B2968(&(uParam0->f_33), 10);
	}
}

void func_208()
{
	if (Global_1574251 != 0)
	{
		Global_1574251 = 0;
	}
}

void func_209(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_210(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if (iVar2 != func_18())
		{
			if (func_959(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_212(uParam0->f_38[iVar0 /*2*/], 0);
					func_211(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589933[iVar0 /*601*/].f_202.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_211(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		if (unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_ICON"))
		{
			unk_0x1B215CC37BF52E79(iParam1);
			unk_0x1B215CC37BF52E79(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1B215CC37BF52E79(iParam3);
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

int func_212(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_213(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_232() && iParam4 < func_231())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x3B6EF6403E3F1CAC(*uParam2, sVar1))
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (unk_0xF44A5E894FE76438(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(iParam10);
			}
			func_230(sParam1);
			unk_0x1B215CC37BF52E79(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(65);
			}
			unk_0x1B215CC37BF52E79(-1);
			func_230("");
			if (uParam3->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				func_230(&sParam5);
			}
			func_218(uParam3, iParam0);
			unk_0x36BBBC81A4DEE44C(sParam9);
			unk_0x36BBBC81A4DEE44C(sParam9);
			if (func_217(uParam3))
			{
				func_216("DPAD_FRIEND");
			}
			else if (func_215(uParam3))
			{
				func_216("DPAD_FRIEND");
			}
			else if (func_214(uParam3))
			{
				func_216("DPAD_CREW");
			}
			else
			{
				func_216("");
			}
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

bool func_214(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 6);
}

bool func_215(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 5);
}

void func_216(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

int func_217(var uParam0)
{
	if (func_215(uParam0) && func_214(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_218(var uParam0, int iParam1)
{
	if (func_229(iParam1))
	{
		unk_0x1B215CC37BF52E79(121);
	}
	else if (func_223(iParam1))
	{
		unk_0x1B215CC37BF52E79(122);
	}
	else
	{
		if (func_219())
		{
			uParam0->f_36 = 0;
		}
		unk_0x2C310F11D2096992(uParam0->f_36);
	}
}

int func_219()
{
	if (unk_0x8676DE83D4396C39())
	{
		if (func_221() || func_220())
		{
			return 1;
		}
	}
	return 0;
}

bool func_220()
{
	return Global_2443089.f_12;
}

bool func_221()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_220();
	}
	return func_222(Global_1632166.f_86360);
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_223(int iParam0)
{
	if ((func_959(iParam0, 0, 1) && func_227()) && func_224(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_224(int iParam0, bool bParam1)
{
	return func_225(iParam0, bParam1, 1);
}

int func_225(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_226(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_18() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_18())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_227()
{
	if (func_147(unk_0xFB6B3EEFAB2DD12C()) || func_228())
	{
		return 0;
	}
	return 1;
}

int func_228()
{
	switch (func_268(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_229(int iParam0)
{
	if (func_219())
	{
		if (func_959(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_959(iParam0, 0, 1) && func_227()) && func_226(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_230(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
}

int func_231()
{
	int iVar0;
	
	if (Global_1574105)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_232()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574105)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_233(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_232() && iParam3 < func_231())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574251 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x52622CA85B1C304B(*uParam1))
		{
			if (unk_0x3B6EF6403E3F1CAC(*uParam1, sVar1))
			{
				unk_0x1B215CC37BF52E79(iParam3);
				if (unk_0xF44A5E894FE76438(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					func_216(sParam16);
				}
				else
				{
					func_230(&(uParam2->f_1));
				}
				unk_0x1B215CC37BF52E79(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1B215CC37BF52E79(iVar0);
				}
				else
				{
					unk_0x1B215CC37BF52E79(-1);
				}
				if (func_266())
				{
					func_230("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 5 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_ONE_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if ((uParam2->f_108 == 7 && !unk_0xC55B9553B3EDADE9(sParam16)) && !unk_0xC55B9553B3EDADE9(sParam17))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_TWO_INT");
					unk_0xB1953EBEF4D6BD85(sParam16);
					unk_0xB1953EBEF4D6BD85(sParam17);
					unk_0xF99222307D7150A9(iParam18);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 8 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x67B2488BFC4BE526(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xF99222307D7150A9(iParam10);
					}
					unk_0xB1953EBEF4D6BD85(&(uParam2->f_104));
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
					unk_0x4A1042FFF3429779(iParam10, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0BBDB952BE56A9DF("FM_AE_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
					else
					{
						unk_0x0BBDB952BE56A9DF("FM_NG_CASH");
						unk_0x4A1042FFF3429779(iParam10, 1);
						unk_0xCB329F559FA7DCD0();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xC55B9553B3EDADE9(&(uParam2->f_104)))
					{
						func_216(&(uParam2->f_104));
					}
					else
					{
						func_230("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0BBDB952BE56A9DF("STRING");
					unk_0x3672BC158A73A76A(iParam14, 6);
					unk_0xCB329F559FA7DCD0();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0BBDB952BE56A9DF("NUMBER");
					unk_0x67B2488BFC4BE526(fParam13, 1);
					unk_0xCB329F559FA7DCD0();
				}
				else if (iParam10 != -1)
				{
					unk_0x1B215CC37BF52E79(iParam10);
				}
				else
				{
					func_230("");
				}
				if (uParam2->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					func_230(&sParam4);
				}
				func_218(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xC55B9553B3EDADE9(sParam8))
				{
					func_230("");
					func_230("");
				}
				else
				{
					unk_0x36BBBC81A4DEE44C(sParam8);
					unk_0x36BBBC81A4DEE44C(sParam8);
				}
				if (func_217(uParam2))
				{
					func_216("DPAD_FRIEND");
				}
				else if (func_215(uParam2))
				{
					func_216("DPAD_FRIEND");
				}
				else if (func_214(uParam2))
				{
					func_216("DPAD_CREW");
				}
				else
				{
					func_216("");
				}
				unk_0xBBAAC5B2437ACF2A();
			}
		}
	}
}

int func_234(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_147(iParam0)) && !func_240(iParam0))
	{
		iVar0 = func_239();
	}
	iVar1 = func_238(iParam0);
	if (!iVar1 == -1)
	{
		return func_236(iVar1);
	}
	return iVar0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_237(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_237(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_238(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

int func_239()
{
	return 21;
}

bool func_240(int iParam0)
{
	return func_241(iParam0, 20);
}

bool func_241(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

char* func_242(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xD065018956F1AA2B())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xD065018956F1AA2B())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_243(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_247(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_234(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_246(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_245(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_245(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_246(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = func_251(iParam0);
	if (iVar0 == -1)
	{
		func_249(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_249(int iParam0, bool bParam1)
{
	if (!func_959(iParam0, 0, 1))
	{
		return;
	}
	if (func_251(iParam0) != -1)
	{
		return;
	}
	if (Global_1363410)
	{
		if (iParam0 == Global_1363410.f_1)
		{
			return;
		}
	}
	if (func_250(iParam0))
	{
		return;
	}
	if (Global_1363448 >= 32)
	{
		return;
	}
	Global_1363415[Global_1363448] = iParam0;
	Global_1363448++;
	if (bParam1)
	{
	}
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363448)
	{
		if (Global_1363415[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	if (!func_959(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1363408 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363408)
	{
		if (Global_1363247[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x23723A703C39388B(Global_1363247[iVar0 /*5*/].f_2) && unk_0x4636FE7BA67FB26C(Global_1363247[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_252(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_252(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1363408)
	{
		return;
	}
	if (unk_0x23723A703C39388B(Global_1363247[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1363247[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x48C5A96AE7C462A4(Global_1363247[iParam0 /*5*/].f_2), 64);
			unk_0x776A0FA6BC6101E2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB8129A62F0984659(Global_1363247[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1363408)
	{
		Global_1363247[iVar32 /*5*/] = { Global_1363247[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_253(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_253(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

struct<4> func_254(int iParam0)
{
	struct<4> Var0;
	
	if (func_959(iParam0, 0, 1))
	{
		Global_2482005 = { func_42(iParam0) };
		if (unk_0xF1A016B51831B87B())
		{
			if (func_204(Global_2482005))
			{
				if (!unk_0xD59699C2E1196EDA(&Global_2482005))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xDE49089F060E6818(0))
		{
			return Var0;
		}
		if (func_258(&Global_2482005))
		{
			Global_2481935 = { func_256(iParam0) };
			func_255(&Global_2481935, &Var0);
		}
	}
	return Var0;
}

void func_255(var uParam0, var uParam1)
{
	unk_0x80BC8B50E2E17138(uParam0, 35, uParam1);
}

struct<35> func_256(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_257(iParam0))
	{
		return Global_1315261[unk_0xFB6B3EEFAB2DD12C() /*35*/];
	}
	Var0 = { func_42(iParam0) };
	unk_0xF6955213DB8BD7D3(&Var13, 35, &Var0);
	return Var13;
}

int func_257(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0)
{
	if (unk_0xC3BB749150EAA702())
	{
		if (unk_0x527DE7DC62A1D335() && unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_264(iParam0) || func_263(iParam0)) || func_262(iParam0))
		{
			return 0;
		}
	}
	if (!func_261(iParam0))
	{
		return 0;
	}
	if ((!func_260(iParam0) && Global_2421621[iParam0 /*358*/].f_239 == -1) && !func_131(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	if (func_959(iParam0, 0, 1))
	{
		if (func_959(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
		{
			if (unk_0x1E8AEE4F02F8E526(iParam0, unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 22);
}

bool func_262(int iParam0)
{
	if (func_264(iParam0))
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8);
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10) || unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9));
	}
	return 0;
}

bool func_264(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 2);
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xF44A5E894FE76438(Global_1589933[iVar0 /*601*/].f_138, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_266()
{
	switch (func_268(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_267(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_240(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_268(unk_0xFB6B3EEFAB2DD12C()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/];
	}
	return -1;
}

int func_268(int iParam0)
{
	if (func_146(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_269(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 && func_270(Global_1618089[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_270(Global_1618089[iParam0 /*390*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_271(iParam0, 0);
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_959(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x1E8AEE4F02F8E526(iVar1, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar1 /*358*/].f_239 != -1) || func_131(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_273(var uParam0)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1B215CC37BF52E79(0);
		unk_0xBBAAC5B2437ACF2A();
	}
}

void func_274(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1352859.f_2 == 0)
		{
			Global_1352859.f_2 = 1;
		}
	}
	else if (Global_1352859.f_2 == 1)
	{
		Global_1352859.f_2 = 0;
	}
}

void func_275()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
	{
		if (func_277())
		{
			func_276();
		}
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_277()
{
	return Global_2433082.f_2199[0 /*76*/].f_1 != 0;
}

int func_278()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0) && func_277())
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1) && func_277())
	{
		return 1;
	}
	return 0;
}

int func_279()
{
	if (func_277())
	{
		if (func_280(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 90:
		case 91:
		case 85:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 88:
		case 99:
		case 100:
		case 101:
		case 102:
		case 89:
			return 1;
		
		default:
	}
	return 0;
}

int func_281()
{
	if (func_277())
	{
		if (func_282(Global_2433082.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_283(int iParam0)
{
	Global_1352859.f_1 = Global_1352859;
	Global_1352859 = iParam0;
}

int func_284(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_332(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_331();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_330())
		{
			if (func_329() > 0 && Global_1574105)
			{
				unk_0xA770EE27D9D0EB36();
				unk_0x2B153364D0958759(fVar7);
				unk_0x7FE30C99EA3439F7(18);
				if (unk_0xA14FC57CB26C2B67())
				{
					unk_0xA295ADD103FF4641();
				}
				unk_0x7FE30C99EA3439F7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_316())
		{
			func_315(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
	{
		func_315(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_329() == 1)
		{
			func_314(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_315(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xA14FC57CB26C2B67())
		{
			unk_0xA295ADD103FF4641();
		}
		unk_0x7FE30C99EA3439F7(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_329() == 0 && !bParam5))
		{
			func_315(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_313();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xA770EE27D9D0EB36();
				}
				unk_0x7FE30C99EA3439F7(18);
			}
			if (unk_0xF44A5E894FE76438(uParam2->f_33, 0))
			{
				Global_1574103 = uParam3;
				Global_1574102 = 1;
				unk_0x2B153364D0958759(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574104)
					{
						unk_0x4EA098C870B73AB7(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_313();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xA770EE27D9D0EB36();
					}
					unk_0x7FE30C99EA3439F7(18);
				}
				unk_0x2B153364D0958759(fVar7);
				if (func_314(bVar6, uParam0, 0))
				{
					func_273(uParam0);
					sVar4 = func_311(iParam1, &(Global_1632166.f_86367), bParam4);
					Var0 = { func_309(iParam1) };
					if (bParam4)
					{
						func_306(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_299(uParam0, func_303(uParam2), func_300(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_290(uParam0, func_292(), func_291(), -1);
					}
					else if (func_219())
					{
						uParam2->f_34 = Global_1574104;
						func_306(uParam0, sVar4, &Var0, 1, -1, Global_1574104, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574104;
						func_306(uParam0, sVar4, "", 0, -1, Global_1574104, 1);
					}
					else
					{
						iVar8 = func_285(iParam1);
						func_306(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xB8A73E7DA87B2968(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_289())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_288(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 20;
			}
			if (func_287(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_286(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_286(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 4;
}

bool func_287(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_288(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_289()
{
	return Global_1632166.f_1 == 0;
}

void func_290(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(sParam2))
		{
			func_216(sParam1);
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_216("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_291()
{
	switch (func_268(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_292()
{
	switch (func_268(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_295())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_294(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_294(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_293(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_294(bool bParam0)
{
	return func_224(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

bool func_295()
{
	return (func_298() && func_296(func_297()));
}

bool func_296(int iParam0)
{
	return func_226(iParam0, 1);
}

int func_297()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34;
}

bool func_298()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148;
}

void func_299(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(sParam2))
		{
			func_216(sParam1);
		}
		else if (func_267(unk_0xFB6B3EEFAB2DD12C()) == 133)
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT_C");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_216("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_300(var uParam0)
{
	int iVar0;
	
	iVar0 = func_267(unk_0xFB6B3EEFAB2DD12C());
	if (func_302())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_301())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_301()
{
	if (func_267(unk_0xFB6B3EEFAB2DD12C()) == 133)
	{
		return Global_2494149.f_4692;
	}
	return -1;
}

bool func_302()
{
	return Global_1589821;
}

char* func_303(var uParam0)
{
	int iVar0;
	
	iVar0 = func_267(unk_0xFB6B3EEFAB2DD12C());
	if (func_302())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_305() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_305() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_301())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_304() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_304()
{
	return Global_2494149.f_4695;
}

int func_305()
{
	if (func_267(unk_0xFB6B3EEFAB2DD12C()) == 132)
	{
		return Global_2494149.f_4690;
	}
	return -1;
}

void func_306(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_230(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0BBDB952BE56A9DF(sParam1);
			unk_0xF99222307D7150A9(iParam5);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_216(sParam1);
		}
		if (func_330() && iParam6)
		{
			if (func_308())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0BBDB952BE56A9DF("LBD_DPD_CNT");
			unk_0xF99222307D7150A9(iVar0);
			unk_0xF99222307D7150A9(iVar1);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_216(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (func_307(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x1B215CC37BF52E79(166);
			}
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

int func_307(int iParam0)
{
	if (func_288(iParam0) || func_287(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_308()
{
	return Global_1574105;
}

struct<4> func_309(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_310(unk_0xFB6B3EEFAB2DD12C()) || func_286(unk_0xFB6B3EEFAB2DD12C()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1632166.f_27, 16);
			break;
	}
	if (func_219() && unk_0x8676DE83D4396C39())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1632166.f_27, 16);
	}
	return Var0;
}

bool func_310(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 5;
}

char* func_311(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17 && (!func_219() || unk_0xC55B9553B3EDADE9(sParam1)))
	{
		uVar0 = func_312();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xC55B9553B3EDADE9(sParam1))
	{
		if (Global_1574269 == 1)
		{
			Global_1574269 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574269 == 0)
		{
			Global_1574269 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
			case 22:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_312()
{
	if (unk_0xBD65C65A1BA11C39())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x44CAB1624B5512D4())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9BA5A29B377A2B38())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x9E88D602288A3F67())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_313()
{
	Global_36680 = 1;
}

bool func_314(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x542F16A736FAC9A6("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x542F16A736FAC9A6("mp_matchmaking_card");
	}
	return unk_0x52622CA85B1C304B(*uParam1);
}

void func_315(var uParam0, var uParam1, bool bParam2)
{
	unk_0x4EA098C870B73AB7(&(uParam1->f_33), 7);
	Global_1574103 = 0;
	func_208();
	Global_1574102 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_209(&(uParam1->f_19));
		}
	}
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x4292FC2ED4EC4212(uParam0);
	}
	if (unk_0xF44A5E894FE76438(uParam1->f_33, 0))
	{
		unk_0x4EA098C870B73AB7(&(uParam1->f_33), 0);
	}
	unk_0x2B153364D0958759(0f);
}

int func_316()
{
	if (func_328())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (!func_325())
	{
		return 0;
	}
	if (!func_323())
	{
		return 0;
	}
	if (func_322(8, -1))
	{
		return 0;
	}
	if (func_329() == 2)
	{
		return 0;
	}
	if (Global_2494149.f_4407)
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	else if (!func_65(unk_0xFB6B3EEFAB2DD12C(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_320(1) || func_318(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (func_104(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (Global_1747156)
	{
		return 0;
	}
	if (func_317(0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
	{
		return 0;
	}
	return 1;
}

bool func_317(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_25, iParam0);
}

int func_318(bool bParam0)
{
	if (unk_0x9912A7A9E14E5DE4())
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (func_319(unk_0xD5A676B97920D126()))
			{
				if (unk_0xF334707DE9C8DE80(0, 25) || unk_0xF334707DE9C8DE80(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0xF334707DE9C8DE80(0, 19) || (!bParam0 && unk_0xD464BA52FA359903(0, 19)))
	{
		return 1;
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (((unk_0xF334707DE9C8DE80(0, 166) || unk_0xF334707DE9C8DE80(0, 167)) || unk_0xF334707DE9C8DE80(0, 168)) || unk_0xF334707DE9C8DE80(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD464BA52FA359903(0, 166) || unk_0xD464BA52FA359903(0, 167)) || unk_0xD464BA52FA359903(0, 168)) || unk_0xD464BA52FA359903(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7E79C4D1964F968())
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			unk_0x2F29BEC857E6C0AC(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_320(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_321()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

bool func_322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

int func_323()
{
	if (func_324() == 0)
	{
		return 1;
	}
	return 0;
}

int func_324()
{
	return Global_1312462.f_18;
}

int func_325()
{
	if (func_326())
	{
		return 1;
	}
	if (unk_0x7E3640C27B17457C())
	{
		return 0;
	}
	if (unk_0x83D6BCB493FCFCBA() || unk_0xF9B8AB338DC56ADD())
	{
		return 0;
	}
	if (unk_0xB518A6F4BD89B244())
	{
		return 0;
	}
	return 1;
}

bool func_326()
{
	return Global_1312434;
}

bool func_327()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 5;
}

bool func_328()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_329()
{
	return Global_1352862.f_68;
}

int func_330()
{
	if (Global_1574104 > 16)
	{
		return 1;
	}
	return 0;
}

float func_331()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x67BF72803FFBF57D()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_333()
{
	if (func_334(unk_0xFB6B3EEFAB2DD12C()))
	{
		return Global_1318164;
	}
	return 0;
}

int func_334(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x19239326F582A90C(iParam0);
		}
	}
	return 0;
}

int func_335()
{
	if (func_333())
	{
		return 1;
	}
	if (func_262(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_302())
	{
		return 1;
	}
	if (func_147(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_267(unk_0xFB6B3EEFAB2DD12C()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_336(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_336(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_336(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_336(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 4);
}

int func_337(int iParam0)
{
	if ((iParam0 == 24 && func_147(unk_0xFB6B3EEFAB2DD12C())) && !func_240(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_146(unk_0xFB6B3EEFAB2DD12C(), 0) && func_240(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
		if (func_338(unk_0xFB6B3EEFAB2DD12C()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_147(iParam0) && !func_264(iParam0)) && !unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8));
	bVar2 = func_240(iParam0);
	uVar3 = func_352();
	uVar4 = func_343();
	if ((bVar1 && (func_342(iParam0) || func_341(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_340(iParam0)) && !func_339(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2494149.f_4710.f_29 != iVar0)
	{
		Global_2494149.f_4710.f_29 = iVar0;
	}
	return iVar0;
}

bool func_339(int iParam0)
{
	return func_241(iParam0, 19);
}

int func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_241(iParam0, 9);
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

int func_343()
{
	if ((func_241(unk_0xFB6B3EEFAB2DD12C(), 21) || func_241(unk_0xFB6B3EEFAB2DD12C(), 22)) || func_349())
	{
		return 1;
	}
	if (func_345())
	{
		func_344(22);
		return 1;
	}
	return 0;
}

void func_344(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_345()
{
	if (func_146(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if ((func_352() && !func_348()) || func_347(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			return 1;
		}
		else
		{
			func_346(27);
		}
	}
	return 0;
}

void func_346(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

bool func_347(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

bool func_348()
{
	return Global_1312412.f_1;
}

bool func_349()
{
	return func_350(286, -1);
}

int func_350(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_351(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

bool func_352()
{
	return Global_1312412;
}

bool func_353()
{
	return unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 5);
}

void func_354()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_355(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_355(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 10))
	{
		if (func_860() == 1)
		{
			if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 11))
			{
				if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 15))
				{
					if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 16))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 15))
						{
							if (!unk_0xF44A5E894FE76438(Local_99.f_1, 10))
							{
								if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
								{
									if (unk_0x7887B64A08364778(Var0.f_0))
									{
										if (unk_0x8041FE602D4689B1(Var0.f_0))
										{
											iVar14 = unk_0x9A1EB82BF4C4844D(Var0.f_0);
											if (iVar14 == unk_0xE95C934718B1A4FF(Local_99.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (unk_0x7887B64A08364778(Var0.f_1))
													{
														if (unk_0x6DA4D1391A7B813F(Var0.f_1))
														{
															iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
															if (unk_0xBEC34BF6B72C417A(iVar10))
															{
																iVar12 = unk_0x61263E0F7C8C9996(iVar10);
																if (unk_0xBF474853319C6A20(iVar12))
																{
																	if (iVar12 == unk_0xFB6B3EEFAB2DD12C())
																	{
																		unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 11);
																		if (!func_241(unk_0xFB6B3EEFAB2DD12C(), 20))
																		{
																			if (func_353())
																			{
																				func_358(0);
																				func_356();
																			}
																		}
																	}
																}
																else
																{
																	unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 16);
																}
															}
															else
															{
																unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_241(unk_0xFB6B3EEFAB2DD12C(), 20))
												{
													if (func_353())
													{
														if (unk_0x7887B64A08364778(Var0.f_1))
														{
															if (unk_0x6DA4D1391A7B813F(Var0.f_1))
															{
																iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
																if (unk_0xBEC34BF6B72C417A(iVar10))
																{
																	iVar12 = unk_0x61263E0F7C8C9996(iVar10);
																	if (iVar12 == unk_0xFB6B3EEFAB2DD12C())
																	{
																		func_358(0);
																		func_356();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_860() == 2)
		{
			iVar15 = 0;
			while (iVar15 < 15)
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_13[iVar15]))
				{
					if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_2, iVar15))
					{
						if (unk_0x7887B64A08364778(Var0.f_0))
						{
							if (unk_0x6DA4D1391A7B813F(Var0.f_0))
							{
								iVar11 = unk_0x36B702E1B6552B8A(Var0.f_0);
								if (iVar11 == unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar15]))
								{
									if (unk_0x7887B64A08364778(Var0.f_1))
									{
										if (unk_0x6DA4D1391A7B813F(Var0.f_1))
										{
											iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
											if (unk_0xBEC34BF6B72C417A(iVar10))
											{
												iVar12 = unk_0x61263E0F7C8C9996(iVar10);
												if (iVar12 == unk_0xFB6B3EEFAB2DD12C())
												{
													unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_2), iVar15);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar15++;
			}
		}
		if (func_353())
		{
			if (!func_241(unk_0xFB6B3EEFAB2DD12C(), 20))
			{
				if (unk_0x7887B64A08364778(Var0.f_0))
				{
					if (unk_0x6DA4D1391A7B813F(Var0.f_0))
					{
						iVar11 = unk_0x36B702E1B6552B8A(Var0.f_0);
						if (unk_0xBEC34BF6B72C417A(iVar11))
						{
							iVar13 = unk_0x61263E0F7C8C9996(iVar11);
							if (unk_0x7887B64A08364778(Var0.f_1))
							{
								if (unk_0x6DA4D1391A7B813F(Var0.f_1))
								{
									iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
									if (unk_0xBEC34BF6B72C417A(iVar10))
									{
										iVar12 = unk_0x61263E0F7C8C9996(iVar10);
										if (iVar12 == unk_0xFB6B3EEFAB2DD12C())
										{
											if (unk_0xBF474853319C6A20(iVar13))
											{
												iVar16 = unk_0xCA5CB25B27CC9477(iVar13);
												if (iVar16 == Local_99.f_5)
												{
													func_358(0);
													func_356();
												}
												else if (iVar16 == Local_99.f_7)
												{
													func_358(0);
													func_356();
												}
												else if (func_19(iVar13, 1))
												{
													if (Local_99.f_8 > -1)
													{
														iVar17 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Local_99.f_8));
														if (func_16(iVar13, iVar17, 1))
														{
															func_358(0);
															func_356();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_356()
{
	if (!func_357(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_344(25);
	}
}

bool func_357(int iParam0)
{
	return func_241(iParam0, 25);
}

void func_358(int iParam0)
{
	if (!func_240(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (iParam0 || func_338(unk_0xFB6B3EEFAB2DD12C()) != 0)
		{
			func_344(20);
			if (func_147(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 8))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 8);
				}
			}
		}
	}
}

void func_359()
{
	struct<8> Var0;
	
	switch (Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5)
	{
		case 0:
			if (func_876())
			{
				Var0 = { func_839() };
				func_838(85, "BIGM_ASLTN", &Var0, 1, -1, 2);
				func_835(-1, 0, 0, -1);
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 1;
			}
			else
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_829();
			func_826();
			func_825();
			func_817();
			func_813();
			func_810();
			func_809();
			func_808();
			func_645();
			if (Local_99.f_51 == 2)
			{
				if (unk_0x6901135DDCC4904D(uLocal_490))
				{
					unk_0x8A3D7569826A325D(&uLocal_490);
				}
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 2;
			}
			else if (Local_99.f_51 == 3)
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_644();
			func_829();
			func_635();
			func_826();
			func_825();
			func_614();
			func_537();
			func_817();
			func_502();
			func_501();
			func_810();
			func_499();
			func_809();
			func_408();
			func_808();
			func_645();
			if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 1))
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 3)
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 4;
			}
			else if (func_399())
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 24);
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_892();
			break;
	}
	if (Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 < 3)
	{
		func_360();
	}
}

void func_360()
{
	struct<3> Var0;
	
	if (!func_876() && !func_353())
	{
		return;
	}
	if (func_860() == 1)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			Var0 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), 0) };
		}
	}
	else if (unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_99.f_12), 0) };
	}
	if (!func_398(Var0, 0f, 0f, 0f, 0))
	{
		func_361(159, Var0, &uLocal_507, 1140457472, 1144750080, 0);
	}
}

void func_361(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_147(unk_0xFB6B3EEFAB2DD12C()) && !func_264(unk_0xFB6B3EEFAB2DD12C())) && !unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 8)) && (func_342(unk_0xFB6B3EEFAB2DD12C()) || func_341(unk_0xFB6B3EEFAB2DD12C())))
	{
		return;
	}
	Global_1759239 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param1);
	func_396(iParam0, fVar0);
	if (unk_0x6AAF285DC78E0304() && unk_0xDEC2120B859399ED() == 15)
	{
		if (func_340(unk_0xFB6B3EEFAB2DD12C()) || func_395(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!unk_0xF4B39D641249E260(1344549371))
			{
				unk_0x6BD2B140FA4718C1(1344549371);
			}
		}
		else if (unk_0xF4B39D641249E260(1344549371))
		{
			unk_0xE099CDF9EBC165A5(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_347(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			func_394(Param1, 1, 0);
		}
		if (!*uParam4 && func_959(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			*uParam4 = 1;
			if (func_393(iParam0))
			{
				unk_0xFA5E84DCAE200259(func_392(iParam0));
				if (func_391(iParam0, -1))
				{
					unk_0x028AA922F2B17B2A(0);
					if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
					{
						unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 1);
						unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 1);
					}
					unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 0);
				}
			}
			if (func_390(iParam0))
			{
				fVar1 = func_389(iParam0);
				if (fVar1 != 1f)
				{
					func_386(fVar1);
					unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_385(iParam0) && func_340(unk_0xFB6B3EEFAB2DD12C()))
				{
					func_383(1);
					func_382(2);
				}
			}
			func_344(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_241(unk_0xFB6B3EEFAB2DD12C(), 19))
			{
				func_346(19);
			}
		}
		if (*uParam4 && func_959(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			*uParam4 = 0;
			if (func_393(iParam0))
			{
				if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 0))
				{
					unk_0xFA5E84DCAE200259(1f);
					unk_0x028AA922F2B17B2A(5);
					unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 0);
				}
			}
			if (func_390(iParam0))
			{
				func_381();
				unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 1);
			}
			if (iParam7 && !func_147(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (func_268(unk_0xFB6B3EEFAB2DD12C()) != 152)
				{
					func_363();
				}
			}
			if (func_317(2))
			{
				func_383(0);
				func_362(2);
			}
		}
	}
}

void func_362(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_25), iParam0);
}

void func_363()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_24), &Global_2408525, 2);
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_26), &Global_2408527, 17);
	func_379();
	func_366(1, 1);
	func_364();
}

void func_364()
{
	func_365(0, 0);
}

void func_365(int iParam0, int iParam1)
{
	Global_2404994.f_22 = iParam0;
	Global_2404994.f_23 = iParam1;
}

void func_366(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_43), &Global_2408544, 312);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408544 };
		Global_2404994.f_43.f_49 = { Global_2408544.f_49 };
		Global_2404994.f_43.f_52 = Global_2408544.f_52;
		Global_2404994.f_43.f_53 = Global_2408544.f_53;
	}
	if (bParam0)
	{
		func_378();
	}
	func_369(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_368(0);
	func_367();
}

void func_367()
{
	struct<4> Var0;
	
	if (Global_2404994.f_477.f_1 == unk_0x3ED6DDB11A7AD67F())
	{
		Global_2404994.f_477 = { Var0 };
	}
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_650 = 0;
	}
	else
	{
		Global_2404994.f_650 = 1;
	}
}

void func_369(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_377())
		{
			func_376();
		}
		Global_2404994.f_651.f_504 = iParam1;
		Global_2404994.f_651.f_505 = iParam2;
		Global_2404994.f_651.f_506 = iParam10;
		func_374();
		func_373(8, 0, 0);
		Global_2404994.f_651.f_507 = iParam11;
		Global_2404994.f_651.f_510 = iParam3;
		Global_2404994.f_651.f_511 = iParam4;
		Global_2404994.f_651.f_508 = iParam5;
		Global_2404994.f_651.f_509 = iParam6;
		Global_2404994.f_651.f_512 = iParam7;
		Global_2404994.f_651.f_513 = iParam8;
		Global_2404994.f_651.f_514 = iParam9;
		Global_2404994.f_1684 = 1;
	}
	else
	{
		func_370();
	}
}

void func_370()
{
	if (func_377() && !func_372())
	{
		func_376();
	}
	if (func_372())
	{
		func_371();
	}
	else
	{
		func_374();
		func_373(0, 0, 0);
		Global_2404994.f_1684 = 0;
		Global_2404994.f_1683 = 0;
	}
}

void func_371()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_651), &(Global_2404994.f_1167), 516);
	Global_2404994.f_477 = { Global_2404994.f_481 };
	if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		Global_2404994.f_1683 = 0;
	}
}

int func_372()
{
	if ((Global_2404994.f_1683 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_1167.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_1167.f_515))
	{
		return 1;
	}
	return 0;
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411314 = 0;
	}
	Global_2404994.f_477 = iParam0;
	Global_2404994.f_477.f_1 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_477.f_2 = iParam1;
	Global_2404994.f_477.f_3 = iParam2;
}

void func_374()
{
	if (func_377() && !func_372())
	{
		func_376();
	}
	func_375();
	Global_2404994.f_651 = 0;
}

void func_375()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_651.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_376()
{
	if (func_372())
	{
		if (Global_2404994.f_651.f_515 == Global_2404994.f_1167.f_515)
		{
			return;
		}
	}
	if (!unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_1167), &(Global_2404994.f_651), 516);
		Global_2404994.f_481 = { Global_2404994.f_477 };
		Global_2404994.f_1683 = 1;
	}
}

int func_377()
{
	if ((Global_2404994.f_1684 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_651.f_515))
	{
		return 1;
	}
	return 0;
}

void func_378()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_355), &Global_2408856, 121);
}

void func_379()
{
	func_380();
	Global_2404994.f_1815 = 0;
}

void func_380()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404994.f_1816[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_381()
{
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && Global_2494149.f_4705 < 1f)
		{
			return;
		}
	}
	Global_2494149.f_4706 = -1;
	Global_2494149.f_4705 = 1f;
}

void func_382(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_25), iParam0);
}

void func_383(int iParam0)
{
	if (func_384() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_384()
{
	if ((((Global_979732 != -1 && Global_979732 != 33) && Global_979732 != 35) && Global_979732 != 37) && Global_979732 != 21)
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_386(float fParam0)
{
	float fVar0;
	
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_387())
	{
		return;
	}
	fVar0 = (Global_2494149.f_4705 - fParam0);
	if (unk_0x597C1E51157E5516(Global_2494149.f_4706))
	{
		if (!Global_2494149.f_4706 == unk_0x3ED6DDB11A7AD67F() && unk_0xC3D3EC28F0EB3C6D(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2494149.f_4705 = fParam0;
	Global_2494149.f_4706 = unk_0x3ED6DDB11A7AD67F();
}

int func_387()
{
	switch (func_388())
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

int func_388()
{
	return Global_25185;
}

float func_389(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

int func_391(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_392(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_394(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

int func_395(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_340(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_396(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_397(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_356();
	}
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11021;
		
		case 142:
			return Global_262145.f_11009;
		
		case 157:
			return Global_262145.f_10976;
		
		case 159:
			return Global_262145.f_10959;
		
		case 162:
			return Global_262145.f_11070;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_398(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_399()
{
	bool bVar0;
	
	if (func_402())
	{
		bVar0 = true;
	}
	else if (func_401())
	{
		bVar0 = true;
	}
	else if (func_400(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_12))
		{
			if (unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0xD5A676B97920D126()))
			{
				if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 2))
				{
					unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 2);
				}
				unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
				unk_0x1417FD63129FBCC1(unk_0x629B43A8C1BDED52(Local_99.f_12));
				unk_0xB5024B946329EB6A(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 0);
				unk_0x92FC555470036E96(unk_0x629B43A8C1BDED52(Local_99.f_12), 0);
			}
		}
	}
	return bVar0;
}

int func_400(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187;
}

bool func_401()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 20);
}

int func_402()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_357.f_5, 0))
	{
		return 1;
	}
	if (func_404() && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 != 3)
	{
		return 1;
	}
	if (func_403() && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 != 3)
	{
		return 1;
	}
	if (Global_2394716)
	{
		return 1;
	}
	if (Global_1574332.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 5);
}

int func_404()
{
	if (((func_407() || func_401()) || func_406()) || func_405())
	{
		return 1;
	}
	return 0;
}

bool func_405()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 1);
}

bool func_406()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 2);
}

bool func_407()
{
	return Global_2443089.f_577;
}

void func_408()
{
	if (!unk_0xF44A5E894FE76438(iLocal_357, 6))
	{
		if (func_876())
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
			{
				if (func_410(82, func_498(), 0, 0))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_357, 6);
				}
			}
		}
		else
		{
			unk_0xB8A73E7DA87B2968(&iLocal_357, 6);
		}
	}
	if (!unk_0xF44A5E894FE76438(iLocal_357, 15))
	{
		if (func_860() == 0 || func_860() == 3)
		{
			if (func_876())
			{
				if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
				{
					if (Local_99.f_5 != -1 || Local_99.f_7 != -1)
					{
						if (func_410(82, func_409(), 0, 0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_357, 15);
						}
					}
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 15);
			}
		}
	}
}

char* func_409()
{
	switch (func_860())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_410(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_411(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_411(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_412(&uVar0, iParam0, func_497(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_412(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam3))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
	iVar1 = func_496(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		iVar2 = unk_0x6D9FF4C899CD785F(sParam7);
	}
	if (func_495(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_489(uParam6))
	{
		return 0;
	}
	if (func_486(iVar0, iVar1, iVar2))
	{
		if (func_485())
		{
			return 0;
		}
		func_484();
		return func_419(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_418(iParam4))
	{
		return 0;
	}
	func_413(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_413(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1346465.f_40.f_1 = iParam0;
	Global_1346465.f_40.f_2 = iParam1;
	Global_1346465.f_40.f_3 = iParam2;
	StringCopy(&(Global_1346465.f_40.f_4), sParam3, 16);
	Global_1346465.f_40.f_8 = iParam4;
	Global_1346465.f_40.f_9 = iParam5;
	Global_1346465.f_40.f_14 = uParam6;
	func_414(iParam4);
	func_484();
	Global_1346465.f_40.f_13 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 7000);
}

void func_414(int iParam0)
{
	if (func_417(iParam0))
	{
		func_416();
		return;
	}
	func_415();
}

void func_415()
{
	Global_1346465.f_40.f_10 = 0;
}

void func_416()
{
	Global_1346465.f_40.f_10 = 1;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_418(int iParam0)
{
	return iParam0 > Global_1346465.f_40.f_8;
}

int func_419(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_483();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_480(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_477(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_480(uParam0, sParam3, sParam4);
		}
		return func_461(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_460(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_450(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_449(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_420(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_420(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_448();
	bVar0 = true;
	if (func_422(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_421(120000);
		return 1;
	}
	return 0;
}

void func_421(int iParam0)
{
	Global_1346465.f_40.f_11 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam0);
	Global_1346465.f_40.f_12 = 1;
}

int func_422(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_248(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_447(uParam5, bParam6, &iVar3);
	uVar5 = func_445(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_444(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_426(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_425();
	}
	func_448();
	func_424();
	func_423();
	return 1;
}

void func_423()
{
	Global_1346465.f_57 = 0;
	Global_1346465.f_57.f_1 = 0;
}

void func_424()
{
	Global_1346465.f_40 = 3;
}

void func_425()
{
	unk_0xB8A73E7DA87B2968(&Global_2313, 8);
}

int func_426(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_427(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_427(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_438();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_2595243 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_437() == 0)
	{
		func_435();
		return 0;
	}
	func_434(Global_2595242);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/]), sParam1, 64);
	Global_2593993[Global_2595242 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2593993[Global_2595242 /*104*/].f_24 = iParam2;
	}
	Global_2593993[Global_2595242 /*104*/].f_25 = iParam7;
	Global_2593993[Global_2595242 /*104*/].f_26 = uParam8;
	Global_2593993[Global_2595242 /*104*/].f_29 = uParam9;
	Global_2593993[Global_2595242 /*104*/].f_30 = uParam12;
	Global_2593993[Global_2595242 /*104*/].f_31 = uParam11;
	Global_2593993[Global_2595242 /*104*/].f_28 = 0;
	Global_2593993[Global_2595242 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_33), sParam4, 64);
	Global_2593993[Global_2595242 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_50), sParam5, 64);
	Global_2593993[Global_2595242 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_83), sParam15, 64);
	func_438();
	switch (iParam16)
	{
		case 3:
			Global_2593993[Global_2595242 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2593993[Global_2595242 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2593993[Global_2595242 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2593993[Global_2595242 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_433(0);
				break;
			
			case 1:
				func_433(1);
				break;
			
			case 2:
				func_433(2);
				break;
			
			case 3:
				func_433(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2595243 = 1;
				break;
			
			case 0:
				Global_2595243 = 1;
				break;
			
			case 2:
				Global_2595243 = 1;
				break;
			
			case 1:
				Global_2595243 = 1;
				break;
			}
	}
	Global_16814[Global_2595242] = 0;
	if (bParam10)
	{
		func_438();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_432())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_431(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_428(1);
			func_431(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_428(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_430(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
											break;
										
										default:
											break;
									}
									func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_216(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_429(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_429(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_216(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		func_216(sParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam9))
	{
		func_216(sParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam10))
	{
		func_216(sParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam11))
	{
		func_216(sParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_430(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_431(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_432()
{
	return Global_1315229;
}

void func_433(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_434(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_2593993[iParam0 /*104*/].f_18 = uVar0;
	Global_2593993[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2593993[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2593993[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2593993[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2593993[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_436(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
		{
			Global_2595242 = iVar2;
		}
		iVar2++;
	}
	Global_2593993[Global_2595242 /*104*/].f_24 = 1;
}

int func_436(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_437()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0)
		{
			Global_2595242 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0 || Global_2593993[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_436(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
			{
				Global_2595242 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2595242 == 11)
	{
		return 0;
	}
	Global_2593993[Global_2595242 /*104*/].f_99[0] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[1] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[2] = 0;
	return 1;
}

void func_438()
{
	if (func_430(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_439();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_439()
{
	func_440();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_440()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_443(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_442(unk_0xD5A676B97920D126());
			if (func_441(iVar0) && (!func_430(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_441(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_441(int iParam0)
{
	return iParam0 < 3;
}

int func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_443(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_443(int iParam0)
{
	if (func_441(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_444(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_427(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_445(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_446(2, iParam1);
	return iParam0;
}

void func_446(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_447(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_446(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xBC2999B1C8F62EDD(sParam0);
}

void func_448()
{
	Global_1346465.f_40.f_9 = 4;
}

int func_449(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_448();
	bVar0 = false;
	return func_422(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_450(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_451(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_451(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_248(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_447(uParam5, bParam6, &iVar3);
	uVar5 = func_445(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_459(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_453(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_425();
	}
	func_452();
	func_424();
	func_423();
	return 1;
}

void func_452()
{
	Global_1346465.f_40.f_9 = 3;
}

int func_453(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_454(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_454(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_438();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_101652.f_12994[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_458() == 0)
	{
		func_456();
		return 0;
	}
	func_455(Global_16812);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/]), sParam1, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_25 = iParam7;
	Global_101652.f_13084[Global_16812 /*104*/].f_26 = uParam8;
	Global_101652.f_13084[Global_16812 /*104*/].f_29 = uParam9;
	Global_101652.f_13084[Global_16812 /*104*/].f_30 = uParam12;
	Global_101652.f_13084[Global_16812 /*104*/].f_31 = uParam11;
	Global_101652.f_13084[Global_16812 /*104*/].f_28 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xF44A5E894FE76438(Global_2313, 10))
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_433(0);
		func_433(2);
		func_433(1);
	}
	else
	{
		func_438();
		switch (iParam16)
		{
			case 3:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_433(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_433(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_433(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_433(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 10))
		{
			Global_101652.f_12994[0 /*20*/].f_17 = 1;
			Global_101652.f_12994[1 /*20*/].f_17 = 1;
			Global_101652.f_12994[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101652.f_12994[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101652.f_12994[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101652.f_12994[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101652.f_12994[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_438();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_432())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_431(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_428(1);
			func_431(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_455(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_101652.f_13084[iParam0 /*104*/].f_18 = uVar0;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_456()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_457(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_457(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_458()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0 || Global_101652.f_13084[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_457(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_459(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 3;
	if (func_454(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_460(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	func_452();
	bVar0 = true;
	if (func_451(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_421(120000);
		return 1;
	}
	return 0;
}

int func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xF44A5E894FE76438(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 4))
	{
		bVar0 = func_476(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_467(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xF44A5E894FE76438(iParam4, 3))
		{
			func_466(1);
		}
		if (unk_0xF44A5E894FE76438(iParam4, 5))
		{
			func_465(1);
		}
		func_464();
		func_424();
		func_463();
		func_462();
		return 1;
	}
	return 0;
}

void func_462()
{
	Global_2501918 = 0;
}

void func_463()
{
	Global_1346465.f_57 = 1;
	Global_1346465.f_57.f_1 = 0;
}

void func_464()
{
	Global_1346465.f_40.f_9 = 1;
}

void func_465(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2315, 0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2315, 0);
	}
}

void func_466(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 20);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 20);
	}
}

int func_467(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_475(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_468(sParam3, iParam4, bParam7);
}

int func_468(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_474();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_322(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_473();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_438();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_472())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_471())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_470();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_469();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_474();
	}
	return 0;
}

void func_469()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_470()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_471()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_472()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_473()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

void func_474()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_475(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_476(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_475(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_468(sParam3, iParam4, bParam7);
}

int func_477(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (func_479(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_478();
		func_464();
		func_424();
		func_463();
		func_462();
		return 1;
	}
	return 0;
}

void func_478()
{
	Global_16763 = 0;
}

bool func_479(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_475(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_468(sParam3, iParam4, bParam8);
}

int func_480(var uParam0, char* sParam1, char* sParam2)
{
	if (func_482(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_481();
		func_424();
		func_463();
		return 1;
	}
	return 0;
}

void func_481()
{
	Global_1346465.f_40.f_9 = 2;
}

bool func_482(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_475(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_468(sParam2, iParam3, 0);
}

void func_483()
{
	Global_1346465.f_55 = Global_1346465.f_40.f_1;
	Global_1346465.f_55.f_1 = Global_1346465.f_40.f_10;
}

void func_484()
{
	Global_1346465.f_40 = 1;
}

bool func_485()
{
	return Global_1346465.f_40 == 1;
}

int func_486(int iParam0, int iParam1, int iParam2)
{
	if (!func_487(iParam0))
	{
		return 0;
	}
	if (Global_1346465.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1346465.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_487(int iParam0)
{
	if (!func_488())
	{
		return 0;
	}
	if (!Global_1346465.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_488()
{
	if (Global_1346465.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_489(int iParam0)
{
	if (func_494())
	{
		return 0;
	}
	if (func_493())
	{
		return 0;
	}
	if (func_492(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1747153 || func_491())
	{
		return 0;
	}
	if (!unk_0xF44A5E894FE76438(uParam0, 6))
	{
		if (func_490())
		{
			return 0;
		}
	}
	return 1;
}

bool func_490()
{
	return unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1362144);
}

int func_491()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_493()
{
	return Global_1346465.f_40 == 3;
}

bool func_494()
{
	return func_471();
}

int func_495(int iParam0, int iParam1, int iParam2)
{
	if (!func_493())
	{
		return 0;
	}
	return func_486(iParam0, iParam1, iParam2);
}

int func_496(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

char* func_497()
{
	return "TXTMSG";
}

char* func_498()
{
	switch (func_860())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_499()
{
	struct<3> Var0;
	
	if (func_860() == 0)
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
		if (!unk_0xF44A5E894FE76438(iLocal_358, 7))
		{
			if (unk_0x8E92CDAEB8357ABD(Var0, func_500(), 1) < 200f)
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
				{
					unk_0xB8A73E7DA87B2968(&iLocal_358, 7);
				}
			}
		}
		else if (unk_0x8E92CDAEB8357ABD(Var0, func_500(), 1) < 121f)
		{
			unk_0x44C8EF3126ADB630(0f, 0f);
		}
	}
}

Vector3 func_500()
{
	struct<3> Var0;
	
	switch (func_860())
	{
		case 0:
			Var0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			Var0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			Var0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			Var0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return Var0;
}

void func_501()
{
	int iVar0;
	
	if (!func_876() && !func_353())
	{
		return;
	}
	if (!func_241(unk_0xFB6B3EEFAB2DD12C(), 20))
	{
		return;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xF44A5E894FE76438(iLocal_357, 18))
		{
			if (unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), iLocal_506, 0))
			{
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), iLocal_506, 0);
				unk_0x4EA098C870B73AB7(&iLocal_357, 18);
			}
			else
			{
				unk_0x4EA098C870B73AB7(&iLocal_357, 18);
			}
		}
		else if (unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar0, 1))
		{
			if (iLocal_506 != iVar0)
			{
				iLocal_506 = iVar0;
			}
		}
	}
	else if (!unk_0xF44A5E894FE76438(iLocal_357, 18))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_357, 18);
	}
}

void func_502()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_876() && !func_353())
	{
		return;
	}
	if (!func_513())
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(iLocal_357, 10))
	{
		if (Local_99.f_51 > 1)
		{
			if (func_511())
			{
				if (!func_510())
				{
					if (!func_509())
					{
						unk_0x028AA922F2B17B2A(func_508());
						unk_0xB8A73E7DA87B2968(&iLocal_357, 10);
						unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), func_508(), 0);
						unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
					}
					else if (func_507())
					{
						unk_0x028AA922F2B17B2A(func_508());
						unk_0xB8A73E7DA87B2968(&iLocal_357, 10);
						unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), func_508(), 0);
						unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
					}
				}
			}
		}
	}
	else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		if (func_511())
		{
			unk_0xB50F2EA5E634F7FB(unk_0xFB6B3EEFAB2DD12C());
			unk_0xFA4DF2329DBA6387(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (Local_99.f_5 != -1)
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 11))
		{
			if (Local_99.f_5 == unk_0x1E7FB1CA38C403F6())
			{
				unk_0x028AA922F2B17B2A(func_508());
				unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), func_508(), 0);
				unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
				unk_0xB8A73E7DA87B2968(&iLocal_357, 11);
			}
			else if (func_505())
			{
				iVar0 = func_504();
				if (iVar0 != func_18())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 10))
					{
						unk_0x028AA922F2B17B2A(func_508());
						unk_0xB8A73E7DA87B2968(&iLocal_357, 10);
					}
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar0)))
						{
							if (func_503(unk_0xD5A676B97920D126(), unk_0x4572B13EE70C8F52(iVar0), 1) <= 200f)
							{
								unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), func_508(), 0);
								unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
								unk_0xB8A73E7DA87B2968(&iLocal_357, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_505())
		{
			unk_0x4EA098C870B73AB7(&iLocal_357, 11);
		}
	}
	else if (unk_0xF44A5E894FE76438(iLocal_357, 11))
	{
		unk_0x4EA098C870B73AB7(&iLocal_357, 11);
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 8))
		{
			iVar1 = unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C());
			if (iLocal_494 != iVar1)
			{
				iLocal_494 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_876())
				{
					fVar2 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), func_500(), 1);
					if (fVar2 < 150f)
					{
						unk_0xB50F2EA5E634F7FB(unk_0xFB6B3EEFAB2DD12C());
						unk_0xFA4DF2329DBA6387(unk_0xFB6B3EEFAB2DD12C());
					}
				}
			}
		}
		else if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (iLocal_494 > 0)
			{
				unk_0x028AA922F2B17B2A(func_508());
				unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), iLocal_494, 0);
				unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
			}
			unk_0x4EA098C870B73AB7(&iLocal_357, 8);
		}
	}
	else if (!unk_0xF44A5E894FE76438(iLocal_357, 8))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_357, 8);
	}
}

float func_503(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

int func_504()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_99.f_5;
	if (iVar1 != -1)
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
		}
	}
	return iVar0;
}

int func_505()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_504();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	iVar1 = func_506();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_506()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

bool func_507()
{
	return (((unk_0xF44A5E894FE76438(Local_99.f_1, 11) || unk_0xF44A5E894FE76438(Local_99.f_1, 12)) || unk_0xF44A5E894FE76438(Local_99.f_1, 13)) || unk_0xF44A5E894FE76438(Local_99.f_1, 14));
}

int func_508()
{
	switch (func_860())
	{
		case 1:
			return Global_262145.f_10951;
		
		case 2:
			return Global_262145.f_10953;
		
		case 0:
			return Global_262145.f_10950;
		
		case 3:
			return Global_262145.f_10952;
		
		default:
	}
	return 5;
}

int func_509()
{
	switch (func_860())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_510()
{
	switch (func_860())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_511()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_860();
	switch (iVar0)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				if (unk_0x8E92CDAEB8357ABD(Var1, func_500(), 1) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				if (func_512(Var1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				if (func_512(Var1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				if (unk_0x8E92CDAEB8357ABD(Var1, func_500(), 1) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_512(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x1FA2886237245376(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_513()
{
	if (!func_515(1))
	{
		return 0;
	}
	if (func_343())
	{
		if (!unk_0xF44A5E894FE76438(iLocal_358, 11))
		{
			if (!func_514())
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_12))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_358, 11);
					unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&iLocal_358, 11);
			}
		}
		return 0;
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 1)
	{
		return 0;
	}
	if (func_876())
	{
		return 1;
	}
	if (func_353())
	{
		return 1;
	}
	return 0;
}

bool func_514()
{
	int iVar0;
	
	iVar0 = func_860();
	return iVar0 == 1;
}

int func_515(bool bParam0)
{
	if (func_347(unk_0xFB6B3EEFAB2DD12C(), 21))
	{
		return 0;
	}
	if (unk_0xF5C5C10402E12CCB())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA488C8C46BFD5A39())
		{
			return 0;
		}
	}
	if (func_132(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_536())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (func_432())
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (unk_0x8676DE83D4396C39())
	{
		return 0;
	}
	if (func_66(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!func_323())
	{
		return 0;
	}
	if (func_347(unk_0xFB6B3EEFAB2DD12C(), 0) || func_347(unk_0xFB6B3EEFAB2DD12C(), 3))
	{
		return 0;
	}
	if ((func_347(unk_0xFB6B3EEFAB2DD12C(), 12) || func_347(unk_0xFB6B3EEFAB2DD12C(), 14)) || func_347(unk_0xFB6B3EEFAB2DD12C(), 13))
	{
		return 0;
	}
	if (func_535(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
	{
		if (!func_520())
		{
			return 0;
		}
	}
	if (func_519())
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (func_518(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_491())
	{
		return 0;
	}
	if (func_517(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
	{
		return 0;
	}
	if (func_516(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421621[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 14))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_518(int iParam0)
{
	if (!func_959(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_35;
}

bool func_519()
{
	return Global_91538.f_304 > 0;
}

int func_520()
{
	int iVar0;
	
	iVar0 = func_268(unk_0xFB6B3EEFAB2DD12C());
	if (((func_534(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) || func_533(unk_0xFB6B3EEFAB2DD12C())) || func_532(unk_0xFB6B3EEFAB2DD12C())) || func_527(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_525(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_524(iVar0) || func_523(iVar0))
		{
			return 1;
		}
	}
	if (func_521(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_523(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_521(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_959(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_522(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_522(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
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
			return 3;
			break;
	}
	return -1;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_525(int iParam0)
{
	if (func_526(Global_1589933[iParam0 /*601*/].f_257.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_527(int iParam0)
{
	if (func_528(Global_1589933[iParam0 /*601*/].f_257.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_529(unk_0xFB6B3EEFAB2DD12C(), 0);
	}
	if (bParam1)
	{
		if (func_529(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_529(int iParam0, bool bParam1)
{
	if (Global_1589801 != func_18())
	{
		if (!func_531(Global_1589801))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
			{
				if (unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 24) || func_530(Global_1589801))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 24);
}

bool func_530(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 9);
}

int func_531(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_210, 2);
	}
	return 0;
}

int func_532(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_959(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_522(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_533(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_959(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_522(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_535(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1589933[iParam0 /*601*/].f_257.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_533(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_521(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_532(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_536()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
}

void func_537()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_99.f_3 != 1)
	{
		return;
	}
	if (!func_513())
	{
		if (iLocal_493 != -2)
		{
			if (iLocal_493 > -1)
			{
				iVar4 = unk_0x1C2C3C236D3FE99A(iLocal_493);
				if (unk_0x28E01BEA13B73DF2(iVar4))
				{
					iVar2 = unk_0x28B48C55342F6368(iVar4);
					if (iVar2 != unk_0xFB6B3EEFAB2DD12C())
					{
						func_612(iVar2, 421, 0);
						if (!func_876())
						{
							func_610(iVar2, 1, 0);
							func_609(iVar2, 0, 0);
							func_608(iVar2, 0);
							func_607(iVar2, Global_262145.f_10854, 0);
						}
					}
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_491))
			{
				unk_0x8A3D7569826A325D(&uLocal_491);
			}
			if (unk_0x6901135DDCC4904D(uLocal_489))
			{
				unk_0x8A3D7569826A325D(&uLocal_489);
			}
			iLocal_493 = -2;
			func_606();
		}
		return;
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (func_21(Local_99.f_29[0]))
			{
				if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), unk_0xE95C934718B1A4FF(Local_99.f_29[0])))
				{
					if (unk_0x98BE504E8B389665(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), -1, 0) == unk_0xD5A676B97920D126())
					{
						if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 8))
						{
							unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 8);
							func_356();
							func_358(0);
							if (unk_0x6901135DDCC4904D(uLocal_491))
							{
								unk_0x8A3D7569826A325D(&uLocal_491);
							}
						}
					}
					else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 8))
					{
						unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 8);
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 8))
				{
					unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 8);
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 8))
			{
				unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 8);
			}
		}
		else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 8))
		{
			unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 8);
		}
		if (iLocal_493 != Local_99.f_7)
		{
			if (func_21(Local_99.f_29[0]))
			{
				if (Local_99.f_7 == -1)
				{
					if (func_513())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
						{
							iVar4 = unk_0x1C2C3C236D3FE99A(iLocal_493);
							if (unk_0x28E01BEA13B73DF2(iVar4))
							{
								iVar2 = unk_0x28B48C55342F6368(iVar4);
								if (iVar2 != unk_0xFB6B3EEFAB2DD12C())
								{
									func_612(iVar2, 421, 0);
									if (!func_876())
									{
										func_610(iVar2, 1, 0);
										func_609(iVar2, 0, 0);
										func_608(iVar2, 0);
										func_607(iVar2, Global_262145.f_10854, 0);
									}
								}
							}
						}
					}
					func_603();
				}
				else
				{
					iVar4 = unk_0x1C2C3C236D3FE99A(Local_99.f_7);
					if (unk_0x28E01BEA13B73DF2(iVar4))
					{
						if (func_513())
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
							{
								iVar2 = unk_0x28B48C55342F6368(iVar4);
								if (unk_0x6901135DDCC4904D(uLocal_491))
								{
									unk_0x8A3D7569826A325D(&uLocal_491);
								}
								if (iVar2 != unk_0xFB6B3EEFAB2DD12C())
								{
									if (!func_876())
									{
										if (!func_601())
										{
											func_612(iVar2, 421, 1);
											func_609(iVar2, 1, 1);
											func_610(iVar2, 1, 1);
											func_608(iVar2, 1);
											func_607(iVar2, Global_262145.f_10854, 1);
										}
										else
										{
											func_612(iVar2, 421, 1);
											func_607(iVar2, Global_262145.f_10854, 1);
										}
									}
									else if (func_601())
									{
										func_612(iVar2, 421, 1);
										func_607(iVar2, Global_262145.f_10854, 1);
									}
									else
									{
										func_612(iVar2, 421, 1);
										func_609(iVar2, 1, 1);
										func_610(iVar2, 1, 1);
										func_608(iVar2, 1);
										func_607(iVar2, Global_262145.f_10854, 1);
									}
								}
								if (iVar2 != unk_0xFB6B3EEFAB2DD12C())
								{
									func_579("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_493 = Local_99.f_7;
				if (iLocal_493 == -1)
				{
				}
			}
		}
		if (func_513())
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 2)
			{
				if (iLocal_493 == -1)
				{
					if (func_876())
					{
						if (!func_578("GB_AST_RETV"))
						{
							func_575("GB_AST_RETV", 0);
						}
					}
					else if (func_353())
					{
						if (!func_578("GB_AST_DESR"))
						{
							func_575("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_493 == unk_0x1E7FB1CA38C403F6())
				{
					if (func_876())
					{
						if (!func_578("GB_AST_DROPV"))
						{
							func_575("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_574();
					if (iVar2 != func_18())
					{
						if (func_857(1))
						{
							iVar3 = func_506();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_578("GB_AST_DROPBV"))
								{
									iVar0 = func_238(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_236(iVar0);
										func_562("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_578("GB_AST_DESR"))
							{
								func_575("GB_AST_DESR", 0);
							}
						}
						else if (!func_578("GB_AST_DESR"))
						{
							func_575("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_493 == -1)
		{
			if (unk_0x6901135DDCC4904D(uLocal_489))
			{
				unk_0x8A3D7569826A325D(&uLocal_489);
			}
			func_603();
		}
		else if (iLocal_493 == unk_0x1E7FB1CA38C403F6())
		{
			if (unk_0x6901135DDCC4904D(uLocal_491))
			{
				unk_0x8A3D7569826A325D(&uLocal_491);
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 8))
			{
				if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
				{
					if (!unk_0x6901135DDCC4904D(uLocal_489))
					{
						uLocal_489 = unk_0x6678F4628618607C(func_24());
						unk_0xD947D2F43FD7F6D7(uLocal_489, 1);
					}
				}
				else if (unk_0x6901135DDCC4904D(uLocal_489))
				{
					unk_0x8A3D7569826A325D(&uLocal_489);
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_489))
			{
				unk_0x8A3D7569826A325D(&uLocal_489);
			}
		}
		else
		{
			if (unk_0x6901135DDCC4904D(uLocal_491))
			{
				unk_0x8A3D7569826A325D(&uLocal_491);
			}
			iVar2 = func_574();
			if (iVar2 != func_18())
			{
				if (func_857(1))
				{
					iVar3 = func_506();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
							{
								if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
								{
									if (!unk_0x6901135DDCC4904D(uLocal_489))
									{
										uLocal_489 = unk_0x6678F4628618607C(func_24());
										unk_0xD947D2F43FD7F6D7(uLocal_489, 1);
									}
								}
							}
							else if (unk_0x6901135DDCC4904D(uLocal_489))
							{
								unk_0x8A3D7569826A325D(&uLocal_489);
							}
						}
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(iLocal_357, 2))
		{
			if (func_353())
			{
				if (!func_561(85))
				{
					if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
					{
						if (func_555(0, 1, 1, 1))
						{
							sVar5 = func_549(unk_0x7A4693BB354F3CD3(Local_99.f_9));
							iVar6 = func_548(unk_0x7A4693BB354F3CD3(Local_99.f_9));
							if (func_857(1))
							{
								func_547("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_547("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_546(1);
							unk_0xB8A73E7DA87B2968(&iLocal_357, 2);
						}
					}
				}
			}
		}
		func_540();
	}
	func_538();
}

void func_538()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_513())
	{
		return;
	}
	if (!func_876() && !func_353())
	{
		return;
	}
	bVar6 = false;
	if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
	{
		if (func_21(Local_99.f_29[0]))
		{
			if (Local_99.f_7 == -1)
			{
				if (!func_353())
				{
					unk_0xC163336F8C5EA891(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xC163336F8C5EA891(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_574();
				if (iVar5 != func_18())
				{
					if (!func_857(1))
					{
						unk_0xC163336F8C5EA891(6, &uVar0, &uVar1, &uVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_506();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							unk_0xC163336F8C5EA891(6, &uVar0, &uVar1, &uVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_539(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_539(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_540()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_574();
	Var1 = { func_24() };
	if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
	{
		if (unk_0x50CED8EEAE806923(Local_99.f_29[0]))
		{
			if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 9))
			{
				if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
				{
					if (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar0)))
					{
						if (unk_0x1AAFFE4111587B35(unk_0x4572B13EE70C8F52(iVar0), Var1, 6f, 6f, 2f, 1, 1, 0))
						{
							func_541(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), 0, 1);
							if (unk_0x4A478FA962FF575A(unk_0xE95C934718B1A4FF(Local_99.f_29[0])))
							{
								unk_0x67E2D26F2D8B8E01(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_541(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_544(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (func_959(iVar1, 0, 1))
			{
				if (unk_0x04D83291EB9DE51D(unk_0x4572B13EE70C8F52(iVar1), iParam0, 0))
				{
					func_542(func_543(iVar1), 0, 0f, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	else if (!unk_0x4A478FA962FF575A(iParam0))
	{
		unk_0xF78A199036560454(iParam0);
	}
	else
	{
		if (bParam2)
		{
			unk_0x67E2D26F2D8B8E01(iParam0, 1);
		}
		unk_0xBBAF4B768DDB7572(iParam0, 0);
		if (bParam1)
		{
			unk_0x0A924F4E6E826379(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_542(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 7, iParam0);
	}
}

int func_543(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

int func_544(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x7D44D16B4A9E941E(iParam0) + 1;
	if (iParam4 || !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_545(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x7887B64A08364778(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xD5A676B97920D126())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x00B5B0B68211D89B(iVar2))
					{
						if (unk_0xBEC34BF6B72C417A(iVar2))
						{
							if (unk_0xAA5B10AEB58EAA13(unk_0x61263E0F7C8C9996(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x00B5B0B68211D89B(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_545(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x06F2E112EBC0C4FB(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x98BE504E8B389665(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7887B64A08364778(iVar0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, iParam1);
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x1774A68441553185(iVar0, 451360105) == 1 || unk_0x1774A68441553185(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iParam0, 0), unk_0xC086F8D75730FA3A(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_546(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_294(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_277())
	{
		unk_0xA93E75A5493862BD(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_547(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xA97D81951B964419(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF5640E619D8FCD5B(iParam2);
	}
	unk_0x4C51E4FBCD1D8830(sParam1);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam3);
}

int func_548(int iParam0)
{
	int iVar0;
	
	iVar0 = func_238(iParam0);
	if (iVar0 != -1)
	{
		return func_236(iVar0);
	}
	return 1;
}

char* func_549(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		sVar0 = func_554(&(Global_1618089[iParam0 /*390*/].f_11.f_97));
		return sVar0;
	}
	if (Global_1618089[iParam0 /*390*/].f_11.f_113 != Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_113)
	{
		sVar0 = func_552(iParam0, 0);
		return sVar0;
	}
	if (((func_241(iParam0, 28) || func_241(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_551(iParam0)) && !func_550(iParam0))
	{
		return func_552(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_552(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_554(&(Global_1618089[iVar1 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(sVar0))
		{
			return func_552(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_550(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0xF1A016B51831B87B() && unk_0xD59699C2E1196EDA(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_551(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0x603D621ED5E06CB0() || unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xDE49089F060E6818(0))
		{
			return 0;
		}
	}
	else if (unk_0xF1A016B51831B87B())
	{
		if (unk_0xD59699C2E1196EDA(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_552(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_224(iParam0, 1))
		{
			return func_553();
		}
	}
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACC");
}

var func_553()
{
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACCM");
}

var func_554(var uParam0)
{
	return uParam0;
}

int func_555(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA14FC57CB26C2B67())
	{
		return 0;
	}
	if (func_560())
	{
		return 0;
	}
	if (!unk_0x8AFBC859AA63D3D7())
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (func_536())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_65(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_559(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (func_558())
	{
		return 0;
	}
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (Global_1574102)
	{
		return 0;
	}
	if (func_557())
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (Global_2502402)
	{
		return 0;
	}
	return 1;
}

bool func_556()
{
	return Global_2443089.f_570;
}

bool func_557()
{
	return Global_2443089.f_722;
}

bool func_558()
{
	return Global_2433082.f_2506.f_577;
}

int func_559(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_560()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

bool func_561(int iParam0)
{
	return Global_2433082.f_2199[0 /*76*/].f_1 == iParam0;
}

void func_562(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_563(sParam0, unk_0x7746E8ACE891BFA4(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312571 = 15;
		Global_1312571.f_56 = iParam3;
		Global_1312571.f_57 = uParam4;
	}
}

int func_563(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 63)
	{
		return 0;
	}
	if (func_573(sParam0, sParam1, sParam2) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_567();
	Global_1312571 = 10;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	StringCopy(&(Global_1312571.f_32), sParam2, 64);
	Global_1312571.f_58 = uParam4;
	Global_1312571.f_56 = uParam4;
	func_566();
	func_565(bParam3);
	func_564();
	return 1;
}

void func_564()
{
	unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 1);
}

void func_565(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x4EA098C870B73AB7(&(Global_1312571.f_59), 0);
}

void func_566()
{
	Global_1312571.f_10 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 86400000);
	Global_1312571.f_11 = unk_0x7414B386C0020BEC();
}

void func_567()
{
	func_569();
	func_568(0);
}

void func_568(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1995B52453EF6537();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x7414B386C0020BEC();
		Global_1312571.f_11 = unk_0x7414B386C0020BEC();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_569()
{
	if (!func_572())
	{
	}
	if (func_571())
	{
		unk_0x9F87DFE2C82D23E7(&(Global_1312571.f_12));
		func_570();
		unk_0x231B7D69E0C82ABD();
	}
}

void func_570()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0xF99222307D7150A9(Global_1312571.f_52);
			unk_0xF99222307D7150A9(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0x1164369C7A8D1436(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_57);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_16));
			unk_0xF5640E619D8FCD5B(Global_1312571.f_56);
			unk_0xB1953EBEF4D6BD85(&(Global_1312571.f_48));
			unk_0x4C51E4FBCD1D8830(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_571()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_572()
{
	if (!func_571())
	{
		return 0;
	}
	unk_0xC450F7ACA7F40F98(&(Global_1312571.f_12));
	func_570();
	return unk_0x1B1A26465DF20C87();
}

bool func_573(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_571())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam2) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_32));
}

int func_574()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_99.f_7;
	if (iVar1 != -1)
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
		}
	}
	return iVar0;
}

void func_575(char* sParam0, bool bParam1)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return;
	}
	if (func_576(sParam0))
	{
		return;
	}
	func_567();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_566();
	func_565(bParam1);
	func_564();
}

bool func_576(char* sParam0)
{
	if (!func_571())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_577(sParam0);
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12));
}

bool func_577(char* sParam0)
{
	if (!func_571())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

int func_578(char* sParam0)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (!func_571())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x502AC248EEE98C95(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	return func_576(sParam0);
}

int func_579(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x2A7336F1C6B39623(iParam1);
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		if ((iVar1 != -1 && unk_0x8676DE83D4396C39()) && iVar1 < 4)
		{
			if (Global_1632166.f_82772[iVar1] != -1)
			{
				unk_0xF5640E619D8FCD5B(func_599(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xF5640E619D8FCD5B(func_587(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xF5640E619D8FCD5B(func_587(iParam1, -2, 1, 0));
		}
		unk_0x4C51E4FBCD1D8830(func_585(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x84EF96E928190AB1(0, 1);
		}
		else
		{
			Global_2482005 = { func_42(iParam1) };
			if (unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005))
			{
				iVar18 = 0;
				if (unk_0xCC257DA11A122B5F(&(Global_2481935.f_22), "Leader") && Global_2481935.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2481935.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_584(&Var2) };
					}
					iVar0 = unk_0x060621EC21C1275F(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x4CFEC8A87106E3F3(iVar19, unk_0xB06A4D583331C1FF(&Global_2481935, 35), &(Global_2481935.f_17), Global_2481935.f_30, iVar18, 0, Global_2481935, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0x84EF96E928190AB1(0, 1);
			}
		}
		func_580(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_580(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_583() || !unk_0x8676DE83D4396C39()) || !func_34(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_581(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_581(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_582(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_582(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_583()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

struct<16> func_584(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_585(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_586(&cVar0);
}

var func_586(char[4] cParam0)
{
	return cParam0;
}

int func_587(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_104(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_104(unk_0xFB6B3EEFAB2DD12C()) || (func_598() && func_597()))
	{
		uVar1 = func_596();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(iVar1))
			{
				if (unk_0x61263E0F7C8C9996(iVar1) != -1)
				{
					if (func_959(unk_0x61263E0F7C8C9996(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_599(iParam1, iParam0, 0);
							}
							else
							{
								return func_594(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_594(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_599(iParam1, iParam0, 0);
				}
				else
				{
					return func_588(0, -1, 0);
				}
			}
			else
			{
				return func_588(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_599(iParam1, iParam0, 0);
		}
		else
		{
			return func_594(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_594(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_588(bool bParam0, int iParam1, bool bParam2)
{
	return func_589(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_589(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_103(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_593(1);
				}
				else
				{
					return func_593(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_590(iVar0, iParam2, 1);
			}
			else
			{
				return func_590(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_593(1);
	}
	return func_593(0);
}

int func_590(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_592(iParam0, iParam1);
	if (func_591(Global_1632166.f_86360))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_591(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_592(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_103(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_593(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_594(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_220())
			{
				iVar3 = func_238(iParam0);
				if (!iVar3 == -1)
				{
					return func_236(iVar3);
				}
			}
			if ((func_141(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_103(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_593(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_595(1);
			}
			else
			{
				return func_589(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_593(1);
			}
			else
			{
				return func_589(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_238(iParam0);
	if (!iVar4 == -1)
	{
		return func_236(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_595(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

var func_596()
{
	return Global_2359301.f_2;
}

bool func_597()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_598()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

int func_599(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_220())
	{
		iVar1 = func_238(iParam1);
		if (!iVar1 == -1)
		{
			return func_236(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_589(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_600(iParam0);
	}
	return iVar0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_601()
{
	switch (func_860())
	{
		case 1:
			return func_602();
		
		case 0:
		case 2:
		case 3:
			return func_505();
		
		default:
	}
	return 0;
}

int func_602()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_574();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	iVar1 = func_506();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_603()
{
	if (unk_0x6901135DDCC4904D(uLocal_491))
	{
		return;
	}
	if (!func_876() && !func_353())
	{
		return;
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 1)
	{
		if (unk_0x6901135DDCC4904D(uLocal_491))
		{
			unk_0x8A3D7569826A325D(&uLocal_491);
		}
		return;
	}
	uLocal_491 = unk_0x890C68C377CE0CA4(unk_0xE95C934718B1A4FF(Local_99.f_29[0]));
	unk_0x5255022C1A0A7CF1(uLocal_491, 1);
	unk_0x576211BDE434AC9A(uLocal_491, 1);
	unk_0x0D792BA553E57B27(uLocal_491, 12);
	unk_0xD6507DB77BCBD904(uLocal_491, 421);
	unk_0xF563C3AC64885E69(uLocal_491, Global_262145.f_10854);
	unk_0x2EDAF851B28036F0(uLocal_491, "GB_AST_RHN");
	if (func_876())
	{
		func_604(&uLocal_491, 9);
	}
	else
	{
		func_604(&uLocal_491, 6);
	}
	if (func_876())
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 0))
		{
			unk_0x5AF5569613C76AC3(uLocal_491, 1);
			unk_0x49A7A4E5E2FD02DC(uLocal_491, 7000);
			unk_0xB77AFA5DEFB190B1();
			unk_0xB8A73E7DA87B2968(&iLocal_357, 0);
		}
	}
}

void func_604(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		iVar0 = func_605(iParam1);
		unk_0x4F095059F1C175D5(*uParam0, iVar0);
	}
}

int func_605(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xC163336F8C5EA891(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_606()
{
	if (!func_571())
	{
		return;
	}
	if (!unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == Global_1312571.f_9)
	{
		return;
	}
	func_567();
}

void func_607(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_387())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x597C1E51157E5516(Global_2414704.f_770[iParam0]) || Global_2414704.f_770[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		if (bParam2)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_389), iVar0);
			Global_2414704.f_539[iVar0] = uParam1;
			Global_2414704.f_770[iParam0] = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_389), iVar0);
			Global_2414704.f_770[iParam0] = -1;
		}
	}
}

void func_608(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2414704.f_365), iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_365), iParam0);
	}
	if (unk_0x6901135DDCC4904D(Global_2414704[iParam0]))
	{
		if (bParam1)
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 0);
		}
		else
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 1);
		}
	}
}

void func_609(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_959(iParam0, 1, 1))
		{
			Global_2414704.f_704[iParam0] = unk_0x3ED6DDB11A7AD67F();
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_364), iParam0);
			func_608(iParam0, bParam2);
		}
	}
	else
	{
		func_608(iParam0, bParam2);
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_364), iParam0);
		Global_2414704.f_704[iParam0] = -1;
	}
}

void func_610(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_387())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_611(iParam0))
	{
		if (bParam2)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = unk_0x3ED6DDB11A7AD67F();
			Global_2414704.f_440[iVar0] = iParam1;
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = -1;
		}
	}
}

int func_611(int iParam0)
{
	if (!unk_0x597C1E51157E5516(Global_2414704.f_605[iParam0]) || Global_2414704.f_605[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		return 1;
	}
	return 0;
}

void func_612(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_387())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x597C1E51157E5516(Global_2414704.f_572[iParam0]) || Global_2414704.f_572[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		if (bParam2)
		{
			if (!unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_613();
			}
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_407[iVar0] = uVar1;
			Global_2414704.f_572[iParam0] = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			if (unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_613();
			}
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_572[iParam0] = -1;
		}
	}
}

void func_613()
{
	Global_2414704.f_995 = 1;
}

void func_614()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;
	var uVar17;
	char* sVar18;
	int iVar19;
	
	if (Local_99.f_3 == 1)
	{
		return;
	}
	if (!func_513())
	{
		if (iLocal_492 != -2)
		{
			if (iLocal_492 > -1)
			{
				iVar2 = unk_0x1C2C3C236D3FE99A(iLocal_492);
				if (unk_0x28E01BEA13B73DF2(iVar2))
				{
					iVar0 = unk_0x28B48C55342F6368(iVar2);
					if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
					{
						func_612(iVar0, 457, 0);
						if (!func_876())
						{
							func_610(iVar0, 1, 0);
							func_609(iVar0, 0, 0);
							func_608(iVar0, 0);
							func_607(iVar0, Global_262145.f_10854, 0);
						}
						else if (Local_99.f_9 > -1)
						{
							iVar1 = unk_0x7A4693BB354F3CD3(Local_99.f_9);
							if (unk_0x1E0256D6F1052B31(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_610(iVar0, 1, 0);
									func_609(iVar0, 0, 0);
									func_608(iVar0, 0);
									func_607(iVar0, Global_262145.f_10854, 0);
								}
							}
						}
					}
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_488))
			{
				unk_0x8A3D7569826A325D(&uLocal_488);
			}
			if (unk_0x6901135DDCC4904D(uLocal_489))
			{
				unk_0x8A3D7569826A325D(&uLocal_489);
			}
			iLocal_492 = -2;
			func_606();
		}
		return;
	}
	if (iLocal_492 != Local_99.f_5)
	{
		if (Local_99.f_5 == -1)
		{
			if (func_513())
			{
				if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
				{
					iVar2 = unk_0x1C2C3C236D3FE99A(iLocal_492);
					if (unk_0x28E01BEA13B73DF2(iVar2))
					{
						iVar0 = unk_0x28B48C55342F6368(iVar2);
						if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
						{
							func_612(iVar0, 457, 0);
							if (!func_876())
							{
								func_610(iVar0, 1, 0);
								func_609(iVar0, 0, 0);
								func_608(iVar0, 0);
								func_607(iVar0, Global_262145.f_10854, 0);
							}
							else if (Local_99.f_9 > -1)
							{
								iVar1 = unk_0x7A4693BB354F3CD3(Local_99.f_9);
								if (unk_0x1E0256D6F1052B31(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_610(iVar0, 1, 0);
										func_609(iVar0, 0, 0);
										func_608(iVar0, 0);
										func_607(iVar0, Global_262145.f_10854, 0);
									}
								}
							}
						}
					}
					if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
					{
						func_634("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_492 != -1)
			{
				if (iLocal_492 > -1)
				{
					iVar2 = unk_0x1C2C3C236D3FE99A(iLocal_492);
					if (unk_0x28E01BEA13B73DF2(iVar2))
					{
						iVar0 = unk_0x28B48C55342F6368(iVar2);
						if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
							{
								func_612(iVar0, 457, 0);
								if (!func_876())
								{
									func_610(iVar0, 1, 0);
									func_609(iVar0, 0, 0);
									func_608(iVar0, 0);
									func_607(iVar0, Global_262145.f_10854, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = unk_0x1C2C3C236D3FE99A(Local_99.f_5);
			if (unk_0x28E01BEA13B73DF2(iVar2))
			{
				if (func_513())
				{
					if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
					{
						iVar0 = unk_0x28B48C55342F6368(iVar2);
						if (func_959(iVar0, 1, 1))
						{
							if (unk_0x6901135DDCC4904D(uLocal_488))
							{
								unk_0x8A3D7569826A325D(&uLocal_488);
							}
							if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
							{
								if (!func_876())
								{
									if (!func_505())
									{
										func_612(iVar0, 457, 1);
										func_609(iVar0, 1, 1);
										func_610(iVar0, 1, 1);
										func_608(iVar0, 1);
										func_607(iVar0, Global_262145.f_10854, 1);
									}
									else
									{
										func_612(iVar0, 457, 1);
										func_607(iVar0, Global_262145.f_10854, 1);
									}
								}
								else if (func_505())
								{
									func_612(iVar0, 457, 1);
									func_607(iVar0, Global_262145.f_10854, 1);
								}
								else
								{
									func_612(iVar0, 457, 1);
									func_609(iVar0, 1, 1);
									func_610(iVar0, 1, 1);
									func_608(iVar0, 1);
									func_607(iVar0, Global_262145.f_10854, 1);
								}
							}
							if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
							{
								func_579("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_492 = Local_99.f_5;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_12))
		{
			if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 2))
			{
				if (unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0xD5A676B97920D126()))
				{
					unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 2);
					func_633(1);
					func_356();
					if (func_353())
					{
						func_358(0);
						unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 6);
					}
					if (!Global_1573331)
					{
						Global_1573331 = 1;
					}
					if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_12))
						{
							unk_0x4FE8E15113ECBFEF(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
							unk_0xB8A73E7DA87B2968(&iLocal_357, 12);
						}
					}
					else if (unk_0xF44A5E894FE76438(iLocal_357, 12))
					{
						unk_0x4EA098C870B73AB7(&iLocal_357, 12);
						unk_0x4EA098C870B73AB7(&iLocal_357, 13);
					}
					iLocal_496 = unk_0xA6EB3FD2D3CE76A2();
					if (func_294(1))
					{
						unk_0xA93E75A5493862BD(iLocal_496, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0xA93E75A5493862BD(iLocal_496, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_632(unk_0xD5A676B97920D126()))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_12))
						{
							unk_0x4FE8E15113ECBFEF(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
							unk_0x5477ED2CB1DDA160(unk_0x629B43A8C1BDED52(Local_99.f_12), Local_360, 0, 0, 1);
						}
					}
				}
			}
			else if (!unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0xD5A676B97920D126()))
			{
				unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 2);
				if (Global_1573331)
				{
					Global_1573331 = 0;
				}
				if (unk_0x1E7FB1CA38C403F6() != Local_99.f_8)
				{
					func_633(0);
				}
				if (unk_0xF44A5E894FE76438(iLocal_357, 12))
				{
					unk_0x4EA098C870B73AB7(&iLocal_357, 12);
					unk_0x4EA098C870B73AB7(&iLocal_357, 13);
				}
			}
			else
			{
				if (func_632(unk_0xD5A676B97920D126()))
				{
					if (unk_0x50CED8EEAE806923(Local_99.f_12))
					{
						unk_0x4FE8E15113ECBFEF(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
						unk_0x5477ED2CB1DDA160(unk_0x629B43A8C1BDED52(Local_99.f_12), Local_360, 0, 0, 1);
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_357, 12))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 13))
					{
						if (func_555(0, 1, 1, 1))
						{
							func_631("GB_ASLT_SUB", -1);
							unk_0xB8A73E7DA87B2968(&iLocal_357, 13);
						}
					}
				}
			}
		}
	}
	else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 2))
	{
		unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 2);
	}
	if (iLocal_492 == -1)
	{
		if (func_513())
		{
			if (!unk_0x6901135DDCC4904D(uLocal_488))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_12))
				{
					func_630();
				}
			}
			else if (!unk_0xF44A5E894FE76438(iLocal_357, 5))
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_357, 5);
					unk_0x8A3D7569826A325D(&uLocal_488);
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 6))
			{
				if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_13[0]))
					{
						if (!func_10(Local_99.f_13[0]))
						{
							unk_0xC163336F8C5EA891(6, &uVar3, &uVar4, &uVar5, &uVar6);
							unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[0]), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
						}
					}
				}
			}
		}
		if (unk_0x6901135DDCC4904D(uLocal_489))
		{
			unk_0x8A3D7569826A325D(&uLocal_489);
		}
	}
	else if (iLocal_492 == unk_0x1E7FB1CA38C403F6())
	{
		if (unk_0x6901135DDCC4904D(uLocal_488))
		{
			unk_0x8A3D7569826A325D(&uLocal_488);
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
			{
				if (!unk_0x6901135DDCC4904D(uLocal_489))
				{
					uLocal_489 = unk_0x6678F4628618607C(func_24());
					unk_0xD947D2F43FD7F6D7(uLocal_489, 1);
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_489))
			{
				unk_0x8A3D7569826A325D(&uLocal_489);
			}
		}
		else if (unk_0x6901135DDCC4904D(uLocal_489))
		{
			unk_0x8A3D7569826A325D(&uLocal_489);
		}
	}
	else
	{
		if (unk_0x6901135DDCC4904D(uLocal_488))
		{
			unk_0x8A3D7569826A325D(&uLocal_488);
		}
		iVar0 = func_504();
		if (iVar0 != func_18())
		{
			if (func_857(1))
			{
				iVar1 = func_506();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
							{
								if (!unk_0x6901135DDCC4904D(uLocal_489))
								{
									uLocal_489 = unk_0x6678F4628618607C(func_24());
									unk_0xD947D2F43FD7F6D7(uLocal_489, 1);
								}
							}
						}
						else if (unk_0x6901135DDCC4904D(uLocal_489))
						{
							unk_0x8A3D7569826A325D(&uLocal_489);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_513())
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_506();
						if (func_857(1))
						{
							if (unk_0x1E0256D6F1052B31(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									unk_0xC163336F8C5EA891(6, &uVar3, &uVar4, &uVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							unk_0xC163336F8C5EA891(6, &uVar3, &uVar4, &uVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar0)))
							{
								if (unk_0x6A0583ECFCCECC9B(unk_0x4572B13EE70C8F52(iVar0), 0) && unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0x4572B13EE70C8F52(iVar0), 1), 0))
								{
									func_539(unk_0x0DBD8FE531FD620D(unk_0x4572B13EE70C8F52(iVar0), 1), uVar3, uVar4, uVar5);
								}
								else
								{
									unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar0), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 4))
	{
		unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 4);
	}
	if (func_513())
	{
		if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 2)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_358, 6))
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
				{
					if (iLocal_492 == -1)
					{
						if (func_876())
						{
							if (!func_578("GB_AST_RETP"))
							{
								func_575("GB_AST_RETP", 0);
							}
						}
						else if (func_353())
						{
							if (!func_578("GB_AST_RETP"))
							{
								func_575("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_492 == unk_0x1E7FB1CA38C403F6())
					{
						if (!func_578("GB_AST_DROP"))
						{
							func_575("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_504();
						if (iVar0 != func_18())
						{
							if (func_857(1))
							{
								iVar1 = func_506();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_578("GB_AST_DROPB"))
									{
										iVar16 = func_238(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_236(iVar16);
											func_562("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_578("GB_AST_RETNG"))
									{
										func_627("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_578("GB_AST_RETGR"))
								{
									sVar18 = func_549(iVar0);
									func_624("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_578("GB_AST_RETNG"))
								{
									func_627("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_578("GB_AST_RETGR"))
							{
								sVar18 = func_549(iVar0);
								func_624("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_623() };
					if (!func_578(&Var8))
					{
						func_575(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_606();
		}
	}
	else
	{
		func_606();
	}
	if (!unk_0xF44A5E894FE76438(iLocal_357, 2))
	{
		if (func_353())
		{
			if (!func_561(85))
			{
				if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
				{
					if (func_555(0, 1, 1, 1))
					{
						sVar18 = func_549(unk_0x7A4693BB354F3CD3(Local_99.f_9));
						iVar19 = func_548(unk_0x7A4693BB354F3CD3(Local_99.f_9));
						if (func_857(1))
						{
							if (Local_99.f_5 > -1)
							{
								func_547("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_547("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_99.f_5 > -1)
						{
							func_547("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_547("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_546(1);
						unk_0xB8A73E7DA87B2968(&iLocal_357, 2);
					}
				}
			}
		}
	}
	func_617();
	func_616();
	func_615();
}

void func_615()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_513())
	{
		return;
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
	{
		if (unk_0xF6A32456BABBBA74(Local_99.f_12) && !unk_0xB529B2A4B7C64D6D(unk_0x629B43A8C1BDED52(Local_99.f_12), 0))
		{
			if (!unk_0xE5C2BF941108FCCE(unk_0x629B43A8C1BDED52(Local_99.f_12)))
			{
				if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 3) && !unk_0xF44A5E894FE76438(Local_99.f_1, 1))
				{
					unk_0xC163336F8C5EA891(18, &uVar0, &uVar1, &uVar2, &uVar3);
					unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_99.f_12), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_616()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_504();
	Var1 = { func_24() };
	if (unk_0x6901135DDCC4904D(uLocal_489))
	{
		unk_0xC163336F8C5EA891(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0xF07E528D7DEDB148(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 3))
	{
		if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar0)))
			{
				if (unk_0x1AAFFE4111587B35(unk_0x4572B13EE70C8F52(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_617()
{
	struct<3> Var0;
	bool bVar3;
	struct<26> Var4;
	
	switch (iLocal_497)
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_12))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_99.f_12), 1) };
				if (!func_398(Local_499, 0f, 0f, 0f, 0))
				{
					Local_499 = { 0f, 0f, 0f };
				}
				if (func_618(Var0, iLocal_498, 0))
				{
					iLocal_497++;
				}
				if (iLocal_497 == 0)
				{
					iLocal_498++;
				}
				if (iLocal_498 >= 36)
				{
					iLocal_498 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_99.f_5 == -1)
			{
				if (unk_0x50CED8EEAE806923(Local_99.f_12))
				{
					bVar3 = true;
					if (func_398(Local_499, 0f, 0f, 0f, 0))
					{
						Local_499 = { unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_99.f_12), 1) };
					}
				}
			}
			else if (Local_99.f_5 == unk_0x1E7FB1CA38C403F6())
			{
				if (unk_0x50CED8EEAE806923(Local_99.f_12))
				{
					if (func_398(Local_499, 0f, 0f, 0f, 0))
					{
						Local_499 = { unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_99.f_12), 1) };
					}
					bVar3 = true;
				}
				else
				{
					unk_0x370543697500755D(Local_99.f_12);
				}
			}
			if (bVar3)
			{
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_25 = -1082130432;
				Var4.f_3 = 0;
				Var4.f_5 = 1f;
				Var4.f_13[0 /*3*/] = { Local_499 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (unk_0x50CED8EEAE806923(Local_99.f_12))
				{
					if (func_46(Local_499, 20f, &Local_502, &uLocal_505, Var4))
					{
						Local_502 = { Local_502 + Vector(0.5f, 0f, 0f) };
						if (unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0xD5A676B97920D126()))
						{
							unk_0x1417FD63129FBCC1(unk_0x629B43A8C1BDED52(Local_99.f_12));
						}
						unk_0x5477ED2CB1DDA160(unk_0x629B43A8C1BDED52(Local_99.f_12), Local_502, 0, 0, 1);
						unk_0x0BD3F78CDD5346A8(unk_0x629B43A8C1BDED52(Local_99.f_12), 1);
						unk_0xB5024B946329EB6A(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
						unk_0xB8A73E7DA87B2968(&iLocal_358, 3);
						iLocal_497 = 0;
					}
				}
			}
			else if (Local_99.f_5 != unk_0x1E7FB1CA38C403F6())
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_99.f_12), 1) };
				if (!func_618(Var0, iLocal_498, 0))
				{
					iLocal_497 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (unk_0xF44A5E894FE76438(iLocal_358, 3))
	{
		if (func_555(0, 1, 1, 1))
		{
			unk_0x4EA098C870B73AB7(&iLocal_358, 3);
			func_631("GB_HLP_WRP", -1);
		}
	}
}

int func_618(struct<3> Param0, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (func_622(iParam3))
	{
		func_619(iParam3, &Var0, &Var3, &uVar6, fParam4);
		return unk_0x1FA2886237245376(Param0, Var0, Var3, uVar6, 0, 1);
	}
	return 0;
}

void func_619(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	Var0 = { func_621(iParam0) };
	uVar3 = func_620(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_63(&Var4, 0f, 0f, uVar3);
	Var4 = { Var4 / FtoV(unk_0x652D2EEEF1D3E62C(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_620(int iParam0)
{
	return Global_4006218[iParam0 /*45*/].f_7;
}

Vector3 func_621(int iParam0)
{
	return Global_4006218[iParam0 /*45*/].f_4;
}

int func_622(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_623()
{
	struct<8> Var0;
	
	switch (func_860())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_624(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_625(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 16;
		Global_1312571.f_56 = iParam2;
	}
}

int func_625(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (func_626(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_567();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_566();
	func_565(bParam2);
	func_564();
	return 1;
}

bool func_626(char* sParam0, char* sParam1)
{
	if (!func_571())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(uParam1))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

void func_627(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_628(sParam0, unk_0x7746E8ACE891BFA4(iParam1), bParam3, 1);
}

int func_628(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam1) > 63)
	{
		return 0;
	}
	if (func_629(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_567();
	Global_1312571 = 9;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_566();
	func_565(bParam2);
	func_564();
	return 1;
}

bool func_629(char* sParam0, char* sParam1)
{
	if (!func_571())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return 0;
	}
	if (!unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam1) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

void func_630()
{
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 1)
	{
		if (unk_0x6901135DDCC4904D(uLocal_488))
		{
			unk_0x8A3D7569826A325D(&uLocal_488);
		}
		return;
	}
	if (unk_0x6901135DDCC4904D(uLocal_488))
	{
		return;
	}
	uLocal_488 = unk_0x890C68C377CE0CA4(unk_0x0DE80E23B2BD02BD(Local_99.f_12));
	unk_0x0D792BA553E57B27(uLocal_488, 12);
	unk_0xD6507DB77BCBD904(uLocal_488, 457);
	unk_0x5255022C1A0A7CF1(uLocal_488, 1);
	unk_0x576211BDE434AC9A(uLocal_488, 1);
	unk_0xF563C3AC64885E69(uLocal_488, Global_262145.f_10854);
	unk_0x2EDAF851B28036F0(uLocal_488, "GB_AST_BLIP");
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
	{
		if (func_876())
		{
			func_604(&uLocal_488, 18);
		}
		else
		{
			func_604(&uLocal_488, 18);
		}
	}
	else
	{
		func_604(&uLocal_488, 6);
	}
	if (func_876())
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 0))
		{
			unk_0x5AF5569613C76AC3(uLocal_488, 1);
			unk_0x49A7A4E5E2FD02DC(uLocal_488, 7000);
			unk_0xB77AFA5DEFB190B1();
			unk_0xB8A73E7DA87B2968(&iLocal_357, 0);
		}
	}
}

void func_631(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

bool func_632(int iParam0)
{
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
	}
	return unk_0xDC9C34EF6C270425(iParam0) == Global_138947;
}

void func_633(bool bParam0)
{
	if (bParam0)
	{
		if (!func_241(unk_0xFB6B3EEFAB2DD12C(), 9))
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) != 0)
			{
				func_344(9);
			}
		}
	}
	else if (func_241(unk_0xFB6B3EEFAB2DD12C(), 9))
	{
		func_346(9);
	}
}

int func_634(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_580(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_635()
{
	struct<8> Var0;
	char[] cVar8[8];
	int iVar9;
	
	if (func_343())
	{
		return;
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) == 0)
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 5))
	{
		if (!func_876())
		{
			if (((Local_99.f_5 != -1 || Local_99.f_7 != -1) || unk_0xF44A5E894FE76438(Local_99.f_1, 16)) || unk_0xF44A5E894FE76438(Local_99.f_1, 20))
			{
				unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 5);
				unk_0xE7838AA03E82E887(1);
				if (unk_0xF6A32456BABBBA74(Local_99.f_12))
				{
					unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 0, 1);
				}
				cVar8 = func_549(unk_0x7A4693BB354F3CD3(Local_99.f_9));
				iVar9 = func_548(unk_0x7A4693BB354F3CD3(Local_99.f_9));
				if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
				{
					Var0 = { func_643(1) };
					if (func_513())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 0)
						{
							func_636(85, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_835(-1, 0, 0, -1);
				}
				else
				{
					Var0 = { func_643(0) };
					if (func_513())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 0)
						{
							func_636(85, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_835(-1, 0, 0, -1);
				}
				func_383(1);
			}
		}
	}
}

int func_636(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_637(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_637(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_642(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xB8A73E7DA87B2968(&(Var0.f_67), 2);
	return func_638(&Var0);
}

int func_638(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2433082.f_2505)
		{
			return 0;
		}
	}
	func_641(uParam0, uParam0->f_16);
	func_640(uParam0);
	if (func_639(uParam0->f_1))
	{
		if (Global_2433082.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433082.f_2199[0 /*76*/].f_1 == 13 || Global_2433082.f_2199[0 /*76*/].f_1 == 52) || Global_2433082.f_2199[0 /*76*/].f_1 == 53) || Global_2433082.f_2199[0 /*76*/].f_1 == 57)
		{
			Global_2433082.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433082.f_2199[iVar0 + 1 /*76*/] = { Global_2433082.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433082.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_280(Global_2433082.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_639(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 103) || iParam0 == 99) || iParam0 == 102)
	{
		return 1;
	}
	return 0;
}

void func_640(var uParam0)
{
	if (func_282(uParam0->f_1))
	{
		uParam0->f_70 = func_239();
	}
}

void func_641(var uParam0, int iParam1)
{
	if (func_282(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_18())
	{
		return;
	}
	if (func_280(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_587(iParam1, -2, 0, 0);
		}
	}
}

void func_642(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_18();
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

struct<8> func_643(bool bParam0)
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_860())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_860())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_644()
{
	if (unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_358, 12))
		{
			if (func_341(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_358, 12);
				unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
			}
			else if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 1)
			{
				unk_0xB8A73E7DA87B2968(&iLocal_358, 12);
				unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
			}
		}
		else if (!func_341(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
			{
				unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 0, 1);
				unk_0x4EA098C870B73AB7(&iLocal_358, 12);
			}
		}
	}
}

void func_645()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	char* sVar16;
	char[] cVar20[8];
	char[] cVar24[8];
	char[] cVar28[8];
	char[] cVar32[8];
	char* sVar36;
	char* sVar40;
	int iVar41;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 1))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_358, 6))
		{
			if (unk_0xF44A5E894FE76438(Local_99.f_1, 1) || unk_0xF44A5E894FE76438(Local_99.f_1, 8))
			{
				func_807(&sVar16, &cVar20, &cVar24, &cVar28, &cVar32, &sVar36);
				if (func_513())
				{
					iVar0 = unk_0x7A4693BB354F3CD3(Local_99.f_6);
					if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(86, "GB_WINNER", &sVar16, 1, -1, 2);
						}
						if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
							func_792(1, 1, 0, 0, -1, -1, -1, -1);
						}
						func_663(159, 1, &Var2, 0);
						unk_0x8761D8D070DDBD9A(unk_0xFB6B3EEFAB2DD12C());
					}
					else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						iVar1 = func_506();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
							{
								sVar40 = func_662();
								iVar41 = func_548(unk_0xFB6B3EEFAB2DD12C());
								func_636(86, "GB_WINNER", &cVar20, sVar40, iVar41, 0, -1, -1, -1, 2, -1);
							}
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(1, 1, 0, 0, -1, -1, -1, -1);
							}
							if (func_877() == Local_99.f_8)
							{
								func_663(159, 1, &Var2, 0);
							}
							else
							{
								func_663(159, 0, &Var2, 0);
							}
							unk_0x8761D8D070DDBD9A(unk_0xFB6B3EEFAB2DD12C());
						}
						else
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar40 = func_549(iVar0);
									iVar41 = func_548(iVar0);
								}
								else
								{
									sVar40 = unk_0x7746E8ACE891BFA4(iVar0);
									iVar41 = 1;
								}
								if (func_860() != 1)
								{
									func_636(87, "GB_WORK_OVER", &cVar24, sVar40, iVar41, 0, -1, -1, -1, 2, -1);
								}
								else if (unk_0xF44A5E894FE76438(Local_99.f_1, 8))
								{
									func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
								}
							}
							func_663(159, 0, &Var2, 0);
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
							func_663(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar40 = func_549(iVar0);
								iVar41 = func_548(iVar0);
							}
							else
							{
								sVar40 = unk_0x7746E8ACE891BFA4(iVar0);
								iVar41 = 1;
							}
							if (func_860() != 1)
							{
								func_636(87, "GB_WORK_OVER", &cVar24, sVar40, iVar41, 0, -1, -1, -1, 2, -1);
							}
							else if (unk_0xF44A5E894FE76438(Local_99.f_1, 8))
							{
								func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
							func_792(0, 2, 0, 0, -1, -1, -1, -1);
						}
						func_663(159, 0, &Var2, 0);
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 10))
			{
				if (Local_99.f_6 > -1)
				{
					iVar0 = unk_0x7A4693BB354F3CD3(Local_99.f_6);
				}
				if (func_513())
				{
					if (func_876())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							if (unk_0x1E0256D6F1052B31(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar40 = func_549(iVar0);
									iVar41 = func_548(iVar0);
								}
								else
								{
									sVar40 = unk_0x7746E8ACE891BFA4(iVar0);
									iVar41 = 1;
								}
								func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
							}
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else if (Local_99.f_6 > -1)
					{
						if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
						{
							iVar1 = func_506();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
								{
									if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
									{
										func_838(86, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
									}
								}
								else if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
								{
									iVar41 = func_548(unk_0xFB6B3EEFAB2DD12C());
									sVar40 = func_662();
									func_636(86, "GB_WINNER", "BIGM_ASL_DESG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
								}
								if (func_876() || func_353())
								{
									if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
									{
										unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
										func_792(1, 1, 0, 0, -1, -1, -1, -1);
									}
								}
								if (Local_99.f_6 == unk_0xFB6B3EEFAB2DD12C())
								{
									func_663(159, 1, &Var2, 0);
								}
								else
								{
									func_663(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar40 = func_549(iVar0);
										iVar41 = func_548(iVar0);
									}
									else
									{
										sVar40 = unk_0x7746E8ACE891BFA4(iVar0);
										iVar41 = 1;
									}
									func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
								}
								if (func_876() || func_353())
								{
									if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
									{
										unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
										func_792(0, 2, 0, 0, -1, -1, -1, -1);
									}
								}
								func_663(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == unk_0xFB6B3EEFAB2DD12C())
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
							{
								func_838(86, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
							}
							if (func_876() || func_353())
							{
								if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
								{
									unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
									func_792(1, 1, 0, 0, -1, -1, -1, -1);
								}
							}
							func_663(159, 1, &Var2, 0);
						}
						else
						{
							if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar40 = func_549(iVar0);
									iVar41 = func_548(iVar0);
								}
								else
								{
									sVar40 = unk_0x7746E8ACE891BFA4(iVar0);
									iVar41 = 1;
								}
								func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
							}
							if (func_876() || func_353())
							{
								if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
								{
									unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
									func_792(0, 2, 0, 0, -1, -1, -1, -1);
								}
							}
							func_663(159, 0, &Var2, 0);
						}
					}
					else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							sVar40 = func_662();
							iVar41 = func_548(unk_0xFB6B3EEFAB2DD12C());
							func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 15))
			{
				if (func_513())
				{
					if (func_876())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							sVar40 = func_662();
							iVar41 = func_548(unk_0xFB6B3EEFAB2DD12C());
							func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 18))
			{
				if (func_513())
				{
					if (func_876())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							sVar40 = func_662();
							iVar41 = func_548(unk_0xFB6B3EEFAB2DD12C());
							func_636(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar40, iVar41, 0, -1, -1, -1, 2, -1);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
					else
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_876() || func_353())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
								func_792(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_663(159, 0, &Var2, 0);
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 3))
			{
				func_807(&sVar16, &cVar20, &cVar24, &cVar28, &cVar32, &sVar36);
				if (func_513())
				{
					if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", &sVar36, 1, -1, 2);
						}
					}
					else if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
					{
						func_838(87, "GB_WORK_OVER", &sVar36, 1, -1, 2);
					}
				}
				if (func_876() || func_353())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
						func_792(0, 7, 0, 0, -1, -1, -1, -1);
					}
				}
				func_663(159, 0, &Var2, 0);
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 5))
			{
				if (func_513())
				{
					if (func_876())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
						}
					}
					else if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
					{
						func_838(87, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2);
					}
				}
				if (func_876() || func_353())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
						func_792(0, 8, 0, 0, -1, -1, -1, -1);
					}
				}
				func_663(159, 0, &Var2, 0);
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 9))
			{
				if (func_513())
				{
					if (func_876())
					{
						if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
						{
							func_838(87, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
						}
					}
					else if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 1)
					{
						func_838(87, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
					}
				}
				if (func_876() || func_353())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
						func_792(0, 2, 0, 0, -1, -1, -1, -1);
					}
				}
				func_663(159, 0, &Var2, 0);
				unk_0xB8A73E7DA87B2968(&iLocal_358, 6);
			}
		}
		if (unk_0xF44A5E894FE76438(iLocal_358, 6))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_358, 8))
			{
				if (unk_0xF44A5E894FE76438(iLocal_357, 19))
				{
					iLocal_495 = -1;
					unk_0x91A6DE61891987F6(iLocal_495);
				}
				func_606();
				unk_0xB8A73E7DA87B2968(&iLocal_358, 8);
				if (unk_0xF44A5E894FE76438(iLocal_357, 20))
				{
					unk_0xC86A1E7DAC7A9357("BG_ASSAULT_STOP");
					unk_0xFA320609400AECAE("DisableFlightMusic", 0);
					unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
				}
			}
			if (unk_0x6901135DDCC4904D(uLocal_491))
			{
				unk_0x8A3D7569826A325D(&uLocal_491);
			}
			if (unk_0x6901135DDCC4904D(uLocal_490))
			{
				unk_0x8A3D7569826A325D(&uLocal_490);
			}
			if (unk_0x6901135DDCC4904D(uLocal_488))
			{
				unk_0x8A3D7569826A325D(&uLocal_488);
			}
			func_661();
			if (!unk_0xF44A5E894FE76438(iLocal_357, 29))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 29);
			}
			if (func_646(&uLocal_508, 1, 0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 1);
			}
		}
	}
}

int func_646(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_344(29);
	if ((*uParam0 > 0 && !func_277()) && func_338(unk_0xFB6B3EEFAB2DD12C()) != 0)
	{
		if (!func_660())
		{
			func_659();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 2);
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_658(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_653(iParam2);
				func_658(uParam0, 2);
			}
			break;
		
		case 2:
			func_653(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_647(func_648(0)))
				{
					unk_0x04890EB0282525A5(1);
				}
				func_658(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
				unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 2);
				func_658(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
			unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_647(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

char* func_648(int iParam0)
{
	if (((func_651(unk_0xFB6B3EEFAB2DD12C()) || func_650(unk_0xFB6B3EEFAB2DD12C())) || func_295()) || iParam0)
	{
		if (func_650(unk_0xFB6B3EEFAB2DD12C()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_270(func_649()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_649()
{
	return Global_1630570;
}

bool func_650(int iParam0)
{
	return func_271(func_268(iParam0), 0);
}

bool func_651(int iParam0)
{
	return func_652(func_268(iParam0));
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148 && func_226(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_653(int iParam0)
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0))
	{
		if ((((((((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_959(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0x7E3640C27B17457C()) && !func_241(unk_0xFB6B3EEFAB2DD12C(), 22)) && func_338(unk_0xFB6B3EEFAB2DD12C()) != 0) && !func_656(func_657())) && !func_651(unk_0xFB6B3EEFAB2DD12C())) && !func_655(func_268(unk_0xFB6B3EEFAB2DD12C())))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 1);
			func_654(func_648(iParam0), -1);
			func_546(1);
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 0);
		}
	}
}

void func_654(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam1);
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_657()
{
	var uVar0;
	
	uVar0 = unk_0x0FBCE11007AF301F();
	if (unk_0xCC257DA11A122B5F(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xCC257DA11A122B5F(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	return 0;
}

void func_658(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_659()
{
	Global_2454003 = 1;
}

int func_660()
{
	if (((((((func_268(unk_0xFB6B3EEFAB2DD12C()) == 170 || func_268(unk_0xFB6B3EEFAB2DD12C()) == 219) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 221) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 220) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 216) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 215) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 214) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 218)
	{
		return 1;
	}
	if (func_521(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

void func_661()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF44A5E894FE76438(iLocal_358, 9))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_358, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (unk_0x1E0256D6F1052B31(iVar1))
			{
				if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_514())
					{
						func_612(iVar1, 421, 0);
					}
					else
					{
						func_612(iVar1, 457, 0);
					}
					func_610(iVar1, 1, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_662()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_41(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 != func_18())
	{
		if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (((func_241(iVar0, 28) || func_241(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_551(iVar0)) && !func_550(iVar0))
			{
				return func_552(iVar0, 0);
			}
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_552(iVar0, 0);
			}
		}
		sVar1 = func_554(&(Global_1618089[iVar0 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(sVar1))
		{
			return func_552(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_663(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	func_790(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16272);
		}
		else if (iParam0 == 178)
		{
			if (func_789())
			{
				iVar1 = (iVar1 + Global_262145.f_16779);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16780);
			}
		}
		else if (iParam0 == 188)
		{
			if (func_789())
			{
				iVar1 = (iVar1 + Global_262145.f_16863);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16864);
			}
		}
		else
		{
			iVar1 = (iVar1 + func_788(iParam0));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_787(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16271);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (((func_268(unk_0xFB6B3EEFAB2DD12C()) == 167 || func_268(unk_0xFB6B3EEFAB2DD12C()) == 168) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 178) || func_268(unk_0xFB6B3EEFAB2DD12C()) == 188)
	{
		if (bParam1)
		{
			if (func_786(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				func_785();
			}
			else
			{
				func_784();
			}
		}
		else
		{
			func_783();
		}
	}
	func_754(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_743(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_297();
	if (iVar6 != func_18() && iParam0 != 148)
	{
		if (func_19(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			if (!func_16(unk_0xFB6B3EEFAB2DD12C(), iVar6, 1))
			{
				func_736(&iVar0, 1);
			}
		}
	}
	func_733(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1759248.f_10 = iVar1;
		func_732();
		func_690(0, unk_0xD5A676B97920D126(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1759248.f_9 = iVar0;
		iVar11 = func_506();
		if (iVar11 != func_18())
		{
			func_689(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_857(1);
		if (iParam0 == 168)
		{
			if (!func_688())
			{
				unk_0xB861D5E5ADC49AE9(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_687())
			{
				if (!func_688())
				{
					unk_0xB861D5E5ADC49AE9(iVar0, uVar5);
				}
			}
			else if (func_688())
			{
				func_678(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2590199[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2590199[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2590199[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0xB861D5E5ADC49AE9(iVar0, uVar5);
			}
		}
		else if (func_688())
		{
			func_678(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2590199[iVar14 /*76*/].f_8.f_54 = uVar9;
			Global_2590199[iVar14 /*76*/].f_8.f_55 = uVar10;
			Global_2590199[iVar14 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x6868A7ACB25836B8(uVar9, uVar10, iVar0, bVar12);
		}
		func_677(iParam0, iVar0);
		if (func_676(iParam0))
		{
			if (func_675(iParam0) > -1)
			{
				func_674(func_675(iParam0), iVar0);
			}
		}
		Global_2454660 = iVar0;
		func_673(&Global_2452937, 0, 0);
	}
	if (func_340(unk_0xFB6B3EEFAB2DD12C()) || func_240(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_664(iParam0);
	}
	if (func_652(iParam0))
	{
		Global_1759266.f_13 = iVar0;
		Global_1759266.f_14 = iVar1;
	}
	if (func_655(iParam0))
	{
		Global_1759319.f_13 = iVar0;
		Global_1759319.f_14 = iVar1;
	}
}

void func_664(int iParam0)
{
	if (func_672(unk_0xFB6B3EEFAB2DD12C()) && func_687())
	{
		if (func_524(iParam0))
		{
			func_667(6016, -1);
		}
		else if (func_666(iParam0))
		{
			func_667(6018, -1);
		}
		else if (func_271(iParam0, 1))
		{
			func_667(6019, -1);
		}
		else if (func_665(iParam0))
		{
			func_667(6020, -1);
		}
	}
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_671(iParam0, func_351(iParam1), 0);
	iVar0++;
	if (!func_670(iParam0))
	{
		func_669(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_668(iParam0, iVar0, iParam1, 1);
	}
}

void func_668(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_351(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_351(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_351(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_351(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_351(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_351(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_351(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_351(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_351(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_351(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_351(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_351(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_351(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_351(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_351(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_351(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_351(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_351(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_351(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_351(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_351(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_351(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_351(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_351(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_351(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_351(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_351(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_351(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_351(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_351(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_351(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_351(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_351(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_669(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_351(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_670(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_671(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_351(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_672(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_97, 14);
}

void func_673(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

void func_674(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5416)
		{
			iParam1 = Global_262145.f_5416;
		}
		Global_2494149.f_270 = iParam1;
		Global_2494149.f_271 = 0;
	}
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_676(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_677(int iParam0, int iParam1)
{
	if (func_672(unk_0xFB6B3EEFAB2DD12C()) && func_687())
	{
		if (func_524(iParam0) && iParam1 > 0)
		{
			func_669(6017, (func_671(6017, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_678(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_688())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
			if (iParam1 > 0)
			{
				func_679(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_679(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_679(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_688())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_36()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_686(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_685(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_680(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_680(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_681(iParam0);
	}
}

void func_681(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_688())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_684(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_682(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_682(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_683(&(uParam0->f_8.f_3));
	func_683(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_683(var uParam0)
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

int func_684(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_685(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_686(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_688())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_687()
{
	return func_296(unk_0xFB6B3EEFAB2DD12C());
}

int func_688()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_689(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1618089[iParam0 /*390*/].f_11.f_7[0];
	*uParam2 = Global_1618089[iParam0 /*390*/].f_11.f_7[1];
}

int func_690(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_691(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_691(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_701(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_697(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_692(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_692(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_695(iParam0, 1) };
	if (iParam0 == func_694(unk_0xD5A676B97920D126()))
	{
		func_693(1);
	}
	func_697(Var0, iParam1, 0, sParam2, iParam3);
}

void func_693(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_694(var uParam0)
{
	return uParam0;
}

Vector3 func_695(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC31BB47A21F61C6C())
	{
		Var3 = { unk_0x4FC37A47A7CC5D48(2) };
	}
	if (iParam0 == func_696(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		fVar6 = unk_0x714F015B4D2DE1DC(iParam0);
		if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x0A0C20E171493CD0(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_696(var uParam0)
{
	return uParam0;
}

void func_697(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433082.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433082.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433082.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433082.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_700(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_699();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_698();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam6);
		}
	}
}

int func_698()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_699()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_700(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8E92CDAEB8357ABD(unk_0x816B691E0C59C315(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_701(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_702(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_702(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_731(unk_0xFB6B3EEFAB2DD12C()) || func_730(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_729(uParam2))
	{
	}
	if (func_728())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_726(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_725(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_723(0, &iVar1);
					break;
				
				case 3:
					func_723(1, &iVar1);
					break;
				
				case 1:
					func_721(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_720(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_712((func_719(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_720(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_707(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_703((func_705(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_703((func_705(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_703(int iParam0)
{
	if (func_728())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_704(joaat("mpply_globalxp"), iParam0);
	}
}

void func_704(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_705(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_959(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_706(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_706(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_706(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_707(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_42(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_710(func_711(&Var0));
			if (iVar13 == 0)
			{
				func_709(&Global_1362334, iParam0);
				func_708(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_709(&Global_1362335, iParam0);
				func_708(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_709(&Global_1362336, iParam0);
				func_708(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_709(&Global_1362337, iParam0);
				func_708(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_709(&Global_1362338, iParam0);
				func_708(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_708(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_709(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_710(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_711(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

void func_712(int iParam0, int iParam1, int iParam2)
{
	if (func_728())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_351(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_351(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_718(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_716(iParam0, 1);
		}
		func_668(634, iParam0, -1, 1);
		func_669(635, func_716(iParam0, 1), -1, 1, 0);
		Global_1362449[func_351(-1)] = iParam0;
		func_713(7, 0);
	}
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_715(iParam0, iParam1))
	{
		iVar0 = func_714();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_714()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_715(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_716(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_717(iParam0, 0);
}

int func_717(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_718(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_719(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_351(-1)];
			}
			else if (func_718(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_351(-1)];
	}
	return 0;
}

void func_720(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_671(iParam0, func_351(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_670(iParam0))
	{
		func_669(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_668(iParam0, iVar0, iParam2, 1);
	}
}

void func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_103(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_43(unk_0xFB6B3EEFAB2DD12C(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_722(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_722(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_722(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_723(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_959(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_43(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_959(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_724(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_43(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_722(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_722(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_724(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_37(iParam0), func_37(iParam1));
	return 0f;
}

int func_725(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_722(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_726(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_719(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_719(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_727(8000, 0, 0) > 0)
	{
		if (func_727(8000, 0, 0) < (iParam0 + func_719(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_727(8000, 0, 0) - func_719(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_727(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_279816[iParam0];
}

int func_728()
{
	return 1;
}

int func_729(char* sParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_730(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_731(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

void func_732()
{
	Global_2454002 = 1;
}

void func_733(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_317(7))
	{
		return;
	}
	iVar0 = func_735(iParam0);
	iVar1 = func_734(iParam0);
	iVar2 = unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(Global_2494149.f_4710.f_78, unk_0x7414B386C0020BEC()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16474)
		{
			iVar2 = Global_262145.f_16474;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16475)
		{
			iVar2 = Global_262145.f_16475;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16473)
		{
			iVar2 = Global_262145.f_16473;
		}
	}
	else if (func_524(iParam0))
	{
		if (iVar2 > Global_262145.f_16476)
		{
			iVar2 = Global_262145.f_16476;
		}
	}
	else if (func_271(iParam0, 0) || func_666(iParam0))
	{
		if (iVar2 > Global_262145.f_16477)
		{
			iVar2 = Global_262145.f_16477;
		}
	}
	else if (iVar2 > Global_262145.f_10894)
	{
		iVar2 = Global_262145.f_10894;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10985;
		
		case 152:
			return Global_262145.f_11020;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11008;
		
		case 157:
			return Global_262145.f_10975;
		
		case 159:
			return Global_262145.f_10958;
		
		case 164:
			return Global_262145.f_10998;
		
		case 160:
			return Global_262145.f_11048;
		
		case 162:
			return Global_262145.f_11068;
		
		case 163:
			return Global_262145.f_11033;
		
		case 154:
			return Global_262145.f_11103;
		
		case 155:
			return Global_262145.f_11093;
		
		case 153:
			return Global_262145.f_11057;
		
		case 170:
			return Global_262145.f_12994;
		
		case 171:
			return Global_262145.f_13053;
		
		case 172:
			return Global_262145.f_13071;
		
		case 173:
			return Global_262145.f_13012;
		
		case 166:
			return Global_262145.f_13027;
		
		case 167:
			return Global_262145.f_13118;
		
		case 169:
			return Global_262145.f_13090;
		
		case 168:
			return Global_262145.f_13083;
		
		case 179:
			return Global_262145.f_16356;
		
		case 180:
			return Global_262145.f_16135;
		
		case 182:
			return Global_262145.f_16135;
		
		case 183:
			return Global_262145.f_16135;
		
		case 185:
			return Global_262145.f_16135;
		
		case 186:
			return Global_262145.f_16135;
		
		case 189:
			return Global_262145.f_16356;
		
		case 190:
			return Global_262145.f_16011;
		
		case 191:
			return Global_262145.f_16102;
		
		case 192:
			return Global_262145.f_15896;
		
		case 193:
			return Global_262145.f_16356;
		
		case 194:
			return Global_262145.f_16356;
		
		case 195:
			return Global_262145.f_16135;
		
		case 197:
			return Global_262145.f_16135;
		
		case 198:
			return Global_262145.f_16135;
		
		case 199:
			return Global_262145.f_16356;
		
		case 200:
			return Global_262145.f_16356;
		
		case 201:
			return Global_262145.f_16356;
		
		case 205:
			return Global_262145.f_16356;
		
		case 207:
			return Global_262145.f_16135;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return Global_262145.f_16135;
		
		case 210:
			return Global_262145.f_16356;
		
		case 211:
			return Global_262145.f_16356;
		
		case 214:
			return Global_262145.f_17152;
		
		case 215:
			return Global_262145.f_17154;
		
		case 216:
			return Global_262145.f_17156;
		
		case 217:
			return Global_262145.f_17158;
		
		case 218:
			return Global_262145.f_17160;
		
		case 219:
			return Global_262145.f_17162;
		
		case 220:
			return Global_262145.f_17164;
		
		case 221:
			return Global_262145.f_17166;
		
		default:
	}
	return 0;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10984;
		
		case 152:
			return Global_262145.f_11019;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11007;
		
		case 157:
			return Global_262145.f_10974;
		
		case 159:
			return Global_262145.f_10957;
		
		case 164:
			return Global_262145.f_10997;
		
		case 160:
			return Global_262145.f_11047;
		
		case 162:
			return Global_262145.f_11067;
		
		case 163:
			return Global_262145.f_11032;
		
		case 154:
			return Global_262145.f_11102;
		
		case 155:
			return Global_262145.f_11092;
		
		case 153:
			return Global_262145.f_11056;
		
		case 170:
			return Global_262145.f_12993;
		
		case 171:
			return Global_262145.f_13052;
		
		case 172:
			return Global_262145.f_13070;
		
		case 173:
			return Global_262145.f_13011;
		
		case 166:
			return Global_262145.f_13026;
		
		case 179:
			return Global_262145.f_16355;
		
		case 180:
			return Global_262145.f_16134;
		
		case 182:
			return Global_262145.f_16134;
		
		case 183:
			return Global_262145.f_16134;
		
		case 185:
			return Global_262145.f_16134;
		
		case 186:
			return Global_262145.f_16134;
		
		case 189:
			return Global_262145.f_16355;
		
		case 193:
			return Global_262145.f_16355;
		
		case 194:
			return Global_262145.f_16355;
		
		case 195:
			return Global_262145.f_16134;
		
		case 197:
			return Global_262145.f_16134;
		
		case 198:
			return Global_262145.f_16134;
		
		case 199:
			return Global_262145.f_16355;
		
		case 200:
			return Global_262145.f_16355;
		
		case 201:
			return Global_262145.f_16355;
		
		case 205:
			return Global_262145.f_16355;
		
		case 207:
			return Global_262145.f_16134;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return Global_262145.f_16134;
		
		case 210:
			return Global_262145.f_16355;
		
		case 211:
			return Global_262145.f_16355;
		
		case 190:
			if (!func_789())
			{
				return Global_262145.f_16010;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_789())
			{
				return Global_262145.f_16101;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_789())
			{
				return Global_262145.f_15895;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17151;
		
		case 215:
			return Global_262145.f_17153;
		
		case 216:
			return Global_262145.f_17155;
		
		case 217:
			return Global_262145.f_17157;
		
		case 218:
			return Global_262145.f_17159;
		
		case 219:
			return Global_262145.f_17161;
		
		case 220:
			return Global_262145.f_17163;
		
		case 221:
			return Global_262145.f_17165;
	}
	return 0;
}

void func_736(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_789())
		{
			if (func_857(0))
			{
				if (!func_294(0))
				{
					if (unk_0x1E0256D6F1052B31(func_506()))
					{
						if (func_742() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_742());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_740(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_739("GB_BCUT_TICK1", func_506(), iVar0, 0, 0, 1, 1);
						}
						func_738(20);
						func_737(func_506(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_737(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_959(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_543(iParam0));
	}
}

void func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_739(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(func_587(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_585(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_580(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_740(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_741(1);
	}
	else
	{
		iVar1 = func_741(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_741(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_742()
{
	return Global_262145.f_10888;
}

void func_743(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_687())
			{
				Var0 = { func_753() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_752(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_752(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_746(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16585);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16584);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_745(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16575);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16574));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_738(86);
				}
				Global_2494149.f_4710.f_190 = *iParam2;
			}
			else if (func_294(0))
			{
				Var15 = { func_744(func_506()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_752(func_506(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_752(func_506(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_746(func_506(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16585));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16584));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16624;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16625;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_744(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_184;
}

int func_745(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1E0256D6F1052B31(unk_0x7A4693BB354F3CD3(iVar0)))
		{
			iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_34(iVar2, 0) && !func_16(iVar2, unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_751(iParam1);
	if (func_750(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14955;
				if (func_747(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14960);
				}
				if (func_747(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14965);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14954;
				if (func_747(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14959);
				}
				if (func_747(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14964);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14953;
				if (func_747(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14958);
				}
				if (func_747(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14963);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14951;
				if (func_747(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14956);
				}
				if (func_747(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14961);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14952;
				if (func_747(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14957);
				}
				if (func_747(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14962);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_747(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_749(iParam0, iParam1))
	{
		iVar0 = func_748(iParam0, iParam1);
		return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_748(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_750(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_749(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_750(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_750(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		default:
	}
	return -1;
}

int func_752(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_750(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_753()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_184;
}

void func_754(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
	
	if (iParam0 == 167)
	{
		if (func_20(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (bParam1)
			{
				func_782();
			}
			func_781();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_773(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_772(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_745(&uVar2);
					iVar4 = Global_262145.f_14140;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13349));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_738(44);
					}
				}
				func_766(*iParam3);
				func_765();
				Global_2494149.f_4710.f_190 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x11B9E7FF50B2F4CC())
				{
					iVar8 = iVar7;
					if (unk_0x28E01BEA13B73DF2(iVar8))
					{
						iVar9 = unk_0x28B48C55342F6368(iVar8);
						if (func_764(iVar9))
						{
							func_756(iVar9, 1, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_755();
		}
	}
}

void func_755()
{
	int iVar0;
	
	iVar0 = Global_2524336[func_36()];
	iVar0++;
	func_668(3649, iVar0, -1, 1);
}

void func_756(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_758(iParam0);
	func_757(iParam0, uVar0, iParam1, iParam2);
}

void func_757(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 471;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	if (iParam0 != func_18())
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_543(iParam0));
		}
	}
}

int func_758(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_763();
	iVar0 = func_761(iParam0, iVar0);
	iVar1 = Global_1618089[func_506() /*390*/].f_11.f_288;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12954));
	if (iVar0 < func_760())
	{
		iVar0 = func_760();
	}
	if (iVar0 > func_759())
	{
		iVar0 = func_759();
	}
	return iVar0;
}

int func_759()
{
	return Global_262145.f_12955;
}

int func_760()
{
	return Global_262145.f_14130;
}

int func_761(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_786(iParam0) * func_762());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_762()
{
	return Global_262145.f_14129;
}

var func_763()
{
	return Global_262145.f_10880;
}

int func_764(int iParam0)
{
	if (unk_0x1E0256D6F1052B31(iParam0))
	{
		if (iParam0 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (func_16(iParam0, unk_0xFB6B3EEFAB2DD12C(), 0))
			{
				if (!func_241(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_765()
{
	int iVar0;
	
	iVar0 = Global_2524342[func_36()];
	iVar0++;
	func_668(3648, iVar0, -1, 1);
}

void func_766(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2524345[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_668(3650, iVar0, -1, 1);
	if (func_769(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_768(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_767(7666, iVar2, -1, 1);
	}
}

var func_767(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x2EB99465C4E8F1E1(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14273;
			break;
		
		case 2:
			return Global_262145.f_14274;
			break;
		
		case 3:
			return Global_262145.f_14275;
			break;
		
		case 4:
			return Global_262145.f_14276;
			break;
		
		case 5:
			return Global_262145.f_14277;
			break;
		
		case 6:
			return Global_262145.f_14278;
			break;
		
		case 7:
			return Global_262145.f_14279;
			break;
		
		case 8:
			return Global_262145.f_14280;
			break;
		
		case 9:
			return Global_262145.f_14281;
			break;
		
		case 10:
			return Global_262145.f_14282;
			break;
		
		case 11:
			return Global_262145.f_14283;
			break;
		
		case 12:
			return Global_262145.f_14284;
			break;
		
		case 13:
			return Global_262145.f_14285;
			break;
		
		case 14:
			return Global_262145.f_14286;
			break;
		
		case 15:
			return Global_262145.f_14287;
			break;
		
		case 16:
			return Global_262145.f_14288;
			break;
		
		case 17:
			return Global_262145.f_14289;
			break;
		
		case 18:
			return Global_262145.f_14290;
			break;
		
		case 19:
			return Global_262145.f_14291;
			break;
		
		case 20:
			return Global_262145.f_14292;
			break;
		
		case 21:
			return Global_262145.f_14293;
			break;
		
		case 22:
			return Global_262145.f_14294;
			break;
		
		case 23:
			return Global_262145.f_14295;
			break;
		
		case 24:
			return Global_262145.f_14296;
			break;
	}
	return 0;
}

int func_769(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_771(iParam0, iParam1);
	uVar2 = func_770(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD406E3B002060510(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_770(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0C2F8A8AE5D8FF85((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x1A7090C8335B19A1((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x38C94D35436475FF((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x649F732AF2608E33((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_772(int iParam0)
{
	if (iParam0 >= Global_262145.f_13327)
	{
		return Global_262145.f_13348;
	}
	else if (iParam0 >= Global_262145.f_13326)
	{
		return Global_262145.f_13347;
	}
	else if (iParam0 >= Global_262145.f_13325)
	{
		return Global_262145.f_13346;
	}
	else if (iParam0 >= Global_262145.f_13324)
	{
		return Global_262145.f_13345;
	}
	else if (iParam0 >= Global_262145.f_13323)
	{
		return Global_262145.f_13344;
	}
	else if (iParam0 >= Global_262145.f_13322)
	{
		return Global_262145.f_13343;
	}
	else if (iParam0 >= Global_262145.f_13321)
	{
		return Global_262145.f_13342;
	}
	else if (iParam0 >= Global_262145.f_13320)
	{
		return Global_262145.f_13341;
	}
	else if (iParam0 >= Global_262145.f_13319)
	{
		return Global_262145.f_13340;
	}
	else if (iParam0 >= Global_262145.f_13318)
	{
		return Global_262145.f_13339;
	}
	else if (iParam0 >= Global_262145.f_13317)
	{
		return Global_262145.f_13338;
	}
	else if (iParam0 >= Global_262145.f_13316)
	{
		return Global_262145.f_13337;
	}
	else if (iParam0 >= Global_262145.f_13315)
	{
		return Global_262145.f_13336;
	}
	else if (iParam0 >= Global_262145.f_13314)
	{
		return Global_262145.f_13335;
	}
	else if (iParam0 >= Global_262145.f_13313)
	{
		return Global_262145.f_13334;
	}
	else if (iParam0 >= Global_262145.f_13312)
	{
		return Global_262145.f_13333;
	}
	else if (iParam0 >= Global_262145.f_13311)
	{
		return Global_262145.f_13332;
	}
	else if (iParam0 >= Global_262145.f_13310)
	{
		return Global_262145.f_13331;
	}
	else if (iParam0 >= Global_262145.f_13309)
	{
		return Global_262145.f_13330;
	}
	else if (iParam0 >= Global_262145.f_13308)
	{
		return Global_262145.f_13329;
	}
	return Global_262145.f_13328;
}

int func_773(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_780(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_779(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_778(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_774(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_774(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_778(unk_0x7BC26452241AC7C9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_774(int iParam0)
{
	int iVar0;
	
	if (func_777(iParam0))
	{
		iVar0 = func_775(func_776(iParam0));
		return func_671(iVar0, -1, 0);
	}
	return 0;
}

int func_775(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3628;
	}
	else if (iParam0 == 1)
	{
		return 3629;
	}
	else if (iParam0 == 2)
	{
		return 3630;
	}
	else if (iParam0 == 3)
	{
		return 3631;
	}
	else if (iParam0 == 4)
	{
		return 3632;
	}
	return 3628;
}

int func_776(int iParam0)
{
	int iVar0;
	
	if (func_777(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_777(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_778(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13527;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13525;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13529;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13523;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13521;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13531;
	}
	return 0;
}

int func_779(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_777(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1760484[iVar0] == iParam1 && Global_1760491[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_780(int iParam0)
{
	int iVar0;
	
	if (func_777(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_781()
{
	int iVar0;
	
	iVar0 = Global_2524333[func_36()];
	iVar0++;
	Global_2524333[func_36()] = iVar0;
	func_668(3647, iVar0, -1, 1);
}

void func_782()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2524330[func_36()];
	iVar1 = Global_2524339[func_36()];
	iVar0++;
	iVar1++;
	Global_2524330[func_36()] = iVar0;
	Global_2524339[func_36()] = iVar1;
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_102 = iVar1;
	func_668(3645, iVar0, -1, 1);
	func_668(3646, iVar1, -1, 1);
}

void func_783()
{
	if (func_789())
	{
		Global_2443860.f_3065.f_134 = 0;
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
	}
}

void func_784()
{
	if (func_789())
	{
		if (Global_2443860.f_3065.f_134 < 10)
		{
			Global_2443860.f_3065.f_134++;
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
		}
	}
}

void func_785()
{
	if (func_789())
	{
		if (Global_2443860.f_3065.f_134 > 0)
		{
			Global_2443860.f_3065.f_134 = (Global_2443860.f_3065.f_134 - 1);
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
		}
	}
}

int func_786(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_27;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11005) * Global_262145.f_11010));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10955) * Global_262145.f_10960));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10982) * Global_262145.f_10986));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10995) * Global_262145.f_10999));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11017) * Global_262145.f_11022));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11179) * Global_262145.f_11180));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11185) * Global_262145.f_11186));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11183) * Global_262145.f_11184));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11177) * Global_262145.f_11178));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11181) * Global_262145.f_11182));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11175) * Global_262145.f_11176));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13050;
		
		case 172:
			return Global_262145.f_13066;
		
		case 173:
			return Global_262145.f_13009;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16279;
		
		case 180:
			return Global_262145.f_16155;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16163;
		
		case 185:
			return Global_262145.f_16172;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16367;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16384;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16232;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16415;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16293;
		
		case 205:
			return Global_262145.f_16402;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16260;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16397;
		
		case 211:
			return Global_262145.f_16361;
		
		case 214:
			return Global_262145.f_16901;
		
		case 215:
			return Global_262145.f_16911;
		
		case 216:
			return Global_262145.f_16921;
		
		case 217:
			return Global_262145.f_16930;
		
		case 218:
			return Global_262145.f_16939;
		
		case 219:
			return Global_262145.f_16955;
		
		default:
	}
	return 0;
}

int func_788(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11006) * Global_262145.f_11011));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10956) * Global_262145.f_10961));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10983) * Global_262145.f_10987));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10996) * Global_262145.f_11000));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11018) * Global_262145.f_11023));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11055) * Global_262145.f_11058));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11101) * Global_262145.f_11104));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11091) * Global_262145.f_11094));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11046) * Global_262145.f_11049));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11066) * Global_262145.f_11071));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11031) * Global_262145.f_11034));
		
		case 170:
			return Global_262145.f_12992;
		
		case 171:
			return Global_262145.f_13051;
		
		case 172:
			return Global_262145.f_13067;
		
		case 173:
			return Global_262145.f_13010;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15083;
		
		case 168:
			return Global_262145.f_15082;
		
		case 179:
			return Global_262145.f_16280;
		
		case 180:
			return Global_262145.f_16156;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16164;
		
		case 185:
			return Global_262145.f_16173;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16368;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16385;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16233;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16416;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16294;
		
		case 205:
			return Global_262145.f_16403;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16261;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16398;
		
		case 211:
			return Global_262145.f_16362;
		
		case 214:
			return Global_262145.f_16902;
		
		case 215:
			return Global_262145.f_16912;
		
		case 216:
			return Global_262145.f_16922;
		
		case 217:
			return Global_262145.f_16931;
		
		case 218:
			return Global_262145.f_16940;
		
		case 219:
			return Global_262145.f_16956;
		
		default:
	}
	return 0;
}

bool func_789()
{
	return func_20(unk_0xFB6B3EEFAB2DD12C());
}

void func_790(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_791(iParam0))
	{
		if (!func_789())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10899;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_652(iParam0))
	{
		*uParam1 = (Global_262145.f_16133 / 100f);
		*uParam2 = (Global_262145.f_16133 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10898;
		*uParam2 = Global_262145.f_10897;
	}
	if (func_652(iParam0))
	{
		if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			*uParam1 = (Global_262145.f_16132 / 100f);
			*uParam2 = (Global_262145.f_16132 / 100f);
		}
	}
	else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		*uParam1 = Global_262145.f_10896;
		*uParam2 = Global_262145.f_10895;
	}
	iVar0 = func_297();
	if (iVar0 != func_18())
	{
		if (func_16(unk_0xFB6B3EEFAB2DD12C(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_792(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_268(unk_0xFB6B3EEFAB2DD12C());
	if (func_652(iVar0))
	{
		Global_1759266.f_2 = func_806();
		Global_1759266.f_3 = func_805();
		Global_1759266.f_50 = iParam4;
		Global_1759266.f_51 = iParam5;
		Global_1759266.f_10 = unk_0x632066A9E8CB2C4D();
		Global_1759266.f_20 = (Global_1759266.f_10 - Global_1759266.f_9);
		Global_1759266.f_12 = iParam1;
		Global_1759266.f_19 = func_799(iVar0, bParam0, func_804(bParam3));
		if (bParam0)
		{
			Global_1759266.f_11 = 1;
		}
		else
		{
			Global_1759266.f_11 = 0;
		}
		if ((func_340(unk_0xFB6B3EEFAB2DD12C()) || func_339(unk_0xFB6B3EEFAB2DD12C())) || func_240(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1759266.f_8 = 1;
		}
		else
		{
			Global_1759266.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1759266.f_43 = 0;
			Global_1759266.f_45 = func_798(func_506(), iParam2);
			Global_1759266.f_47 = iParam7;
			Global_1759266.f_46 = iParam6;
			Global_1759266.f_52 = func_797(func_506(), iParam2);
		}
		func_795(iVar0);
	}
	else if (func_655(iVar0))
	{
		Global_1759319.f_2 = func_806();
		Global_1759319.f_3 = func_805();
		Global_1759319.f_10 = unk_0x632066A9E8CB2C4D();
		Global_1759319.f_19 = (Global_1759319.f_10 - Global_1759319.f_9);
		Global_1759319.f_12 = iParam1;
		if (bParam0)
		{
			Global_1759319.f_11 = 1;
		}
		else
		{
			Global_1759319.f_11 = 0;
		}
		if ((func_340(unk_0xFB6B3EEFAB2DD12C()) || func_339(unk_0xFB6B3EEFAB2DD12C())) || func_240(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1759319.f_8 = 1;
		}
		else
		{
			Global_1759319.f_8 = 0;
		}
		func_793(iVar0);
	}
	else
	{
		Global_1759248.f_6 = unk_0x632066A9E8CB2C4D();
		if (bParam0)
		{
			Global_1759248.f_7 = 1;
		}
		else
		{
			Global_1759248.f_7 = 0;
		}
		Global_1759248.f_8 = iParam1;
		if (Global_1759248.f_4 == 0)
		{
			if ((func_340(unk_0xFB6B3EEFAB2DD12C()) || func_339(unk_0xFB6B3EEFAB2DD12C())) || func_240(unk_0xFB6B3EEFAB2DD12C()))
			{
				Global_1759248.f_4 = 1;
			}
		}
	}
}

void func_793(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1759319);
	func_794();
}

void func_794()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1759319 = { Var0 };
	Global_1759319.f_24 = 0;
	Global_1759319.f_25 = 0;
	Global_1759319.f_17 = 0;
}

void func_795(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xC6BC6CCC042DA754(&Global_1759266);
	func_796();
}

void func_796()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1759266 = { Var0 };
	Global_1759266.f_29 = 0;
	Global_1759266.f_30 = 0;
	Global_1759266.f_17 = 0;
}

int func_797(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_747(iParam0, iParam1, 2);
	bVar1 = func_747(iParam0, iParam1, 1);
	bVar2 = func_747(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_798(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_750(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_799(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_524(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15690;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15689;
		}
		else
		{
			iVar0 = Global_262145.f_15671;
		}
		iVar1 = 19;
	}
	else if (func_523(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_271(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15670;
			iVar1 = 20;
		}
	}
	else if (func_652(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15690;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15689;
		}
		else
		{
			iVar0 = Global_262145.f_15671;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x45642B16386FB81D(func_803(func_506()), func_802(func_506()), func_806(), func_805(), iVar1, iVar0);
	}
	func_801(iVar0);
	func_800(iVar0);
	return iVar0;
}

void func_800(int iParam0)
{
	int iVar0;
	
	iVar0 = func_671(3940, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_329 = iVar0;
	func_669(3940, iVar0, -1, 1, 0);
}

void func_801(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	Global_1618089[iVar0 /*390*/].f_11.f_328 = (Global_1618089[iVar0 /*390*/].f_11.f_328 + iParam0);
	if (Global_1618089[iVar0 /*390*/].f_11.f_328 < -9999)
	{
		Global_1618089[iVar0 /*390*/].f_11.f_328 = 9999;
	}
	else if (Global_1618089[iVar0 /*390*/].f_11.f_328 > 9999)
	{
		Global_1618089[iVar0 /*390*/].f_11.f_328 = 9999;
	}
}

int func_802(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[1];
}

int func_803(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[0];
}

int func_804(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_340(unk_0xFB6B3EEFAB2DD12C()) || func_240(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_805()
{
	if (Global_1759248.f_3 != 0)
	{
		return Global_1759248.f_3;
	}
	return -1;
}

int func_806()
{
	if (Global_1759248.f_2 != 0)
	{
		return Global_1759248.f_2;
	}
	return -1;
}

void func_807(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_860())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_808()
{
	if (func_241(unk_0xFB6B3EEFAB2DD12C(), 20) || func_340(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 20))
		{
			unk_0xFA320609400AECAE("DisableFlightMusic", 1);
			unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
			unk_0xB8A73E7DA87B2968(&iLocal_357, 20);
		}
		if (!unk_0xF44A5E894FE76438(iLocal_357, 21))
		{
			if (unk_0xC86A1E7DAC7A9357("BG_ASSAULT_START"))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 21);
			}
		}
		else if (Local_99.f_5 == -1 && Local_99.f_7 == -1)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_357, 22))
			{
				if (Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 > 1)
				{
					if (unk_0xC86A1E7DAC7A9357("BG_ASSAULT_COLLECT"))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 22);
						if (unk_0xF44A5E894FE76438(iLocal_357, 23))
						{
							unk_0x4EA098C870B73AB7(&iLocal_357, 23);
						}
					}
				}
			}
		}
		else if (!unk_0xF44A5E894FE76438(iLocal_357, 23))
		{
			if (unk_0xC86A1E7DAC7A9357("BG_ASSAULT_DELIVER"))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 23);
				if (unk_0xF44A5E894FE76438(iLocal_357, 22))
				{
					unk_0x4EA098C870B73AB7(&iLocal_357, 22);
				}
			}
		}
	}
}

void func_809()
{
	if (func_514())
	{
		if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 10))
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
			{
				if (!func_21(Local_99.f_29[0]))
				{
					unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_810()
{
	int iVar0;
	
	if (func_860() != 2)
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 11))
	{
		if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 12))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, 1, 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 12))
	{
		if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 13))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x1DEB1994A3C25E35(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_13[iVar0]))
			{
				if (!func_10(Local_99.f_13[iVar0]))
				{
					if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 14))
					{
						if (func_811(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar0])))
						{
							unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_811(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), uParam0))
	{
		return 1;
	}
	if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), uParam0))
	{
		return 1;
	}
	if (func_812())
	{
		if (unk_0xD5E68CECA2E10B56(unk_0xFB6B3EEFAB2DD12C(), &uVar0))
		{
			if (unk_0x6DA4D1391A7B813F(uVar0))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iVar0);
				if (unk_0x7887B64A08364778(uVar1))
				{
					if (!unk_0xB529B2A4B7C64D6D(iVar1, 0))
					{
						if (unk_0x6A0583ECFCCECC9B(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_812()
{
	return Global_1574249;
}

void func_813()
{
	if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 7))
	{
		if (!unk_0x6901135DDCC4904D(uLocal_490))
		{
			func_815();
		}
		if (func_513())
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) > 2)
			{
				if (!func_578("GB_ASLT_GO"))
				{
					func_625("GB_ASLT_GO", func_814(), 0, 0);
				}
			}
			else
			{
				func_606();
			}
		}
		else
		{
			func_606();
		}
		if (func_511())
		{
			unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1), 7);
		}
	}
	func_408();
}

char* func_814()
{
	switch (func_860())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_815()
{
	struct<3> Var0;
	
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 1)
	{
		if (unk_0x6901135DDCC4904D(uLocal_490))
		{
			unk_0x8A3D7569826A325D(&uLocal_490);
		}
		return;
	}
	Var0 = { func_816() };
	if (func_876())
	{
		if (!func_398(Var0, 0f, 0f, 0f, 0))
		{
			uLocal_490 = unk_0x6678F4628618607C(Var0);
			unk_0xD947D2F43FD7F6D7(uLocal_490, 1);
			if (!unk_0xF44A5E894FE76438(iLocal_357, 0))
			{
				unk_0x5AF5569613C76AC3(uLocal_490, 1);
				unk_0x49A7A4E5E2FD02DC(uLocal_490, 7000);
				unk_0xB77AFA5DEFB190B1();
				unk_0xB8A73E7DA87B2968(&iLocal_357, 0);
			}
		}
	}
}

Vector3 func_816()
{
	struct<3> Var0;
	
	switch (func_860())
	{
		case 0:
			Var0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			Var0 = { func_500() };
			break;
	}
	return Var0;
}

void func_817()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	
	func_824();
	Var8 = { func_500() };
	if (!func_514())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_513()) && unk_0xF44A5E894FE76438(iLocal_357, 3)) && !func_535(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
	{
		if (func_876())
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 16))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_357, 16))
				{
					fVar6 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var8, 0);
					if (func_860() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_369(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
						func_822();
						unk_0xB8A73E7DA87B2968(&iLocal_357, 16);
					}
				}
				else
				{
					fVar6 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var8, 0);
					if (func_860() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						unk_0x4EA098C870B73AB7(&iLocal_357, 16);
						func_374();
						func_369(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xF44A5E894FE76438(iLocal_357, 16))
				{
					unk_0x4EA098C870B73AB7(&iLocal_357, 16);
					func_374();
					func_369(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
				}
				bVar11 = true;
			}
		}
		else
		{
			bVar11 = true;
		}
		if (!bVar11)
		{
			return;
		}
		Var3 = { func_821() };
		if (func_398(Var3, 0f, 0f, 0f, 0))
		{
			return;
		}
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
		switch (func_860())
		{
			case 1:
				if (!func_512(Var0, 3, 1000, 0))
				{
					func_373(10, 0, 0);
					func_820(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_394(Var3, 1, 0);
				}
				else if (func_512(Var3, 3, 1000, 0))
				{
					func_373(10, 0, 0);
					func_820(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_394(Var3, 1, 0);
				}
				else
				{
					func_373(10, 0, 0);
					func_820(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_394(Var3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_512(Var0, 2, 1000, 0))
				{
					func_373(10, 0, 0);
					func_820(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_394(Var3, 1, 0);
				}
				else if (func_512(Var3, 2, 1000, 0))
				{
					func_373(10, 0, 0);
					func_820(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_394(Var3, 1, 0);
				}
				else
				{
					func_373(10, 0, 0);
					func_820(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_394(Var3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_373(10, 0, 0);
				func_820(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				func_394(Var3, 1, 0);
				break;
		}
	}
	else
	{
		if (unk_0xF44A5E894FE76438(iLocal_357, 16))
		{
			unk_0x4EA098C870B73AB7(&iLocal_357, 16);
			func_374();
			func_369(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		}
		if (unk_0xF44A5E894FE76438(iLocal_357, 7))
		{
			func_367();
			func_818();
		}
	}
}

void func_818()
{
	if (Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
	{
		func_819();
	}
}

void func_819()
{
	struct<25> Var0;
	
	if (unk_0x597C1E51157E5516(Global_2412527.f_6))
	{
		if (!Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412527 = { Var0 };
	Global_2412527.f_6 = -1;
}

void func_820(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x597C1E51157E5516(Global_2412527.f_6))
	{
		if (!Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
		{
			return;
		}
	}
	else
	{
		Global_2412527.f_6 = unk_0x3ED6DDB11A7AD67F();
	}
	Var0.f_6 = Global_2412527.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_145(unk_0xFB6B3EEFAB2DD12C()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2412527 = { Var0 };
}

Vector3 func_821()
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_514())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			if (func_21(Local_99.f_29[0]))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_99.f_12), 1) };
	}
	return Var0;
}

void func_822()
{
	int iVar0;
	
	iVar0 = func_860();
	switch (iVar0)
	{
		case 0:
			func_823(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_823(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_823(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_823(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_823(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_823(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_823(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_823(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_823(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_823(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_823(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_823(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_823(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_823(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_823(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_823(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_823(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_823(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_823(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_823(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_823(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_823(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_823(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_823(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_823(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_823(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_823(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_823(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_823(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_823(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_823(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_823(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_823(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_823(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_823(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_823(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_823(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_823(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_823(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_823(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_823(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404994.f_1684)
	{
	}
	if (Global_2404994.f_651 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/] = { Param0 };
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/].f_3 = fParam3;
		Global_2404994.f_651.f_1[Global_2404994.f_651 /*5*/].f_4 = iParam4;
		Global_2404994.f_651++;
	}
}

void func_824()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_876() && !func_353())
	{
		return;
	}
	if (func_514())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			if (func_21(Local_99.f_29[0]))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_99.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0x629B43A8C1BDED52(Local_99.f_12), 1) };
	}
	if (!func_398(Var0, 0f, 0f, 0f, 0))
	{
		if (func_513())
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				Var3 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
				fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
				if (!unk_0xF44A5E894FE76438(iLocal_357, 3))
				{
					if (fVar6 <= 250000f)
					{
						unk_0xB8A73E7DA87B2968(&iLocal_357, 3);
					}
					else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 6))
					{
						if (func_512(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 3, 1000, 0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_357, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (unk_0xF44A5E894FE76438(Local_99.f_1, 6) || (!unk_0xF44A5E894FE76438(Local_99.f_1, 6) && !func_512(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 3, 1000, 0)))
					{
						unk_0x4EA098C870B73AB7(&iLocal_357, 3);
					}
				}
			}
		}
	}
}

void func_825()
{
	if (func_353())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_12))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_357, 9))
			{
				if (func_352())
				{
					unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 1, 1);
					if (unk_0x1B982A8B37108B3C(Local_99.f_12))
					{
						if (unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_99.f_12), unk_0xD5A676B97920D126()))
						{
							unk_0x1417FD63129FBCC1(unk_0x629B43A8C1BDED52(Local_99.f_12));
						}
					}
					unk_0xB8A73E7DA87B2968(&iLocal_357, 9);
				}
			}
			else if (!func_343())
			{
				if (!func_352())
				{
					unk_0x15E99E6FE6B6CA57(unk_0x629B43A8C1BDED52(Local_99.f_12), 0, 1);
					unk_0x4EA098C870B73AB7(&iLocal_357, 9);
				}
			}
		}
	}
}

void func_826()
{
	struct<8> Var0;
	
	if (!unk_0xF44A5E894FE76438(iLocal_357, 1))
	{
		if (func_876())
		{
			if (func_338(unk_0xFB6B3EEFAB2DD12C()) >= 1)
			{
				if (!func_561(85))
				{
					if (func_555(0, 1, 1, 1))
					{
						Var0 = { func_828() };
						func_654(&Var0, -1);
						func_546(1);
						unk_0xB8A73E7DA87B2968(&iLocal_357, 1);
					}
				}
			}
		}
		else
		{
			unk_0xB8A73E7DA87B2968(&iLocal_357, 1);
		}
	}
	if (!unk_0xF44A5E894FE76438(iLocal_358, 2))
	{
		if (unk_0xF44A5E894FE76438(iLocal_357, 1))
		{
			if (func_876())
			{
				if (Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_5 > 1)
				{
					if (func_555(0, 1, 1, 1))
					{
						if (func_555(0, 1, 1, 1))
						{
							Var0 = { func_827() };
							func_654(&Var0, -1);
							func_546(1);
							unk_0xB8A73E7DA87B2968(&iLocal_358, 2);
						}
					}
				}
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(iLocal_358, 10))
	{
		if (func_876())
		{
			if (((Local_99.f_5 != -1 || Local_99.f_7 != -1) || unk_0xF44A5E894FE76438(Local_99.f_1, 16)) || unk_0xF44A5E894FE76438(Local_99.f_1, 20))
			{
				if (func_555(0, 1, 1, 1))
				{
					func_654("GB_SGHT_RVL", -1);
					func_546(1);
					unk_0xB8A73E7DA87B2968(&iLocal_358, 10);
				}
			}
		}
	}
}

struct<8> func_827()
{
	struct<8> Var0;
	
	switch (func_860())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_828()
{
	struct<8> Var0;
	
	if (func_789())
	{
		switch (func_860())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_860())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_829()
{
	int iVar0;
	
	if (!func_9(&(Local_99.f_54)))
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(iLocal_358, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_834(&(Local_99.f_54), 0, 0));
	if (!func_513())
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 1))
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_338(unk_0xFB6B3EEFAB2DD12C()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!unk_0xF44A5E894FE76438(iLocal_357, 19))
		{
			iLocal_495 = unk_0xA6EB3FD2D3CE76A2();
			unk_0xA93E75A5493862BD(iLocal_495, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			unk_0xB8A73E7DA87B2968(&iLocal_357, 19);
		}
	}
	func_833(iVar0);
	if (iVar0 > 30000)
	{
		func_830(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (iVar0 >= 0)
	{
		func_830(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_830(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
}

void func_830(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_832(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_831(7, iVar0);
		Global_1354290.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = iParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = iParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_831(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_832(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

void func_833(int iParam0)
{
	if (unk_0xF44A5E894FE76438(iLocal_357, 29))
	{
		func_198();
		return;
	}
	if (!unk_0xF44A5E894FE76438(iLocal_357, 30))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xC86A1E7DAC7A9357("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 30);
				unk_0xB8A73E7DA87B2968(&iLocal_357, 28);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_357, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_358, 0))
			{
				if (unk_0xFB2A602DE19D1E98("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
					unk_0xE64FA07C00C340C6(0);
					unk_0xB8A73E7DA87B2968(&iLocal_358, 0);
				}
			}
			if (!unk_0xF44A5E894FE76438(iLocal_357, 31))
			{
				if (unk_0xC86A1E7DAC7A9357("APT_COUNTDOWN_30S"))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_357, 31);
				}
			}
			if (unk_0xF44A5E894FE76438(iLocal_357, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xF44A5E894FE76438(iLocal_358, 1))
					{
						unk_0xE64FA07C00C340C6(1);
						unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
						unk_0xB8A73E7DA87B2968(&iLocal_358, 1);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xC86A1E7DAC7A9357("APT_FADE_IN_RADIO"))
						{
							unk_0xCE9DEE48C6D0851C("APT_COUNTDOWN_30S_KILL");
							unk_0x4EA098C870B73AB7(&iLocal_357, 28);
						}
					}
				}
			}
		}
	}
}

int func_834(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0);
		}
		else
		{
			return unk_0x05E1706E4465DAA5(unk_0x8D8F7D01F0EB4218(), *uParam0);
		}
	}
	return unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0);
}

void func_835(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_268(unk_0xFB6B3EEFAB2DD12C());
	if (iParam2 || func_652(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1759266 = iVar0;
		if (func_524(iVar0))
		{
			Global_1759266.f_1 = 4;
		}
		else if (func_523(iVar0))
		{
			Global_1759266.f_1 = 5;
		}
		else if (func_271(iVar0, 0))
		{
			Global_1759266.f_1 = 2;
			if (func_665(iVar0))
			{
				Global_1759266.f_1 = 3;
			}
		}
		else
		{
			Global_1759266.f_1 = 1;
		}
		if (func_506() != func_18())
		{
			Global_1759266.f_4 = func_803(func_506());
			Global_1759266.f_5 = func_802(func_506());
		}
		if (func_297() != func_18())
		{
			func_689(func_297(), &(Global_1759266.f_6), &(Global_1759266.f_7));
		}
		Global_1759266.f_9 = unk_0x632066A9E8CB2C4D();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1759266.f_27 = 1;
			Global_1759266.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1759266.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1759266.f_40 = func_751(iParam1);
			Global_1759266.f_41 = func_837();
			Global_1759266.f_42 = func_752(unk_0xFB6B3EEFAB2DD12C(), iParam1);
			Global_1759266.f_44 = func_798(unk_0xFB6B3EEFAB2DD12C(), iParam1);
		}
	}
	else if (func_655(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1759319 = iVar0;
		Global_1759266.f_1 = 1;
		if (func_506() != func_18())
		{
			Global_1759319.f_4 = func_803(func_506());
			Global_1759319.f_5 = func_802(func_506());
		}
		if (func_297() != func_18())
		{
			func_689(func_297(), &(Global_1759319.f_6), &(Global_1759319.f_7));
		}
		Global_1759319.f_9 = unk_0x632066A9E8CB2C4D();
		if (iParam0 != -1)
		{
			Global_1759319.f_21 = iParam0;
		}
	}
	else
	{
		if (func_506() != func_18())
		{
			Global_1759248 = func_803(func_506());
			Global_1759248.f_1 = func_802(func_506());
		}
		Global_1759248.f_5 = unk_0x632066A9E8CB2C4D();
		Global_1759248.f_13 = func_836();
		Global_1759248.f_15 = 0;
		if (func_857(1))
		{
			if (func_297() == func_506())
			{
				Global_1759248.f_15 = 1;
			}
		}
	}
}

int func_836()
{
	int iVar0;
	
	iVar0 = func_506();
	if (iVar0 != func_18())
	{
		return Global_1618089[iVar0 /*390*/].f_11.f_91;
	}
	return 0;
}

var func_837()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_749(unk_0xFB6B3EEFAB2DD12C(), iVar0))
		{
			unk_0xB8A73E7DA87B2968(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_838(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_642(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_638(&Var0);
}

struct<8> func_839()
{
	struct<8> Var0;
	
	switch (func_860())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_840()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_99.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (unk_0x1B982A8B37108B3C(Local_99.f_13[iVar0]))
				{
					if (func_845(Local_99.f_13[iVar0]))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_13[iVar0]))
						{
							if (!func_10(Local_99.f_13[iVar0]))
							{
								if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar0]), -1442466670) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_860() == 2)
									{
										unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar0]), 0);
									}
									unk_0xD38E07142A13F3FA(unk_0x9E9133ACB2BCC1D5(Local_99.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_841(Local_99.f_13[iVar0], &(Local_363[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_841(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (func_844())
		{
			Global_2433082 = unk_0xFB6B3EEFAB2DD12C();
		}
		if (bParam3)
		{
			func_843(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, 1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_843(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, -1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x6901135DDCC4904D(*uParam1))
	{
		func_842(uParam1);
	}
}

void func_842(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0x8A3D7569826A325D(uParam0);
		bVar0 = true;
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_1))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7887B64A08364778(uParam0->f_7))
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_7))
		{
			if (unk_0x809387353710848E(uParam0->f_7))
			{
				unk_0x78E064446A641529(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_843(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xF3F8195C98263BF5();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		if (!unk_0x809387353710848E(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x78E064446A641529(iParam0, 1);
			}
			else
			{
				unk_0xF12F7DD5C806C87C(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x15384506B12EE9D5(iParam0, iParam2);
			unk_0x542A2C3DC0374D53(iParam0, fParam6);
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x70F2D7B891171E48(iParam0, iParam9);
		}
		unk_0x445B259664586FAE(iParam0, uParam4);
		unk_0x9B38006BF68A10D5(iParam0, uParam5);
		*uParam1 = unk_0x6CABC22169F0A7EF(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x4F095059F1C175D5(*uParam1, iParam8);
				}
				unk_0xD5CB3DBDC39C94B8("STRING");
				if (bParam10)
				{
					unk_0x4C51E4FBCD1D8830(uParam7);
				}
				else
				{
					unk_0xB1953EBEF4D6BD85(sParam7);
				}
				unk_0x16754E7FB61E7A65(*uParam1);
				unk_0x0D792BA553E57B27(*uParam1, 7);
			}
		}
		if (!unk_0xF44A5E894FE76438(uParam1->f_6, 2))
		{
			if (unk_0x6901135DDCC4904D(*uParam1))
			{
				if (!unk_0xC55B9553B3EDADE9(sParam7))
				{
					unk_0xD5CB3DBDC39C94B8("STRING");
					if (bParam10)
					{
						unk_0x4C51E4FBCD1D8830(sParam7);
					}
					else
					{
						unk_0xB1953EBEF4D6BD85(sParam7);
					}
					unk_0x16754E7FB61E7A65(*uParam1);
				}
				unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			uParam1->f_1 = unk_0x826D1C7EA579B9BB(iParam0);
			if (!unk_0xF44A5E894FE76438(uParam1->f_6, 3))
			{
				if (unk_0x6901135DDCC4904D(uParam1->f_1))
				{
					unk_0x0D792BA553E57B27(uParam1->f_1, 7);
					unk_0xB8A73E7DA87B2968(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6901135DDCC4904D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x4EA098C870B73AB7(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_844()
{
	return Global_1315206;
}

int func_845(var uParam0)
{
	if (unk_0x7577EA45D81AA1C8(uParam0))
	{
		return 1;
	}
	if (func_846(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_846(var uParam0)
{
	if (!unk_0x04DE35D10A718EEF())
	{
		return 0;
	}
	if (!unk_0x1B982A8B37108B3C(uParam0))
	{
		return 0;
	}
	if (func_847(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_847(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
	}
	return 0;
}

void func_848()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_0 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (unk_0x1E0256D6F1052B31(iVar1))
			{
				if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (unk_0xBF474853319C6A20(iVar1))
					{
						if (!unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3, iVar0))
						{
							if (func_514())
							{
								func_612(iVar1, 421, 0);
							}
							else
							{
								func_612(iVar1, 457, 0);
							}
							unk_0xB8A73E7DA87B2968(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3), iVar0);
						}
					}
					else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3, iVar0))
					{
						if (func_514())
						{
							func_612(iVar1, 421, 0);
						}
						else
						{
							func_612(iVar1, 457, 0);
						}
						unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3, iVar0))
			{
				unk_0x4EA098C870B73AB7(&(Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_849()
{
	if (func_860() == 0)
	{
		if (func_25() == 0)
		{
			func_850("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_850(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_851(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xB8A73E7DA87B2968(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_851(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_853(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_852(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_852(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_853(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794643.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907640.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_853(var uParam0)
{
	int iVar0;
	
	if (unk_0xC55B9553B3EDADE9(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_855(uParam0->f_1))
	{
		if (func_854(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xF44A5E894FE76438(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xF44A5E894FE76438(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xF44A5E894FE76438(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCC257DA11A122B5F(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xF44A5E894FE76438(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xF44A5E894FE76438(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xF44A5E894FE76438(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCC257DA11A122B5F(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xFB6B3EEFAB2DD12C())
	{
		if (unk_0xF44A5E894FE76438(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xCC257DA11A122B5F(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xF44A5E894FE76438(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_854(var uParam0)
{
	if (Global_2398050)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_2398050.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_855(int iParam0)
{
	return iParam0 == 9999;
}

void func_856()
{
	if (func_860() != 1 && func_860() != 2)
	{
		return;
	}
	if (func_860() != 1)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			unk_0xE05A913A98E0D3A9(Local_99.f_29[0], 1);
		}
	}
}

bool func_857(bool bParam0)
{
	return func_19(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

void func_858()
{
	if (unk_0xA9F93059DE95F096(1343869835))
	{
		unk_0x7E12E87285DA0A0B(1343869835, 1, 0, 0);
		unk_0x493699B2ECB87DCA(1343869835, 1f, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(207506449))
	{
		unk_0x7E12E87285DA0A0B(207506449, 1, 0, 0);
		unk_0x493699B2ECB87DCA(207506449, 1f, 0, 0);
	}
}

void func_859()
{
	Global_1756720 = 1;
	if (!unk_0xF44A5E894FE76438(Global_2501502, 0))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 0);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 0);
	}
	if (!unk_0xF44A5E894FE76438(Global_2501502, 1))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 1);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 1);
	}
	if (!unk_0xF44A5E894FE76438(Global_2501502, 5))
	{
		unk_0xB8A73E7DA87B2968(&Global_2501502, 5);
		unk_0xB8A73E7DA87B2968(&Global_1756721, 5);
	}
	if (unk_0xA9F93059DE95F096(-355737150))
	{
		unk_0x7E12E87285DA0A0B(-355737150, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-580979506))
	{
		unk_0x7E12E87285DA0A0B(-580979506, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1426452475))
	{
		unk_0x7E12E87285DA0A0B(-1426452475, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(745417724))
	{
		unk_0x7E12E87285DA0A0B(745417724, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1305304906))
	{
		unk_0x7E12E87285DA0A0B(-1305304906, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-1543175077))
	{
		unk_0x7E12E87285DA0A0B(-1543175077, 0, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(-811770997))
	{
		unk_0x7E12E87285DA0A0B(-811770997, 0, 0, 0);
	}
}

int func_860()
{
	if (Local_99.f_3 != -1)
	{
		return Local_99.f_3;
	}
	if (unk_0x04DE35D10A718EEF())
	{
		if (Local_99.f_3 == -1)
		{
			if (Local_99.f_3 == -1)
			{
				if (Global_2494149.f_5280 != -1)
				{
					Local_99.f_3 = Global_2494149.f_5280;
				}
				else
				{
					Local_99.f_3 = 1;
				}
			}
		}
	}
	return Local_99.f_3;
}

void func_861(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 != iParam0)
	{
		func_875(-1);
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 = iParam0;
		if (func_874() != -1)
		{
			func_873(-1);
		}
		if (func_872() != -1)
		{
			func_871(-1);
		}
		func_870(iParam2);
		func_868(iParam0);
		if (!func_390(iParam0))
		{
			fVar0 = func_389(iParam0);
			if (fVar0 != 1f)
			{
				func_386(fVar0);
				unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 1);
			}
		}
		if (!func_393(iParam0) || iParam3)
		{
			if (func_391(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x028AA922F2B17B2A(0);
				if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
				{
					unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
					unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
				}
				unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 0);
			}
			else if (unk_0xBF3F652B1833E78E() < 5)
			{
				unk_0xFA5E84DCAE200259(1f);
				unk_0x028AA922F2B17B2A(5);
			}
		}
		if (func_352())
		{
			func_344(27);
		}
		if (bParam1)
		{
			if (!func_343())
			{
				func_383(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xF44A5E894FE76438(Global_2494149.f_4418, 1) || unk_0xF44A5E894FE76438(Global_2494149.f_4418, 4)) || unk_0xF44A5E894FE76438(Global_2494149.f_4418, 0))
			{
				func_738(6);
			}
			func_867();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x0AF219B759EA8670(3, 0);
			unk_0x0AF219B759EA8670(5, 0);
		}
		if (func_147(unk_0xFB6B3EEFAB2DD12C()) && func_340(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 8);
		}
		func_863();
		if (func_862(iParam0))
		{
			unk_0x0AF219B759EA8670(3, 0);
			unk_0x0AF219B759EA8670(5, 0);
			unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 6);
		}
	}
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_863()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_866();
	iVar2 = func_41(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
		if (unk_0x1E0256D6F1052B31(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_864(iVar1, unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0xE243F669198CD35E(unk_0xFB6B3EEFAB2DD12C(), iVar1, uVar3);
				unk_0xE243F669198CD35E(iVar1, unk_0xFB6B3EEFAB2DD12C(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_864(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_865(iParam0) == func_41(iParam1) || func_865(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_865(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1618089[func_41(iParam0) /*390*/].f_11.f_323;
	}
	return func_18();
}

int func_866()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_506();
	if (iVar0 != func_18())
	{
		if (func_959(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xF44A5E894FE76438(Global_1618089[iVar1 /*390*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_867()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4418, 1))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_4418), 1);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4418, 4))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_4418), 4);
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4418, 6))
	{
		unk_0x4EA098C870B73AB7(&(Global_2494149.f_4418), 6);
	}
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4418), 0);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4418), 2);
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_510 = 0;
	if (Global_2494149.f_4420 > 0)
	{
		unk_0x028AA922F2B17B2A(Global_2494149.f_4420);
	}
	Global_2494149.f_4419 = 0;
}

void func_868(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_671(3763, -1, 0);
	iVar1 = func_869(iParam0);
	if (iVar1 != -1)
	{
		unk_0xB8A73E7DA87B2968(&iVar0, iVar1);
		func_669(3763, iVar0, -1, 1, 0);
	}
}

int func_869(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_870(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	if (Global_1618089[iVar0 /*390*/].f_11.f_172 != iParam0)
	{
		Global_1618089[iVar0 /*390*/].f_11.f_172 = iParam0;
	}
}

void func_871(int iParam0)
{
	if (Global_2494149.f_4710.f_149 != iParam0)
	{
		Global_2494149.f_4710.f_149 = iParam0;
	}
}

int func_872()
{
	return Global_2494149.f_4710.f_149;
}

void func_873(int iParam0)
{
	if (Global_2494149.f_4710.f_148 != iParam0)
	{
		Global_2494149.f_4710.f_148 = iParam0;
	}
}

int func_874()
{
	return Global_2494149.f_4710.f_148;
}

void func_875(int iParam0)
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_31 = iParam0;
}

int func_876()
{
	int iVar0;
	
	iVar0 = func_877();
	if (iVar0 > -1)
	{
		if (Local_99.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_877()
{
	int iVar0;
	
	if (Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_4 != -1)
	{
		return Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_4;
	}
	if (func_20(unk_0xFB6B3EEFAB2DD12C()))
	{
		Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_4 = unk_0x1E7FB1CA38C403F6();
		if (unk_0x1E7FB1CA38C403F6() == Local_99.f_8)
		{
			func_633(1);
		}
	}
	else if (func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		iVar0 = func_506();
		if (iVar0 != func_18())
		{
			if (unk_0xBF474853319C6A20(iVar0))
			{
				Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_4 = unk_0xCA5CB25B27CC9477(iVar0);
			}
		}
	}
	return Local_164[unk_0x1E7FB1CA38C403F6() /*6*/].f_4;
}

int func_878()
{
	if (func_514())
	{
		if (!unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			return 0;
		}
	}
	else if (!unk_0x1B982A8B37108B3C(Local_99.f_12))
	{
		return 0;
	}
	return 1;
}

int func_879()
{
	return Local_99.f_0;
}

int func_880(int iParam0)
{
	return Local_164[iParam0 /*6*/];
}

int func_881(bool bParam0)
{
	if (func_882(1))
	{
		return 1;
	}
	if (Global_2494149.f_4710.f_21)
	{
		Global_2494149.f_4710.f_21 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_297() == func_18() || !func_959(func_297(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_882(bool bParam0)
{
	bool bVar0;
	
	if (!func_857(1))
	{
		bVar0 = false;
		if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 != func_18())
		{
			if (func_959(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55, 0, 1))
			{
				if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_23 == 4 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_883(func_268(unk_0xFB6B3EEFAB2DD12C())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_738(31);
				if (func_652(func_268(unk_0xFB6B3EEFAB2DD12C())))
				{
					func_738(81);
				}
				if (unk_0x1E0256D6F1052B31(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55))
				{
					Global_1616673 = func_587(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55, -2, 0, 0);
					if (!func_296(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55))
					{
						func_738(88);
					}
				}
				else
				{
					Global_1616673 = 1;
				}
				Global_1616657 = { Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_884()
{
	bool bVar0;
	var uVar1;
	
	func_888(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_887())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_886())
	{
		return 1;
	}
	if (func_885(157))
	{
		if (!func_407())
		{
			return 1;
		}
	}
	if (func_885(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_387() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_387()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_885(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_886()
{
	return Global_2452479;
}

bool func_887()
{
	return Global_2443089.f_572;
}

void func_888(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_889(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
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

void func_889(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_959(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_890(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_890(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_891()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_892()
{
	var uVar0;
	
	if (func_514())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_29[0]))
		{
			if (unk_0xF44A5E894FE76438(iLocal_358, 5))
			{
				if (!func_857(1))
				{
					if (func_21(Local_99.f_29[0]))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), unk_0xE95C934718B1A4FF(Local_99.f_29[0])))
							{
								unk_0xE9148EE8AA200B60(unk_0xD5A676B97920D126(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_943();
	unk_0xE7838AA03E82E887(1);
	func_633(0);
	if (!unk_0xF44A5E894FE76438(iLocal_357, 17))
	{
		if (unk_0x1995B52453EF6537())
		{
			if (func_876() || func_353())
			{
				unk_0xB8A73E7DA87B2968(&iLocal_357, 17);
				Global_1759248.f_2 = Local_99.f_63;
				Global_1759248.f_3 = Local_99.f_64;
				func_792(0, 4, 0, 0, -1, -1, -1, -1);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_357, 17))
	{
		func_941(func_860(), -1, -1, -1082130432);
	}
	if (unk_0xF44A5E894FE76438(iLocal_357, 4))
	{
		func_382(8);
	}
	if (unk_0xF44A5E894FE76438(iLocal_357, 20))
	{
		unk_0xC86A1E7DAC7A9357("BG_ASSAULT_STOP");
		unk_0xFA320609400AECAE("DisableFlightMusic", 0);
		unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
	}
	if (Local_99.f_3 == 1)
	{
		unk_0xFA03BA297FE81584(joaat("rhino"), 0);
	}
	unk_0x028AA922F2B17B2A(5);
	if (!func_940())
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_12))
		{
			if (unk_0x50CED8EEAE806923(Local_99.f_12))
			{
				uVar0 = unk_0x0DE80E23B2BD02BD(Local_99.f_12);
				unk_0x334B78DD05E664AF(&uVar0);
			}
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&iLocal_357, 29);
	}
	func_898(1, 0);
	if (Global_2494149.f_5280 != -1)
	{
		Global_2494149.f_5280 = -1;
	}
	if (Global_1573331)
	{
		Global_1573331 = 0;
	}
	func_897();
	if (func_860() == 3)
	{
		func_896();
	}
	if (unk_0xF44A5E894FE76438(iLocal_358, 0))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_358, 1))
		{
			unk_0xE64FA07C00C340C6(1);
			unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
			unk_0xCE9DEE48C6D0851C("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_198();
	func_894();
	if (unk_0xF44A5E894FE76438(iLocal_357, 19))
	{
		unk_0x91A6DE61891987F6(iLocal_495);
	}
	if (unk_0xF44A5E894FE76438(iLocal_357, 16))
	{
		func_374();
		func_369(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_893();
}

void func_893()
{
	unk_0x01DFCA3621B68C4A();
}

void func_894()
{
	struct<6> Var0;
	
	if (func_860() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_895(Var0);
		}
	}
}

void func_895(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC55B9553B3EDADE9(&cParam0))
	{
		return;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_851(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x4EA098C870B73AB7(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_896()
{
	if (unk_0xA9F93059DE95F096(1343869835))
	{
		unk_0x7E12E87285DA0A0B(1343869835, 0, 0, 0);
		unk_0x493699B2ECB87DCA(1343869835, 0f, 0, 0);
	}
	if (unk_0xA9F93059DE95F096(207506449))
	{
		unk_0x7E12E87285DA0A0B(207506449, 0, 0, 0);
		unk_0x493699B2ECB87DCA(207506449, 0f, 0, 0);
	}
}

void func_897()
{
	if (Global_1756720)
	{
		if (unk_0xF44A5E894FE76438(Global_1756721, 0))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 0);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 1))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 1);
		}
		if (unk_0xF44A5E894FE76438(Global_1756721, 5))
		{
			unk_0x4EA098C870B73AB7(&Global_2501502, 5);
		}
		if (unk_0xA9F93059DE95F096(-355737150))
		{
			unk_0x7E12E87285DA0A0B(-355737150, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-580979506))
		{
			unk_0x7E12E87285DA0A0B(-580979506, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1426452475))
		{
			unk_0x7E12E87285DA0A0B(-1426452475, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(745417724))
		{
			unk_0x7E12E87285DA0A0B(745417724, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1305304906))
		{
			unk_0x7E12E87285DA0A0B(-1305304906, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-1543175077))
		{
			unk_0x7E12E87285DA0A0B(-1543175077, 1, 0, 0);
		}
		if (unk_0xA9F93059DE95F096(-811770997))
		{
			unk_0x7E12E87285DA0A0B(-811770997, 1, 0, 0);
		}
		Global_1756721 = 0;
	}
	Global_1756720 = 0;
}

void func_898(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1342709.f_1.f_108 != 0)
	{
		Global_1342709.f_1.f_108 = 0;
	}
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 167 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 168)
	{
		func_938();
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 4);
	}
	if ((func_687() && iParam1 != 0) && Global_262145.f_14974)
	{
		if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 190 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 192)
		{
			func_923(unk_0xFB6B3EEFAB2DD12C(), iParam1);
		}
	}
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 164 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 208)
	{
		unk_0x0AF219B759EA8670(3, 1);
		unk_0x0AF219B759EA8670(5, 1);
	}
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 != -1)
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 = -1;
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 14) && !func_147(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_383(0);
		}
	}
	else if (func_921(unk_0xFB6B3EEFAB2DD12C()) != -1)
	{
		func_875(-1);
	}
	func_920(func_18());
	if (func_317(16))
	{
		func_362(16);
	}
	func_916(0);
	func_870(-1);
	func_915();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_914(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_912(iVar1);
		iVar1++;
	}
	if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 0))
	{
		unk_0xFA5E84DCAE200259(1f);
		unk_0x028AA922F2B17B2A(5);
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 5))
	{
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 5);
	}
	iVar2 = func_657();
	if ((func_270(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_911(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_524(iVar2))
	{
		func_907(-1, 1);
	}
	else if ((func_656(iVar2) || func_906(iVar2)) || func_905(iVar2))
	{
	}
	else
	{
		func_907(-1, 1);
	}
	func_346(19);
	func_346(20);
	func_346(21);
	func_346(22);
	func_346(27);
	func_362(3);
	func_362(4);
	func_362(7);
	func_904();
	if (func_340(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_633(0);
	}
	func_346(29);
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 = func_18();
	if (Global_2494149.f_4710.f_21 != 0)
	{
		Global_2494149.f_4710.f_21 = 0;
	}
	if (bParam0)
	{
		func_363();
	}
	if (!func_147(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_381();
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 1);
	}
	if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 6))
	{
		unk_0x0AF219B759EA8670(3, 1);
		unk_0x0AF219B759EA8670(5, 1);
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 6);
	}
	if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 7))
	{
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 7);
	}
	if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 8))
	{
		func_903("IMPEXP_SELFDES", 0);
		func_901("IMPEXP_SELFDES");
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 8);
	}
	func_899(iVar2, 0);
}

void func_899(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_1759239.f_3, 9))
		{
			unk_0xE3E53903AE9B5BD5(func_900(iParam0));
			unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 9);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 9))
	{
		unk_0xB3C38A4B84C152BF(func_900(iParam0));
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 9);
	}
}

char* func_900(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_901(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x1C079483C9D16F36(&(Global_101652.f_13084[iVar0 /*104*/])))
		{
			if (unk_0xCC257DA11A122B5F(&(Global_101652.f_13084[iVar0 /*104*/]), sParam0))
			{
				if (Global_101652.f_13084[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_438();
					Global_101652.f_13084[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_902(iVar0))
					{
					}
					else
					{
						Global_101652.f_13084[iVar0 /*104*/].f_24 = 0;
						Global_101652.f_13084[iVar0 /*104*/].f_28 = 0;
						Global_101652.f_13084[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xF730E14BB369F77A(Global_101652.f_13084[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_902(int iParam0)
{
	if ((Global_101652.f_13084[iParam0 /*104*/].f_99[0] == 1 || Global_101652.f_13084[iParam0 /*104*/].f_99[1] == 1) || Global_101652.f_13084[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_903(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x1C079483C9D16F36(&(Global_101652.f_13084[iVar0 /*104*/])))
		{
			if (unk_0xCC257DA11A122B5F(&(Global_101652.f_13084[iVar0 /*104*/]), sParam0))
			{
				if (Global_101652.f_13084[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_101652.f_13084[iVar0 /*104*/].f_24 = 1;
				if (Global_101652.f_13084[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_101652.f_13084[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_101652.f_12994[0 /*20*/].f_17 = 0;
					}
					if (Global_101652.f_13084[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_101652.f_12994[1 /*20*/].f_17 = 0;
					}
					if (Global_101652.f_13084[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_101652.f_12994[2 /*20*/].f_17 = 0;
					}
					if (Global_101652.f_13084[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_101652.f_12994[3 /*20*/].f_17 = 0;
					}
					Global_101652.f_13084[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_101652.f_13084[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_904()
{
	if (func_357(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_346(25);
	}
}

int func_905(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_906(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_907(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_657();
	}
	if (iParam0 > 0)
	{
		if (func_506() != func_18())
		{
			if (func_910(unk_0xFB6B3EEFAB2DD12C()) == unk_0xFB6B3EEFAB2DD12C())
			{
				Global_2482207.f_93[func_909(iParam0)] = 1;
			}
		}
		iVar0 = func_909(159);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(157);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(148);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(164);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(142);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(152);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(166);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(170);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(173);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(179);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(200);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(201);
		if (func_908(iVar0, Global_262145.f_11105, bParam1))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(182);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(183);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(185);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(186);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(180);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(195);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(197);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(198);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(207);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(208);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(209);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(214);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(215);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(216);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(217);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(218);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(219);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(220);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(221);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_908(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_241(unk_0xFB6B3EEFAB2DD12C(), 19) && !func_241(unk_0xFB6B3EEFAB2DD12C(), 20)) && !func_241(unk_0xFB6B3EEFAB2DD12C(), 9))
		{
			return 0;
		}
	}
	if (Global_2482207.f_93[iParam0] == 1 && func_9(&(Global_2482207[iParam0 /*2*/])))
	{
		if (func_834(&(Global_2482207[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2482207.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_910(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_34;
}

void func_911(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_657();
	}
	if (iParam0 > 0)
	{
		if (func_506() != func_18())
		{
			Global_2482207.f_93[func_909(iParam0)] = 1;
		}
		iVar0 = func_909(155);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(163);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(160);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(153);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(162);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(154);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(171);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(172);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(199);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(194);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(193);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(210);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(205);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(189);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_909(211);
		if (func_908(iVar0, Global_262145.f_11106, 0))
		{
			func_209(&(Global_2482207[iVar0 /*2*/]));
			func_8(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_912(int iParam0)
{
	if (!func_398(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_228[iParam0 /*3*/], func_913(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_228[iParam0 /*3*/] = { func_913() };
	}
	if (!func_398(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_215[iParam0 /*3*/], func_913(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_215[iParam0 /*3*/] = { func_913() };
	}
}

Vector3 func_913()
{
	struct<3> Var0;
	
	return Var0;
}

void func_914(int iParam0)
{
	if (!func_398(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_143[iParam0 /*3*/], func_913(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_143[iParam0 /*3*/] = { func_913() };
	}
	if (!func_398(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_118[iParam0 /*3*/], func_913(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_118[iParam0 /*3*/] = { func_913() };
	}
}

void func_915()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573825 = { Var0 };
	Global_1573825.f_13 = func_18();
	if (unk_0xF44A5E894FE76438(Global_1573332, 3))
	{
		unk_0x4EA098C870B73AB7(&Global_1573332, 3);
	}
}

void func_916(bool bParam0)
{
	if (bParam0)
	{
		if (!func_919(unk_0xFB6B3EEFAB2DD12C(), 14))
		{
			func_918(14);
		}
	}
	else if (func_919(unk_0xFB6B3EEFAB2DD12C(), 14))
	{
		func_917(14);
	}
}

void func_917(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

void func_918(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

bool func_919(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_5, iParam1);
}

void func_920(int iParam0)
{
	if (func_20(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xFB6B3EEFAB2DD12C() != iParam0)
		{
			if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_323 != iParam0)
			{
				Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_323 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_921(int iParam0)
{
	if (func_922(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_31;
	}
	return -1;
}

int func_922(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_31 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_923(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_749(iParam0, iParam1) && func_937(iParam0, iParam1))
	{
		iVar0 = func_748(iParam0, iParam1);
		func_927(iVar0);
		func_924(iVar0, 1);
	}
}

void func_924(int iParam0, int iParam1)
{
	func_925(func_926(iParam0), iParam1, -1, 1);
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_6 = iParam1;
}

int func_925(int iParam0, var uParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		default:
	}
	return 7628;
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_936(unk_0xFB6B3EEFAB2DD12C(), iParam0);
	Global_2482195[iParam0] = 0;
	if (func_932(func_935(iParam0), -1, -1))
	{
		iVar0 = func_931(iVar1);
		iVar2 = func_798(unk_0xFB6B3EEFAB2DD12C(), iVar1);
		iVar3 = func_930(iVar1);
		iVar4 = func_931(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2482195[iParam0] = iVar0;
	}
	else
	{
		if (func_929(unk_0xFB6B3EEFAB2DD12C(), iVar1) > 0)
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_2 = (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_2 - (func_930(iVar1) / 2));
		}
		iVar0 = (func_931(iVar1) / func_929(unk_0xFB6B3EEFAB2DD12C(), iVar1) + 1);
	}
	func_928(unk_0xFB6B3EEFAB2DD12C(), iVar1, iVar0);
}

void func_928(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_750(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_929(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_750(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_930(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_751(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14945;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14950;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14944;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14949;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14943;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14948;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14941;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14946;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14942;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14947;
			}
			break;
	}
	return uVar0;
}

int func_931(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_751(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14926;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14935);
			}
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14940);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14927;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14934);
			}
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14939);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14928;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14933);
			}
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14938);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14929;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14931);
			}
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14936);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14930;
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14932);
			}
			if (func_747(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14937);
			}
			break;
	}
	return iVar0;
}

int func_932(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_934(iParam0, iParam1);
	uVar2 = func_933(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x37F2E15EA03CDFFC(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_933(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_934(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_935(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		default:
	}
	return 9416;
}

int func_936(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_750(Global_1589933[iParam0 /*601*/].f_257.f_152[iParam1 /*11*/]))
	{
		uVar0 = Global_1589933[iParam0 /*601*/].f_257.f_152[iParam1 /*11*/];
	}
	return uVar0;
}

int func_937(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_749(iParam0, iParam1))
	{
		iVar0 = func_748(iParam0, iParam1);
		if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_4 > 0 && Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_938()
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 28);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 29);
	func_939(24);
}

void func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_940()
{
	if (unk_0xF44A5E894FE76438(iLocal_357, 24))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 1))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 3))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 4))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 5))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 8))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 9))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 10))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 15))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_941(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0x0FBCE11007AF301F();
	Var1.f_0 = Global_1759248;
	Var1.f_1 = Global_1759248.f_1;
	Var1.f_2 = Global_1759248.f_2;
	Var1.f_3 = Global_1759248.f_3;
	Var1.f_4 = Global_1759248.f_4;
	Var1.f_5 = Global_1759248.f_5;
	Var1.f_6 = Global_1759248.f_6;
	Var1.f_7 = Global_1759248.f_7;
	Var1.f_8 = Global_1759248.f_8;
	Var1.f_9 = Global_1759248.f_9;
	Var1.f_10 = Global_1759248.f_10;
	Var1.f_11 = Global_1759248.f_11;
	Var1.f_12 = Global_1759248.f_12;
	Var1.f_13 = Global_1759248.f_14;
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xCC257DA11A122B5F(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1759248.f_15;
			Var15.f_15 = Global_1759248.f_16;
			Var15.f_16 = Global_1759248.f_17;
			unk_0xB6EF3A6C5431C538(&Var15);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1759248.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0x85D06391CA3C496E(&Var32);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1759248.f_15;
			Var49.f_15 = uParam0;
			unk_0xB6A86D56E1A62D35(&Var49);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1759248.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0xB4F9FD1033E3E540(&Var65);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1759248.f_15;
			Var82.f_15 = uParam0;
			unk_0x18F08D4F0A9A813F(&Var82);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1759248.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x97AF68C094EABE13(&Var98);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1759248.f_15;
			unk_0x4FEE7960E29BA52C(&Var116);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1759248.f_15;
			unk_0xBFA2E4D3DCE3E1A0(&Var134);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1759248.f_15;
			unk_0x376425006B2FE4F4(&Var153);
		}
	}
	func_942();
}

void func_942()
{
	struct<18> Var0;
	
	Global_1759248 = { Var0 };
}

void func_943()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x04DE35D10A718EEF())
	{
		if (unk_0xF44A5E894FE76438(Local_99.f_1, 17))
		{
			Var0 = { 200f, 200f, 200f };
			Var3 = { func_24() };
			unk_0xE6C975AE756267A4(Var3 - Var0, Var3 + Var0, 1, 1);
			unk_0x4EA098C870B73AB7(&(Local_99.f_1), 17);
		}
	}
}

void func_944(struct<20> Param0)
{
	func_957(func_958(Param0.f_0), Param0);
	unk_0x57BE47356663D94E(1);
	unk_0xAC4AA684E16779D5(15);
	unk_0xF5116E26EBA83CA9(5);
	func_956(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_99, 65);
	unk_0x47DDB3A546F48091(&Local_164, 193);
	if (!func_955())
	{
		func_892();
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0x7E85CEE862B85A74(0);
		if (unk_0x04DE35D10A718EEF())
		{
		}
		func_954();
		func_945(0, 0);
		if (func_317(8))
		{
			func_362(8);
		}
		Local_164[unk_0x1E7FB1CA38C403F6() /*6*/] = 0;
	}
	else
	{
		func_892();
	}
}

void func_945(int iParam0, int iParam1)
{
	func_953();
	func_949(1);
	if ((iParam0 != 0 && unk_0x1E0256D6F1052B31(iParam1)) && func_948(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xB8A73E7DA87B2968(&Global_1759234, 0);
				break;
			}
	}
	if (!func_789() && !func_19(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (func_349())
		{
			func_382(3);
		}
		func_382(4);
	}
	if (func_857(0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 = func_506();
	}
	if (func_652(iParam0))
	{
		func_796();
		Global_1759266.f_18 = func_947(func_297());
	}
	else if (func_655(func_921(unk_0xFB6B3EEFAB2DD12C())))
	{
		func_794();
		Global_1759319.f_18 = func_947(func_297());
	}
	func_946();
}

void func_946()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1342709.f_527[iVar0 /*49*/].f_1 = func_18();
		Global_1342709.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_947(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_290;
	}
	return -1;
}

int func_948(int iParam0, bool bParam1)
{
	return func_16(unk_0xFB6B3EEFAB2DD12C(), iParam0, bParam1);
}

void func_949(bool bParam0)
{
	int iVar0;
	
	func_939(33);
	func_939(34);
	func_939(35);
	func_939(36);
	func_939(37);
	func_939(38);
	func_939(39);
	func_939(40);
	func_939(43);
	func_939(41);
	func_939(54);
	func_939(42);
	func_939(47);
	func_952(23);
	func_952(24);
	func_939(92);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 2);
	func_951();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494149.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_950(3))
	{
		func_952(3);
	}
	else if (func_950(4))
	{
		func_952(4);
	}
	else if (func_950(5))
	{
		func_952(5);
	}
	else if (func_950(6))
	{
		func_952(6);
	}
	else if (func_950(7))
	{
		func_952(7);
	}
	else if (((((((((((((((((func_950(0) || func_950(1)) || func_950(2)) || func_950(8)) || func_950(9)) || func_950(10)) || func_950(11)) || func_950(12)) || func_950(13)) || func_950(14)) || func_950(15)) || func_950(16)) || func_950(17)) || func_950(18)) || func_950(19)) || func_950(20)) || func_950(21)) || func_950(22))
	{
		func_952(8);
		func_952(0);
		func_952(1);
		func_952(2);
		func_952(9);
		func_952(10);
		func_952(11);
		func_952(12);
		func_952(13);
		func_952(14);
		func_952(15);
		func_952(16);
		func_952(17);
		func_952(18);
		func_952(19);
		func_952(20);
		func_952(21);
		func_952(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494149.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_12[iVar0], iVar1);
}

void func_951()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2494149.f_4710.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_12[iVar0]), iVar1);
}

void func_953()
{
	struct<14> Var0;
	
	Global_1759248 = { Var0 };
	Global_1759248.f_14 = 0;
	Global_1759248.f_15 = 0;
}

void func_954()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x42AFB71D42AF78EA(5, Global_1574648[iVar0], -347613984);
		unk_0x42AFB71D42AF78EA(5, -347613984, Global_1574648[iVar0]);
		iVar0++;
	}
}

int func_955()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_887())
		{
			return 0;
		}
		if (func_885(155))
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

int func_956(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_893();
			}
			else
			{
				return 0;
			}
		}
		if (!func_844())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_893();
					}
					else
					{
						return 0;
					}
				}
				if (func_887())
				{
					if (!bParam2)
					{
						func_893();
					}
					else
					{
						return 0;
					}
				}
				if (func_885(155))
				{
					if (!bParam2)
					{
						func_893();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_893();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_893();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_893();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_957(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_893();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_958(int iParam0)
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

int func_959(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

