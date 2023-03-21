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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<65> Local_121 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_186[32];
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	struct<3> Local_382 = { 0, 0, 0 } ;
	struct<8> Local_385[15];
	struct<3> Local_506 = { 0, 0, 0 } ;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	struct<3> Local_521 = { 0, 0, 0 } ;
	struct<3> Local_524 = { 0, 0, 0 } ;
	var uLocal_527 = 0;
	int iLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	Local_382 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_514 = -1;
	iLocal_515 = -1;
	iLocal_517 = -1;
	iLocal_518 = -1;
	if (unk_0x591AF4C50B46E014() && func_1050(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_1028(ScriptParam_0);
	}
	else
	{
		func_974();
	}
	while (true)
	{
		func_973();
		if (func_966())
		{
			func_974();
		}
		else if (func_963(1))
		{
			func_974();
		}
		Global_1773254.f_2 = Local_121.f_63;
		Global_1773254.f_3 = Local_121.f_64;
		switch (func_962(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_961() == 1)
				{
					if (func_960())
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
						{
						}
						func_959();
						if (func_958())
						{
							func_943(159, 1, -1, 1);
							unk_0x768882AFD4B41EEA(1);
						}
						else
						{
							func_943(159, 0, -1, 1);
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
							{
								unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
							}
						}
						if (func_942() == 1)
						{
							unk_0xE9BDE28F2FC853AF("CS3_07_MPGates");
							unk_0xF6082E2ADA1C795B(&uLocal_379, 4);
							unk_0x02E663D7DDAE8202(joaat("rhino"), 1);
						}
						else if (func_942() == 2)
						{
							func_941();
						}
						else if (func_942() == 3)
						{
							func_940();
						}
						if (func_939(1))
						{
							unk_0xF6082E2ADA1C795B(&uLocal_380, 5);
						}
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
						{
							unk_0xCEF34666451D1CD0(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1200);
						}
						func_938();
						func_931();
						Local_186[unk_0x88641E5BC172153A() /*6*/] = 1;
					}
				}
				else if (func_961() == 4)
				{
					Local_186[unk_0x88641E5BC172153A() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_961() == 1)
				{
					func_930();
					func_922();
					func_366();
					func_361();
					if (func_958() || func_360())
					{
						func_206(&(Global_1341327.f_529), &Global_1341327, 26, &(Global_1341327.f_1), &(Global_1341327.f_112), -1, 0);
					}
				}
				else if (func_961() == 4)
				{
					Local_186[unk_0x88641E5BC172153A() /*6*/] = 3;
				}
				func_205();
				break;
			
			case 3:
				func_204(&(Local_121.f_52));
				if (func_203(&(Local_121.f_52)))
				{
					Local_186[unk_0x88641E5BC172153A() /*6*/] = 4;
				}
				func_205();
				break;
			
			case 2:
				func_205();
				Local_186[unk_0x88641E5BC172153A() /*6*/] = 4;
			
			case 4:
				func_974();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_961())
			{
				case 0:
					if (func_942() != -1)
					{
						if ((func_193() && func_44()) && func_26())
						{
							func_25();
							func_23();
							if (func_942() == 3)
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 6);
							}
							Local_121.f_0 = 1;
							Local_121.f_8 = unk_0x88641E5BC172153A();
							Local_121.f_9 = unk_0x0FFED3E94261A832();
							func_943(159, 1, -1, 1);
							unk_0xABE13CB17EB2BE02(&(Local_121.f_63), &(Local_121.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_121.f_0 = 4;
					}
					else if (func_1())
					{
						Local_121.f_0 = 4;
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
	if (Global_2497344.f_4828.f_22)
	{
		Global_2497344.f_4828.f_22 = 0;
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
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_121.f_51 > 0)
	{
		if (Local_121.f_0 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_121.f_51)
	{
		case 0:
			Local_121.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
			{
				Local_121.f_51 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 20))
			{
				if (Local_121.f_5 != -1)
				{
					Local_121.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[0]))
				{
					if (func_10(Local_121.f_13[0]))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 6);
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
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 20))
		{
			if (!func_9(&(Local_121.f_60)))
			{
				func_8(&(Local_121.f_60), 0, 0);
			}
			else if (func_6(&(Local_121.f_60), func_7(), 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 20);
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
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
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
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
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
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_121.f_54)))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
		{
			func_8(&(Local_121.f_54), 0, 0);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
			{
				if (func_6(&(Local_121.f_54), func_12(), 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_11101;
}

void func_13()
{
	int iVar0;
	
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_121.f_35[iVar0])
		{
			case 0:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iVar0]))
				{
					if (func_942() != 2)
					{
						Local_121.f_35[iVar0] = 3;
					}
					else
					{
						Local_121.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
				{
					Local_121.f_35[iVar0] = 3;
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
				{
					Local_121.f_35[iVar0] = 3;
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13))
				{
					Local_121.f_35[iVar0] = 3;
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14))
				{
					Local_121.f_35[iVar0] = 3;
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
	if (Local_121.f_0 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = unk_0x7C214DA899F05536(iVar3);
			if (unk_0x885F483F34E47503(iVar4))
			{
				if (unk_0x76BCE6C7B20502DA(iVar4))
				{
					iLocal_381 = unk_0x675E1E93DBDAF30B(iVar4);
					if (func_1050(iVar4, 1, 1))
					{
						func_15(iLocal_381, 0);
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 2);
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 7))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 7))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 7);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 12))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 11);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 13))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 12);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 14))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 13);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14))
					{
						if (Local_186[iLocal_381 /*6*/].f_2 != 0)
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_381;
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 3))
							{
								Local_121.f_6 = iVar4;
								unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_381;
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 9))
						{
							Local_121.f_6 = iVar4;
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 8);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 11))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 5))
							{
								Local_121.f_6 = iVar4;
							}
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 10);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 15))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 15))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 15);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 16))
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 18);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 15)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_186[iLocal_381 /*6*/].f_1, 1))
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
				else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
				{
					if (Local_121.f_9 > -1)
					{
						if (iVar3 == Local_121.f_9)
						{
							unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 5);
						}
					}
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (Local_121.f_9 > -1)
				{
					if (iVar3 == Local_121.f_9)
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
			{
				if (Local_121.f_5 != iVar0)
				{
					Local_121.f_5 = iVar0;
					if (Local_121.f_5 == -1)
					{
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 16);
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
		{
			if (Local_121.f_7 != iVar1)
			{
				Local_121.f_7 = iVar1;
				if (Local_121.f_7 == -1)
				{
				}
				else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 16);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 0))
		{
			if (!bVar2)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_942() == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_2, iParam0))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[iParam1]))
			{
				if (func_21(Local_121.f_29[iParam1]))
				{
					iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_121.f_9 > -1)
					{
						iVar1 = unk_0x7C214DA899F05536(Local_121.f_9);
						if (unk_0x885F483F34E47503(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								unk_0xF6082E2ADA1C795B(&(Local_121.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						unk_0xB463DE5FD1717E9D(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam1]), iVar0, 1);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_2), iParam0);
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
		if (Global_1622795[iParam0 /*431*/].f_11 != func_18())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
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
			if (Global_1622795[iParam0 /*431*/].f_11 != func_18())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
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
	return Global_1622795[iParam0 /*431*/].f_11 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_18())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_22(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_22(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
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
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 17))
	{
		Var0 = { 200f, 200f, 200f };
		Var3 = { func_24() };
		unk_0x20A9229D8F4F054A(Var3 - Var0, Var3 + Var0, 0, 1);
		unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 17);
	}
}

Vector3 func_24()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_942();
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
	
	if (Local_121.f_4 != -1)
	{
		return Local_121.f_4;
	}
	iVar0 = 0;
	iVar1 = func_942();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x895FB9FE885E36ED(0, 3);
			break;
	}
	Local_121.f_4 = iVar0;
	return Local_121.f_4;
}

int func_26()
{
	switch (Local_121.f_3)
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
	switch (func_942())
	{
		case 1:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]) && unk_0xD0BCF9877CD72A3F(Local_121.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]) && unk_0xD0BCF9877CD72A3F(Local_121.f_29[1]))
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
	
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_29[iParam0]))
	{
		unk_0x0F39DF6675B2333E(iParam1);
		if (unk_0xA1FC9D7AEA164881(iParam1))
		{
			if (unk_0x7DC1E7E4F4F004B4(0, 1, 0, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_10, iParam0))
				{
					unk_0x333EF04F1A5ADEB5(Param2, 5f, 1, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_10), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_121.f_29[iParam0]), iParam1, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x2B783BB37AA23A41(unk_0x7BAE3A9057619E1F(Local_121.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 2);
						}
						else
						{
							unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1);
						}
						unk_0x4ACEF9AFD39C05AD(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1);
						unk_0xD5D212A571028C13(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 0);
						unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 0, 0);
						unk_0x675A76D2D74FEAFE(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1);
						unk_0xA32D9C84C1A93920(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 0);
						unk_0xFEF767EEC8AAF41E(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1);
						unk_0x435850511E04A8D1(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]));
						unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1, 1, 0);
						unk_0xE77EEA92586CF2E8(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 1);
						unk_0x4FF56972862B602F(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), 0);
						if (func_942() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = unk_0xBBDA792448DB5A89(unk_0xE86A53C202B21FAB(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0x4EA5B5526A4651E9(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0x6385100E76566DD6(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), fVar0);
								unk_0xBE519AD97D32A1D0(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), fVar0);
								unk_0x525CB8A0699017B3(unk_0xECBE9D2902B2B964(Local_121.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_11107;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_31(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_38(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
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
	Global_2404996.f_2++;
	return 1;
}

int func_32(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1050(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_37(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
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
		if (func_1050(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_33(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
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
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
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
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312735;
}

Vector3 func_37(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_38(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_1050(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam9) && bParam6) && func_39(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_37(iVar1), Param0, 1) < fParam3)
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
	if (func_43(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_42(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_40(unk_0x0FFED3E94261A832(), iParam0))
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
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_18();
}

struct<13> func_42(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_43(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_42(iParam0) };
		Global_2484585 = { func_42(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
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
	switch (Local_121.f_3)
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
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		unk_0x0F39DF6675B2333E(iVar0);
		if (unk_0xA1FC9D7AEA164881(iVar0))
		{
			if (unk_0x9C9ED67ADF7A1292(1))
			{
				Var27 = { func_192() };
				if (!func_9(&(Local_121.f_58)))
				{
					func_8(&(Local_121.f_58), 0, 0);
				}
				if (func_46(Var27, 5f, &Local_506, &uLocal_509, Var1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 19))
				{
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 19))
					{
						Local_506 = { Var27 };
					}
					Local_121.f_12 = unk_0x71C810DFFC1DCEA6(unk_0x93DC134B82BCEB63(joaat("pickup_portable_crate_fixed_incar"), Local_506, 1, iVar0));
					unk_0x9C9DFC1EC7F62115(Local_121.f_12, 1);
					unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_121.f_12), Local_506 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0xFD213087BC4CC3B3(iVar0);
					unk_0xF65C7766FB8D4B2C(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1);
					unk_0xE77EEA92586CF2E8(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1);
					if (bParam0)
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iParam1]))
						{
							if (!func_10(Local_121.f_13[iParam1]))
							{
								unk_0xDB2D4460535B81CF(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_121.f_12), Var27 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 19))
				{
					if (func_6(&(Local_121.f_58), 15000, 0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 19);
					}
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<17> Var0;
	struct<18> Var28;
	struct<3> Var55;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28 = { Param0 };
	Var28.f_3 = Param6.f_11;
	Var28.f_4 = fParam3;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 0;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	if (func_47(&Var28, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var55 = { Param0 - Var0[0 /*3*/] };
			if (Var55.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
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
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404996.f_2257 == *uParam0 || !Global_2404996.f_2257.f_1 == uParam0->f_1) || !Global_2404996.f_2257.f_2 == uParam0->f_2) || !Global_2404996.f_2260 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404996.f_2271 == uParam0->f_8 || !Global_2404996.f_2271.f_1 == uParam0->f_8.f_1) || !Global_2404996.f_2271.f_2 == uParam0->f_8.f_2) || !Global_2404996.f_2274 == uParam0->f_11) || !Global_2404996.f_2274.f_1 == uParam0->f_11.f_1) || !Global_2404996.f_2274.f_2 == uParam0->f_11.f_2) || !Global_2404996.f_2277 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404996.f_2255 == 1)
		{
			if (unk_0xE00BB08A385D5A25(Global_2404996.f_2264))
			{
				if (Global_2404996.f_2264 == unk_0xFF09208EC90C94CB())
				{
					if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_191(0))
					{
						return 0;
					}
				}
				else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) < func_191(0))
				{
					return 0;
				}
			}
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_190();
		}
		Global_2404996.f_2255 = 0;
	}
	else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2261) > func_191(0))
	{
		Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
		func_184();
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
	unk_0x22B61B02AFE2AF2E(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404996.f_2255)
	{
		unk_0x0D8D84869BCDB788();
		unk_0x9F2805D9F870E084();
		func_190();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_31(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xA4C66BC652DBFE4B())
		{
			Global_2404996.f_2278 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404996.f_2257 = { *uParam0 };
					Global_2404996.f_2260 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = 0f;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404996.f_2271 = { uParam0->f_8 };
					Global_2404996.f_2274 = { uParam0->f_11 };
					Global_2404996.f_2277 = uParam0->f_14;
					Global_2404996.f_2257 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_183(Var8.f_0, Var8.f_1);
			}
			Global_2404996.f_2256 = 1;
			Global_2404996.f_2255 = 1;
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2264 = unk_0xFF09208EC90C94CB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404996.f_2255)
	{
		if (Global_2404996.f_2256 == 1)
		{
			if (unk_0x6DF473E6458E85B6(fVar4, fVar5, fVar6, fVar7) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 5000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
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
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					func_162(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_161(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2404996.f_2256 = 9;
				}
				else
				{
					Global_2404996.f_2256 = 2;
				}
			}
		}
		if (Global_2404996.f_2256 == 2)
		{
			if ((unk_0x306044C3800C13FD(Var11, Var14) || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 15000) || unk_0xFFAE31A7B21E0490(Var11, Var14) == 0)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (uParam0->f_5 && !func_34(unk_0x0FFED3E94261A832(), 0))
				{
					Global_2404996.f_2256 = 3;
				}
				else
				{
					Global_2404996.f_2256 = 4;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2266) > 7000)
			{
				func_160(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404996.f_2256 == 3)
		{
			if (func_159() || unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 10000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 4;
			}
		}
		if (Global_2404996.f_2256 == 4)
		{
			if (unk_0xA4C66BC652DBFE4B())
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
			}
			else
			{
				iVar0 = 0;
				func_184();
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
					if (!unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
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
							if (unk_0x02E7E9BA57B7D8C2(unk_0x0FFED3E94261A832(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 1:
							func_158(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
							}
							break;
						
						case 2:
							if (unk_0x0E308CB76057368C(unk_0x0FFED3E94261A832(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
								Global_2404996.f_2256 = 5;
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
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_158(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404996.f_2256 == 5)
		{
			if (func_96(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404996.f_2282.f_5)
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					Global_2404996.f_2256 = 6;
				}
				else
				{
					Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404996.f_2256 = 9;
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				unk_0x0D8D84869BCDB788();
				unk_0x9F2805D9F870E084();
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 6)
		{
			iVar0 = 0;
			Global_2404996.f_2282.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_95(uParam0->f_4))
				{
					if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_94(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var8)))
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
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8C2EE08261507D14(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_158(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8EC9B42622922299(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8EC9B42622922299(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404996.f_2256 == 7)
		{
			if (func_96(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404996.f_2411[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_161(Global_2404996.f_2411[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_92(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x19007189599EBBF5(Global_2404996.f_2411[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404996.f_2411[iVar17 /*3*/] };
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
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404996.f_2256 = 9;
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_2262) > 20000)
			{
				Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
				Global_2404996.f_2256 = 8;
			}
		}
		if (Global_2404996.f_2256 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_49(Global_2404996.f_478))
				{
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_48(uParam2, &(Global_2404996.f_2282.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404996.f_2257 };
				func_50(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2404996.f_2262 = unk_0x11ABC381A58DD5AB();
			Global_2404996.f_2256 = 9;
		}
		if (Global_2404996.f_2256 == 9)
		{
			Global_2404996.f_2255 = 0;
			unk_0x0D8D84869BCDB788();
			unk_0x9F2805D9F870E084();
			func_190();
			return 1;
		}
		Global_2404996.f_2261 = unk_0x11ABC381A58DD5AB();
	}
	return 0;
}

void func_48(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
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
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	struct<3> Var67;
	struct<3> Var70;
	struct<3> Var73;
	float fVar76;
	
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
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_95(uParam5->f_4) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_94(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_94(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_52(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_162(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_51(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_52(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_51(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
					{
						Var0.f_2 = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (unk_0xE423CA97BB7EA540(Var0, &uVar63, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404996.f_633 = 1;
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
			return func_92(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_52(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_91(Param0, uParam3))
	{
		if (func_53(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xDB2C6DD0E49577D6(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_73(Global_2404996.f_499, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_58(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409633[iVar4 /*92*/][iVar0 /*7*/], Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_58(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409633[8 /*92*/][iVar0 /*7*/], Global_2409633[8 /*92*/][iVar0 /*7*/].f_3, Global_2409633[8 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_59(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410472[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410472[1])
	{
		if (Param0.f_0 < Global_2410476[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410472[2])
	{
		if (Param0.f_0 < Global_2410476[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410476[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410476[3])
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
	
	if (func_70(unk_0x0FFED3E94261A832(), 1))
	{
		if (Global_1638223.f_47358 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_47358)
			{
				if (Global_1638223.f_47359[iVar0 /*61*/].f_7 != 0)
				{
					if (func_61(Param0, Global_1638223.f_47359[iVar0 /*61*/], Global_1638223.f_47359[iVar0 /*61*/].f_6, Global_1638223.f_47359[iVar0 /*61*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_44971 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_44971)
			{
				if (Global_1638223.f_44974[iVar0 /*98*/].f_16 != 0)
				{
					if (func_61(Param0, Global_1638223.f_44974[iVar0 /*98*/], Global_1638223.f_44974[iVar0 /*98*/].f_3, Global_1638223.f_44974[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_59830 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_59830)
			{
				if (Global_1638223.f_59834[iVar0 /*160*/].f_12 != 0)
				{
					if (func_61(Param0, Global_1638223.f_59834[iVar0 /*160*/], Global_1638223.f_59834[iVar0 /*160*/].f_3, Global_1638223.f_59834[iVar0 /*160*/].f_12, 0.5f))
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
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_69(iParam7, 1008981770))
	{
		func_62(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x19007189599EBBF5(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_68(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_63(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x3FEF699D13BCC798((Var6.f_0 - Var3.f_0));
}

void func_63(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x88516260CF32A1A0(iParam0))
	{
		unk_0xDE3E0D9E2E663E9A(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_66(iParam0);
		if (iVar0 != 0)
		{
			func_64(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
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

void func_64(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_65(iParam0, &Global_1315786);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x88516260CF32A1A0(Global_1315786[iVar0]))
		{
			unk_0xDE3E0D9E2E663E9A(Global_1315786[iVar0], &(Global_1315790[iVar0 /*3*/]), &(Global_1315797[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315790[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315797[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315790[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315797[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315804[iVar0] = (Global_1315797[iVar0 /*3*/] - Global_1315790[iVar0 /*3*/]);
		Global_1315807[iVar0] = (Global_1315797[iVar0 /*3*/].f_1 - Global_1315790[iVar0 /*3*/].f_1);
		Global_1315810[iVar0] = (Global_1315797[iVar0 /*3*/].f_2 - Global_1315790[iVar0 /*3*/].f_2);
		if (Global_1315804[iVar0] > Global_1315813)
		{
			Global_1315813 = Global_1315804[iVar0];
		}
		if (Global_1315810[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315810[iVar0];
		}
		iVar0++;
	}
	Global_1315815 = (Global_1315813 * -0.5f);
	Global_1315818 = (Global_1315813 * 0.5f);
	Global_1315815.f_1 = ((((0.5f * Global_1315807[0]) + Global_1315807[1]) + Global_1315786.f_3) * -1f);
	Global_1315818.f_1 = (0.5f * Global_1315807[0]);
	Global_1315815.f_2 = (Global_1315810[0] * -0.5f);
	Global_1315818.f_2 = (Global_1315810[0] * 0.5f);
	*uParam1 = { Global_1315815 };
	*uParam2 = { Global_1315818 };
}

void func_65(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_67(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_68(var uParam0, struct<3> Param1)
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

float func_69(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_63(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_71(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_71(int iParam0)
{
	return func_72(iParam0);
}

bool func_72(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_73(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_85(Param0))
	{
		if (func_84(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_76(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_75(*uParam3, 1056964608))
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
				func_74(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_74(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_68(&Var0, 0f, 0f, unk_0x399F81B56505EE6F(0f, 360f));
		}
		else
		{
			func_68(&Var0, 0f, 0f, fParam7);
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

int func_75(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_2515[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_76(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_81(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_78(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_81(Var2, &uVar1) || func_77(Var2))
			{
				Var2 = { *uParam0 };
				func_78(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_77(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404996.f_568 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_565);
		if (fVar0 < Global_2404996.f_568)
		{
			return 1;
		}
	}
	return 0;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_80(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_80(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_80(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_74(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_79(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_55(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_80(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_74(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_79(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_55(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x6B839244A185DBDF(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_161(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_92(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x19007189599EBBF5(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_81(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_83();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9 == 1)
		{
			if (func_82(Param0, &(Global_2404996.f_357[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_161(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404996.f_2513) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_92(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_83()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409496[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409496[iVar0 /*17*/].f_16))
			{
				if (func_82(*uParam0, &(Global_2409496[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409496[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409496[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_78(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_84(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_78(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_85(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404996.f_502)
	{
		if (!Global_2404996.f_43.f_312)
		{
			if (!func_89(unk_0x0FFED3E94261A832(), 1))
			{
				return 1;
			}
			if (!func_88(Param0, 1008981770))
			{
				if (!func_84(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_84(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_87(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_86(&(Global_2404996.f_43[iVar0 /*12*/])) };
					if (!func_84(&Var1, 0, 0, 0))
					{
						if (!func_84(&Param0, 0, 0, 0))
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

Vector3 func_86(var uParam0)
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

int func_87(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_82(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_88(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_82(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_89(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_90(iParam0) != 0;
	}
	return func_70(iParam0, bParam1);
}

int func_90(int iParam0)
{
	if (func_1050(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

int func_91(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404996.f_2054[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404996.f_2054[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_92(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_93(&Param3, &Param6);
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

void func_93(var uParam0, var uParam1)
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

int func_94(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_95(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404996.f_2282.f_1 == 0 && Global_2404996.f_2282 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x051B106169512DAC(&(Global_2404996.f_2282.f_1)))
			{
				case 0:
					func_156(uParam1, uParam2);
					if (!Global_2404996.f_2282.f_2)
					{
						if (uParam2->f_7 && Global_2404996.f_531.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
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
								*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
							}
							if (uParam1->f_5 && func_49(Global_2404996.f_478))
							{
								if (!Global_2404996.f_2282.f_5)
								{
									Global_2404996.f_2282.f_5 = 1;
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
							uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_156(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xA4C66BC652DBFE4B())
		{
			if (!unk_0x66DE426B0AE4B2C3())
			{
				if (unk_0x1DE11E68D5FB249D())
				{
					func_156(uParam1, uParam2);
					Global_2404996.f_2282.f_1 = unk_0x015AAFB0726848F9();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x9F2805D9F870E084();
				func_156(uParam1, uParam2);
				if (!Global_2404996.f_2282.f_2)
				{
					Global_2404996.f_2282.f_5 = 1;
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
		func_153(Global_2404996.f_531, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85));
	}
	if (uParam2->f_7 && !Global_2404996.f_2282.f_4)
	{
		Global_2404996.f_2282.f_4 = 1;
		func_104(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404996.f_2282.f_1 > 0 || Global_2404996.f_2282 > 0)
	{
		if (uParam1->f_5 || unk_0xA4C66BC652DBFE4B())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404996.f_2282.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404996.f_2282.f_3)
					{
						iVar4 = Global_2404996.f_2282.f_3 + 1;
					}
					if (iVar4 > (Global_2404996.f_2282.f_1 - 1))
					{
						iVar4 = (Global_2404996.f_2282.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x9824E06B1062EFBA(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x34973F57AA6A72C9(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDB8F566E828BD5EF(iVar4);
					}
					else
					{
						unk_0xEE759B6ABA0BD5CC(iVar4, &iVar5);
					}
					func_104(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404996.f_2282.f_3 = iVar4;
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
			iVar4 = Global_2404996.f_2282.f_1;
		}
		if (Global_2404996.f_2282.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404996.f_2666)
			{
				func_98(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_49(Global_2404996.f_478))
			{
				if (Global_2404996.f_2282.f_2)
				{
					func_48(uParam0, &(Global_2404996.f_2282.f_6));
					func_97(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_97(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404996.f_2282.f_2)
			{
				func_48(uParam0, &(Global_2404996.f_2282.f_6));
				func_97(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x895FB9FE885E36ED(0, Global_2404996.f_2282.f_1);
				unk_0x9824E06B1062EFBA(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_54(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_97(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
					func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
					func_97(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
				func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
				func_97(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404996.f_2257 };
		if (uParam1->f_5 && func_49(Global_2404996.f_478))
		{
			if (!Global_2404996.f_2282.f_5)
			{
				Global_2404996.f_2282.f_5 = 1;
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
		uParam0->f_16[0] = unk_0x399F81B56505EE6F(0f, 360f);
		func_97(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_97(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404996.f_2411[(3 - iVar0) /*3*/] = { Global_2404996.f_2411[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404996.f_2411[0 /*3*/] = { Param0 };
}

void func_98(var uParam0, var uParam1, var uParam2)
{
	if (func_49(Global_2404996.f_478) && func_103() < 4096)
	{
		func_102(uParam0, 0f);
		func_102(uParam1, uParam0->f_2);
		func_102(uParam2, uParam1->f_2);
	}
	else
	{
		func_101(uParam0);
		func_100(uParam2, uParam0->f_4);
		func_99(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_99(var uParam0, struct<3> Param1, struct<3> Param4)
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
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_100(var uParam0, struct<3> Param1)
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
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407666[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407666[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_101(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_1;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_102(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_2 < fVar1 && Global_2407666[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407666[iVar0 /*9*/].f_2;
				Var2 = { Global_2407666[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407666[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_104(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2404996.f_478 == 1)
		{
			if (unk_0x3FEF699D13BCC798((Global_2404996.f_499.f_2 - Param0.f_2)) < 25f)
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
		if (func_150(unk_0x0FFED3E94261A832()))
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
		if (!func_149(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x67A55162BFFEB01D(unk_0x2A5EB8B0FE590B91(), Param0, 20f))
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
		if (func_143(Param0, fParam3, uParam4->f_15, func_148(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404996.f_3;
		}
	}
	else if (!func_140(Param0, 25f, unk_0x0FFED3E94261A832(), 1, 1))
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
		if (!Global_2404996.f_663)
		{
			Var11 = { Global_2404996.f_499 };
			if (Global_2404996.f_478 == 26)
			{
				Var11 = { Global_2404996.f_531.f_18 };
			}
			if (!func_75(Param0, 0.5f))
			{
				if (func_85(Var11))
				{
					if (!func_84(&Param0, 0, 0, 0) && !func_139(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_139(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_138(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_137(unk_0x0FFED3E94261A832()) && func_135(unk_0x0FFED3E94261A832())))
		{
			if (!func_134(&Param0, &(Global_2404996.f_2282.f_85), 0, 1065353216))
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
		if (!func_135(unk_0x0FFED3E94261A832()))
		{
			if (!func_133(Param0, &(Global_2404996.f_2282.f_52), &(Global_2404996.f_2282.f_85), 1073741824))
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
	if (func_132(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_49(Global_2404996.f_478))
			{
				if (func_88(Param0, 0.01f))
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
		if (func_131(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404996.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xA419466089F321B4(unk_0x65B447E36C1ED4C2(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404996.f_663)
		{
			if (!func_76(&Param0, 0, 0))
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
		iVar15 = func_87(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_130(Param0, &Var16, &Var19, &fVar22);
			if (!func_125(&(Global_2404996.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
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
	else if (func_124(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404996.f_2666 && uParam4->f_5)
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
				fVar0 = func_116(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_116(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_49(Global_2404996.f_478) && iVar7 < 4096)
			{
				Var24.f_2 = func_114(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_113(Var24);
			Global_2404996.f_2282.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2404996.f_2282.f_6[iVar23 /*9*/])
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
							fVar0 = func_116(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_116(Param0, Global_2404996.f_2257, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_49(Global_2404996.f_478) && iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_114(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404996.f_2282.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_112(Var24, iVar23);
							Global_2404996.f_2282.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar0 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_112(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
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
						fVar5 = func_111(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_106(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_105(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_105(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404996.f_2282.f_6[iVar23 /*9*/] || (iVar7 == Global_2404996.f_2282.f_6[iVar23 /*9*/] && fVar3 > Global_2404996.f_2282.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_112(Var24, iVar23);
						Global_2404996.f_2282.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_105(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_106(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_1050(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x0FFED3E94261A832() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_107(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x220AE8028FACE96A(iVar11) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
					{
						if (!unk_0x220AE8028FACE96A(iVar11) == -1 || !func_89(unk_0x0FFED3E94261A832(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar11) || !bParam6)
					{
						if (func_33(iVar11))
						{
							Var5 = { func_37(iVar11) };
							if (!iVar11 == unk_0x0FFED3E94261A832())
							{
								Var8 = { unk_0x5895D6D5B19334A9(unk_0x1E199569E0295838(iVar11)) };
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
							fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var5, 1);
							fVar2 = unk_0x4A2E6F541CD8C36E(Param0, Var8, 1);
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

int func_107(int iParam0)
{
	if (func_1050(iParam0, 0, 1))
	{
		if (!func_109(iParam0))
		{
			if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam0))
			{
				if (!unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
				{
					if (func_70(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_108(unk_0x220AE8028FACE96A(iParam0), unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
				{
					if (!func_70(unk_0x0FFED3E94261A832(), 1))
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

int func_108(int iParam0, int iParam1, int iParam2)
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
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_110())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

float func_111(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_1050(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0));
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
		if (func_1050(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if (func_33(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam7 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar1), 0));
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

void func_112(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404996.f_2282.f_6[iParam9 /*9*/] };
	Global_2404996.f_2282.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_112(Var0, iParam9 + 1);
	}
}

void func_113(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_103();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] < iVar10)
		{
			Global_2407666[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407666[iVar0 /*9*/] == 0)
		{
			Global_2407666[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407666[iVar0 /*9*/] > 0)
		{
			if (Global_2407666[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407666[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407666[iVar12 /*9*/] = { Param0 };
	}
}

float func_114(struct<3> Param0)
{
	var uVar0;
	
	return func_115(Param0, &(Global_2404996.f_43), &uVar0);
}

float func_115(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404996.f_2513) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_116(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_105(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_106(Param0, 1, 0, 0, 1);
	fVar0 = func_105(fVar4, 0f, func_123(), func_121(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_119(Param0);
	fVar0 = func_105(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !func_89(unk_0x0FFED3E94261A832(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_118(Param0, unk_0x0FFED3E94261A832(), 0);
	fVar0 = func_105(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_117(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_105(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_105(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_105(unk_0x2A488C176D52CCA5(Global_2404996.f_499, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_117(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x8CB53B9AB648FF36(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xB22A5C995D319408(uVar3))
	{
		unk_0x637503F5ED6C575B(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x3FEF699D13BCC798((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_118(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1050(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1050(iVar3, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar3) != unk_0x220AE8028FACE96A(iParam3) || (unk_0x220AE8028FACE96A(iVar3) == -1 && unk_0x220AE8028FACE96A(iParam3) == -1))
					{
						if (Global_2416174.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar2 /*3*/], Param0);
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
	}
	return fVar0;
}

float func_119(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xC61D5B1728CFF322(unk_0x2A5EB8B0FE590B91(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x2137828D03306CAF(uVar6[iVar2]))
		{
			if (!unk_0xA9A04898798AE9E6(uVar6[iVar2], 0))
			{
				if (func_120(uVar6[iVar2]))
				{
					Var3 = { unk_0xD1EE0E9FCD74A37B(uVar6[iVar2], 1) };
					fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Var3, 1);
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

int func_120(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xF14CC08EB3D9D296(uParam0);
	switch (unk_0xAEF0E480E33587E6(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xAEF0E480E33587E6(uVar0, Global_1574695[unk_0x0FFED3E94261A832()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 0)
	{
		iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xAEF0E480E33587E6(uVar0, Global_1574406[iVar1]))
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

float func_121()
{
	if (func_122())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
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

int func_122()
{
	if (Global_2404996.f_43.f_65 && !Global_2404996.f_43.f_299)
	{
		if (!func_109(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
	}
	return 0;
}

float func_123()
{
	if (func_122())
	{
		if ((unk_0xDA6E804770521A18(Global_2404996.f_43.f_67) || unk_0x0F93427D94EAEAA2(Global_2404996.f_43.f_67)) || Global_2404996.f_43.f_67 == joaat("rhino"))
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

int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xB6FB1ADA41270763(Param0, fParam7)) || (fVar0 > 0f && unk_0x2F88ECCEDDE3F341(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x1EC399095E4E3649(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_125(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_129(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_128(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_126(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_126(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_127(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_127(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_128(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x19007189599EBBF5(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_129(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x19007189599EBBF5(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_130(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_59(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410462[iVar4])
	{
		if (func_58(Var1, &(Global_2409633[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410462[8])
	{
		if (func_58(Var1, &(Global_2409633[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409633[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409633[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409633[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_131(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404996.f_43.f_55)
	{
		if (unk_0xA419466089F321B4(Global_2404996.f_43.f_56))
		{
			if (!unk_0xF079EF2C4FF76DFD(Param0))
			{
				uVar0 = unk_0x65B447E36C1ED4C2(Param0);
				if (unk_0xA419466089F321B4(uVar0))
				{
					iVar1 = unk_0xB010A20402E92ABD(uVar0);
					if (!iVar1 == Global_2404996.f_43.f_57)
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

int func_132(struct<3> Param0)
{
	switch (Global_2404996.f_2278)
	{
		case 0:
			return func_161(Param0, Global_2404996.f_2257, Global_2404996.f_2260, 0, 0);
			break;
		
		case 1:
			return func_92(Param0, Global_2404996.f_2271, Global_2404996.f_2274, 0, 0);
			break;
		
		case 2:
			return unk_0x19007189599EBBF5(Param0, Global_2404996.f_2271, Global_2404996.f_2274, Global_2404996.f_2277, 0, 1);
			break;
	}
	return 0;
}

int func_133(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x19007189599EBBF5(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_134(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_74(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_136(iParam0))
			{
				if (Global_1592456[iParam0 /*635*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_136(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

int func_137(int iParam0)
{
	if (func_70(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_138(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404996.f_2411[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_139(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_77(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x399F81B56505EE6F(0.01f, 360f);
			func_74(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 0, fVar4);
			if (func_81(Var1, &uVar0) || func_77(Var1))
			{
				Var1 = { *uParam0 };
				func_74(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_140(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_142(Param0, fParam3, iParam4, iParam5, 0) || func_141(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_141(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2416174.f_557[iVar0] == 0)
			{
				if (func_61(Param0, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 1036831949))
				{
					if (func_1050(iVar1, 0, 1) && func_1050(iParam3, 0, 1))
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

int func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_1050(iVar1, 0, 1) && func_1050(iParam4, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1050(iVar1, 0, 1) && func_1050(iParam4, 0, 1))
				{
					if (Global_2416174.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_37(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416174.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1050(iVar1, 0, 1))
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

int func_143(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2404996.f_3 = 0;
	if (!func_140(Param0, 0.5f, unk_0x0FFED3E94261A832(), 0, 0))
	{
		Global_2404996.f_3++;
		if (bParam5)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_147(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
				if (!func_147(Param0, fParam12))
				{
					Global_2404996.f_3++;
					if (!func_144(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404996.f_3++;
						if (!func_60(Param0, 1056964608))
						{
							Global_2404996.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			}
		}
		else if (func_31(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
			if (!func_147(Param0, fParam12))
			{
				Global_2404996.f_3++;
				if (!func_144(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404996.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404996.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404996.f_3 = (Global_2404996.f_3 + Global_2404996.f_2);
		}
	}
	return 0;
}

int func_144(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0FFED3E94261A832() == iVar1)
		{
			if ((func_1050(iVar1, 1, 1) && func_33(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (!func_146(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
				{
					if (func_145(func_37(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_145(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x19007189599EBBF5(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_147(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1050(iVar1, 1, 1) && func_33(iVar1)) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
		{
			if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && unk_0x220AE8028FACE96A(iVar1) == -1) && !func_89(unk_0x0FFED3E94261A832(), 1))
			{
				return 0;
			}
			else if ((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && !unk_0x0FFED3E94261A832() == iVar1) || !func_146(unk_0x0FFED3E94261A832(), iVar1, -2, 0))
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

int func_148(int iParam0)
{
	if ((Global_2404996.f_478 == 9 || Global_2404996.f_478 == 9) || (Global_2404996.f_478 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_149(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1050(iVar1, 1, 1))
			{
				if ((!func_34(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1)) && iVar1 != unk_0x0FFED3E94261A832())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x220AE8028FACE96A(iVar1) == iVar3)
					{
						if (unk_0x4A2E6F541CD8C36E(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
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

int func_150(int iParam0)
{
	if ((func_89(iParam0, 1) || func_152(iParam0)) || func_151(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_153(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_155(&Var2, uParam3, iVar0);
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
				func_154(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	Global_2411460 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_154(&Global_2411460, uParam1, iParam2 + 1);
	}
}

void func_155(var uParam0, var uParam1, int iParam2)
{
	Global_2411456 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_155(&Global_2411456, uParam1, iParam2 + 1);
	}
}

void func_156(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404996.f_2053 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_2053)
		{
			if (func_157(Global_2404996.f_2054[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404996.f_2054[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404996.f_2054[iVar0 /*4*/] };
					fVar4 = unk_0x2410C2F4DC01A40D(Var1.f_0, Var1.f_1);
				}
				func_104(Global_2404996.f_2054[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404996.f_2282++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404996.f_2666)
	{
		func_98(&(Global_2404996.f_2282.f_6[0 /*9*/]), &(Global_2404996.f_2282.f_6[1 /*9*/]), &(Global_2404996.f_2282.f_6[2 /*9*/]));
	}
}

int func_157(struct<3> Param0, var uParam3)
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

void func_158(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_93(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_159()
{
	return Global_1310987.f_4;
}

void func_160(var uParam0, var uParam1)
{
	func_190();
	func_183(uParam0, uParam1);
}

bool func_161(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_162(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404996.f_1710 > 0 && func_180(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_163(uParam0, uParam1, uParam2);
	}
}

void func_163(var uParam0, var uParam1, var uParam2)
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
	int iVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	var uVar29;
	struct<3> Var30;
	float fVar33;
	bool bVar34;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_73(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_179(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
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
	Global_2411470.f_162 = 0;
	Global_2411470.f_163 = 0;
	Global_2411470.f_164 = -99;
	Global_2411470.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411470.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_66(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8CB53B9AB648FF36(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB22A5C995D319408(iVar8))
		{
			unk_0x637503F5ED6C575B(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411470.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411470.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xAF3BC0B78BEBFE3C(iVar8)) || unk_0x69BC60DD5A50B10D(iVar8))
			{
				unk_0xAA55F1A37EDDE3B7(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_139(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_178(Var1))
									{
										Var1 = { func_176(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_60(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_175(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_179(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_170(Var1, fVar4, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_73(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar18 = uParam2->f_31;
																					bVar19 = true;
																					iVar20 = 1;
																					fVar21 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						fVar21 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar21 = (fVar21 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar19 = true;
																						iVar20 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar21 = (fVar21 * 0.375f);
																							}
																						}
																					}
																					iVar22 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_31(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar22 = 1;
																						}
																					}
																					else if (func_31(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_169(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar22 = 1;
																					}
																					if (iVar22 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar24 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar23 = func_168(Var1, uParam2->f_54, &fVar24);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar23 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar23 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162)
																										{
																											Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411470.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411470.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411470.f_162 == 0)
																									{
																										Global_2411470[0 /*3*/] = { Var1 };
																										Global_2411470.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_167(Var1, fVar4, iVar16);
																													iVar16 = Global_2411470.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411470.f_162++;
																									if (Global_2411470.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411470[Global_2411470.f_162 /*3*/] = { Var1 };
																									Global_2411470.f_121[Global_2411470.f_162] = fVar4;
																									Global_2411470.f_162++;
																									if (func_175(Var1, uParam2))
																									{
																										Global_2411470.f_163++;
																									}
																									if (Global_2411470.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
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
				if (Global_2411470.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
					else
					{
						if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
						{
							func_165(0, uParam2);
						}
						iVar25 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411470[0 /*3*/] };
						uVar29 = Global_2411470.f_121[0];
						Global_2411470[0 /*3*/] = { Global_2411470[iVar25 /*3*/] };
						Global_2411470.f_121[0] = Global_2411470.f_121[iVar25];
						Global_2411470[iVar25 /*3*/] = { Var26 };
						Global_2411470.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_163(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x895FB9FE885E36ED((1 + iVar15), (40 + iVar15));
						unk_0x74AE6A2A7B9031D9(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_176(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var30 = { Var1 };
						fVar33 = fVar4;
						if (!uParam2->f_50)
						{
							bVar34 = true;
						}
						else
						{
							bVar34 = false;
						}
						if (func_73(uParam2->f_35, &Var30, &(uParam2->f_38), &(uParam2->f_45), bVar34, 1) || func_179(&Var30, bVar34))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_163(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								return;
							}
						}
						else
						{
							*uParam0 = { Var30 };
							*uParam1 = fVar33;
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
				func_163(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_164(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411470.f_164 = iVar8;
	}
}

void func_164(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_140(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0FFED3E94261A832(), 0, 0))
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

void func_165(int iParam0, var uParam1)
{
	if (!func_175(Global_2411470[iParam0 /*3*/], uParam1))
	{
		Global_2411470.f_162 = (Global_2411470.f_162 - 1);
		func_166(iParam0);
		if (Global_2411470.f_162 > Global_2411470.f_163)
		{
			func_165(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_165(iParam0 + 1, uParam1);
	}
}

void func_166(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411470[iParam0 /*3*/] = { Global_2411470[iParam0 + 1 /*3*/] };
			Global_2411470.f_121[iParam0] = Global_2411470.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_167(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411470[iParam4 /*3*/] };
	uVar3 = Global_2411470.f_121[iParam4];
	Global_2411470[iParam4 /*3*/] = { Param0 };
	Global_2411470.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411470.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_167(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_168(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_107(iVar5))
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

int func_169(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam9 == 0)
		{
			if (func_1050(iVar1, bParam5, bParam6))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam8 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam10) && bParam7) && func_39(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
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

int func_170(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_174(Param0, fParam3, iParam4, iParam5, iParam6) || func_171(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_171(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_173(Param0, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_557[iVar0]))
			{
				if (func_172(Param0, fParam3, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 0))
				{
					if (func_1050(iVar1, 0, 1) && func_1050(iParam5, 0, 1))
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

int func_172(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_61(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_63(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_68(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_68(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x3FEF699D13BCC798((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_68(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
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
		if (func_172(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_173(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_69(iParam3, 1008981770);
	fVar1 = func_69(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_174(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1050(iVar1, 0, 1) && func_1050(iParam5, 0, 1))
			{
				if (Global_2416174.f_261[iVar0])
				{
					if (func_61(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416174.f_261[iVar0])
			{
				if (func_61(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1050(iVar1, 0, 0))
			{
				if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
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

int func_175(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_161(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_92(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_176(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_177(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xAA55F1A37EDDE3B7(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x1FD487C25EAD970B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
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
			if ((iVar8 + iVar9) != iParam4)
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
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_63(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_177(Param0, *fParam3, Param6))
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
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2A381E6324A8F56E(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_63(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_177(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_68(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_56(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_178(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_59(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411184[iVar1])
	{
		if (func_58(Param0, &(Global_2410481[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411184[8])
	{
		if (func_58(Param0, &(Global_2410481[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_179(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404996.f_26.f_16)
	{
		switch (Global_2404996.f_26.f_15)
		{
			case 0:
				if (func_161(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_92(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_80(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, Global_2404996.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_180(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2404996.f_1710 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_73(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_179(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2411470.f_162 = 0;
		Global_2411470.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411470.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_181(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_1710)
		{
			iVar1 = Global_2404996.f_1984[iVar0];
			if (iVar1 > -1 && iVar1 < 68)
			{
				Var2 = { Global_2404996.f_1711[iVar1 /*4*/] };
				fVar5 = Global_2404996.f_1711[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_170(Var2, fVar5, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_73(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (uParam2->f_3 > 7f)
										{
											if (func_31(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
											{
												bVar11 = true;
											}
										}
										else if (func_31(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_169(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
										{
											bVar11 = true;
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_168(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162)
															{
																Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411470.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411470.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411470.f_162 == 0)
														{
															Global_2411470[0 /*3*/] = { Var2 };
															Global_2411470.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_167(Var2, fVar5, iVar6);
																		iVar6 = Global_2411470.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
													else
													{
														Global_2411470[Global_2411470.f_162 /*3*/] = { Var2 };
														Global_2411470.f_121[Global_2411470.f_162] = fVar5;
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
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
		if (Global_2411470.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
				{
					func_165(0, uParam2);
				}
				iVar14 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
				Var15 = { Global_2411470[0 /*3*/] };
				uVar18 = Global_2411470.f_121[0];
				Global_2411470[0 /*3*/] = { Global_2411470[iVar14 /*3*/] };
				Global_2411470.f_121[0] = Global_2411470.f_121[iVar14];
				Global_2411470[iVar14 /*3*/] = { Var15 };
				Global_2411470.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_180(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_163(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_181(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2404996.f_1710)
	{
		uVar1 = func_182(Param0, fVar0, &fVar0);
		Global_2404996.f_1984[iVar2] = uVar1;
		iVar2++;
	}
}

int func_182(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2404996.f_1710)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404996.f_1711[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

void func_183(var uParam0, var uParam1)
{
	unk_0x9A7EBCFC53C6E54A(uParam0, uParam1, 0.1f);
	Global_2404996.f_2265 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_2263 = 1;
	Global_2404996.f_2266 = unk_0x11ABC381A58DD5AB();
}

void func_184()
{
	func_189();
	func_188();
	func_187();
	func_186();
	func_185();
}

void func_185()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407666[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_186()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404996.f_2282.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_187()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404996.f_2282.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_188()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2404996.f_2282.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_189()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404996.f_2282 = { Var0 };
}

void func_190()
{
	if (Global_2404996.f_2263)
	{
		if (unk_0xFF09208EC90C94CB() == Global_2404996.f_2265)
		{
			unk_0xA1A58DB8A7A22164();
		}
		else
		{
			unk_0xA1A58DB8A7A22164();
		}
		Global_2404996.f_2263 = 0;
	}
}

int func_191(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_192()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_942();
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

int func_193()
{
	switch (Local_121.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_194())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_194()
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	uVar0 = func_202();
	iVar1 = func_201();
	if (func_942() == 0)
	{
		iVar7 = Global_1574731;
	}
	else if (func_942() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1574734;
	}
	switch (func_942())
	{
		case 1:
			func_200(&Var2, &uVar6, &uVar5);
			func_199(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_198((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_196(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_200(&Var2, &uVar6, &uVar5);
			func_199(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_198((iVar8 - 1), &Var2, &uVar6, &uVar5);
				if (iVar8 <= 2)
				{
					iVar1 = joaat("s_m_m_fibsec_01");
				}
				else
				{
					iVar1 = func_201();
				}
				func_196(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_200(&Var2, &uVar6, &uVar5);
			func_199(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_201();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_198((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_196(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_200(&Var2, &uVar6, &uVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_198((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_196(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_195())
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	switch (func_942())
	{
		case 1:
			if ((((unk_0xD0BCF9877CD72A3F(Local_121.f_13[0]) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[1])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[2])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[3])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((unk_0xD0BCF9877CD72A3F(Local_121.f_13[0]) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[1])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[2])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[3])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((unk_0xD0BCF9877CD72A3F(Local_121.f_13[0]) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[1])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((unk_0xD0BCF9877CD72A3F(Local_121.f_13[1]) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[2])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[3])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[4])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[5])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[6])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[7])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[8])) && unk_0xD0BCF9877CD72A3F(Local_121.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_196(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_13[iParam0]))
	{
		unk_0x0F39DF6675B2333E(iParam1);
		if (unk_0xA1FC9D7AEA164881(iParam1))
		{
			if (unk_0x7DC1E7E4F4F004B4(1, 0, 0, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_11, iParam0))
				{
					unk_0x333EF04F1A5ADEB5(Param2, 2f, 1, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_197(&(Local_121.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), iParam7);
						unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1, 0);
						unk_0x580E0316A37C6FD5(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 0);
						unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0xE5989282DAC350E1(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 0, 1);
						unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 42, 1);
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 200);
						unk_0x0E9E5456339F425B(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xE9BA7ED0FD3FF42D(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), Param2, uParam6, 0, 0);
						if (func_942() == 2)
						{
							unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						}
					}
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_197(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	uVar0 = unk_0xD00B79C0E206E082(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xDF7D91421097E934(uVar0);
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(uVar0, iParam9);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam7)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_942())
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

int func_199(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_13[iParam0]))
	{
		unk_0x0F39DF6675B2333E(uParam1);
		if (unk_0xA1FC9D7AEA164881(iParam1))
		{
			if (unk_0x7DC1E7E4F4F004B4(0, 1, 0, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_121.f_11, iParam0))
				{
					unk_0x333EF04F1A5ADEB5(Param2, 2f, 1, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&(Local_121.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_197(&(Local_121.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), iParam7);
						unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1, 0);
						if (func_942() == 1)
						{
							unk_0x6CA29A70250F194F(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 3, 0, 0, 0);
							unk_0x6CA29A70250F194F(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 8, 0, 0, 0);
							unk_0x6CA29A70250F194F(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 10, 0, 0, 0);
							unk_0xDEC831C0189DE207(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 0, 1, 0, 0);
						}
						else
						{
							unk_0x580E0316A37C6FD5(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 0);
						}
						unk_0x64B11F881078C75D(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0xE5989282DAC350E1(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 0, 1);
						unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 42, 1);
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 200);
						unk_0x0E9E5456339F425B(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), 1);
						unk_0xE9BA7ED0FD3FF42D(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iParam0]), Param2, uParam6, 0, 0);
					}
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_200(var uParam0, var uParam1, var uParam2)
{
	switch (func_942())
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

int func_201()
{
	int iVar0;
	
	switch (func_942())
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

int func_202()
{
	int iVar0;
	
	switch (func_942())
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

int func_203(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_204(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_205()
{
	if (unk_0xAA4F14DA15DB0B51(uLocal_379, 29))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_379, 28))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 25))
			{
				if (unk_0xAA4F14DA15DB0B51(uLocal_380, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 1))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 26))
				{
					if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 26);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 26))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 27))
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_379, 27);
						}
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_379, 27))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 25);
					}
				}
			}
		}
	}
}

void func_206(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_344(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_342() || iParam2 == 26)
	{
		if (func_291(uParam1, iParam2, uParam3, Global_1574108, 0, func_340()))
		{
			func_290(1);
			if ((!func_288() && !func_286()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_285())
				{
					func_282();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_281(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_280(uParam1);
							if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
							{
								unk_0x507FE690B1271947(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
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
								if (func_1050(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_136(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_279(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_276(unk_0x0FFED3E94261A832(), 0) && func_275(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_273())
							{
								if (func_1050(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
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
							if ((func_272(iVar35) && func_266(iVar35, iParam2)) && func_1050(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_261(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
								iVar37 = func_255(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
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
									if (!func_273())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_250(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_249(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_242(iVar35, 0);
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
								if (func_241(iParam5))
								{
									func_240(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_240(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xF6082E2ADA1C795B(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C214DA899F05536(iVar52);
							if (func_1050(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_272(iVar35))
							{
								if (func_1050(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_261(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
									iVar37 = func_255(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_242(iVar35, 1);
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
									func_220(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_217(uParam3, uParam1);
						}
						func_216(&(uParam3->f_21));
						func_215();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_214(uParam3, uParam1);
							func_213(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_214(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_209(uParam3))
						{
							Global_1574291 = 1;
						}
						func_207(uParam3);
						if (Global_1574291 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574291 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA8AF99BD8D81CFB7(*uParam1))
					{
						unk_0xFF4C3B41848CE5CD(7);
						unk_0xED8A6509C85CF7A1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFF4C3B41848CE5CD(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_215();
			func_281(0);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 7);
			}
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 10))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xE98F6B2EFC674042();
}

void func_207(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_216(&(uParam0->f_21));
		func_208(0);
	}
}

void func_208(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574291 != 2)
		{
			Global_1574291 = 2;
		}
	}
	else
	{
		switch (Global_1574291)
		{
			case 0:
				Global_1574291 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_18() && func_1050(iVar15, 0, 1))
	{
		Var2 = { func_42(iVar15) };
		iVar1 = func_212(uParam0, uParam0->f_37);
		if (func_211(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_210(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_210(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_210(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_210(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_210(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_210(uParam0, iVar0, 0);
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

void func_210(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_211(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_212(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_213(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xD1FCC52F87A98873(*uParam0, "COLLAPSE"))
	{
		unk_0xD426F7366505EADF(iParam1);
		unk_0x8123397DC676E794();
	}
	if (iParam2 == 1)
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x8123397DC676E794();
		}
	}
}

void func_214(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_215()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_216(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_217(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1050(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_219(uParam0->f_38[iVar0 /*2*/], 0);
					func_218(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_218(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "SET_ICON"))
		{
			unk_0x4CECF13AF144A8F6(iParam1);
			unk_0x4CECF13AF144A8F6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4CECF13AF144A8F6(iParam3);
			}
			unk_0x8123397DC676E794();
		}
	}
}

int func_219(int iParam0, bool bParam1)
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

void func_220(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_239() && iParam4 < func_238())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xD1FCC52F87A98873(*uParam2, sVar1))
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_237("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_237(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_237("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_237("");
			if (uParam3->f_108 == 6)
			{
				func_237("");
			}
			else
			{
				func_237(&sParam5);
			}
			func_225(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_224(uParam3))
			{
				func_223("DPAD_FRIEND");
			}
			else if (func_222(uParam3))
			{
				func_223("DPAD_FRIEND");
			}
			else if (func_221(uParam3))
			{
				func_223("DPAD_CREW");
			}
			else
			{
				func_223("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_221(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_222(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_223(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_224(var uParam0)
{
	if (func_222(uParam0) && func_221(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0, int iParam1)
{
	if (func_236(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_230(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_226())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_226()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_228() || func_227())
		{
			return 1;
		}
	}
	return 0;
}

var func_227()
{
	return Global_2445217.f_12;
}

int func_228()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_227();
	}
	return func_229(Global_1638223.f_93532);
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_230(int iParam0)
{
	if ((func_1050(iParam0, 0, 1) && func_234()) && func_231(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_231(int iParam0, bool bParam1)
{
	return func_232(iParam0, bParam1, 1);
}

int func_232(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_233(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_18() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_18())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_234()
{
	if (func_152(unk_0x0FFED3E94261A832()) || func_235())
	{
		return 0;
	}
	return 1;
}

int func_235()
{
	switch (func_275(unk_0x0FFED3E94261A832()))
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

int func_236(int iParam0)
{
	if (func_226())
	{
		if (func_1050(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1050(iParam0, 0, 1) && func_234()) && func_233(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_237(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_238()
{
	int iVar0;
	
	if (Global_1574110)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_239()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_240(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_239() && iParam3 < func_238())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574110)
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
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam1))
		{
			if (unk_0xD1FCC52F87A98873(*uParam1, sVar1))
			{
				unk_0x4CECF13AF144A8F6(iParam3);
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_237("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_223(sParam16);
				}
				else
				{
					func_237(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_237("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4CECF13AF144A8F6(iVar0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(-1);
				}
				if (func_273())
				{
					func_237("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 5 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x58478145CAF8429C(sParam16)) && !unk_0x58478145CAF8429C(sParam17))
				{
					unk_0xADBDBA2DF8443753("FM_AE_TWO_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xD5DA3EC5EEC78358(sParam17);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 8 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
				{
					unk_0xADBDBA2DF8443753("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x31A1C6406BB66808(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xEA97619D8B89D387(iParam10);
					}
					unk_0xD5DA3EC5EEC78358(&(uParam2->f_104));
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xADBDBA2DF8443753("FM_AE_CASH");
					unk_0xF671F12DFCDA7746(iParam10, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xADBDBA2DF8443753("FM_AE_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						unk_0xADBDBA2DF8443753("FM_NG_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
					{
						func_223(&(uParam2->f_104));
					}
					else
					{
						func_237("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xADBDBA2DF8443753("STRING");
					unk_0x365072D1FE8AEADE(iParam14, 6);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (fParam13 != -1f)
				{
					unk_0xADBDBA2DF8443753("NUMBER");
					unk_0x31A1C6406BB66808(fParam13, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (iParam10 != -1)
				{
					unk_0x4CECF13AF144A8F6(iParam10);
				}
				else
				{
					func_237("");
				}
				if (uParam2->f_108 == 6)
				{
					func_237("");
				}
				else
				{
					func_237(&sParam4);
				}
				func_225(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_237("");
					func_237("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_224(uParam2))
				{
					func_223("DPAD_FRIEND");
				}
				else if (func_222(uParam2))
				{
					func_223("DPAD_FRIEND");
				}
				else if (func_221(uParam2))
				{
					func_223("DPAD_CREW");
				}
				else
				{
					func_223("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_241(int iParam0)
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

int func_242(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_152(iParam0)) && !func_247(iParam0))
	{
		iVar0 = func_246();
	}
	iVar1 = func_245(iParam0);
	if (!iVar1 == -1)
	{
		return func_243(iVar1);
	}
	return iVar0;
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_244(iParam0);
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

var func_244(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_245(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

int func_246()
{
	return 21;
}

bool func_247(int iParam0)
{
	return func_248(iParam0, 20);
}

bool func_248(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

char* func_249(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x82529919A0EAC7FC())
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
			if (unk_0x82529919A0EAC7FC())
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

int func_250(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_254(iParam3))
	{
		*fParam1 = (func_251(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_241(iParam3))
	{
		*fParam1 = (func_251(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_251(int iParam0, int iParam1)
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
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_253(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_252(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_252(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_253(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_254(int iParam0)
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

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = func_258(iParam0);
	if (iVar0 == -1)
	{
		func_256(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_256(int iParam0, bool bParam1)
{
	if (!func_1050(iParam0, 0, 1))
	{
		return;
	}
	if (func_258(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_257(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (!func_1050(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_259(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_259(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_260(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_260(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_261(int iParam0)
{
	struct<4> Var0;
	
	if (func_1050(iParam0, 0, 1))
	{
		Global_2484572 = { func_42(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_211(Global_2484572))
			{
				if (!unk_0xE1BD9BCF6A9D6793(&Global_2484572))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE061CABF3B012AFB(0))
		{
			return Var0;
		}
		if (func_265(&Global_2484572))
		{
			Global_2484502 = { func_263(iParam0) };
			func_262(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_262(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_263(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_264(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_42(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_264(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_271(iParam0) || func_270(iParam0)) || func_269(iParam0))
		{
			return 0;
		}
	}
	if (!func_268(iParam0))
	{
		return 0;
	}
	if ((!func_267(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
{
	if (func_1050(iParam0, 0, 1))
	{
		if (func_1050(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_268(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

bool func_269(int iParam0)
{
	if (func_271(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

bool func_271(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

int func_272(int iParam0)
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
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_273()
{
	switch (func_275(unk_0x0FFED3E94261A832()))
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
	switch (func_274(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_247(unk_0x0FFED3E94261A832()))
	{
		switch (func_275(unk_0x0FFED3E94261A832()))
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

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_275(int iParam0)
{
	if (func_151(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_276(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_277(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_277(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_277(int iParam0)
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
	return func_278(iParam0, 0);
	return 0;
}

int func_278(int iParam0, int iParam1)
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

void func_279(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1050(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_136(iVar1))
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

void func_280(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_281(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1351505.f_2 == 0)
		{
			Global_1351505.f_2 = 1;
		}
	}
	else if (Global_1351505.f_2 == 1)
	{
		Global_1351505.f_2 = 0;
	}
}

void func_282()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_284())
		{
			func_283();
		}
	}
}

void func_283()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_284()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_285()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_284())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_284())
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	if (func_284())
	{
		if (func_287(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_288()
{
	if (func_284())
	{
		if (func_289(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
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
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_290(int iParam0)
{
	if (Global_1351505.f_1 != Global_1351505)
	{
		Global_1351505.f_1 = Global_1351505;
	}
	if (Global_1351505 != iParam0)
	{
		Global_1351505 = iParam0;
	}
}

int func_291(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_339(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_338();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_337())
		{
			if (func_336() > 0 && Global_1574110)
			{
				unk_0x891A3238A7E50954();
				unk_0x11CA0D8AE0C37B1C(fVar7);
				unk_0x47BFFB0507046AE3(18);
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x8816A672BCF9F877();
				}
				unk_0x47BFFB0507046AE3(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_323())
		{
			func_322(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_322(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_336() == 1)
		{
			func_321(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_322(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_336() == 0 && !bParam5))
		{
			func_322(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_320();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x891A3238A7E50954();
				}
				unk_0x47BFFB0507046AE3(18);
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_320();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_321(bVar6, uParam0, 0))
				{
					func_280(uParam0);
					sVar4 = func_318(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_316(iParam1) };
					if (bParam4)
					{
						func_313(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_306(uParam0, func_310(uParam2), func_307(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_297(uParam0, func_299(uParam2), func_298(), -1);
					}
					else if (func_226())
					{
						uParam2->f_34 = Global_1574109;
						func_313(uParam0, sVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_313(uParam0, sVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_292(iParam1);
						func_313(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				Global_1574108 = uParam3;
				Global_1574107 = 1;
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574109)
					{
						unk_0x507FE690B1271947(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_296())
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
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_295(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_294(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_293(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_293(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_294(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_295(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_296()
{
	return Global_1638223.f_1 == 0;
}

void func_297(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_223(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_223("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_298()
{
	switch (func_275(unk_0x0FFED3E94261A832()))
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

char* func_299(var uParam0)
{
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_275(unk_0x0FFED3E94261A832()))
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
			if (func_302())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_301(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_301(1))
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
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
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
			if (func_300(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_300(int iParam0)
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

bool func_301(bool bParam0)
{
	return func_231(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_302()
{
	return (func_305() && func_303(func_304()));
}

bool func_303(int iParam0)
{
	return func_233(iParam0, 1);
}

int func_304()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_305()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_306(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_223(sParam1);
		}
		else if (func_274(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_223("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_307(var uParam0)
{
	int iVar0;
	
	iVar0 = func_274(unk_0x0FFED3E94261A832());
	if (func_309())
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
			switch (func_308())
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

int func_308()
{
	if (func_274(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_309()
{
	return Global_1592329;
}

char* func_310(var uParam0)
{
	int iVar0;
	
	iVar0 = func_274(unk_0x0FFED3E94261A832());
	if (func_309())
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
			if (func_312() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_312() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_308())
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
			if (func_311() == 1)
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

int func_311()
{
	return Global_2497344.f_4753;
}

int func_312()
{
	if (func_274(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_313(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_237(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(sParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_223(sParam1);
		}
		if (func_337() && iParam6)
		{
			if (func_315())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xADBDBA2DF8443753("LBD_DPD_CNT");
			unk_0xEA97619D8B89D387(iVar0);
			unk_0xEA97619D8B89D387(iVar1);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_223(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_314(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_314(int iParam0)
{
	if (func_295(iParam0) || func_294(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_315()
{
	return Global_1574110;
}

struct<4> func_316(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_317(unk_0x0FFED3E94261A832()) || func_293(unk_0x0FFED3E94261A832()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1638223.f_30, 16);
			break;
	}
	if (func_226() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_317(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_318(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_226() || unk_0x58478145CAF8429C(sParam1)))
	{
		uVar0 = func_319();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x58478145CAF8429C(sParam1))
	{
		if (Global_1574309 == 1)
		{
			Global_1574309 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
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
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_319()
{
	if (unk_0xAB1E825659B8A5D6())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xD2843F73FBE0F430())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9149FCDCB650712D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x7A1C6EE905C175E6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_320()
{
	Global_36716 = 1;
}

bool func_321(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_matchmaking_card");
	}
	return unk_0xA8AF99BD8D81CFB7(*uParam1);
}

void func_322(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_215();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_216(&(uParam1->f_19));
		}
	}
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0x73F5E7B6BB964839(uParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(uParam1->f_33, 0))
	{
		unk_0x507FE690B1271947(&(uParam1->f_33), 0);
	}
	unk_0x11CA0D8AE0C37B1C(0f);
}

int func_323()
{
	if (func_335())
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (!func_332())
	{
		return 0;
	}
	if (!func_330())
	{
		return 0;
	}
	if (func_329(8, -1))
	{
		return 0;
	}
	if (func_336() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	else if (!func_70(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_327(1) || func_325(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_109(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (Global_1761104)
	{
		return 0;
	}
	if (func_324(0))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (Global_1345093)
	{
		return 0;
	}
	return 1;
}

bool func_324(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

int func_325(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_326(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x83F6A1E4E653AD75(0, 25) || unk_0x83F6A1E4E653AD75(0, 68))
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
	if (unk_0x83F6A1E4E653AD75(0, 19) || (!bParam0 && unk_0xC20E8B2E17B46871(0, 19)))
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (((unk_0x83F6A1E4E653AD75(0, 166) || unk_0x83F6A1E4E653AD75(0, 167)) || unk_0x83F6A1E4E653AD75(0, 168)) || unk_0x83F6A1E4E653AD75(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC20E8B2E17B46871(0, 166) || unk_0xC20E8B2E17B46871(0, 167)) || unk_0xC20E8B2E17B46871(0, 168)) || unk_0xC20E8B2E17B46871(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (unk_0xE71026F240213063())
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_327(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_328()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_329(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_330()
{
	if (func_331() == 0)
	{
		return 1;
	}
	return 0;
}

int func_331()
{
	return Global_1312466.f_18;
}

int func_332()
{
	if (func_333())
	{
		return 1;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 0;
	}
	if (unk_0xEF08C8E0C4679477() || unk_0x9AF3AC4F52023B45())
	{
		return 0;
	}
	if (unk_0x8F70BD179415A092())
	{
		return 0;
	}
	return 1;
}

bool func_333()
{
	return Global_1312438;
}

bool func_334()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

bool func_335()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_336()
{
	return Global_1351508.f_68;
}

int func_337()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_338()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_340()
{
	if (func_341(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

int func_342()
{
	if (func_340())
	{
		return 1;
	}
	if (func_269(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_309())
	{
		return 1;
	}
	if (func_152(unk_0x0FFED3E94261A832()))
	{
		switch (func_274(unk_0x0FFED3E94261A832()))
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
				if (!func_343(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_343(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_343(unk_0x0FFED3E94261A832()))
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

bool func_343(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_344(int iParam0)
{
	if ((iParam0 == 26 && func_152(unk_0x0FFED3E94261A832())) && !func_247(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_151(unk_0x0FFED3E94261A832(), 0) && func_247(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_345(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_152(iParam0) && !func_271(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_247(iParam0);
	uVar3 = func_359();
	uVar4 = func_350();
	if ((bVar1 && (func_349(iParam0) || func_348(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_347(iParam0)) && !func_346(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2497344.f_4828.f_31 != iVar0)
	{
		Global_2497344.f_4828.f_31 = iVar0;
	}
	return iVar0;
}

bool func_346(int iParam0)
{
	return func_248(iParam0, 19);
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_248(iParam0, 9);
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_349(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

int func_350()
{
	if ((func_248(unk_0x0FFED3E94261A832(), 21) || func_248(unk_0x0FFED3E94261A832(), 22)) || func_356())
	{
		return 1;
	}
	if (func_352())
	{
		func_351(22);
		return 1;
	}
	return 0;
}

void func_351(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

int func_352()
{
	if (func_151(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_359() && !func_355()) || func_354(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_353(27);
		}
	}
	return 0;
}

void func_353(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_354(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

bool func_355()
{
	return Global_1312416.f_1;
}

bool func_356()
{
	return func_357(289, -1);
}

int func_357(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_358(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

bool func_359()
{
	return Global_1312416;
}

bool func_360()
{
	return unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 5);
}

void func_361()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_362(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_362(int iParam0)
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
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		if (func_942() == 1)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 11))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 15))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 16))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 15))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
							{
								if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
								{
									if (unk_0x2137828D03306CAF(Var0.f_0))
									{
										if (unk_0x82DF3B947FC3E281(Var0.f_0))
										{
											iVar14 = unk_0x761AC59E782D169D(Var0.f_0);
											if (iVar14 == unk_0xECBE9D2902B2B964(Local_121.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (unk_0x2137828D03306CAF(Var0.f_1))
													{
														if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
														{
															iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
															if (unk_0xDB61DD81432BD145(iVar10))
															{
																iVar12 = unk_0xB0BB7458627D389F(iVar10);
																if (unk_0x76BCE6C7B20502DA(iVar12))
																{
																	if (iVar12 == unk_0x0FFED3E94261A832())
																	{
																		unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 11);
																		if (!func_248(unk_0x0FFED3E94261A832(), 20))
																		{
																			if (func_360())
																			{
																				func_365(0);
																				func_363();
																			}
																		}
																	}
																}
																else
																{
																	unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 16);
																}
															}
															else
															{
																unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_248(unk_0x0FFED3E94261A832(), 20))
												{
													if (func_360())
													{
														if (unk_0x2137828D03306CAF(Var0.f_1))
														{
															if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
															{
																iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
																if (unk_0xDB61DD81432BD145(iVar10))
																{
																	iVar12 = unk_0xB0BB7458627D389F(iVar10);
																	if (iVar12 == unk_0x0FFED3E94261A832())
																	{
																		func_365(0);
																		func_363();
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
		if (func_942() == 2)
		{
			iVar15 = 0;
			while (iVar15 < 15)
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iVar15]))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_2, iVar15))
					{
						if (unk_0x2137828D03306CAF(Var0.f_0))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
							{
								iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
								if (iVar11 == unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar15]))
								{
									if (unk_0x2137828D03306CAF(Var0.f_1))
									{
										if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
										{
											iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
											if (unk_0xDB61DD81432BD145(iVar10))
											{
												iVar12 = unk_0xB0BB7458627D389F(iVar10);
												if (iVar12 == unk_0x0FFED3E94261A832())
												{
													unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_2), iVar15);
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
		if (func_360())
		{
			if (!func_248(unk_0x0FFED3E94261A832(), 20))
			{
				if (unk_0x2137828D03306CAF(Var0.f_0))
				{
					if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
					{
						iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
						if (unk_0xDB61DD81432BD145(iVar11))
						{
							iVar13 = unk_0xB0BB7458627D389F(iVar11);
							if (unk_0x2137828D03306CAF(Var0.f_1))
							{
								if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
								{
									iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
									if (unk_0xDB61DD81432BD145(iVar10))
									{
										iVar12 = unk_0xB0BB7458627D389F(iVar10);
										if (iVar12 == unk_0x0FFED3E94261A832())
										{
											if (unk_0x76BCE6C7B20502DA(iVar13))
											{
												iVar16 = unk_0x675E1E93DBDAF30B(iVar13);
												if (iVar16 == Local_121.f_5)
												{
													func_365(0);
													func_363();
												}
												else if (iVar16 == Local_121.f_7)
												{
													func_365(0);
													func_363();
												}
												else if (func_19(iVar13, 1))
												{
													if (Local_121.f_8 > -1)
													{
														iVar17 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_8));
														if (func_16(iVar13, iVar17, 1))
														{
															func_365(0);
															func_363();
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

void func_363()
{
	if (!func_364(unk_0x0FFED3E94261A832()))
	{
		func_351(25);
	}
}

bool func_364(int iParam0)
{
	return func_248(iParam0, 25);
}

void func_365(int iParam0)
{
	if (!func_247(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 || func_345(unk_0x0FFED3E94261A832()) != 0)
		{
			func_351(20);
			if (func_152(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
				}
			}
		}
	}
}

void func_366()
{
	struct<8> Var0;
	
	switch (Local_186[unk_0x88641E5BC172153A() /*6*/].f_5)
	{
		case 0:
			if (func_958())
			{
				Var0 = { func_921() };
				func_920(86, "BIGM_ASLTN", &Var0, 1, -1, 2);
				func_894(-1, 0, 0, -1);
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 1;
			}
			else
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_888();
			func_885();
			func_884();
			func_876();
			func_872();
			func_869();
			func_868();
			func_867();
			func_663();
			if (Local_121.f_51 == 2)
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_512))
				{
					unk_0x789C84F1B8496AD0(&uLocal_512);
				}
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 2;
			}
			else if (Local_121.f_51 == 3)
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 3;
			}
			else if (Local_121.f_51 == 4)
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_662();
			func_888();
			func_646();
			func_885();
			func_884();
			func_625();
			func_546();
			func_876();
			func_509();
			func_508();
			func_869();
			func_506();
			func_868();
			func_415();
			func_867();
			func_663();
			if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 1))
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 3;
			}
			else if (Local_121.f_51 == 3)
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 3;
			}
			else if (Local_121.f_51 == 4)
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 4;
			}
			else if (func_406())
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 24);
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_121.f_51 == 4)
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_974();
			break;
	}
	if (Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 < 3)
	{
		func_367();
	}
}

void func_367()
{
	struct<3> Var0;
	
	if (!func_958() && !func_360())
	{
		return;
	}
	if (func_942() == 1)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), 0) };
		}
	}
	else if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_12), 0) };
	}
	if (!func_405(Var0, 0f, 0f, 0f, 0))
	{
		func_368(159, Var0, &uLocal_529, 1140457472, 1144750080, 0);
	}
}

void func_368(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_152(unk_0x0FFED3E94261A832()) && !func_271(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8)) && (func_349(unk_0x0FFED3E94261A832()) || func_348(unk_0x0FFED3E94261A832())))
	{
		return;
	}
	Global_1773245 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	func_403(iParam0, fVar0);
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_347(unk_0x0FFED3E94261A832()) || func_402(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x440E77FA46936F83(1344549371))
			{
				unk_0x23949161B04DFF2C(1344549371);
			}
		}
		else if (unk_0x440E77FA46936F83(1344549371))
		{
			unk_0x74B42EAFF204A87F(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_354(unk_0x0FFED3E94261A832(), 21))
		{
			func_401(Param1, 1, 0);
		}
		if (!*uParam4 && func_1050(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			if (func_400(iParam0))
			{
				unk_0xFBC4596E19752537(func_399(iParam0));
				if (func_398(iParam0, -1))
				{
					unk_0xE0125DCD8DB3EFC3(0);
					if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
					{
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 1);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 1);
					}
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
				}
			}
			if (func_397(iParam0))
			{
				fVar1 = func_396(iParam0);
				if (fVar1 != 1f)
				{
					func_393(fVar1);
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_392(iParam0) && func_347(unk_0x0FFED3E94261A832()))
				{
					func_390(1);
					func_389(2);
				}
			}
			func_351(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_248(unk_0x0FFED3E94261A832(), 19))
			{
				func_353(19);
			}
		}
		if (*uParam4 && func_1050(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 0;
			if (func_400(iParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
				{
					unk_0xFBC4596E19752537(1f);
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
				}
			}
			if (func_397(iParam0))
			{
				func_388();
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
			}
			if (iParam7 && !func_152(unk_0x0FFED3E94261A832()))
			{
				if (func_275(unk_0x0FFED3E94261A832()) != 152)
				{
					func_370();
				}
			}
			if (func_324(2))
			{
				func_390(0);
				func_369(2);
			}
		}
	}
}

void func_369(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_370()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_386();
	func_373(1, 1);
	func_371();
}

void func_371()
{
	func_372(0, 0);
}

void func_372(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_373(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_43), &Global_2408866, 314);
	}
	else
	{
		Global_2404996.f_43 = { Global_2408866 };
		Global_2404996.f_43.f_49 = { Global_2408866.f_49 };
		Global_2404996.f_43.f_52 = Global_2408866.f_52;
		Global_2404996.f_43.f_53 = Global_2408866.f_53;
	}
	if (bParam0)
	{
		func_385();
	}
	func_376(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_375(0);
	func_374();
}

void func_374()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_375(bool bParam0)
{
	if (bParam0)
	{
		Global_2404996.f_675 = 0;
	}
	else
	{
		Global_2404996.f_675 = 1;
	}
}

void func_376(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_384())
		{
			func_383();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_381();
		func_380(8, 0, 0, 0, 0);
		Global_2404996.f_676.f_507 = iParam11;
		Global_2404996.f_676.f_510 = iParam3;
		Global_2404996.f_676.f_511 = iParam4;
		Global_2404996.f_676.f_508 = iParam5;
		Global_2404996.f_676.f_509 = iParam6;
		Global_2404996.f_676.f_512 = iParam7;
		Global_2404996.f_676.f_513 = iParam8;
		Global_2404996.f_676.f_514 = iParam9;
		Global_2404996.f_1709 = 1;
	}
	else
	{
		func_377();
	}
}

void func_377()
{
	if (func_384() && !func_379())
	{
		func_383();
	}
	if (func_379())
	{
		func_378();
	}
	else
	{
		func_381();
		func_380(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_378()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_379()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411638 = 0;
	}
	Global_2404996.f_479 = iParam0;
	Global_2404996.f_479.f_1 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_479.f_2 = iParam1;
	Global_2404996.f_479.f_3 = iParam2;
	Global_2404996.f_479.f_4 = iParam3;
	Global_2404996.f_479.f_5 = iParam4;
}

void func_381()
{
	if (func_384() && !func_379())
	{
		func_383();
	}
	func_382();
	Global_2404996.f_676 = 0;
}

void func_382()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404996.f_676.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_383()
{
	if (func_379())
	{
		if (Global_2404996.f_676.f_515 == Global_2404996.f_1192.f_515)
		{
			return;
		}
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_1192), &(Global_2404996.f_676), 516);
		Global_2404996.f_485 = { Global_2404996.f_479 };
		Global_2404996.f_1708 = 1;
	}
}

int func_384()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_386()
{
	func_387();
	Global_2404996.f_2053 = 0;
}

void func_387()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404996.f_2054[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_388()
{
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && Global_2497344.f_4823 < 1f)
		{
			return;
		}
	}
	Global_2497344.f_4824 = -1;
	Global_2497344.f_4823 = 1f;
}

void func_389(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_390(int iParam0)
{
	if (func_391() && iParam0)
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

int func_391()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
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

void func_393(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_394())
	{
		return;
	}
	fVar0 = (Global_2497344.f_4823 - fParam0);
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && unk_0x3FEF699D13BCC798(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2497344.f_4823 = fParam0;
	Global_2497344.f_4824 = unk_0xFF09208EC90C94CB();
}

int func_394()
{
	switch (func_395())
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

int func_395()
{
	return Global_25222;
}

float func_396(int iParam0)
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
		case 225:
		case 226:
		case 227:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_397(int iParam0)
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
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
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
		case 227:
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

float func_399(int iParam0)
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

int func_400(int iParam0)
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
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_401(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

int func_402(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_347(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_403(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_404(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_363();
	}
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11174;
		
		case 142:
			return Global_262145.f_11162;
		
		case 157:
			return Global_262145.f_11129;
		
		case 159:
			return Global_262145.f_11112;
		
		case 162:
			return Global_262145.f_11223;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_405(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_406()
{
	bool bVar0;
	
	if (func_409())
	{
		bVar0 = true;
	}
	else if (func_408())
	{
		bVar0 = true;
	}
	else if (func_407(unk_0x0FFED3E94261A832()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
		{
			if (unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 2))
				{
					unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
				}
				unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
				unk_0x6E0ED8BD5BEFED4C(unk_0xA210FA5BDB2E5744(Local_121.f_12));
				unk_0x4C1FCB3943DAF647(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 0);
				unk_0x3514DF1F5B628CF2(unk_0xA210FA5BDB2E5744(Local_121.f_12), 0);
			}
		}
	}
	return bVar0;
}

int func_407(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189;
}

bool func_408()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

int func_409()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_370.f_5, 0))
	{
		return 1;
	}
	if (func_411() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
	{
		return 1;
	}
	if (func_410() && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_96 != 3)
	{
		return 1;
	}
	if (Global_2394717)
	{
		return 1;
	}
	if (Global_1574379.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_410()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 5);
}

int func_411()
{
	if (((func_414() || func_408()) || func_413()) || func_412())
	{
		return 1;
	}
	return 0;
}

bool func_412()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 1);
}

bool func_413()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_414()
{
	return Global_2445217.f_578;
}

void func_415()
{
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 6))
	{
		if (func_958())
		{
			if (func_345(unk_0x0FFED3E94261A832()) >= 1)
			{
				if (func_417(82, func_505(), 0, 0))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_379, 6);
				}
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&iLocal_379, 6);
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 15))
	{
		if (func_942() == 0 || func_942() == 3)
		{
			if (func_958())
			{
				if (func_345(unk_0x0FFED3E94261A832()) >= 1)
				{
					if (Local_121.f_5 != -1 || Local_121.f_7 != -1)
					{
						if (func_417(82, func_416(), 0, 0))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_379, 15);
						}
					}
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 15);
			}
		}
	}
}

char* func_416()
{
	switch (func_942())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_417(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_418(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_418(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_419(&uVar0, iParam0, func_504(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_419(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam3))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
	iVar1 = func_503(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		iVar2 = unk_0xCAEDBF30E3EA14FC(sParam7);
	}
	if (func_502(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_496(uParam6))
	{
		return 0;
	}
	if (func_493(iVar0, iVar1, iVar2))
	{
		if (func_492())
		{
			return 0;
		}
		func_491();
		return func_426(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_425(iParam4))
	{
		return 0;
	}
	func_420(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_420(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1345111.f_40.f_1 = iParam0;
	Global_1345111.f_40.f_2 = iParam1;
	Global_1345111.f_40.f_3 = iParam2;
	StringCopy(&(Global_1345111.f_40.f_4), sParam3, 16);
	Global_1345111.f_40.f_8 = iParam4;
	Global_1345111.f_40.f_9 = iParam5;
	Global_1345111.f_40.f_14 = uParam6;
	func_421(iParam4);
	func_491();
	Global_1345111.f_40.f_13 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 7000);
}

void func_421(int iParam0)
{
	if (func_424(iParam0))
	{
		func_423();
		return;
	}
	func_422();
}

void func_422()
{
	Global_1345111.f_40.f_10 = 0;
}

void func_423()
{
	Global_1345111.f_40.f_10 = 1;
}

int func_424(int iParam0)
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

bool func_425(int iParam0)
{
	return iParam0 > Global_1345111.f_40.f_8;
}

int func_426(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_490();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_487(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_484(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_487(uParam0, sParam3, sParam4);
		}
		return func_468(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_467(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_457(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_456(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_427(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_427(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_455();
	bVar0 = true;
	if (func_429(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_428(120000);
		return 1;
	}
	return 0;
}

void func_428(int iParam0)
{
	Global_1345111.f_40.f_11 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam0);
	Global_1345111.f_40.f_12 = 1;
}

int func_429(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_255(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
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
	sVar4 = func_454(uParam5, bParam6, &iVar3);
	uVar5 = func_452(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
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
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_451(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_433(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_432();
	}
	func_455();
	func_431();
	func_430();
	return 1;
}

void func_430()
{
	Global_1345111.f_57 = 0;
	Global_1345111.f_57.f_1 = 0;
}

void func_431()
{
	Global_1345111.f_40 = 3;
}

void func_432()
{
	unk_0xF6082E2ADA1C795B(&Global_2313, 8);
}

int func_433(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_434(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_434(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_445();
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_2600670 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_444() == 0)
	{
		func_442();
		return 0;
	}
	func_441(Global_2600669);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/]), sParam1, 64);
	Global_2599420[Global_2600669 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2599420[Global_2600669 /*104*/].f_24 = iParam2;
	}
	Global_2599420[Global_2600669 /*104*/].f_25 = iParam7;
	Global_2599420[Global_2600669 /*104*/].f_26 = uParam8;
	Global_2599420[Global_2600669 /*104*/].f_29 = uParam9;
	Global_2599420[Global_2600669 /*104*/].f_30 = uParam12;
	Global_2599420[Global_2600669 /*104*/].f_31 = uParam11;
	Global_2599420[Global_2600669 /*104*/].f_28 = 0;
	Global_2599420[Global_2600669 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_33), sParam4, 64);
	Global_2599420[Global_2600669 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_50), sParam5, 64);
	Global_2599420[Global_2600669 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_83), sParam15, 64);
	func_445();
	switch (iParam16)
	{
		case 3:
			Global_2599420[Global_2600669 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2599420[Global_2600669 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2599420[Global_2600669 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2599420[Global_2600669 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_440(0);
				break;
			
			case 1:
				func_440(1);
				break;
			
			case 2:
				func_440(2);
				break;
			
			case 3:
				func_440(3);
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
				Global_2600670 = 1;
				break;
			
			case 0:
				Global_2600670 = 1;
				break;
			
			case 2:
				Global_2600670 = 1;
				break;
			
			case 1:
				Global_2600670 = 1;
				break;
			}
	}
	Global_16814[Global_2600669] = 0;
	if (bParam10)
	{
		func_445();
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
			if (!func_439())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_438(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_435(1);
			func_438(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_435(int iParam0)
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
		if (func_437(14))
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
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_223(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_436(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_436(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_223(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_223(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_223(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_223(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_223(sParam11);
	}
	unk_0x8123397DC676E794();
}

bool func_437(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_438(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

bool func_439()
{
	return Global_1312852;
}

void func_440(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_441(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_2599420[iParam0 /*104*/].f_18 = uVar0;
	Global_2599420[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2599420[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2599420[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2599420[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2599420[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_443(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
		{
			Global_2600669 = iVar2;
		}
		iVar2++;
	}
	Global_2599420[Global_2600669 /*104*/].f_24 = 1;
}

int func_443(struct<6> Param0, struct<6> Param6)
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

int func_444()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0)
		{
			Global_2600669 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0 || Global_2599420[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_443(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
			{
				Global_2600669 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2600669 == 11)
	{
		return 0;
	}
	Global_2599420[Global_2600669 /*104*/].f_99[0] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[1] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[2] = 0;
	return 1;
}

void func_445()
{
	if (func_437(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_446();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_446()
{
	func_447();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_447()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_450(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_449(unk_0x2A5EB8B0FE590B91());
			if (func_448(iVar0) && (!func_437(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_448(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_448(int iParam0)
{
	return iParam0 < 3;
}

int func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_450(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_450(int iParam0)
{
	if (func_448(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_451(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_434(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_453(2, iParam1);
	return iParam0;
}

void func_453(int iParam0, var uParam1)
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

var func_454(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_453(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x91D2F083AE17E209(sParam0);
}

void func_455()
{
	Global_1345111.f_40.f_9 = 4;
}

int func_456(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_455();
	bVar0 = false;
	return func_429(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_457(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_458(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_458(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_255(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
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
	sVar4 = func_454(uParam5, bParam6, &iVar3);
	uVar5 = func_452(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
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
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_466(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_460(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_432();
	}
	func_459();
	func_431();
	func_430();
	return 1;
}

void func_459()
{
	Global_1345111.f_40.f_9 = 3;
}

int func_460(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_461(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_461(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_445();
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_103236.f_13832[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_465() == 0)
	{
		func_463();
		return 0;
	}
	func_462(Global_16812);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/]), sParam1, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_25 = iParam7;
	Global_103236.f_13922[Global_16812 /*104*/].f_26 = uParam8;
	Global_103236.f_13922[Global_16812 /*104*/].f_29 = uParam9;
	Global_103236.f_13922[Global_16812 /*104*/].f_30 = uParam12;
	Global_103236.f_13922[Global_16812 /*104*/].f_31 = uParam11;
	Global_103236.f_13922[Global_16812 /*104*/].f_28 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_440(0);
		func_440(2);
		func_440(1);
	}
	else
	{
		func_445();
		switch (iParam16)
		{
			case 3:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_440(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_440(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_440(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_440(3);
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
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
		{
			Global_103236.f_13832[0 /*20*/].f_17 = 1;
			Global_103236.f_13832[1 /*20*/].f_17 = 1;
			Global_103236.f_13832[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_103236.f_13832[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_103236.f_13832[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_103236.f_13832[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_103236.f_13832[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_445();
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
			if (!func_439())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_438(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_435(1);
			func_438(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_462(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_103236.f_13922[iParam0 /*104*/].f_18 = uVar0;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_463()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
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
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_464(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_464(struct<6> Param0, struct<6> Param6)
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

int func_465()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
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
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0 || Global_103236.f_13922[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_464(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
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
	Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_466(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 3;
	if (func_461(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_467(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	func_459();
	bVar0 = true;
	if (func_458(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_428(120000);
		return 1;
	}
	return 0;
}

int func_468(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xAA4F14DA15DB0B51(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 4))
	{
		bVar0 = func_483(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_474(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam4, 3))
		{
			func_473(1);
		}
		if (unk_0xAA4F14DA15DB0B51(iParam4, 5))
		{
			func_472(1);
		}
		func_471();
		func_431();
		func_470();
		func_469();
		return 1;
	}
	return 0;
}

void func_469()
{
	Global_2505523 = 0;
}

void func_470()
{
	Global_1345111.f_57 = 1;
	Global_1345111.f_57.f_1 = 0;
}

void func_471()
{
	Global_1345111.f_40.f_9 = 1;
}

void func_472(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2315, 0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2315, 0);
	}
}

void func_473(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 20);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 20);
	}
}

int func_474(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_482(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_475(sParam3, iParam4, bParam7);
}

int func_475(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_481();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_329(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_480();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_445();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_479())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_478())
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_477();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_476();
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
		func_481();
	}
	return 0;
}

void func_476()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_477()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_478()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_479()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_480()
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

void func_481()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_482(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_483(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_482(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_475(sParam3, iParam4, bParam7);
}

int func_484(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (func_486(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_485();
		func_471();
		func_431();
		func_470();
		func_469();
		return 1;
	}
	return 0;
}

void func_485()
{
	Global_16763 = 0;
}

bool func_486(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_482(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_475(sParam3, iParam4, bParam8);
}

int func_487(var uParam0, char* sParam1, char* sParam2)
{
	if (func_489(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_488();
		func_431();
		func_470();
		return 1;
	}
	return 0;
}

void func_488()
{
	Global_1345111.f_40.f_9 = 2;
}

bool func_489(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_482(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_475(sParam2, iParam3, 0);
}

void func_490()
{
	Global_1345111.f_55 = Global_1345111.f_40.f_1;
	Global_1345111.f_55.f_1 = Global_1345111.f_40.f_10;
}

void func_491()
{
	Global_1345111.f_40 = 1;
}

bool func_492()
{
	return Global_1345111.f_40 == 1;
}

int func_493(int iParam0, int iParam1, int iParam2)
{
	if (!func_494(iParam0))
	{
		return 0;
	}
	if (Global_1345111.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1345111.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_494(int iParam0)
{
	if (!func_495())
	{
		return 0;
	}
	if (!Global_1345111.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_495()
{
	if (Global_1345111.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_496(int iParam0)
{
	if (func_501())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (func_499(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1761100 || func_498())
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(uParam0, 6))
	{
		if (func_497())
		{
			return 0;
		}
	}
	return 1;
}

bool func_497()
{
	return unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1361697);
}

int func_498()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_500()
{
	return Global_1345111.f_40 == 3;
}

bool func_501()
{
	return func_478();
}

int func_502(int iParam0, int iParam1, int iParam2)
{
	if (!func_500())
	{
		return 0;
	}
	return func_493(iParam0, iParam1, iParam2);
}

int func_503(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

char* func_504()
{
	return "TXTMSG";
}

char* func_505()
{
	switch (func_942())
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

void func_506()
{
	struct<3> Var0;
	
	if (func_942() == 0)
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
		if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 7))
		{
			if (unk_0x4A2E6F541CD8C36E(Var0, func_507(), 1) < 200f)
			{
				if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
				{
					unk_0xF6082E2ADA1C795B(&iLocal_380, 7);
				}
			}
		}
		else if (unk_0x4A2E6F541CD8C36E(Var0, func_507(), 1) < 121f)
		{
			unk_0xB8B98D4ED6FB9F28(0f, 0f);
		}
	}
}

Vector3 func_507()
{
	struct<3> Var0;
	
	switch (func_942())
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

void func_508()
{
	int iVar0;
	
	if (!func_958() && !func_360())
	{
		return;
	}
	if (!func_248(unk_0x0FFED3E94261A832(), 20))
	{
		return;
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_379, 18))
		{
			if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), iLocal_528, 0))
			{
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), iLocal_528, 0);
				unk_0x507FE690B1271947(&iLocal_379, 18);
			}
			else
			{
				unk_0x507FE690B1271947(&iLocal_379, 18);
			}
		}
		else if (unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar0, 1))
		{
			if (iLocal_528 != iVar0)
			{
				iLocal_528 = iVar0;
			}
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 18))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_379, 18);
	}
}

void func_509()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_958() && !func_360())
	{
		return;
	}
	if (!func_520())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 10))
	{
		if (Local_121.f_51 > 1)
		{
			if (func_518())
			{
				if (!func_517())
				{
					if (!func_516())
					{
						unk_0xE0125DCD8DB3EFC3(func_515());
						unk_0xF6082E2ADA1C795B(&iLocal_379, 10);
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), func_515(), 0);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
					}
					else if (func_514())
					{
						unk_0xE0125DCD8DB3EFC3(func_515());
						unk_0xF6082E2ADA1C795B(&iLocal_379, 10);
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), func_515(), 0);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
					}
				}
			}
		}
	}
	else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
	{
		if (func_518())
		{
			unk_0xB5F63CA6DDCCE5AF(unk_0x0FFED3E94261A832());
			unk_0x147741DB03DD8B72(unk_0x0FFED3E94261A832());
		}
	}
	if (Local_121.f_5 != -1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 11))
		{
			if (Local_121.f_5 == unk_0x88641E5BC172153A())
			{
				unk_0xE0125DCD8DB3EFC3(func_515());
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), func_515(), 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				unk_0xF6082E2ADA1C795B(&iLocal_379, 11);
			}
			else if (func_512())
			{
				iVar0 = func_511();
				if (iVar0 != func_18())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 10))
					{
						unk_0xE0125DCD8DB3EFC3(func_515());
						unk_0xF6082E2ADA1C795B(&iLocal_379, 10);
					}
					if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar0)))
						{
							if (func_510(unk_0x2A5EB8B0FE590B91(), unk_0x1E199569E0295838(iVar0), 1) <= 200f)
							{
								unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), func_515(), 0);
								unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
								unk_0xF6082E2ADA1C795B(&iLocal_379, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_512())
		{
			unk_0x507FE690B1271947(&iLocal_379, 11);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_379, 11))
	{
		unk_0x507FE690B1271947(&iLocal_379, 11);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 8))
		{
			iVar1 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
			if (iLocal_516 != iVar1)
			{
				iLocal_516 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_958())
				{
					fVar2 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), func_507(), 1);
					if (fVar2 < 150f)
					{
						unk_0xB5F63CA6DDCCE5AF(unk_0x0FFED3E94261A832());
						unk_0x147741DB03DD8B72(unk_0x0FFED3E94261A832());
					}
				}
			}
		}
		else if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			if (iLocal_516 > 0)
			{
				unk_0xE0125DCD8DB3EFC3(func_515());
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), iLocal_516, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
			}
			unk_0x507FE690B1271947(&iLocal_379, 8);
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 8))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_379, 8);
	}
}

float func_510(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

int func_511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_121.f_5;
	if (iVar1 != -1)
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
		}
	}
	return iVar0;
}

int func_512()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_511();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	iVar1 = func_513();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_513()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

bool func_514()
{
	return (((unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 14));
}

int func_515()
{
	switch (func_942())
	{
		case 1:
			return Global_262145.f_11104;
		
		case 2:
			return Global_262145.f_11106;
		
		case 0:
			return Global_262145.f_11103;
		
		case 3:
			return Global_262145.f_11105;
		
		default:
	}
	return 5;
}

int func_516()
{
	switch (func_942())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_517()
{
	switch (func_942())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_518()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_942();
	switch (iVar0)
	{
		case 0:
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (unk_0x4A2E6F541CD8C36E(Var1, func_507(), 1) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (func_519(Var1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (func_519(Var1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				if (unk_0x4A2E6F541CD8C36E(Var1, func_507(), 1) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_519(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0x19007189599EBBF5(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_520()
{
	if (!func_522(1))
	{
		return 0;
	}
	if (func_350())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 11))
		{
			if (!func_521())
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_380, 11);
					unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_380, 11);
			}
		}
		return 0;
	}
	if (func_345(unk_0x0FFED3E94261A832()) < 1)
	{
		return 0;
	}
	if (func_958())
	{
		return 1;
	}
	if (func_360())
	{
		return 1;
	}
	return 0;
}

bool func_521()
{
	int iVar0;
	
	iVar0 = func_942();
	return iVar0 == 1;
}

int func_522(bool bParam0)
{
	if (func_354(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			return 0;
		}
	}
	if (func_137(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_71(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_330())
	{
		return 0;
	}
	if (func_354(unk_0x0FFED3E94261A832(), 0) || func_354(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_354(unk_0x0FFED3E94261A832(), 12) || func_354(unk_0x0FFED3E94261A832(), 14)) || func_354(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_544(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_527())
		{
			return 0;
		}
	}
	if (func_526())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_525(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_498())
	{
		return 0;
	}
	if (func_524(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_523(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_523(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)
{
	if (!func_1050(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_526()
{
	return Global_91829.f_310 > 0;
}

int func_527()
{
	int iVar0;
	
	iVar0 = func_275(unk_0x0FFED3E94261A832());
	if (((func_543(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_542(unk_0x0FFED3E94261A832())) || func_541(unk_0x0FFED3E94261A832())) || func_536(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_534(unk_0x0FFED3E94261A832()))
	{
		if (func_533(iVar0) || func_532(iVar0))
		{
			return 1;
		}
	}
	if (func_531(unk_0x0FFED3E94261A832()))
	{
		if (func_532(iVar0))
		{
			return 1;
		}
	}
	if (func_529(unk_0x0FFED3E94261A832()))
	{
		if (func_528(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_529(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1050(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_530(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_530(int iParam0)
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
	}
	return -1;
}

int func_531(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1050(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_530(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_532(int iParam0)
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

int func_533(int iParam0)
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

int func_534(int iParam0)
{
	if (func_535(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_535(int iParam0, int iParam1)
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

int func_536(int iParam0)
{
	if (func_537(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_537(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_538(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_538(unk_0x0FFED3E94261A832(), 0))
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

bool func_538(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_18())
	{
		if (!func_540(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_539(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_539(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_540(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_541(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1050(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_530(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_542(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1050(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_530(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_543(int iParam0)
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

int func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
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
		if (func_542(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_531(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_541(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_529(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_545()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

void func_546()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_121.f_3 != 1)
	{
		return;
	}
	if (!func_520())
	{
		if (iLocal_515 != -2)
		{
			if (iLocal_515 > -1)
			{
				iVar4 = unk_0xBA948A9E34D09E6E(iLocal_515);
				if (unk_0x9E8AB4FC19962A90(iVar4))
				{
					iVar2 = unk_0x2AFA21CE4322B48D(iVar4);
					if (iVar2 != unk_0x0FFED3E94261A832())
					{
						func_623(iVar2, 421, 0);
						if (!func_958())
						{
							func_621(iVar2, 1, 0);
							func_620(iVar2, 0, 0);
							func_619(iVar2, 0);
							func_618(iVar2, Global_262145.f_11007, 0);
						}
					}
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_513))
			{
				unk_0x789C84F1B8496AD0(&uLocal_513);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_511))
			{
				unk_0x789C84F1B8496AD0(&uLocal_511);
			}
			iLocal_515 = -2;
			func_617();
		}
		return;
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_21(Local_121.f_29[0]))
			{
				if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_29[0])))
				{
					if (unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), -1, 0) == unk_0x2A5EB8B0FE590B91())
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 8))
						{
							unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 8);
							func_363();
							func_365(0);
							if (unk_0xBDD3EABACAB97D09(uLocal_513))
							{
								unk_0x789C84F1B8496AD0(&uLocal_513);
							}
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 8))
					{
						unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 8);
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 8))
				{
					unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 8);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 8))
			{
				unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 8);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 8))
		{
			unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 8);
		}
		if (iLocal_515 != Local_121.f_7)
		{
			if (func_21(Local_121.f_29[0]))
			{
				if (Local_121.f_7 == -1)
				{
					if (func_520())
					{
						if (func_345(unk_0x0FFED3E94261A832()) >= 1)
						{
							iVar4 = unk_0xBA948A9E34D09E6E(iLocal_515);
							if (unk_0x9E8AB4FC19962A90(iVar4))
							{
								iVar2 = unk_0x2AFA21CE4322B48D(iVar4);
								if (iVar2 != unk_0x0FFED3E94261A832())
								{
									func_623(iVar2, 421, 0);
									if (!func_958())
									{
										func_621(iVar2, 1, 0);
										func_620(iVar2, 0, 0);
										func_619(iVar2, 0);
										func_618(iVar2, Global_262145.f_11007, 0);
									}
								}
							}
						}
					}
					func_614();
				}
				else
				{
					iVar4 = unk_0xBA948A9E34D09E6E(Local_121.f_7);
					if (unk_0x9E8AB4FC19962A90(iVar4))
					{
						if (func_520())
						{
							if (func_345(unk_0x0FFED3E94261A832()) >= 1)
							{
								iVar2 = unk_0x2AFA21CE4322B48D(iVar4);
								if (unk_0xBDD3EABACAB97D09(uLocal_513))
								{
									unk_0x789C84F1B8496AD0(&uLocal_513);
								}
								if (iVar2 != unk_0x0FFED3E94261A832())
								{
									if (!func_958())
									{
										if (!func_612())
										{
											func_623(iVar2, 421, 1);
											func_620(iVar2, 1, 1);
											func_621(iVar2, 1, 1);
											func_619(iVar2, 1);
											func_618(iVar2, Global_262145.f_11007, 1);
										}
										else
										{
											func_623(iVar2, 421, 1);
											func_618(iVar2, Global_262145.f_11007, 1);
										}
									}
									else if (func_612())
									{
										func_623(iVar2, 421, 1);
										func_618(iVar2, Global_262145.f_11007, 1);
									}
									else
									{
										func_623(iVar2, 421, 1);
										func_620(iVar2, 1, 1);
										func_621(iVar2, 1, 1);
										func_619(iVar2, 1);
										func_618(iVar2, Global_262145.f_11007, 1);
									}
								}
								if (iVar2 != unk_0x0FFED3E94261A832())
								{
									func_588("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_515 = Local_121.f_7;
				if (iLocal_515 == -1)
				{
				}
			}
		}
		if (func_520())
		{
			if (func_345(unk_0x0FFED3E94261A832()) > 2)
			{
				if (iLocal_515 == -1)
				{
					if (func_958())
					{
						if (!func_587("GB_AST_RETV"))
						{
							func_584("GB_AST_RETV", 0);
						}
					}
					else if (func_360())
					{
						if (!func_587("GB_AST_DESR"))
						{
							func_584("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_515 == unk_0x88641E5BC172153A())
				{
					if (func_958())
					{
						if (!func_587("GB_AST_DROPV"))
						{
							func_584("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_583();
					if (iVar2 != func_18())
					{
						if (func_939(1))
						{
							iVar3 = func_513();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_587("GB_AST_DROPBV"))
								{
									iVar0 = func_245(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_243(iVar0);
										func_571("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_587("GB_AST_DESR"))
							{
								func_584("GB_AST_DESR", 0);
							}
						}
						else if (!func_587("GB_AST_DESR"))
						{
							func_584("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_515 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_511))
			{
				unk_0x789C84F1B8496AD0(&uLocal_511);
			}
			func_614();
		}
		else if (iLocal_515 == unk_0x88641E5BC172153A())
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_513))
			{
				unk_0x789C84F1B8496AD0(&uLocal_513);
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
			{
				if (func_345(unk_0x0FFED3E94261A832()) >= 1)
				{
					if (!unk_0xBDD3EABACAB97D09(uLocal_511))
					{
						uLocal_511 = unk_0x9EDB165CAADCAB2C(func_24());
						unk_0xD42DEAFD12809447(uLocal_511, 1);
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uLocal_511))
				{
					unk_0x789C84F1B8496AD0(&uLocal_511);
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_511))
			{
				unk_0x789C84F1B8496AD0(&uLocal_511);
			}
		}
		else
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_513))
			{
				unk_0x789C84F1B8496AD0(&uLocal_513);
			}
			iVar2 = func_583();
			if (iVar2 != func_18())
			{
				if (func_939(1))
				{
					iVar3 = func_513();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
							{
								if (func_345(unk_0x0FFED3E94261A832()) >= 1)
								{
									if (!unk_0xBDD3EABACAB97D09(uLocal_511))
									{
										uLocal_511 = unk_0x9EDB165CAADCAB2C(func_24());
										unk_0xD42DEAFD12809447(uLocal_511, 1);
									}
								}
							}
							else if (unk_0xBDD3EABACAB97D09(uLocal_511))
							{
								unk_0x789C84F1B8496AD0(&uLocal_511);
							}
						}
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 2))
		{
			if (func_360())
			{
				if (!func_570(86))
				{
					if (func_345(unk_0x0FFED3E94261A832()) >= 1)
					{
						if (func_564(0, 1, 1, 1))
						{
							sVar5 = func_558(unk_0x7C214DA899F05536(Local_121.f_9));
							iVar6 = func_557(unk_0x7C214DA899F05536(Local_121.f_9));
							if (func_939(1))
							{
								func_556("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_556("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_555(1);
							unk_0xF6082E2ADA1C795B(&iLocal_379, 2);
						}
					}
				}
			}
		}
		func_549();
	}
	func_547();
}

void func_547()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_520())
	{
		return;
	}
	if (!func_958() && !func_360())
	{
		return;
	}
	bVar6 = false;
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
	{
		if (func_21(Local_121.f_29[0]))
		{
			if (Local_121.f_7 == -1)
			{
				if (!func_360())
				{
					unk_0xF9C830438D0097FD(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xF9C830438D0097FD(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_583();
				if (iVar5 != func_18())
				{
					if (!func_939(1))
					{
						unk_0xF9C830438D0097FD(6, &uVar0, &uVar1, &uVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_513();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							unk_0xF9C830438D0097FD(6, &uVar0, &uVar1, &uVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_548(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_548(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_549()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_583();
	Var1 = { func_24() };
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
	{
		if (unk_0x434105A1C45F1BED(Local_121.f_29[0]))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 9))
			{
				if (iVar0 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar0)))
					{
						if (unk_0x7DDA81F38FB30F23(unk_0x1E199569E0295838(iVar0), Var1, 6f, 6f, 2f, 1, 1, 0))
						{
							func_550(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), &uLocal_537, 0, 1);
							if (unk_0x1979A7D1D0538188(unk_0xECBE9D2902B2B964(Local_121.f_29[0])))
							{
								unk_0x650AA1AFE335239C(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), 1);
							}
							unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_550(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_553(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x7C214DA899F05536(iVar0);
				if (func_1050(iVar1, 0, 1))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar1), iParam0, 0))
					{
						func_551(func_552(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x11ABC381A58DD5AB();
		}
	}
	else if (!unk_0x1979A7D1D0538188(iParam0))
	{
		unk_0xC620100105DBAFCF(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0x650AA1AFE335239C(iParam0, 1);
		}
		unk_0xA32D9C84C1A93920(iParam0, 0);
		if (bParam2)
		{
			unk_0xF65C7766FB8D4B2C(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_551(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = -1028011646;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x5E60CE6A99DCBE0A();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 9, iParam0);
	}
}

int func_552(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

int func_553(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xCBA4F77BB9D2F115(iParam0) + 1;
	if (iParam4 || !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_554(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x2A5EB8B0FE590B91())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x769F0F6444C1ABE0(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							if (unk_0xEA49C7D4FDCF922C(unk_0xB0BB7458627D389F(iVar2)) == 0)
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
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_554(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x457D9E478E06E354(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_18())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
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

void func_555(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_301(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_284())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_556(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xCF6846167A5EFE98(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

int func_557(int iParam0)
{
	int iVar0;
	
	iVar0 = func_245(iParam0);
	if (iVar0 != -1)
	{
		return func_243(iVar0);
	}
	return 1;
}

char* func_558(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		sVar0 = func_563(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		sVar0 = func_561(iParam0, 0);
		return sVar0;
	}
	if (((func_248(iParam0, 28) || func_248(unk_0x0FFED3E94261A832(), 28)) || func_560(iParam0)) && !func_559(iParam0))
	{
		return func_561(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_561(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_563(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar0))
		{
			return func_561(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_559(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_561(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_231(iParam0, 1))
		{
			return func_562();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_562()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

var func_563(var uParam0)
{
	return uParam0;
}

int func_564(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_569())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_335())
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_70(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_568(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_567())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_566())
	{
		return 0;
	}
	if (func_565())
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_565()
{
	return Global_2445217.f_571;
}

bool func_566()
{
	return Global_2445217.f_723;
}

bool func_567()
{
	return Global_2434604.f_2791.f_578;
}

int func_568(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_569()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

bool func_570(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

void func_571(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_572(sParam0, unk_0x4325D353D7D27B34(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312575 = 15;
		Global_1312575.f_56 = iParam3;
		Global_1312575.f_57 = uParam4;
		Global_1312575.f_54 = iParam1;
	}
}

int func_572(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 63)
	{
		return 0;
	}
	if (func_582(sParam0, sParam1, sParam2) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_576();
	Global_1312575 = 10;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	StringCopy(&(Global_1312575.f_32), sParam2, 64);
	Global_1312575.f_58 = uParam4;
	Global_1312575.f_56 = uParam4;
	func_575();
	func_574(bParam3);
	func_573();
	return 1;
}

void func_573()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_574(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_575()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

void func_576()
{
	func_578();
	func_577(0);
}

void func_577(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_578()
{
	if (!func_581())
	{
	}
	if (func_580())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_579();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_579()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_580()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_581()
{
	if (!func_580())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_579();
	return unk_0x0D3452E263E036CA();
}

bool func_582(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_580())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam2) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_32));
}

int func_583()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_121.f_7;
	if (iVar1 != -1)
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
		}
	}
	return iVar0;
}

void func_584(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_585(sParam0))
	{
		return;
	}
	func_576();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_575();
	func_574(bParam1);
	func_573();
}

bool func_585(char* sParam0)
{
	if (!func_580())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_586(sParam0);
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_586(char* sParam0)
{
	if (!func_580())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_587(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_580())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_585(sParam0);
}

int func_588(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x220AE8028FACE96A(iParam1);
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var2))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		if ((iVar1 != -1 && unk_0x1B154DE2D4606530()) && iVar1 < 4)
		{
			if (Global_1638223.f_89044[iVar1] != -1)
			{
				unk_0x95CE6D748899618C(func_610(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x95CE6D748899618C(func_596(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x95CE6D748899618C(func_596(iParam1, -2, 1, 0));
		}
		unk_0xCF6846167A5EFE98(func_594(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_42(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar18 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2484502.f_21 > 0)
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
						Var2 = { func_593(&Var2) };
					}
					iVar0 = unk_0xCFCC273DCA662841(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, &Var2, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_589(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_589(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_592() || !unk_0x1B154DE2D4606530()) || !func_34(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_590(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_590(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_591(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_591(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_592()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

struct<16> func_593(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_594(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_595(&cVar0);
}

var func_595(char[4] cParam0)
{
	return cParam0;
}

int func_596(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_109(iParam0))
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
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_109(unk_0x0FFED3E94261A832()) || (func_609() && func_608())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_607();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_1050(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_610(iParam1, iParam0, 0);
							}
							else
							{
								return func_603(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_603(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_610(iParam1, iParam0, 0);
				}
				else
				{
					return func_597(0, -1, 0);
				}
			}
			else
			{
				return func_597(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_610(iParam1, iParam0, 0);
		}
		else
		{
			return func_603(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_603(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_597(bool bParam0, int iParam1, bool bParam2)
{
	return func_598(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_598(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_108(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_602(1);
				}
				else
				{
					return func_602(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_599(iVar0, iParam2, 1);
			}
			else
			{
				return func_599(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_602(1);
	}
	return func_602(0);
}

int func_599(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_601(iParam0, iParam1);
	if (func_600(Global_1638223.f_93532))
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

int func_600(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_601(int iParam0, int iParam1)
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
			if (!func_108(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_602(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_603(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_605())
			{
				iVar3 = func_245(iParam0);
				if (!iVar3 == -1)
				{
					return func_243(iVar3);
				}
			}
			if ((func_146(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_108(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_602(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_604(1);
			}
			else
			{
				return func_598(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_602(1);
			}
			else
			{
				return func_598(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_245(iParam0);
	if (!iVar4 == -1)
	{
		return func_243(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_604(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_605()
{
	if (func_227() || func_606())
	{
		return 1;
	}
	return 0;
}

var func_606()
{
	return Global_2445217.f_13;
}

var func_607()
{
	return Global_2359301.f_2;
}

bool func_608()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_609()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_610(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_605())
	{
		iVar1 = func_245(iParam1);
		if (!iVar1 == -1)
		{
			return func_243(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
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
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_598(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_611(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_611(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
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

int func_612()
{
	switch (func_942())
	{
		case 1:
			return func_613();
		
		case 0:
		case 2:
		case 3:
			return func_512();
		
		default:
	}
	return 0;
}

int func_613()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_583();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	iVar1 = func_513();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_614()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_513))
	{
		return;
	}
	if (!func_958() && !func_360())
	{
		return;
	}
	if (func_345(unk_0x0FFED3E94261A832()) < 1)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_513))
		{
			unk_0x789C84F1B8496AD0(&uLocal_513);
		}
		return;
	}
	uLocal_513 = unk_0x9E3A324AB806771E(unk_0xECBE9D2902B2B964(Local_121.f_29[0]));
	unk_0xE329891A5111516C(uLocal_513, 1);
	unk_0xE1E81CBB89115254(uLocal_513, 1);
	unk_0x697F84823ACFF84C(uLocal_513, 12);
	unk_0x9FD1808EF916E312(uLocal_513, 421);
	unk_0x0B584E556B01101F(uLocal_513, Global_262145.f_11007);
	unk_0xA6B842B66643C116(uLocal_513, "GB_AST_RHN");
	if (func_958())
	{
		func_615(&uLocal_513, 9);
	}
	else
	{
		func_615(&uLocal_513, 6);
	}
	if (func_958())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 0))
		{
			unk_0xA4F6216A8431C2E8(uLocal_513, 1);
			unk_0x43FC07DB1C2FA4B3(uLocal_513, 7000);
			unk_0x847E5C2DF89423C1();
			unk_0xF6082E2ADA1C795B(&iLocal_379, 0);
		}
	}
}

void func_615(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		iVar0 = func_616(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, iVar0);
	}
}

int func_616(int iParam0)
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
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_617()
{
	if (!func_580())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_576();
}

void func_618(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_394())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_772[iParam0]) || Global_2415029.f_772[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_541[iVar0] = uParam1;
			Global_2415029.f_772[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_772[iParam0] = -1;
		}
	}
}

void func_619(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2415029.f_365), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_365), iParam0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_2415029[iParam0]))
	{
		if (bParam1)
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 0);
		}
		else
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 1);
		}
	}
}

void func_620(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_1050(iParam0, 1, 1))
		{
			Global_2415029.f_706[iParam0] = unk_0xFF09208EC90C94CB();
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_364), iParam0);
			func_619(iParam0, bParam2);
		}
	}
	else
	{
		func_619(iParam0, bParam2);
		unk_0x507FE690B1271947(&(Global_2415029.f_364), iParam0);
		Global_2415029.f_706[iParam0] = -1;
	}
}

void func_621(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_394())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_622(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = iParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_622(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_394())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_624();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_624();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_624()
{
	Global_2415029.f_1002 = 1;
}

void func_625()
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
	
	if (Local_121.f_3 == 1)
	{
		return;
	}
	if (!func_520())
	{
		if (iLocal_514 != -2)
		{
			if (iLocal_514 > -1)
			{
				iVar2 = unk_0xBA948A9E34D09E6E(iLocal_514);
				if (unk_0x9E8AB4FC19962A90(iVar2))
				{
					iVar0 = unk_0x2AFA21CE4322B48D(iVar2);
					if (iVar0 != unk_0x0FFED3E94261A832())
					{
						func_623(iVar0, 457, 0);
						if (!func_958())
						{
							func_621(iVar0, 1, 0);
							func_620(iVar0, 0, 0);
							func_619(iVar0, 0);
							func_618(iVar0, Global_262145.f_11007, 0);
						}
						else if (Local_121.f_9 > -1)
						{
							iVar1 = unk_0x7C214DA899F05536(Local_121.f_9);
							if (unk_0x885F483F34E47503(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_621(iVar0, 1, 0);
									func_620(iVar0, 0, 0);
									func_619(iVar0, 0);
									func_618(iVar0, Global_262145.f_11007, 0);
								}
							}
						}
					}
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_510))
			{
				unk_0x789C84F1B8496AD0(&uLocal_510);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_511))
			{
				unk_0x789C84F1B8496AD0(&uLocal_511);
			}
			iLocal_514 = -2;
			func_617();
		}
		return;
	}
	if (iLocal_514 != Local_121.f_5)
	{
		if (Local_121.f_5 == -1)
		{
			if (func_520())
			{
				if (func_345(unk_0x0FFED3E94261A832()) >= 1)
				{
					iVar2 = unk_0xBA948A9E34D09E6E(iLocal_514);
					if (unk_0x9E8AB4FC19962A90(iVar2))
					{
						iVar0 = unk_0x2AFA21CE4322B48D(iVar2);
						if (iVar0 != unk_0x0FFED3E94261A832())
						{
							func_623(iVar0, 457, 0);
							if (!func_958())
							{
								func_621(iVar0, 1, 0);
								func_620(iVar0, 0, 0);
								func_619(iVar0, 0);
								func_618(iVar0, Global_262145.f_11007, 0);
							}
							else if (Local_121.f_9 > -1)
							{
								iVar1 = unk_0x7C214DA899F05536(Local_121.f_9);
								if (unk_0x885F483F34E47503(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_621(iVar0, 1, 0);
										func_620(iVar0, 0, 0);
										func_619(iVar0, 0);
										func_618(iVar0, Global_262145.f_11007, 0);
									}
								}
							}
						}
					}
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
					{
						func_645("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_514 != -1)
			{
				if (iLocal_514 > -1)
				{
					iVar2 = unk_0xBA948A9E34D09E6E(iLocal_514);
					if (unk_0x9E8AB4FC19962A90(iVar2))
					{
						iVar0 = unk_0x2AFA21CE4322B48D(iVar2);
						if (iVar0 != unk_0x0FFED3E94261A832())
						{
							if (func_345(unk_0x0FFED3E94261A832()) >= 1)
							{
								func_623(iVar0, 457, 0);
								if (!func_958())
								{
									func_621(iVar0, 1, 0);
									func_620(iVar0, 0, 0);
									func_619(iVar0, 0);
									func_618(iVar0, Global_262145.f_11007, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = unk_0xBA948A9E34D09E6E(Local_121.f_5);
			if (unk_0x9E8AB4FC19962A90(iVar2))
			{
				if (func_520())
				{
					if (func_345(unk_0x0FFED3E94261A832()) >= 1)
					{
						iVar0 = unk_0x2AFA21CE4322B48D(iVar2);
						if (func_1050(iVar0, 1, 1))
						{
							if (unk_0xBDD3EABACAB97D09(uLocal_510))
							{
								unk_0x789C84F1B8496AD0(&uLocal_510);
							}
							if (iVar0 != unk_0x0FFED3E94261A832())
							{
								if (!func_958())
								{
									if (!func_512())
									{
										func_623(iVar0, 457, 1);
										func_620(iVar0, 1, 1);
										func_621(iVar0, 1, 1);
										func_619(iVar0, 1);
										func_618(iVar0, Global_262145.f_11007, 1);
									}
									else
									{
										func_623(iVar0, 457, 1);
										func_618(iVar0, Global_262145.f_11007, 1);
									}
								}
								else if (func_512())
								{
									func_623(iVar0, 457, 1);
									func_618(iVar0, Global_262145.f_11007, 1);
								}
								else
								{
									func_623(iVar0, 457, 1);
									func_620(iVar0, 1, 1);
									func_621(iVar0, 1, 1);
									func_619(iVar0, 1);
									func_618(iVar0, Global_262145.f_11007, 1);
								}
							}
							if (iVar0 != unk_0x0FFED3E94261A832())
							{
								func_588("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_514 = Local_121.f_5;
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 2))
			{
				if (unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0x2A5EB8B0FE590B91()))
				{
					unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
					func_644(1);
					func_363();
					if (func_360())
					{
						func_365(0);
						unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 6);
					}
					if (!Global_1573333)
					{
						Global_1573333 = 1;
					}
					if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_12))
						{
							unk_0xA806066ECDF61E23(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
							unk_0xF6082E2ADA1C795B(&iLocal_379, 12);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(iLocal_379, 12))
					{
						unk_0x507FE690B1271947(&iLocal_379, 12);
						unk_0x507FE690B1271947(&iLocal_379, 13);
					}
					iLocal_518 = unk_0x9FF6FFD9EB30D086();
					if (func_301(1))
					{
						unk_0x08BE237DBCD9CBD9(iLocal_518, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0x08BE237DBCD9CBD9(iLocal_518, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_643(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_12))
						{
							unk_0xA806066ECDF61E23(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
							unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_121.f_12), Local_382, 0, 0, 1);
						}
					}
				}
			}
			else if (!unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
				if (Global_1573333)
				{
					Global_1573333 = 0;
				}
				if (unk_0x88641E5BC172153A() != Local_121.f_8)
				{
					func_644(0);
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 12))
				{
					unk_0x507FE690B1271947(&iLocal_379, 12);
					unk_0x507FE690B1271947(&iLocal_379, 13);
				}
			}
			else
			{
				if (func_643(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0x434105A1C45F1BED(Local_121.f_12))
					{
						unk_0xA806066ECDF61E23(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
						unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_121.f_12), Local_382, 0, 0, 1);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 12))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 13))
					{
						if (func_564(0, 1, 1, 1))
						{
							func_642("GB_ASLT_SUB", -1);
							unk_0xF6082E2ADA1C795B(&iLocal_379, 13);
						}
					}
				}
			}
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 2))
	{
		unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 2);
	}
	if (iLocal_514 == -1)
	{
		if (func_520())
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_510))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
				{
					func_641();
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 5))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_379, 5);
					unk_0x789C84F1B8496AD0(&uLocal_510);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
			{
				if (func_345(unk_0x0FFED3E94261A832()) >= 1)
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[0]))
					{
						if (!func_10(Local_121.f_13[0]))
						{
							unk_0xF9C830438D0097FD(6, &uVar3, &uVar4, &uVar5, &uVar6);
							unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_13[0]), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
						}
					}
				}
			}
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_511))
		{
			unk_0x789C84F1B8496AD0(&uLocal_511);
		}
	}
	else if (iLocal_514 == unk_0x88641E5BC172153A())
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_510))
		{
			unk_0x789C84F1B8496AD0(&uLocal_510);
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
		{
			if (func_345(unk_0x0FFED3E94261A832()) >= 1)
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_511))
				{
					uLocal_511 = unk_0x9EDB165CAADCAB2C(func_24());
					unk_0xD42DEAFD12809447(uLocal_511, 1);
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_511))
			{
				unk_0x789C84F1B8496AD0(&uLocal_511);
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uLocal_511))
		{
			unk_0x789C84F1B8496AD0(&uLocal_511);
		}
	}
	else
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_510))
		{
			unk_0x789C84F1B8496AD0(&uLocal_510);
		}
		iVar0 = func_511();
		if (iVar0 != func_18())
		{
			if (func_939(1))
			{
				iVar1 = func_513();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
						{
							if (func_345(unk_0x0FFED3E94261A832()) >= 1)
							{
								if (!unk_0xBDD3EABACAB97D09(uLocal_511))
								{
									uLocal_511 = unk_0x9EDB165CAADCAB2C(func_24());
									unk_0xD42DEAFD12809447(uLocal_511, 1);
								}
							}
						}
						else if (unk_0xBDD3EABACAB97D09(uLocal_511))
						{
							unk_0x789C84F1B8496AD0(&uLocal_511);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_520())
		{
			if (func_345(unk_0x0FFED3E94261A832()) >= 1)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_513();
						if (func_939(1))
						{
							if (unk_0x885F483F34E47503(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									unk_0xF9C830438D0097FD(6, &uVar3, &uVar4, &uVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							unk_0xF9C830438D0097FD(6, &uVar3, &uVar4, &uVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar0)))
							{
								if (unk_0xC4A39E4229BD3ABE(unk_0x1E199569E0295838(iVar0), 0) && unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x1E199569E0295838(iVar0), 1), 0))
								{
									func_548(unk_0x0C20E539D876C5B3(unk_0x1E199569E0295838(iVar0), 1), uVar3, uVar4, uVar5, 0);
								}
								else
								{
									unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iVar0), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 4))
	{
		unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 4);
	}
	if (func_520())
	{
		if (func_345(unk_0x0FFED3E94261A832()) > 2)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 6))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
				{
					if (iLocal_514 == -1)
					{
						if (func_958())
						{
							if (!func_587("GB_AST_RETP"))
							{
								func_584("GB_AST_RETP", 0);
							}
						}
						else if (func_360())
						{
							if (!func_587("GB_AST_RETP"))
							{
								func_584("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_514 == unk_0x88641E5BC172153A())
					{
						if (!func_587("GB_AST_DROP"))
						{
							func_584("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_511();
						if (iVar0 != func_18())
						{
							if (func_939(1))
							{
								iVar1 = func_513();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_587("GB_AST_DROPB"))
									{
										iVar16 = func_245(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_243(iVar16);
											func_571("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_587("GB_AST_RETNG"))
									{
										func_638("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_587("GB_AST_RETGR"))
								{
									sVar18 = func_558(iVar0);
									func_635("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_587("GB_AST_RETNG"))
								{
									func_638("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_587("GB_AST_RETGR"))
							{
								sVar18 = func_558(iVar0);
								func_635("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_634() };
					if (!func_587(&Var8))
					{
						func_584(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_617();
		}
	}
	else
	{
		func_617();
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 2))
	{
		if (func_360())
		{
			if (!func_570(86))
			{
				if (func_345(unk_0x0FFED3E94261A832()) >= 1)
				{
					if (func_564(0, 1, 1, 1))
					{
						sVar18 = func_558(unk_0x7C214DA899F05536(Local_121.f_9));
						iVar19 = func_557(unk_0x7C214DA899F05536(Local_121.f_9));
						if (func_939(1))
						{
							if (Local_121.f_5 > -1)
							{
								func_556("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_556("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_121.f_5 > -1)
						{
							func_556("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_556("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_555(1);
						unk_0xF6082E2ADA1C795B(&iLocal_379, 2);
					}
				}
			}
		}
	}
	func_628();
	func_627();
	func_626();
}

void func_626()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_520())
	{
		return;
	}
	if (func_345(unk_0x0FFED3E94261A832()) >= 1)
	{
		if (unk_0x3756406E4D76B25E(Local_121.f_12) && !unk_0xA9A04898798AE9E6(unk_0xA210FA5BDB2E5744(Local_121.f_12), 0))
		{
			if (!unk_0xA6A04A00C612EAA5(unk_0xA210FA5BDB2E5744(Local_121.f_12)))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 3) && !unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
				{
					unk_0xF9C830438D0097FD(18, &uVar0, &uVar1, &uVar2, &uVar3);
					unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_121.f_12), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_627()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_511();
	Var1 = { func_24() };
	if (unk_0xBDD3EABACAB97D09(uLocal_511))
	{
		unk_0xF9C830438D0097FD(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0x47C0431D5D179992(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 3))
	{
		if (iVar0 == unk_0x0FFED3E94261A832())
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar0)))
			{
				if (unk_0x7DDA81F38FB30F23(unk_0x1E199569E0295838(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_628()
{
	struct<3> Var0;
	bool bVar3;
	struct<26> Var4;
	
	switch (iLocal_519)
	{
		case 0:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_121.f_12), 1) };
				if (!func_405(Local_521, 0f, 0f, 0f, 0))
				{
					Local_521 = { 0f, 0f, 0f };
				}
				if (func_629(Var0, iLocal_520, 0))
				{
					iLocal_519++;
				}
				if (iLocal_519 == 0)
				{
					iLocal_520++;
				}
				if (iLocal_520 >= 36)
				{
					iLocal_520 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_121.f_5 == -1)
			{
				if (unk_0x434105A1C45F1BED(Local_121.f_12))
				{
					bVar3 = true;
					if (func_405(Local_521, 0f, 0f, 0f, 0))
					{
						Local_521 = { unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_121.f_12), 1) };
					}
				}
			}
			else if (Local_121.f_5 == unk_0x88641E5BC172153A())
			{
				if (unk_0x434105A1C45F1BED(Local_121.f_12))
				{
					if (func_405(Local_521, 0f, 0f, 0f, 0))
					{
						Local_521 = { unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_121.f_12), 1) };
					}
					bVar3 = true;
				}
				else
				{
					unk_0x47ABF422A76CAA6A(Local_121.f_12);
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
				Var4.f_13[0 /*3*/] = { Local_521 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (unk_0x434105A1C45F1BED(Local_121.f_12))
				{
					if (func_46(Local_521, 20f, &Local_524, &uLocal_527, Var4))
					{
						Local_524 = { Local_524 + Vector(0.5f, 0f, 0f) };
						if (unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0x2A5EB8B0FE590B91()))
						{
							unk_0x6E0ED8BD5BEFED4C(unk_0xA210FA5BDB2E5744(Local_121.f_12));
						}
						unk_0x8F35D7268F7D4402(unk_0xA210FA5BDB2E5744(Local_121.f_12), Local_524, 0, 0, 1);
						unk_0xE77EEA92586CF2E8(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1);
						unk_0x4C1FCB3943DAF647(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
						unk_0xF6082E2ADA1C795B(&iLocal_380, 3);
						iLocal_519 = 0;
					}
				}
			}
			else if (Local_121.f_5 != unk_0x88641E5BC172153A())
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x7BAE3A9057619E1F(Local_121.f_12), 1) };
				if (!func_629(Var0, iLocal_520, 0))
				{
					iLocal_519 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_380, 3))
	{
		if (func_564(0, 1, 1, 1))
		{
			unk_0x507FE690B1271947(&iLocal_380, 3);
			func_642("GB_HLP_WRP", -1);
		}
	}
}

int func_629(struct<3> Param0, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (func_633(iParam3))
	{
		func_630(iParam3, &Var0, &Var3, &uVar6, fParam4);
		return unk_0x19007189599EBBF5(Param0, Var0, Var3, uVar6, 0, 1);
	}
	return 0;
}

void func_630(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	Var0 = { func_632(iParam0) };
	uVar3 = func_631(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_68(&Var4, 0f, 0f, uVar3);
	Var4 = { Var4 / FtoV(unk_0x652D2EEEF1D3E62C(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_631(int iParam0)
{
	return Global_4006256[iParam0 /*45*/].f_7;
}

Vector3 func_632(int iParam0)
{
	return Global_4006256[iParam0 /*45*/].f_4;
}

int func_633(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_634()
{
	struct<8> Var0;
	
	switch (func_942())
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

void func_635(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_636(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 16;
		Global_1312575.f_56 = iParam2;
	}
}

int func_636(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (func_637(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_576();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = iParam3;
	Global_1312575.f_56 = iParam3;
	func_575();
	func_574(bParam2);
	func_573();
	return 1;
}

bool func_637(char* sParam0, char* sParam1)
{
	if (!func_580())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam1))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_638(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_639(sParam0, unk_0x4325D353D7D27B34(iParam1), bParam3, 1);
}

int func_639(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam1) > 63)
	{
		return 0;
	}
	if (func_640(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312575.f_54;
	func_576();
	Global_1312575 = 9;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = iParam3;
	Global_1312575.f_56 = iParam3;
	Global_1312575.f_54 = uVar0;
	func_575();
	func_574(bParam2);
	func_573();
	return 1;
}

bool func_640(char* sParam0, char* sParam1)
{
	if (!func_580())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

void func_641()
{
	if (func_345(unk_0x0FFED3E94261A832()) < 1)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_510))
		{
			unk_0x789C84F1B8496AD0(&uLocal_510);
		}
		return;
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_510))
	{
		return;
	}
	uLocal_510 = unk_0x9E3A324AB806771E(unk_0x7BAE3A9057619E1F(Local_121.f_12));
	unk_0x697F84823ACFF84C(uLocal_510, 12);
	unk_0x9FD1808EF916E312(uLocal_510, 457);
	unk_0xE329891A5111516C(uLocal_510, 1);
	unk_0xE1E81CBB89115254(uLocal_510, 1);
	unk_0x0B584E556B01101F(uLocal_510, Global_262145.f_11007);
	unk_0xA6B842B66643C116(uLocal_510, "GB_AST_BLIP");
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
	{
		if (func_958())
		{
			func_615(&uLocal_510, 18);
		}
		else
		{
			func_615(&uLocal_510, 18);
		}
	}
	else
	{
		func_615(&uLocal_510, 6);
	}
	if (func_958())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 0))
		{
			unk_0xA4F6216A8431C2E8(uLocal_510, 1);
			unk_0x43FC07DB1C2FA4B3(uLocal_510, 7000);
			unk_0x847E5C2DF89423C1();
			unk_0xF6082E2ADA1C795B(&iLocal_379, 0);
		}
	}
}

void func_642(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

bool func_643(int iParam0)
{
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	if (unk_0xA9A04898798AE9E6(iParam0, 0))
	{
	}
	return unk_0xD05429D1ADB47D25(iParam0) == Global_141369;
}

void func_644(bool bParam0)
{
	if (bParam0)
	{
		if (!func_248(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_345(unk_0x0FFED3E94261A832()) != 0)
			{
				func_351(9);
			}
		}
	}
	else if (func_248(unk_0x0FFED3E94261A832(), 9))
	{
		func_353(9);
	}
}

int func_645(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_589(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_646()
{
	struct<8> Var0;
	char[] cVar8[8];
	int iVar9;
	
	if (func_350())
	{
		return;
	}
	if (func_345(unk_0x0FFED3E94261A832()) == 0)
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 5))
	{
		if (!func_958())
		{
			if (((Local_121.f_5 != -1 || Local_121.f_7 != -1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 20))
			{
				unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 5);
				unk_0x768882AFD4B41EEA(1);
				if (unk_0x3756406E4D76B25E(Local_121.f_12))
				{
					unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 0, 1);
				}
				cVar8 = func_558(unk_0x7C214DA899F05536(Local_121.f_9));
				iVar9 = func_557(unk_0x7C214DA899F05536(Local_121.f_9));
				if (func_19(unk_0x0FFED3E94261A832(), 1))
				{
					Var0 = { func_661(1) };
					if (func_520())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 0)
						{
							func_647(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_894(-1, 0, 0, -1);
				}
				else
				{
					Var0 = { func_661(0) };
					if (func_520())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 0)
						{
							func_647(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_894(-1, 0, 0, -1);
				}
				func_390(1);
			}
		}
	}
}

int func_647(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_648(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_648(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_660(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_649(&Var0);
}

int func_649(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_659(uParam0, uParam0->f_16);
	func_658(uParam0);
	if (func_657(uParam0->f_1))
	{
		func_650();
		if (Global_2434604.f_2483[0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434604.f_2483[0 /*76*/].f_1 == 13 || Global_2434604.f_2483[0 /*76*/].f_1 == 53) || Global_2434604.f_2483[0 /*76*/].f_1 == 54) || Global_2434604.f_2483[0 /*76*/].f_1 == 58)
		{
			Global_2434604.f_2483[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434604.f_2483[iVar0 + 1 /*76*/] = { Global_2434604.f_2483[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434604.f_2483[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_650();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 1);
				Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_287(Global_2434604.f_2483[iVar0 /*76*/].f_1))
				{
					Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
					unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_650()
{
	bool bVar0;
	
	if (Global_2434604.f_2790)
	{
		return;
	}
	if (!Global_70068)
	{
		Global_70068 = 1;
		bVar0 = true;
	}
	func_651();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_651()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_655(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_652(&(Global_2434604.f_2791.f_1));
}

void func_652(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x73F5E7B6BB964839(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x5018862FF5D9F844())
		{
			unk_0xD1FCC52F87A98873(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
		unk_0x73F5E7B6BB964839(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x6F0F1C5EEC77F84A(0);
		uParam0->f_564 = 0;
	}
	if (!Global_70068)
	{
		if (!unk_0x859EE44BE17CBC0F(unk_0x8A41C463063AFC8E()))
		{
			if (!Global_70069)
			{
				if (unk_0xF4EE9D6C8E60AE22() && !func_654(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_653(0);
}

void func_653(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_654(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_655(var uParam0)
{
	func_656(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_656(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_657(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_658(var uParam0)
{
	if (func_289(uParam0->f_1))
	{
		uParam0->f_70 = func_246();
	}
}

void func_659(var uParam0, int iParam1)
{
	if (func_289(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_18())
	{
		return;
	}
	if (func_287(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_596(iParam1, -2, 0, 0);
		}
	}
}

void func_660(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

struct<8> func_661(bool bParam0)
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_942())
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
		switch (func_942())
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

void func_662()
{
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 12))
		{
			if (func_348(unk_0x0FFED3E94261A832()))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_380, 12);
				unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
			}
			else if (func_345(unk_0x0FFED3E94261A832()) < 1)
			{
				unk_0xF6082E2ADA1C795B(&iLocal_380, 12);
				unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
			}
		}
		else if (!func_348(unk_0x0FFED3E94261A832()))
		{
			if (func_345(unk_0x0FFED3E94261A832()) >= 1)
			{
				unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 0, 1);
				unk_0x507FE690B1271947(&iLocal_380, 12);
			}
		}
	}
}

void func_663()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	char* sVar18;
	char[] cVar22[8];
	char[] cVar26[8];
	char[] cVar30[8];
	char[] cVar34[8];
	char* sVar38;
	char* sVar42;
	int iVar43;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 1))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 6))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
			{
				func_866(&sVar18, &cVar22, &cVar26, &cVar30, &cVar34, &sVar38);
				if (func_520())
				{
					iVar0 = unk_0x7C214DA899F05536(Local_121.f_6);
					if (iVar0 == unk_0x0FFED3E94261A832())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(87, "GB_WINNER", &sVar18, 1, -1, 2);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
							func_832(1, 1, 0, 0, -1, -1, -1, -1);
						}
						func_681(159, 1, &Var2, 0);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
					}
					else if (func_19(unk_0x0FFED3E94261A832(), 1))
					{
						iVar1 = func_513();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_345(unk_0x0FFED3E94261A832()) > 1)
							{
								sVar42 = func_680();
								iVar43 = func_557(unk_0x0FFED3E94261A832());
								func_647(87, "GB_WINNER", &cVar22, sVar42, iVar43, 0, -1, -1, -1, 2, -1);
							}
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(1, 1, 0, 0, -1, -1, -1, -1);
							}
							if (func_959() == Local_121.f_8)
							{
								func_681(159, 1, &Var2, 0);
							}
							else
							{
								func_681(159, 0, &Var2, 0);
							}
							unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
						}
						else
						{
							if (func_345(unk_0x0FFED3E94261A832()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar42 = func_558(iVar0);
									iVar43 = func_557(iVar0);
								}
								else
								{
									sVar42 = unk_0x4325D353D7D27B34(iVar0);
									iVar43 = 1;
								}
								if (func_942() != 1)
								{
									func_647(88, "GB_WORK_OVER", &cVar26, sVar42, iVar43, 0, -1, -1, -1, 2, -1);
								}
								else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
								{
									func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
								}
							}
							func_681(159, 0, &Var2, 0);
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
							func_681(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar42 = func_558(iVar0);
								iVar43 = func_557(iVar0);
							}
							else
							{
								sVar42 = unk_0x4325D353D7D27B34(iVar0);
								iVar43 = 1;
							}
							if (func_942() != 1)
							{
								func_647(88, "GB_WORK_OVER", &cVar26, sVar42, iVar43, 0, -1, -1, -1, 2, -1);
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
							{
								func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
							func_832(0, 2, 0, 0, -1, -1, -1, -1);
						}
						func_681(159, 0, &Var2, 0);
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
			{
				if (Local_121.f_6 > -1)
				{
					iVar0 = unk_0x7C214DA899F05536(Local_121.f_6);
				}
				if (func_520())
				{
					if (func_958())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							if (unk_0x885F483F34E47503(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar42 = func_558(iVar0);
									iVar43 = func_557(iVar0);
								}
								else
								{
									sVar42 = unk_0x4325D353D7D27B34(iVar0);
									iVar43 = 1;
								}
								func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
							}
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else if (Local_121.f_6 > -1)
					{
						if (func_19(unk_0x0FFED3E94261A832(), 1))
						{
							iVar1 = func_513();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == unk_0x0FFED3E94261A832())
								{
									if (func_345(unk_0x0FFED3E94261A832()) > 1)
									{
										func_920(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
									}
								}
								else if (func_345(unk_0x0FFED3E94261A832()) > 1)
								{
									iVar43 = func_557(unk_0x0FFED3E94261A832());
									sVar42 = func_680();
									func_647(87, "GB_WINNER", "BIGM_ASL_DESG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
								}
								if (func_958() || func_360())
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
									{
										unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
										func_832(1, 1, 0, 0, -1, -1, -1, -1);
									}
								}
								if (Local_121.f_6 == unk_0x0FFED3E94261A832())
								{
									func_681(159, 1, &Var2, 0);
								}
								else
								{
									func_681(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_345(unk_0x0FFED3E94261A832()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar42 = func_558(iVar0);
										iVar43 = func_557(iVar0);
									}
									else
									{
										sVar42 = unk_0x4325D353D7D27B34(iVar0);
										iVar43 = 1;
									}
									func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
								}
								if (func_958() || func_360())
								{
									if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
									{
										unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
										func_832(0, 2, 0, 0, -1, -1, -1, -1);
									}
								}
								func_681(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == unk_0x0FFED3E94261A832())
						{
							if (func_345(unk_0x0FFED3E94261A832()) > 1)
							{
								func_920(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
							}
							if (func_958() || func_360())
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
								{
									unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
									func_832(1, 1, 0, 0, -1, -1, -1, -1);
								}
							}
							func_681(159, 1, &Var2, 0);
						}
						else
						{
							if (func_345(unk_0x0FFED3E94261A832()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar42 = func_558(iVar0);
									iVar43 = func_557(iVar0);
								}
								else
								{
									sVar42 = unk_0x4325D353D7D27B34(iVar0);
									iVar43 = 1;
								}
								func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
							}
							if (func_958() || func_360())
							{
								if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
								{
									unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
									func_832(0, 2, 0, 0, -1, -1, -1, -1);
								}
							}
							func_681(159, 0, &Var2, 0);
						}
					}
					else if (func_19(unk_0x0FFED3E94261A832(), 1))
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							sVar42 = func_680();
							iVar43 = func_557(unk_0x0FFED3E94261A832());
							func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 15))
			{
				if (func_520())
				{
					if (func_958())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x0FFED3E94261A832(), 1))
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							sVar42 = func_680();
							iVar43 = func_557(unk_0x0FFED3E94261A832());
							func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
			{
				if (func_520())
				{
					if (func_958())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x0FFED3E94261A832(), 1))
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							sVar42 = func_680();
							iVar43 = func_557(unk_0x0FFED3E94261A832());
							func_647(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar42, iVar43, 0, -1, -1, -1, 2, -1);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
					else
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_958() || func_360())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
								func_832(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_681(159, 0, &Var2, 0);
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				func_866(&sVar18, &cVar22, &cVar26, &cVar30, &cVar34, &sVar38);
				if (func_520())
				{
					if (func_19(unk_0x0FFED3E94261A832(), 1))
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", &sVar38, 1, -1, 2);
						}
					}
					else if (func_345(unk_0x0FFED3E94261A832()) > 1)
					{
						func_920(88, "GB_WORK_OVER", &sVar38, 1, -1, 2);
					}
				}
				if (func_958() || func_360())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
						func_832(0, 7, 0, 0, -1, -1, -1, -1);
					}
				}
				func_681(159, 0, &Var2, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (func_520())
				{
					if (func_958())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
						}
					}
					else if (func_345(unk_0x0FFED3E94261A832()) > 1)
					{
						func_920(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2);
					}
				}
				if (func_958() || func_360())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
						func_832(0, 8, 0, 0, -1, -1, -1, -1);
					}
				}
				func_681(159, 0, &Var2, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9))
			{
				if (func_520())
				{
					if (func_958())
					{
						if (func_345(unk_0x0FFED3E94261A832()) > 1)
						{
							func_920(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
						}
					}
					else if (func_345(unk_0x0FFED3E94261A832()) > 1)
					{
						func_920(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
					}
				}
				if (func_958() || func_360())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
						func_832(0, 2, 0, 0, -1, -1, -1, -1);
					}
				}
				func_681(159, 0, &Var2, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_380, 6);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_380, 6))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 8))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 19))
				{
					iLocal_517 = -1;
					unk_0xDC0343058D861402(iLocal_517);
				}
				func_617();
				unk_0xF6082E2ADA1C795B(&iLocal_380, 8);
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 20))
				{
					unk_0x988197573BDAD49A("BG_ASSAULT_STOP");
					unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
					unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
				}
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_513))
			{
				unk_0x789C84F1B8496AD0(&uLocal_513);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_512))
			{
				unk_0x789C84F1B8496AD0(&uLocal_512);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_510))
			{
				unk_0x789C84F1B8496AD0(&uLocal_510);
			}
			func_679();
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 29))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 29);
			}
			if (func_664(&uLocal_530, 1, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 1);
			}
		}
	}
}

int func_664(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_351(29);
	if ((*uParam0 > 0 && !func_284()) && func_345(unk_0x0FFED3E94261A832()) != 0)
	{
		if (!func_678())
		{
			func_677();
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
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 2);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_676(uParam0, 1);
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
				func_671(iParam2);
				func_676(uParam0, 2);
			}
			break;
		
		case 2:
			func_671(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_665(func_666(0)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_676(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
				func_676(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_665(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

char* func_666(int iParam0)
{
	if (((func_669(unk_0x0FFED3E94261A832()) || func_668(unk_0x0FFED3E94261A832())) || func_302()) || iParam0)
	{
		if (func_668(unk_0x0FFED3E94261A832()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_277(func_667()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_667()
{
	return Global_1636589;
}

bool func_668(int iParam0)
{
	return func_278(func_275(iParam0), 0);
}

bool func_669(int iParam0)
{
	return func_670(func_275(iParam0));
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_233(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
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

void func_671(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if ((((((((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_1050(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22()) && !func_248(unk_0x0FFED3E94261A832(), 22)) && func_345(unk_0x0FFED3E94261A832()) != 0) && !func_674(func_675())) && !func_669(unk_0x0FFED3E94261A832())) && !func_673(func_275(unk_0x0FFED3E94261A832())))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_672(func_666(iParam0), -1);
			func_555(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_672(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_673(int iParam0)
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

int func_674(int iParam0)
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

int func_675()
{
	var uVar0;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

void func_676(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_677()
{
	Global_2456236 = 1;
}

int func_678()
{
	if (((((((func_275(unk_0x0FFED3E94261A832()) == 170 || func_275(unk_0x0FFED3E94261A832()) == 219) || func_275(unk_0x0FFED3E94261A832()) == 221) || func_275(unk_0x0FFED3E94261A832()) == 220) || func_275(unk_0x0FFED3E94261A832()) == 216) || func_275(unk_0x0FFED3E94261A832()) == 215) || func_275(unk_0x0FFED3E94261A832()) == 214) || func_275(unk_0x0FFED3E94261A832()) == 218)
	{
		return 1;
	}
	if (func_531(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

void func_679()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 9))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_380, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					if (func_521())
					{
						func_623(iVar1, 421, 0);
					}
					else
					{
						func_623(iVar1, 457, 0);
					}
					func_621(iVar1, 1, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_680()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_41(unk_0x0FFED3E94261A832());
	if (iVar0 != func_18())
	{
		if (iVar0 != unk_0x0FFED3E94261A832())
		{
			if (((func_248(iVar0, 28) || func_248(unk_0x0FFED3E94261A832(), 28)) || func_560(iVar0)) && !func_559(iVar0))
			{
				return func_561(iVar0, 0);
			}
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_561(iVar0, 0);
			}
		}
		sVar1 = func_563(&(Global_1622795[iVar0 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar1))
		{
			return func_561(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_681(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	int iVar15;
	
	func_830(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16829);
		}
		else
		{
			iVar1 = (iVar1 + func_829(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_828(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16828);
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
	if (func_826(iParam0))
	{
		if (bParam1)
		{
			if (func_825(unk_0x0FFED3E94261A832()) > 0)
			{
				func_824();
			}
			else
			{
				func_823();
			}
		}
		else
		{
			func_822();
		}
	}
	func_806(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_803(iParam0, uParam2, &iVar0, &uVar5);
	func_764(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_304();
	if (iVar6 != func_18() && iParam0 != 148)
	{
		if (func_19(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_16(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_755(&iVar0, 1);
			}
		}
	}
	func_752(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_751();
		func_709(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_513();
		if (iVar11 != func_18())
		{
			func_708(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_939(1);
		if (iParam0 == 168)
		{
			if (!func_707())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_706())
			{
				if (!func_707())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_707())
			{
				func_697(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2595364[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_696())
			{
				if (!func_707())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_707())
			{
				func_697(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_707())
		{
			func_697(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_695(iParam0, iVar0);
		if (func_694(iParam0))
		{
			if (func_693(iParam0) > -1)
			{
				func_692(func_693(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_691(&Global_2455167, 0, 0);
	}
	if (func_347(unk_0x0FFED3E94261A832()) || func_247(unk_0x0FFED3E94261A832()))
	{
		func_682(iParam0);
	}
	if (func_670(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_673(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_528(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

void func_682(int iParam0)
{
	if (func_690(unk_0x0FFED3E94261A832()) && func_706())
	{
		if (func_533(iParam0))
		{
			func_685(6303, -1);
		}
		else if (func_684(iParam0))
		{
			func_685(6305, -1);
		}
		else if (func_278(iParam0, 1))
		{
			func_685(6306, -1);
		}
		else if (func_683(iParam0))
		{
			func_685(6307, -1);
		}
	}
}

int func_683(int iParam0)
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

int func_684(int iParam0)
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

void func_685(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_689(iParam0, func_358(iParam1), 0);
	iVar0++;
	if (!func_688(iParam0))
	{
		func_687(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_686(iParam0, iVar0, iParam1, 1);
	}
}

void func_686(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_358(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_358(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_358(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_358(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_358(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_358(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_358(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_358(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_358(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_358(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_358(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_358(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_358(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_358(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_358(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_358(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_358(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_358(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_358(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_358(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_358(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_358(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_358(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_358(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_358(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_358(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_358(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_358(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_358(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_358(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_358(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_358(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_358(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_687(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_358(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_688(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

int func_689(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_358(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_690(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_691(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

void func_692(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2497344.f_271 = iParam0;
		if (iParam1 > Global_262145.f_5500)
		{
			iParam1 = Global_262145.f_5500;
		}
		Global_2497344.f_272 = iParam1;
		Global_2497344.f_273 = 0;
	}
}

int func_693(int iParam0)
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

int func_694(int iParam0)
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

void func_695(int iParam0, int iParam1)
{
	if (func_690(unk_0x0FFED3E94261A832()) && func_706())
	{
		if (func_533(iParam0) && iParam1 > 0)
		{
			func_687(6304, (func_689(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

bool func_696()
{
	return func_20(unk_0x0FFED3E94261A832());
}

void func_697(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_707())
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
		case -135813048:
			if (iParam1 > 0)
			{
				func_698(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_698(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_698(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_707())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_36()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_705(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_704(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_699(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_699(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_700(iParam0);
	}
}

void func_700(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_707())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_703(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_701(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_701(var uParam0)
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
	func_702(&(uParam0->f_8.f_3));
	func_702(&(uParam0->f_8.f_16));
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

void func_702(var uParam0)
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

int func_703(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_704(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_705(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_707())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = uParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = uParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_706()
{
	return func_303(unk_0x0FFED3E94261A832());
}

int func_707()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

void func_708(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_709(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_710(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_710(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_720(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_716(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_711(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_711(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_714(iParam0, 1) };
	if (iParam0 == func_713(unk_0x2A5EB8B0FE590B91()))
	{
		func_712(1);
	}
	func_716(Var0, iParam1, 0, sParam2, iParam3);
}

void func_712(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_713(var uParam0)
{
	return uParam0;
}

Vector3 func_714(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_715(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_715(var uParam0)
{
	return uParam0;
}

void func_716(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_719(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_718();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_717();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_717()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_718()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_719(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
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

var func_720(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_721(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_721(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_750(unk_0x0FFED3E94261A832()) || func_749(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_748(uParam2))
	{
	}
	if (func_747())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_745(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_744(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_742(0, &iVar1);
					break;
				
				case 3:
					func_742(1, &iVar1);
					break;
				
				case 1:
					func_740(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
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
			func_739(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_731((func_738(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_739(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_726(iVar1);
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
				func_722((func_724(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_722((func_724(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_722(int iParam0)
{
	if (func_747())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_723(joaat("mpply_globalxp"), iParam0);
	}
}

void func_723(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_724(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1050(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_725(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_725(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_725(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_726(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_42(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_729(func_730(&Var0));
			if (iVar13 == 0)
			{
				func_728(&Global_1361887, iParam0);
				func_727(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_728(&Global_1361888, iParam0);
				func_727(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_728(&Global_1361889, iParam0);
				func_727(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_728(&Global_1361890, iParam0);
				func_727(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_728(&Global_1361891, iParam0);
				func_727(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_727(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_728(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_729(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_730(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_731(int iParam0, int iParam1, int iParam2)
{
	if (func_747())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_358(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_358(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_737(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_735(iParam0, 1);
		}
		func_686(635, iParam0, -1, 1);
		func_687(636, func_735(iParam0, 1), -1, 1, 0);
		Global_1362002[func_358(-1)] = iParam0;
		func_732(7, 0);
	}
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_734(iParam0, iParam1))
	{
		iVar0 = func_733();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_733()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_734(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_735(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_736(iParam0, 0);
}

int func_736(int iParam0, int iParam1)
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
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
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

int func_737(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_738(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_358(-1)];
			}
			else if (func_737(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_358(-1)];
	}
	return 0;
}

void func_739(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_689(iParam0, func_358(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_688(iParam0))
	{
		func_687(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_686(iParam0, iVar0, iParam2, 1);
	}
}

void func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_108(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_43(unk_0x0FFED3E94261A832(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_741(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_741(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_741(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_742(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_1050(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_43(unk_0x0FFED3E94261A832(), iVar4))
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
			if (func_1050(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_743(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_43(unk_0x0FFED3E94261A832(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_741(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_741(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_743(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_37(iParam0), func_37(iParam1));
	return 0f;
}

int func_744(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_741(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_745(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_738(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_738(unk_0x0FFED3E94261A832());
		}
	}
	if (func_746(8000, 0, 0) > 0)
	{
		if (func_746(8000, 0, 0) < (iParam0 + func_738(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_746(8000, 0, 0) - func_738(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_746(int iParam0, bool bParam1, int iParam2)
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
	return Global_282038[iParam0];
}

int func_747()
{
	return 1;
}

int func_748(char* sParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_749(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_750(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_751()
{
	Global_2456235 = 1;
}

void func_752(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_324(7))
	{
		return;
	}
	iVar0 = func_754(iParam0);
	iVar1 = func_753(iParam0);
	iVar2 = unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2497344.f_4828.f_80, unk_0x11ABC381A58DD5AB()));
	if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_19497)
		{
			iVar2 = Global_262145.f_19497;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_19477)
		{
			iVar2 = Global_262145.f_19477;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_19489)
		{
			iVar2 = Global_262145.f_19489;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17031)
		{
			iVar2 = Global_262145.f_17031;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17032)
		{
			iVar2 = Global_262145.f_17032;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17030)
		{
			iVar2 = Global_262145.f_17030;
		}
	}
	else if (func_533(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_278(iParam0, 0) || func_684(iParam0))
	{
		if (iVar2 > Global_262145.f_17034)
		{
			iVar2 = Global_262145.f_17034;
		}
	}
	else if (iVar2 > Global_262145.f_11047)
	{
		iVar2 = Global_262145.f_11047;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11138;
		
		case 152:
			return Global_262145.f_11173;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11161;
		
		case 157:
			return Global_262145.f_11128;
		
		case 159:
			return Global_262145.f_11111;
		
		case 164:
			return Global_262145.f_11151;
		
		case 160:
			return Global_262145.f_11201;
		
		case 162:
			return Global_262145.f_11221;
		
		case 163:
			return Global_262145.f_11186;
		
		case 154:
			return Global_262145.f_11256;
		
		case 155:
			return Global_262145.f_11246;
		
		case 153:
			return Global_262145.f_11210;
		
		case 170:
			return Global_262145.f_13547;
		
		case 171:
			return Global_262145.f_13606;
		
		case 172:
			return Global_262145.f_13624;
		
		case 173:
			return Global_262145.f_13565;
		
		case 166:
			return Global_262145.f_13580;
		
		case 167:
			return Global_262145.f_13671;
		
		case 169:
			return Global_262145.f_13643;
		
		case 168:
			return Global_262145.f_13636;
		
		case 179:
			return Global_262145.f_16913;
		
		case 180:
			return Global_262145.f_16692;
		
		case 182:
			return Global_262145.f_16692;
		
		case 183:
			return Global_262145.f_16692;
		
		case 185:
			return Global_262145.f_16692;
		
		case 186:
			return Global_262145.f_16692;
		
		case 189:
			return Global_262145.f_16913;
		
		case 190:
			return Global_262145.f_16568;
		
		case 191:
			return Global_262145.f_16659;
		
		case 192:
			return Global_262145.f_16453;
		
		case 193:
			return Global_262145.f_16913;
		
		case 194:
			return Global_262145.f_16913;
		
		case 195:
			return Global_262145.f_16692;
		
		case 197:
			return Global_262145.f_16692;
		
		case 198:
			return Global_262145.f_16692;
		
		case 199:
			return Global_262145.f_16913;
		
		case 200:
			return Global_262145.f_16913;
		
		case 201:
			return Global_262145.f_16913;
		
		case 205:
			return Global_262145.f_16913;
		
		case 207:
			return Global_262145.f_16692;
		
		case 208:
			return Global_262145.f_16692;
		
		case 209:
			return Global_262145.f_16692;
		
		case 210:
			return Global_262145.f_16913;
		
		case 211:
			return Global_262145.f_16913;
		
		case 214:
			return Global_262145.f_17709;
		
		case 215:
			return Global_262145.f_17711;
		
		case 216:
			return Global_262145.f_17713;
		
		case 217:
			return Global_262145.f_17715;
		
		case 218:
			return Global_262145.f_17717;
		
		case 219:
			return Global_262145.f_17719;
		
		case 220:
			return Global_262145.f_17721;
		
		case 221:
			return Global_262145.f_17723;
		
		case 225:
			if (func_939(0) || func_301(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_939(0) || func_301(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_939(0) || func_301(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11137;
		
		case 152:
			return Global_262145.f_11172;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11160;
		
		case 157:
			return Global_262145.f_11127;
		
		case 159:
			return Global_262145.f_11110;
		
		case 164:
			return Global_262145.f_11150;
		
		case 160:
			return Global_262145.f_11200;
		
		case 162:
			return Global_262145.f_11220;
		
		case 163:
			return Global_262145.f_11185;
		
		case 154:
			return Global_262145.f_11255;
		
		case 155:
			return Global_262145.f_11245;
		
		case 153:
			return Global_262145.f_11209;
		
		case 170:
			return Global_262145.f_13546;
		
		case 171:
			return Global_262145.f_13605;
		
		case 172:
			return Global_262145.f_13623;
		
		case 173:
			return Global_262145.f_13564;
		
		case 166:
			return Global_262145.f_13579;
		
		case 179:
			return Global_262145.f_16912;
		
		case 180:
			return Global_262145.f_16691;
		
		case 182:
			return Global_262145.f_16691;
		
		case 183:
			return Global_262145.f_16691;
		
		case 185:
			return Global_262145.f_16691;
		
		case 186:
			return Global_262145.f_16691;
		
		case 189:
			return Global_262145.f_16912;
		
		case 193:
			return Global_262145.f_16912;
		
		case 194:
			return Global_262145.f_16912;
		
		case 195:
			return Global_262145.f_16691;
		
		case 197:
			return Global_262145.f_16691;
		
		case 198:
			return Global_262145.f_16691;
		
		case 199:
			return Global_262145.f_16912;
		
		case 200:
			return Global_262145.f_16912;
		
		case 201:
			return Global_262145.f_16912;
		
		case 205:
			return Global_262145.f_16912;
		
		case 207:
			return Global_262145.f_16691;
		
		case 208:
			return Global_262145.f_16691;
		
		case 209:
			return Global_262145.f_16691;
		
		case 210:
			return Global_262145.f_16912;
		
		case 211:
			return Global_262145.f_16912;
		
		case 190:
			if (!func_696())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_696())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_696())
			{
				return Global_262145.f_16452;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17708;
		
		case 215:
			return Global_262145.f_17710;
		
		case 216:
			return Global_262145.f_17712;
		
		case 217:
			return Global_262145.f_17714;
		
		case 218:
			return Global_262145.f_17716;
		
		case 219:
			return Global_262145.f_17718;
		
		case 220:
			return Global_262145.f_17720;
		
		case 221:
			return Global_262145.f_17722;
		
		case 225:
			if (func_301(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_301(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_301(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_696())
		{
			if (func_939(0))
			{
				if (!func_301(0))
				{
					if (unk_0x885F483F34E47503(func_513()))
					{
						if (func_763() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_763());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_761(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_760("GB_BCUT_TICK1", func_513(), iVar0, 0, 0, 1, 1);
						}
						func_759(20);
						func_756(func_513(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_756(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1050(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_758(iParam0);
		func_757(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_552(iParam0));
	}
}

void func_757(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_758(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_760(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(func_596(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_594(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_589(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_761(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_762(1);
	}
	else
	{
		iVar1 = func_762(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_762(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_763()
{
	return Global_262145.f_11041;
}

void func_764(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_301(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_696())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_513();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_802(iVar15);
			iVar0 = (func_801(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_796(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19481));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19480));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x0FFED3E94261A832())
			{
				func_790(iVar16, iVar2);
				if (func_786(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_776(5);
				}
				iVar6 = func_775(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_19483);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_19482));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_759(108);
					}
					else
					{
						func_759(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x244673FE98A43CA3())
						{
							iVar19 = iVar18;
							if (unk_0x9E8AB4FC19962A90(iVar19))
							{
								iVar20 = unk_0x2AFA21CE4322B48D(iVar19);
								if (func_774(iVar20))
								{
									func_765(iVar20, 1, 3, 0);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_19484;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_19485;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1779842 = *iParam2;
					func_759(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_765(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_768(iParam0);
	if (bParam3)
	{
		func_767(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_766(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_766(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_758(iParam0);
	func_757(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_552(iParam0));
		}
	}
}

void func_767(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_758(iParam0);
	func_757(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_552(iParam0));
		}
	}
}

int func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_773();
	iVar0 = func_771(iParam0, iVar0);
	iVar1 = Global_1622795[func_513() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_770())
	{
		iVar0 = func_770();
	}
	if (iVar0 > func_769())
	{
		iVar0 = func_769();
	}
	return iVar0;
}

int func_769()
{
	return Global_262145.f_13508;
}

int func_770()
{
	return Global_262145.f_14683;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_825(iParam0) * func_772());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_772()
{
	return Global_262145.f_14682;
}

var func_773()
{
	return Global_262145.f_11033;
}

int func_774(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_16(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_248(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_775(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar2 = unk_0x7C214DA899F05536(iVar0);
			if (!func_34(iVar2, 0) && !func_16(iVar2, unk_0x0FFED3E94261A832(), 1))
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

void func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_779(Global_262145.f_19027))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_779(Global_262145.f_19029))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_779(Global_262145.f_19031))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_779(Global_262145.f_19033))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_779(Global_262145.f_19035))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_779(Global_262145.f_19037))
				{
					func_777("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_779(Global_262145.f_19040))
				{
					func_777("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_779(Global_262145.f_19043))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_779(Global_262145.f_19045))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_779(Global_262145.f_19047))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_779(Global_262145.f_19049))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_779(Global_262145.f_19051))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_779(Global_262145.f_19053))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_779(Global_262145.f_19055))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_779(Global_262145.f_19057))
				{
					func_778("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_777(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_589(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_778(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x95CE6D748899618C(iParam3);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
	}
	else
	{
		Global_2484572 = { func_42(unk_0x0FFED3E94261A832()) };
		if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
		{
			iVar1 = 0;
			if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2484502.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xCFCC273DCA662841(iVar2, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar1, 0, Global_2484502, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), Global_1314009, Global_1314010, Global_1314011);
		}
		else
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
	}
	func_589(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_783(15417, -1, -1))
			{
				func_782(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_783(15418, -1, -1))
			{
				func_782(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_783(15425, -1, -1))
			{
				func_782(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_783(15405, -1, -1))
			{
				func_782(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_783(15393, -1, -1))
			{
				func_782(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_783(15409, -1, -1))
			{
				func_782(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_783(15396, -1, -1))
			{
				func_782(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_783(15412, -1, -1))
			{
				func_782(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_783(15403, -1, -1))
			{
				func_782(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_783(15389, -1, -1))
			{
				func_782(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_783(15398, -1, -1))
			{
				func_782(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_783(15400, -1, -1))
			{
				func_782(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_783(15408, -1, -1))
			{
				func_782(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_783(15411, -1, -1))
			{
				func_782(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_783(15397, -1, -1))
			{
				func_782(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_783(15413, -1, -1))
			{
				func_782(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_783(15391, -1, -1))
			{
				func_782(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_783(15388, -1, -1))
			{
				func_782(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_783(15401, -1, -1))
			{
				func_782(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_783(15394, -1, -1))
			{
				func_782(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_783(15406, -1, -1))
			{
				func_782(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_783(15395, -1, -1))
			{
				func_782(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_783(15410, -1, -1))
			{
				func_782(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_783(15407, -1, -1))
			{
				func_782(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_783(15414, -1, -1))
			{
				func_782(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_783(15415, -1, -1))
			{
				func_782(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_783(15399, -1, -1))
			{
				func_782(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_783(15404, -1, -1))
			{
				func_782(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_783(15392, -1, -1))
			{
				func_782(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_783(15390, -1, -1))
			{
				func_782(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_783(15402, -1, -1))
			{
				func_782(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_783(15416, -1, -1))
			{
				func_782(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_357(209, -1))
			{
				func_780(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_783(15426, -1, -1))
			{
				func_782(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_783(15422, -1, -1))
			{
				func_782(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_783(15423, -1, -1))
			{
				func_782(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_783(15421, -1, -1))
			{
				func_782(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_783(15427, -1, -1))
			{
				func_782(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_783(15419, -1, -1))
			{
				func_782(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_783(15420, -1, -1))
			{
				func_782(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_780(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_781())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_358(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_781()
{
	return 1;
	return 0;
}

int func_782(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_783(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_785(iParam0, iParam1);
	uVar2 = func_784(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_784(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_785(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_786(int iParam0)
{
	int iVar0;
	
	iVar0 = func_788(iParam0);
	return func_689(func_787(iVar0), -1, 0);
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_788(int iParam0)
{
	int iVar0;
	
	if (func_789(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_789(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_790(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_788(iParam0);
	iVar1 = func_787(iVar0);
	iVar2 = (func_689(iVar1, -1, 0) + iParam1);
	func_687(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_793(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_787(iVar0);
				iVar3 = (iVar3 + func_689(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_792(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_791(9357, iVar5, -1, 1);
	}
}

var func_791(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_793(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_795(iParam0, iParam1);
	uVar2 = func_794(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_794(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_795(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_796(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_800(iParam1);
	if (func_789(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_797(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_797(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_797(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_799(iParam0, iParam1))
	{
		iVar0 = func_798(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_798(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_789(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_799(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_789(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_800(int iParam0)
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
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_801(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_789(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_802(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_803(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_706())
			{
				Var0 = { func_805() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_796(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17142);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17141);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_775(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17132);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17131));
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
					func_759(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_301(0))
			{
				Var15 = { func_804(func_513()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_796(func_513(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17142));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17141));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17181;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17182;
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

struct<2> func_804(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_805()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_806(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_20(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_821();
			}
			func_820();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_812(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_811(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_775(&uVar2);
					iVar4 = Global_262145.f_14693;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13902));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_759(44);
					}
				}
				func_809(*iParam3);
				func_808();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_774(iVar9))
						{
							func_765(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(unk_0x0FFED3E94261A832()))
		{
			func_807();
		}
	}
}

void func_807()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_36()];
	iVar0++;
	func_686(3652, iVar0, -1, 1);
}

void func_808()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_36()];
	iVar0++;
	func_686(3651, iVar0, -1, 1);
}

void func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_686(3653, iVar0, -1, 1);
	if (func_793(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_810(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_791(7666, iVar2, -1, 1);
	}
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14826;
			break;
		
		case 2:
			return Global_262145.f_14827;
			break;
		
		case 3:
			return Global_262145.f_14828;
			break;
		
		case 4:
			return Global_262145.f_14829;
			break;
		
		case 5:
			return Global_262145.f_14830;
			break;
		
		case 6:
			return Global_262145.f_14831;
			break;
		
		case 7:
			return Global_262145.f_14832;
			break;
		
		case 8:
			return Global_262145.f_14833;
			break;
		
		case 9:
			return Global_262145.f_14834;
			break;
		
		case 10:
			return Global_262145.f_14835;
			break;
		
		case 11:
			return Global_262145.f_14836;
			break;
		
		case 12:
			return Global_262145.f_14837;
			break;
		
		case 13:
			return Global_262145.f_14838;
			break;
		
		case 14:
			return Global_262145.f_14839;
			break;
		
		case 15:
			return Global_262145.f_14840;
			break;
		
		case 16:
			return Global_262145.f_14841;
			break;
		
		case 17:
			return Global_262145.f_14842;
			break;
		
		case 18:
			return Global_262145.f_14843;
			break;
		
		case 19:
			return Global_262145.f_14844;
			break;
		
		case 20:
			return Global_262145.f_14845;
			break;
		
		case 21:
			return Global_262145.f_14846;
			break;
		
		case 22:
			return Global_262145.f_14847;
			break;
		
		case 23:
			return Global_262145.f_14848;
			break;
		
		case 24:
			return Global_262145.f_14849;
			break;
	}
	return 0;
}

var func_811(int iParam0)
{
	if (iParam0 >= Global_262145.f_13880)
	{
		return Global_262145.f_13901;
	}
	else if (iParam0 >= Global_262145.f_13879)
	{
		return Global_262145.f_13900;
	}
	else if (iParam0 >= Global_262145.f_13878)
	{
		return Global_262145.f_13899;
	}
	else if (iParam0 >= Global_262145.f_13877)
	{
		return Global_262145.f_13898;
	}
	else if (iParam0 >= Global_262145.f_13876)
	{
		return Global_262145.f_13897;
	}
	else if (iParam0 >= Global_262145.f_13875)
	{
		return Global_262145.f_13896;
	}
	else if (iParam0 >= Global_262145.f_13874)
	{
		return Global_262145.f_13895;
	}
	else if (iParam0 >= Global_262145.f_13873)
	{
		return Global_262145.f_13894;
	}
	else if (iParam0 >= Global_262145.f_13872)
	{
		return Global_262145.f_13893;
	}
	else if (iParam0 >= Global_262145.f_13871)
	{
		return Global_262145.f_13892;
	}
	else if (iParam0 >= Global_262145.f_13870)
	{
		return Global_262145.f_13891;
	}
	else if (iParam0 >= Global_262145.f_13869)
	{
		return Global_262145.f_13890;
	}
	else if (iParam0 >= Global_262145.f_13868)
	{
		return Global_262145.f_13889;
	}
	else if (iParam0 >= Global_262145.f_13867)
	{
		return Global_262145.f_13888;
	}
	else if (iParam0 >= Global_262145.f_13866)
	{
		return Global_262145.f_13887;
	}
	else if (iParam0 >= Global_262145.f_13865)
	{
		return Global_262145.f_13886;
	}
	else if (iParam0 >= Global_262145.f_13864)
	{
		return Global_262145.f_13885;
	}
	else if (iParam0 >= Global_262145.f_13863)
	{
		return Global_262145.f_13884;
	}
	else if (iParam0 >= Global_262145.f_13862)
	{
		return Global_262145.f_13883;
	}
	else if (iParam0 >= Global_262145.f_13861)
	{
		return Global_262145.f_13882;
	}
	return Global_262145.f_13881;
}

int func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_819(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_818(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_817(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_813(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_813(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_817(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_813(int iParam0)
{
	int iVar0;
	
	if (func_816(iParam0))
	{
		iVar0 = func_814(func_815(iParam0));
		return func_689(iVar0, -1, 0);
	}
	return 0;
}

int func_814(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3631;
	}
	else if (iParam0 == 1)
	{
		return 3632;
	}
	else if (iParam0 == 2)
	{
		return 3633;
	}
	else if (iParam0 == 3)
	{
		return 3634;
	}
	else if (iParam0 == 4)
	{
		return 3635;
	}
	return 3631;
}

int func_815(int iParam0)
{
	int iVar0;
	
	if (func_816(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_816(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_817(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14080;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14078;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14082;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14076;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14074;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14084;
	}
	return 0;
}

int func_818(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_816(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1774539[iVar0] == iParam1 && Global_1774546[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_819(int iParam0)
{
	int iVar0;
	
	if (func_816(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_820()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_36()];
	iVar0++;
	Global_2528808[func_36()] = iVar0;
	func_686(3650, iVar0, -1, 1);
}

void func_821()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_36()];
	iVar1 = Global_2528814[func_36()];
	iVar0++;
	iVar1++;
	Global_2528805[func_36()] = iVar0;
	Global_2528814[func_36()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_686(3648, iVar0, -1, 1);
	func_686(3649, iVar1, -1, 1);
}

void func_822()
{
	if (func_696())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_823()
{
	if (func_696())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_824()
{
	if (func_696())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_825(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
			if (func_939(1) && !func_301(1))
			{
				if (func_827(func_513()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_827(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11158) * Global_262145.f_11163));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11113));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11135) * Global_262145.f_11139));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11148) * Global_262145.f_11152));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11170) * Global_262145.f_11175));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11332) * Global_262145.f_11333));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11338) * Global_262145.f_11339));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11336) * Global_262145.f_11337));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11330) * Global_262145.f_11331));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11334) * Global_262145.f_11335));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11328) * Global_262145.f_11329));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13603;
		
		case 172:
			return Global_262145.f_13619;
		
		case 173:
			return Global_262145.f_13562;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16836;
		
		case 180:
			return Global_262145.f_16712;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16720;
		
		case 185:
			return Global_262145.f_16729;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16924;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16941;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16789;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16972;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16850;
		
		case 205:
			return Global_262145.f_16959;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16817;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16954;
		
		case 211:
			return Global_262145.f_16918;
		
		case 214:
			return Global_262145.f_17458;
		
		case 215:
			return Global_262145.f_17468;
		
		case 216:
			return Global_262145.f_17478;
		
		case 217:
			return Global_262145.f_17487;
		
		case 218:
			return Global_262145.f_17496;
		
		case 219:
			return Global_262145.f_17512;
		
		default:
	}
	return 0;
}

int func_829(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11159) * Global_262145.f_11164));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11109) * Global_262145.f_11114));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11136) * Global_262145.f_11140));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11149) * Global_262145.f_11153));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11171) * Global_262145.f_11176));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11208) * Global_262145.f_11211));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11254) * Global_262145.f_11257));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11244) * Global_262145.f_11247));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11199) * Global_262145.f_11202));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11219) * Global_262145.f_11224));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11184) * Global_262145.f_11187));
		
		case 170:
			return Global_262145.f_13545;
		
		case 171:
			return Global_262145.f_13604;
		
		case 172:
			return Global_262145.f_13620;
		
		case 173:
			return Global_262145.f_13563;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15640;
		
		case 168:
			return Global_262145.f_15639;
		
		case 179:
			return Global_262145.f_16837;
		
		case 180:
			return Global_262145.f_16713;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16721;
		
		case 185:
			return Global_262145.f_16730;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16925;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16942;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16790;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16973;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16851;
		
		case 205:
			return Global_262145.f_16960;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16818;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16955;
		
		case 211:
			return Global_262145.f_16919;
		
		case 214:
			return Global_262145.f_17459;
		
		case 215:
			return Global_262145.f_17469;
		
		case 216:
			return Global_262145.f_17479;
		
		case 217:
			return Global_262145.f_17488;
		
		case 218:
			return Global_262145.f_17497;
		
		case 219:
			return Global_262145.f_17513;
		
		case 178:
			if (func_696())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_696())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_696() && !func_706())
			{
				if (func_827(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_706())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_696() && !func_706())
			{
				if (func_827(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_706())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_696() && !func_706())
			{
				if (func_827(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_706())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_830(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_831(iParam0))
	{
		if (!func_696())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11052;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_670(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_670(iParam0))
	{
		if (func_19(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_19(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_304();
	if (iVar0 != func_18())
	{
		if (func_16(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_831(int iParam0)
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

void func_832(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_275(unk_0x0FFED3E94261A832());
	if (func_670(iVar0))
	{
		Global_1773272.f_2 = func_865();
		Global_1773272.f_3 = func_864();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = iParam1;
		Global_1773272.f_19 = func_858(iVar0, bParam0, func_863(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_347(unk_0x0FFED3E94261A832()) || func_346(unk_0x0FFED3E94261A832())) || func_247(unk_0x0FFED3E94261A832()))
		{
			Global_1773272.f_8 = 1;
		}
		else
		{
			Global_1773272.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1773272.f_43 = 0;
			Global_1773272.f_45 = func_857(func_513(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_856(func_513(), iParam2);
		}
		func_854(iVar0);
	}
	else if (func_673(iVar0))
	{
		Global_1773325.f_2 = func_865();
		Global_1773325.f_3 = func_864();
		Global_1773325.f_10 = unk_0xDA84A1E29323722E();
		Global_1773325.f_19 = (Global_1773325.f_10 - Global_1773325.f_9);
		Global_1773325.f_12 = iParam1;
		if (bParam0)
		{
			Global_1773325.f_11 = 1;
		}
		else
		{
			Global_1773325.f_11 = 0;
		}
		if ((func_347(unk_0x0FFED3E94261A832()) || func_346(unk_0x0FFED3E94261A832())) || func_247(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_852(iVar0);
	}
	else if (func_528(iVar0))
	{
		Global_1773387.f_2 = func_865();
		Global_1773387.f_3 = func_864();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = iParam1;
		Global_1773387.f_7 = func_850();
		Global_1773387.f_42 = func_848(func_36(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_802(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_845((func_847(iVar1) || func_846(iVar1)));
		Global_1773387.f_30 = func_845(func_844(iVar1));
		Global_1773387.f_32 = func_845(func_843(iVar1));
		Global_1773387.f_33 = func_845(func_842(iVar1));
		Global_1773387.f_34 = func_845(func_841(iVar1));
		Global_1773387.f_35 = func_845(func_840(0, iVar1) == 1);
		Global_1773387.f_36 = func_845(func_839(iVar1));
		Global_1773387.f_37 = func_845(func_838(iVar1));
		Global_1773387.f_38 = func_845(func_837(iVar1));
		Global_1773387.f_39 = func_845(func_797(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_845(func_797(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_845(func_797(iVar1, iVar2, 1));
		if (func_836(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_835(iVar1))
		{
			Global_1773387.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1773387.f_10 = 1;
		}
		else
		{
			Global_1773387.f_10 = 0;
		}
		if ((func_347(unk_0x0FFED3E94261A832()) || func_346(unk_0x0FFED3E94261A832())) || func_247(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_833(iVar0);
	}
	else
	{
		Global_1773254.f_6 = unk_0xDA84A1E29323722E();
		if (bParam0)
		{
			Global_1773254.f_7 = 1;
		}
		else
		{
			Global_1773254.f_7 = 0;
		}
		Global_1773254.f_8 = iParam1;
		if (Global_1773254.f_4 == 0)
		{
			if ((func_347(unk_0x0FFED3E94261A832()) || func_346(unk_0x0FFED3E94261A832())) || func_247(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_833(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_834();
}

void func_834()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_835(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_836(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_837(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_838(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_839(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_840(int iParam0, int iParam1)
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 0))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 3))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 6))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 9))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 12))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 15))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 18))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 21))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 1))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 4))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 7))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 10))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 13))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 16))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 19))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 22))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 2))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 5))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 8))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 11))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 14))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 17))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 20))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 23))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_841(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_842(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_843(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_844(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_845(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_846(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_847(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_848(int iParam0, int iParam1)
{
	return func_689(func_849(iParam1), iParam0, 0);
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_850()
{
	int iVar0;
	
	if (func_706())
	{
		return 4;
	}
	else if (func_696())
	{
		if (func_827(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_301(1))
	{
		iVar0 = func_851(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_939(1))
	{
		if (func_827(func_513()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_851(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_852(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_853();
}

void func_853()
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
	Global_1773325 = { Var0 };
	Global_1773325.f_24 = 0;
	Global_1773325.f_25 = 0;
	Global_1773325.f_17 = 0;
}

void func_854(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_855();
}

void func_855()
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
	Global_1773272 = { Var0 };
	Global_1773272.f_29 = 0;
	Global_1773272.f_30 = 0;
	Global_1773272.f_17 = 0;
}

int func_856(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_797(iParam0, iParam1, 2);
	bVar1 = func_797(iParam0, iParam1, 1);
	bVar2 = func_797(iParam0, iParam1, 0);
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

int func_857(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_789(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_858(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_533(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 19;
	}
	else if (func_532(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_278(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_670(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_862(func_513()), func_861(func_513()), func_865(), func_864(), iVar1, iVar0);
	}
	func_860(iVar0);
	func_859(iVar0);
	return iVar0;
}

void func_859(int iParam0)
{
	int iVar0;
	
	iVar0 = func_689(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_687(3943, iVar0, -1, 1, 0);
}

void func_860(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_861(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_862(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_863(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_347(unk_0x0FFED3E94261A832()) || func_247(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_864()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_865()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

void func_866(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_942())
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

void func_867()
{
	if (func_248(unk_0x0FFED3E94261A832(), 20) || func_347(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 20))
		{
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
			unk_0xF6082E2ADA1C795B(&iLocal_379, 20);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 21))
		{
			if (unk_0x988197573BDAD49A("BG_ASSAULT_START"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 21);
			}
		}
		else if (Local_121.f_5 == -1 && Local_121.f_7 == -1)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 22))
			{
				if (Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 > 1)
				{
					if (unk_0x988197573BDAD49A("BG_ASSAULT_COLLECT"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 22);
						if (unk_0xAA4F14DA15DB0B51(iLocal_379, 23))
						{
							unk_0x507FE690B1271947(&iLocal_379, 23);
						}
					}
				}
			}
		}
		else if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 23))
		{
			if (unk_0x988197573BDAD49A("BG_ASSAULT_DELIVER"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 23);
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 22))
				{
					unk_0x507FE690B1271947(&iLocal_379, 22);
				}
			}
		}
	}
}

void func_868()
{
	if (func_521())
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 10))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
			{
				if (!func_21(Local_121.f_29[0]))
				{
					unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_869()
{
	int iVar0;
	
	if (func_942() != 2)
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 11))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 12))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, 1, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 12))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 13))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xD42AA0CF76AFB4D8(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iVar0]))
			{
				if (!func_10(Local_121.f_13[iVar0]))
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 14))
					{
						if (func_870(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar0])))
						{
							unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_870(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), uParam0))
	{
		return 1;
	}
	if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), uParam0))
	{
		return 1;
	}
	if (func_871())
	{
		if (unk_0x25D7C3DEE2A69693(unk_0x0FFED3E94261A832(), &uVar0))
		{
			if (unk_0xEE46DE31F43DCAF1(uVar0))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iVar0);
				if (unk_0x2137828D03306CAF(uVar1))
				{
					if (!unk_0xA9A04898798AE9E6(iVar1, 0))
					{
						if (unk_0xC4A39E4229BD3ABE(iVar1, 0))
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

bool func_871()
{
	return Global_1574289;
}

void func_872()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 7))
	{
		if (!unk_0xBDD3EABACAB97D09(uLocal_512))
		{
			func_874();
		}
		if (func_520())
		{
			if (func_345(unk_0x0FFED3E94261A832()) > 2)
			{
				if (!func_587("GB_ASLT_GO"))
				{
					func_636("GB_ASLT_GO", func_873(), 0, 0);
				}
			}
			else
			{
				func_617();
			}
		}
		else
		{
			func_617();
		}
		if (func_518())
		{
			unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1), 7);
		}
	}
	func_415();
}

char* func_873()
{
	switch (func_942())
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

void func_874()
{
	struct<3> Var0;
	
	if (func_345(unk_0x0FFED3E94261A832()) < 1)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_512))
		{
			unk_0x789C84F1B8496AD0(&uLocal_512);
		}
		return;
	}
	Var0 = { func_875() };
	if (func_958())
	{
		if (!func_405(Var0, 0f, 0f, 0f, 0))
		{
			uLocal_512 = unk_0x9EDB165CAADCAB2C(Var0);
			unk_0xD42DEAFD12809447(uLocal_512, 1);
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 0))
			{
				unk_0xA4F6216A8431C2E8(uLocal_512, 1);
				unk_0x43FC07DB1C2FA4B3(uLocal_512, 7000);
				unk_0x847E5C2DF89423C1();
				unk_0xF6082E2ADA1C795B(&iLocal_379, 0);
			}
		}
	}
}

Vector3 func_875()
{
	struct<3> Var0;
	
	switch (func_942())
	{
		case 0:
			Var0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			Var0 = { func_507() };
			break;
	}
	return Var0;
}

void func_876()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	
	func_883();
	Var8 = { func_507() };
	if (!func_521())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_520()) && unk_0xAA4F14DA15DB0B51(iLocal_379, 3)) && !func_544(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (func_958())
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 16))
				{
					fVar6 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var8, 0);
					if (func_942() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_376(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
						func_881();
						unk_0xF6082E2ADA1C795B(&iLocal_379, 16);
					}
				}
				else
				{
					fVar6 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var8, 0);
					if (func_942() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						unk_0x507FE690B1271947(&iLocal_379, 16);
						func_381();
						func_376(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_379, 16))
				{
					unk_0x507FE690B1271947(&iLocal_379, 16);
					func_381();
					func_376(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
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
		Var3 = { func_880() };
		if (func_405(Var3, 0f, 0f, 0f, 0))
		{
			return;
		}
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
		switch (func_942())
		{
			case 1:
				if (!func_519(Var0, 3, 1000, 0))
				{
					func_380(10, 0, 0, 0, 0);
					func_879(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_401(Var3, 1, 0);
				}
				else if (func_519(Var3, 3, 1000, 0))
				{
					func_380(10, 0, 0, 0, 0);
					func_879(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_401(Var3, 1, 0);
				}
				else
				{
					func_380(10, 0, 0, 0, 0);
					func_879(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_401(Var3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_519(Var0, 2, 1000, 0))
				{
					func_380(10, 0, 0, 0, 0);
					func_879(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_401(Var3, 1, 0);
				}
				else if (func_519(Var3, 2, 1000, 0))
				{
					func_380(10, 0, 0, 0, 0);
					func_879(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_401(Var3, 1, 0);
				}
				else
				{
					func_380(10, 0, 0, 0, 0);
					func_879(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_401(Var3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_380(10, 0, 0, 0, 0);
				func_879(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				func_401(Var3, 1, 0);
				break;
		}
	}
	else
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_379, 16))
		{
			unk_0x507FE690B1271947(&iLocal_379, 16);
			func_381();
			func_376(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_379, 7))
		{
			func_374();
			func_877();
		}
	}
}

void func_877()
{
	if (Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
	{
		func_878();
	}
}

void func_878()
{
	struct<26> Var0;
	
	if (unk_0xE00BB08A385D5A25(Global_2412851.f_6))
	{
		if (!Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412851 = { Var0 };
	Global_2412851.f_6 = -1;
}

void func_879(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<26> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xE00BB08A385D5A25(Global_2412851.f_6))
	{
		if (!Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
		{
			return;
		}
	}
	else
	{
		Global_2412851.f_6 = unk_0xFF09208EC90C94CB();
	}
	Var0.f_6 = Global_2412851.f_6;
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
	if (func_150(unk_0x0FFED3E94261A832()))
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
	Global_2412851 = { Var0 };
}

Vector3 func_880()
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_521())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			if (func_21(Local_121.f_29[0]))
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_12), 1) };
	}
	return Var0;
}

void func_881()
{
	int iVar0;
	
	iVar0 = func_942();
	switch (iVar0)
	{
		case 0:
			func_882(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_882(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_882(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_882(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_882(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_882(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_882(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_882(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_882(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_882(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_882(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_882(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_882(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_882(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_882(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_882(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_882(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_882(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_882(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_882(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_882(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_882(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_882(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_882(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_882(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_882(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_882(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_882(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_882(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_882(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_882(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_882(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_882(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_882(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_882(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_882(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_882(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_882(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_882(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_882(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_882(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404996.f_1709)
	{
	}
	if (Global_2404996.f_676 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/] = { Param0 };
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_3 = fParam3;
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_4 = iParam4;
		Global_2404996.f_676++;
	}
}

void func_883()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_958() && !func_360())
	{
		return;
	}
	if (func_521())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			if (func_21(Local_121.f_29[0]))
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_121.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1) };
	}
	if (!func_405(Var0, 0f, 0f, 0f, 0))
	{
		if (func_520())
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
				fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
				if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 3))
				{
					if (fVar6 <= 250000f)
					{
						unk_0xF6082E2ADA1C795B(&iLocal_379, 3);
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
					{
						if (func_519(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 3, 1000, 0))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_379, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6) || (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6) && !func_519(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 3, 1000, 0)))
					{
						unk_0x507FE690B1271947(&iLocal_379, 3);
					}
				}
			}
		}
	}
}

void func_884()
{
	if (func_360())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 9))
			{
				if (func_359())
				{
					unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 1, 1);
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
					{
						if (unk_0xAA14E382041F4A6A(unk_0xA210FA5BDB2E5744(Local_121.f_12), unk_0x2A5EB8B0FE590B91()))
						{
							unk_0x6E0ED8BD5BEFED4C(unk_0xA210FA5BDB2E5744(Local_121.f_12));
						}
					}
					unk_0xF6082E2ADA1C795B(&iLocal_379, 9);
				}
			}
			else if (!func_350())
			{
				if (!func_359())
				{
					unk_0x1709B9E0660A6A16(unk_0xA210FA5BDB2E5744(Local_121.f_12), 0, 1);
					unk_0x507FE690B1271947(&iLocal_379, 9);
				}
			}
		}
	}
}

void func_885()
{
	struct<8> Var0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 1))
	{
		if (func_958())
		{
			if (func_345(unk_0x0FFED3E94261A832()) >= 1)
			{
				if (!func_570(86))
				{
					if (func_564(0, 1, 1, 1))
					{
						Var0 = { func_887() };
						func_672(&Var0, -1);
						func_555(1);
						unk_0xF6082E2ADA1C795B(&iLocal_379, 1);
					}
				}
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&iLocal_379, 1);
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 2))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_379, 1))
		{
			if (func_958())
			{
				if (Local_186[unk_0x88641E5BC172153A() /*6*/].f_5 > 1)
				{
					if (func_564(0, 1, 1, 1))
					{
						if (func_564(0, 1, 1, 1))
						{
							Var0 = { func_886() };
							func_672(&Var0, -1);
							func_555(1);
							unk_0xF6082E2ADA1C795B(&iLocal_380, 2);
						}
					}
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 10))
	{
		if (func_958())
		{
			if (((Local_121.f_5 != -1 || Local_121.f_7 != -1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 16)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 20))
			{
				if (func_564(0, 1, 1, 1))
				{
					func_672("GB_SGHT_RVL", -1);
					func_555(1);
					unk_0xF6082E2ADA1C795B(&iLocal_380, 10);
				}
			}
		}
	}
}

struct<8> func_886()
{
	struct<8> Var0;
	
	switch (func_942())
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

struct<8> func_887()
{
	struct<8> Var0;
	
	if (func_696())
	{
		switch (func_942())
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
		switch (func_942())
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

void func_888()
{
	int iVar0;
	
	if (!func_9(&(Local_121.f_54)))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_380, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_893(&(Local_121.f_54), 0, 0));
	if (!func_520())
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_345(unk_0x0FFED3E94261A832()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 19))
		{
			iLocal_517 = unk_0x9FF6FFD9EB30D086();
			unk_0x08BE237DBCD9CBD9(iLocal_517, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			unk_0xF6082E2ADA1C795B(&iLocal_379, 19);
		}
	}
	func_892(iVar0);
	if (iVar0 > 30000)
	{
		func_889(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (iVar0 >= 0)
	{
		func_889(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_889(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
}

void func_889(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_891(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_890(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_890(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_891(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_892(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 29))
	{
		func_205();
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 30))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x988197573BDAD49A("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 30);
				unk_0xF6082E2ADA1C795B(&iLocal_379, 28);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 0))
			{
				if (unk_0x8CF1128C350F1552("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
					unk_0x6040865446FA4030(0);
					unk_0xF6082E2ADA1C795B(&iLocal_380, 0);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 31))
			{
				if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_379, 31);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_379, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 1))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
						unk_0xF6082E2ADA1C795B(&iLocal_380, 1);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0x15AFDA4756FDF7EC("APT_COUNTDOWN_30S_KILL");
							unk_0x507FE690B1271947(&iLocal_379, 28);
						}
					}
				}
			}
		}
	}
}

int func_893(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

void func_894(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_275(unk_0x0FFED3E94261A832());
	if (iParam2 || func_670(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_533(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_532(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_278(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_683(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_513() != func_18())
		{
			Global_1773272.f_4 = func_862(func_513());
			Global_1773272.f_5 = func_861(func_513());
		}
		if (func_304() != func_18())
		{
			func_708(func_304(), &(Global_1773272.f_6), &(Global_1773272.f_7));
		}
		Global_1773272.f_9 = unk_0xDA84A1E29323722E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1773272.f_27 = 1;
			Global_1773272.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1773272.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1773272.f_40 = func_800(iParam1);
			Global_1773272.f_41 = func_919();
			Global_1773272.f_42 = func_801(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_857(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_528(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1773387 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1773387 = iParam0 + 1;
		}
		else
		{
			Global_1773387 = func_918(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_917(unk_0x0FFED3E94261A832()) == 0)
				{
					Global_1773387.f_1 = 0;
				}
				else
				{
					Global_1773387.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1773387.f_1 = 2;
				break;
			
			case 227:
				Global_1773387.f_1 = 3;
				break;
		}
		Global_1773387.f_21 = 1;
		Global_1773387.f_22 = 1;
		if (func_513() != func_18())
		{
			Global_1773387.f_4 = func_862(func_513());
			Global_1773387.f_5 = func_861(func_513());
		}
		if (func_304() != func_18())
		{
			func_708(func_304(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_673(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_513() != func_18())
		{
			Global_1773325.f_4 = func_862(func_513());
			Global_1773325.f_5 = func_861(func_513());
		}
		if (func_304() != func_18())
		{
			func_708(func_304(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_513() != func_18())
		{
			Global_1773254 = func_862(func_513());
			Global_1773254.f_1 = func_861(func_513());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_916();
		Global_1773254.f_15 = 0;
		if (func_939(1))
		{
			if (func_304() == func_513())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_915())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_914() || func_913()) || func_912())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_910(func_911(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_898(func_909(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_847(unk_0x0FFED3E94261A832()) || func_846(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_842(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_843(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_840(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_897(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_897(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_896(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_895(unk_0x0FFED3E94261A832(), iVar2);
				if (func_797(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_797(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_797(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_895(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_789(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_896(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_897(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_840(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_898(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_908(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_906(11));
		func_905(iVar1, &iVar0, 1);
		iVar2 = func_908(func_900(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_689(func_899(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_899(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("mpsv_lp0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("mpsv_lp0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_900(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_906(iVar0) && iParam0 < func_901(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_901(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_904(iParam0);
		return func_903(iVar0);
	}
	return (func_902(iParam0, -1) * iParam0 + 1);
}

int func_902(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_537(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_543(iParam1))
			{
				return 0;
			}
			else if (func_535(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_904(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_905(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_906(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_904(iParam0);
		return func_907(iVar0);
	}
	return (func_902(iParam0, -1) * iParam0);
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_908(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_904(iParam0);
		if (iVar1 == 0 && func_689(5368, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1362008[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2528770[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2528699[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_909(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_910(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_905(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_689(func_899(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_912()
{
	return func_689(5355, -1, 0) != 0;
}

bool func_913()
{
	return func_689(3803, -1, 0) != 0;
}

bool func_914()
{
	return func_689(3208, -1, 0) != 0;
}

bool func_915()
{
	return func_689(5354, -1, 0) != 0;
}

int func_916()
{
	int iVar0;
	
	iVar0 = func_513();
	if (iVar0 != func_18())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_917(int iParam0)
{
	if (func_151(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_918(int iParam0)
{
	if (func_275(iParam0) == 225 || func_275(iParam0) == 226)
	{
		return func_917(iParam0);
	}
	return -1;
}

var func_919()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_799(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_920(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_660(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_649(&Var0);
}

struct<8> func_921()
{
	struct<8> Var0;
	
	switch (func_942())
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

void func_922()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_121.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_13[iVar0]))
				{
					if (func_927(Local_121.f_13[iVar0]))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_13[iVar0]))
						{
							if (!func_10(Local_121.f_13[iVar0]))
							{
								if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar0]), -1442466670) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_942() == 2)
									{
										unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar0]), 0);
									}
									unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_923(Local_121.f_13[iVar0], &(Local_385[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_923(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (func_926())
		{
			Global_2434604 = unk_0x0FFED3E94261A832();
		}
		if (bParam3)
		{
			func_925(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, 1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_925(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, -1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam1))
	{
		func_924(uParam1);
	}
}

void func_924(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
		bVar0 = true;
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_1))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_7))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_7))
		{
			if (unk_0x4C2C9007DF4A7DB6(uParam0->f_7))
			{
				unk_0x740D0745C06D2DDC(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_925(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x8A41C463063AFC8E();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x769F0F6444C1ABE0(uParam0))
	{
		if (!unk_0x4C2C9007DF4A7DB6(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x740D0745C06D2DDC(iParam0, 1);
			}
			else
			{
				unk_0xEC788EF0F7E0437A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x958B0F67184F0A15(iParam0, iParam2);
			unk_0xE27A966E15A7110C(iParam0, fParam6);
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA4130A6FADB516EE(iParam0, iParam9);
		}
		unk_0xEEFEA3C5BD4B4CEC(iParam0, uParam4);
		unk_0xFA67C6B6608350D2(iParam0, uParam5);
		*uParam1 = unk_0x964C09CA77A5150B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB5D36079067EBA5(*uParam1, iParam8);
				}
				unk_0xCE515166115E0087("STRING");
				if (bParam10)
				{
					unk_0xCF6846167A5EFE98(uParam7);
				}
				else
				{
					unk_0xD5DA3EC5EEC78358(sParam7);
				}
				unk_0xC3EC4F430EC11854(*uParam1);
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 2))
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!unk_0x58478145CAF8429C(sParam7))
				{
					unk_0xCE515166115E0087("STRING");
					if (bParam10)
					{
						unk_0xCF6846167A5EFE98(sParam7);
					}
					else
					{
						unk_0xD5DA3EC5EEC78358(sParam7);
					}
					unk_0xC3EC4F430EC11854(*uParam1);
				}
				unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uParam1->f_1 = unk_0x05DF223770EFF48B(iParam0);
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 3))
			{
				if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
				{
					unk_0x697F84823ACFF84C(uParam1->f_1, 7);
					unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x507FE690B1271947(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_926()
{
	return Global_1312829;
}

int func_927(var uParam0)
{
	if (unk_0x2D46D2FB70C76390(uParam0))
	{
		return 1;
	}
	if (func_928(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_928(var uParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(uParam0))
	{
		return 0;
	}
	if (func_929(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_929(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		unk_0x47ABF422A76CAA6A(uParam0);
		return unk_0x434105A1C45F1BED(uParam0);
	}
	return 0;
}

void func_930()
{
	int iVar0;
	int iVar1;
	
	if (Local_121.f_0 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					if (unk_0x76BCE6C7B20502DA(iVar1))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3, iVar0))
						{
							if (func_521())
							{
								func_623(iVar1, 421, 0);
							}
							else
							{
								func_623(iVar1, 457, 0);
							}
							unk_0xF6082E2ADA1C795B(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3), iVar0);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3, iVar0))
					{
						if (func_521())
						{
							func_623(iVar1, 421, 0);
						}
						else
						{
							func_623(iVar1, 457, 0);
						}
						unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3, iVar0))
			{
				unk_0x507FE690B1271947(&(Local_186[unk_0x88641E5BC172153A() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_931()
{
	if (func_942() == 0)
	{
		if (func_25() == 0)
		{
			func_932("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_932(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_933(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0xF6082E2ADA1C795B(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_933(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_935(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_934(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_934(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_935(uParam0);
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

int func_935(var uParam0)
{
	int iVar0;
	
	if (unk_0x58478145CAF8429C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_937(uParam0->f_1))
	{
		if (func_936(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_794643.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_907640.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x35302CD5A5D37EED(&(Global_907640.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x0FFED3E94261A832())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_950886.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_950886.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_936(var uParam0)
{
	if (Global_2398052)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_2398052.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_937(int iParam0)
{
	return iParam0 == 9999;
}

void func_938()
{
	if (func_942() != 1 && func_942() != 2)
	{
		return;
	}
	if (func_942() != 1)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			unk_0xE82E0BF24586F04D(Local_121.f_29[0], 1);
		}
	}
}

bool func_939(bool bParam0)
{
	return func_19(unk_0x0FFED3E94261A832(), bParam0);
}

void func_940()
{
	if (unk_0x5D03CCED0E46E032(1343869835))
	{
		unk_0x6ADA8071E27ECAB6(1343869835, 1, 0, 0);
		unk_0x468CE34953D211E1(1343869835, 1f, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(207506449))
	{
		unk_0x6ADA8071E27ECAB6(207506449, 1, 0, 0);
		unk_0x468CE34953D211E1(207506449, 1f, 0, 0);
	}
}

void func_941()
{
	Global_1770670 = 1;
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 0))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 0);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 0);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 1))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 1);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 1);
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_2505107, 5))
	{
		unk_0xF6082E2ADA1C795B(&Global_2505107, 5);
		unk_0xF6082E2ADA1C795B(&Global_1770671, 5);
	}
	if (unk_0x5D03CCED0E46E032(-355737150))
	{
		unk_0x6ADA8071E27ECAB6(-355737150, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-580979506))
	{
		unk_0x6ADA8071E27ECAB6(-580979506, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1426452475))
	{
		unk_0x6ADA8071E27ECAB6(-1426452475, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(745417724))
	{
		unk_0x6ADA8071E27ECAB6(745417724, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1305304906))
	{
		unk_0x6ADA8071E27ECAB6(-1305304906, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-1543175077))
	{
		unk_0x6ADA8071E27ECAB6(-1543175077, 0, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(-811770997))
	{
		unk_0x6ADA8071E27ECAB6(-811770997, 0, 0, 0);
	}
}

int func_942()
{
	if (Local_121.f_3 != -1)
	{
		return Local_121.f_3;
	}
	if (unk_0x62E688B72E3C57B0())
	{
		if (Local_121.f_3 == -1)
		{
			if (Local_121.f_3 == -1)
			{
				if (Global_2497344.f_5402 != -1)
				{
					Local_121.f_3 = Global_2497344.f_5402;
				}
				else
				{
					Local_121.f_3 = 1;
				}
			}
		}
	}
	return Local_121.f_3;
}

void func_943(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_957(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_956() != -1)
		{
			func_955(-1);
		}
		if (func_954() != -1)
		{
			func_953(-1);
		}
		func_952(iParam2);
		func_950(iParam0);
		if (!func_397(iParam0))
		{
			fVar0 = func_396(iParam0);
			if (fVar0 != 1f)
			{
				func_393(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_400(iParam0) || iParam3)
		{
			if (func_398(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
			}
			else if (unk_0xA0F7964BC7FD74A9() < 5)
			{
				unk_0xFBC4596E19752537(1f);
				unk_0xE0125DCD8DB3EFC3(5);
			}
		}
		if (func_359())
		{
			func_351(27);
		}
		if (bParam1)
		{
			if (!func_350())
			{
				func_390(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_759(6);
			}
			func_949();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_152(unk_0x0FFED3E94261A832()) && func_347(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_945();
		if (func_944(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_944(int iParam0)
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

void func_945()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_948();
	iVar2 = func_41(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_946(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_946(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_947(iParam0) == func_41(iParam1) || func_947(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_947(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1622795[func_41(iParam0) /*431*/].f_11.f_351;
	}
	return func_18();
}

int func_948()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_513();
	if (iVar0 != func_18())
	{
		if (func_1050(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar1 /*431*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_949()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 4);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 6))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 6);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 0);
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 2);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544 = 0;
	if (Global_2497344.f_4478 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(Global_2497344.f_4478);
	}
	Global_2497344.f_4477 = 0;
}

void func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_689(3766, -1, 0);
	iVar1 = func_951(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_687(3766, iVar0, -1, 1, 0);
	}
}

int func_951(int iParam0)
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

void func_952(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_953(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_954()
{
	return Global_2497344.f_4828.f_151;
}

void func_955(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

int func_956()
{
	return Global_2497344.f_4828.f_150;
}

void func_957(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

int func_958()
{
	int iVar0;
	
	iVar0 = func_959();
	if (iVar0 > -1)
	{
		if (Local_121.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_959()
{
	int iVar0;
	
	if (Local_186[unk_0x88641E5BC172153A() /*6*/].f_4 != -1)
	{
		return Local_186[unk_0x88641E5BC172153A() /*6*/].f_4;
	}
	if (func_20(unk_0x0FFED3E94261A832()))
	{
		Local_186[unk_0x88641E5BC172153A() /*6*/].f_4 = unk_0x88641E5BC172153A();
		if (unk_0x88641E5BC172153A() == Local_121.f_8)
		{
			func_644(1);
		}
	}
	else if (func_19(unk_0x0FFED3E94261A832(), 1))
	{
		iVar0 = func_513();
		if (iVar0 != func_18())
		{
			if (unk_0x76BCE6C7B20502DA(iVar0))
			{
				Local_186[unk_0x88641E5BC172153A() /*6*/].f_4 = unk_0x675E1E93DBDAF30B(iVar0);
			}
		}
	}
	return Local_186[unk_0x88641E5BC172153A() /*6*/].f_4;
}

int func_960()
{
	if (func_521())
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			return 0;
		}
	}
	else if (!unk_0xD0BCF9877CD72A3F(Local_121.f_12))
	{
		return 0;
	}
	return 1;
}

int func_961()
{
	return Local_121.f_0;
}

int func_962(int iParam0)
{
	return Local_186[iParam0 /*6*/];
}

int func_963(bool bParam0)
{
	if (func_964(1))
	{
		return 1;
	}
	if (Global_2497344.f_4828.f_23)
	{
		Global_2497344.f_4828.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_304() == func_18() || !func_1050(func_304(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_964(bool bParam0)
{
	bool bVar0;
	
	if (!func_939(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_18())
		{
			if (func_1050(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_965(func_275(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_759(31);
				if (func_670(func_275(unk_0x0FFED3E94261A832())))
				{
					func_759(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_596(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_303(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_759(88);
					}
				}
				else
				{
					Global_1621379 = 1;
				}
				Global_1621363 = { Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_965(int iParam0)
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
		case 225:
		case 226:
		case 227:
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

int func_966()
{
	var uVar0;
	
	func_970(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_969())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_968())
	{
		return 1;
	}
	if (func_967(157))
	{
		if (!func_414())
		{
			return 1;
		}
	}
	if (func_967(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_394() != 0)
	{
		if (unk_0x09952BA662A7629B(func_394()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_967(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_968()
{
	return Global_2454709;
}

bool func_969()
{
	return Global_2445217.f_573;
}

void func_970(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_971(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_971(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_1050(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_972(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_972(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_973()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_974()
{
	var uVar0;
	
	if (func_521())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_29[0]))
		{
			if (unk_0xAA4F14DA15DB0B51(iLocal_380, 5))
			{
				if (!func_939(1))
				{
					if (func_21(Local_121.f_29[0]))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_121.f_29[0])))
							{
								unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1027();
	unk_0x768882AFD4B41EEA(1);
	func_644(0);
	if (!unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
	{
		if (unk_0x591AF4C50B46E014())
		{
			if (func_958() || func_360())
			{
				unk_0xF6082E2ADA1C795B(&iLocal_379, 17);
				Global_1773254.f_2 = Local_121.f_63;
				Global_1773254.f_3 = Local_121.f_64;
				func_832(0, 4, 0, 0, -1, -1, -1, -1);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 17))
	{
		func_1025(func_942(), -1, -1, -1082130432);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 4))
	{
		func_389(8);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 20))
	{
		unk_0x988197573BDAD49A("BG_ASSAULT_STOP");
		unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
		unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
	}
	if (Local_121.f_3 == 1)
	{
		unk_0x02E663D7DDAE8202(joaat("rhino"), 0);
	}
	unk_0xE0125DCD8DB3EFC3(5);
	if (!func_1024())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_12))
		{
			if (unk_0x434105A1C45F1BED(Local_121.f_12))
			{
				uVar0 = unk_0x7BAE3A9057619E1F(Local_121.f_12);
				unk_0xA54DE0E68212CD6B(&uVar0);
			}
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&iLocal_379, 29);
	}
	func_980(1, 0);
	if (Global_2497344.f_5402 != -1)
	{
		Global_2497344.f_5402 = -1;
	}
	if (Global_1573333)
	{
		Global_1573333 = 0;
	}
	func_979();
	if (func_942() == 3)
	{
		func_978();
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_380, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_380, 1))
		{
			unk_0x6040865446FA4030(1);
			unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
			unk_0x15AFDA4756FDF7EC("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_205();
	func_976();
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 19))
	{
		unk_0xDC0343058D861402(iLocal_517);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 16))
	{
		func_381();
		func_376(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_975();
}

void func_975()
{
	unk_0xA232817B0B36F2E5();
}

void func_976()
{
	struct<6> Var0;
	
	if (func_942() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_977(Var0);
		}
	}
}

void func_977(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x58478145CAF8429C(&cParam0))
	{
		return;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_933(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x507FE690B1271947(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_978()
{
	if (unk_0x5D03CCED0E46E032(1343869835))
	{
		unk_0x6ADA8071E27ECAB6(1343869835, 0, 0, 0);
		unk_0x468CE34953D211E1(1343869835, 0f, 0, 0);
	}
	if (unk_0x5D03CCED0E46E032(207506449))
	{
		unk_0x6ADA8071E27ECAB6(207506449, 0, 0, 0);
		unk_0x468CE34953D211E1(207506449, 0f, 0, 0);
	}
}

void func_979()
{
	if (Global_1770670)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 0))
		{
			unk_0x507FE690B1271947(&Global_2505107, 0);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 1))
		{
			unk_0x507FE690B1271947(&Global_2505107, 1);
		}
		if (unk_0xAA4F14DA15DB0B51(Global_1770671, 5))
		{
			unk_0x507FE690B1271947(&Global_2505107, 5);
		}
		if (unk_0x5D03CCED0E46E032(-355737150))
		{
			unk_0x6ADA8071E27ECAB6(-355737150, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-580979506))
		{
			unk_0x6ADA8071E27ECAB6(-580979506, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1426452475))
		{
			unk_0x6ADA8071E27ECAB6(-1426452475, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(745417724))
		{
			unk_0x6ADA8071E27ECAB6(745417724, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1305304906))
		{
			unk_0x6ADA8071E27ECAB6(-1305304906, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-1543175077))
		{
			unk_0x6ADA8071E27ECAB6(-1543175077, 1, 0, 0);
		}
		if (unk_0x5D03CCED0E46E032(-811770997))
		{
			unk_0x6ADA8071E27ECAB6(-811770997, 1, 0, 0);
		}
		Global_1770671 = 0;
	}
	Global_1770670 = 0;
}

void func_980(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1341327.f_1.f_108 != 0)
	{
		Global_1341327.f_1.f_108 = 0;
	}
	Global_1341327.f_1.f_109 = -1;
	Global_1341327.f_1.f_110 = -1;
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 167 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 168)
	{
		func_1022();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_706() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_1006(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_1005(iParam1))
			{
				func_1006(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 164 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 208)
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = -1;
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_152(unk_0x0FFED3E94261A832()))
		{
			func_390(0);
		}
	}
	else if (func_1003(unk_0x0FFED3E94261A832()) != -1)
	{
		func_957(-1);
	}
	func_1002(func_18());
	if (func_324(16))
	{
		func_369(16);
	}
	func_998(0);
	func_952(-1);
	func_997();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_996(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_994(iVar1);
		iVar1++;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
	}
	iVar2 = func_675();
	if ((func_277(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_993(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_533(iVar2))
	{
		func_989(-1, 1);
	}
	else if (((func_674(iVar2) || func_988(iVar2)) || func_987(iVar2)) || func_528(iVar2))
	{
	}
	else
	{
		func_989(-1, 1);
	}
	func_353(19);
	func_353(20);
	func_353(21);
	func_353(22);
	func_353(27);
	func_369(3);
	func_369(4);
	func_369(7);
	func_986();
	if (func_347(unk_0x0FFED3E94261A832()))
	{
		func_644(0);
	}
	func_353(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_18();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_370();
	}
	if (!func_152(unk_0x0FFED3E94261A832()))
	{
		func_388();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 6);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 7))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 7);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 8))
	{
		func_985("IMPEXP_SELFDES", 0);
		func_983("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_981(iVar2, 0);
}

void func_981(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_982(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_982(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_982(int iParam0)
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

void func_983(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_445();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_984(iVar0))
					{
					}
					else
					{
						Global_103236.f_13922[iVar0 /*104*/].f_24 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_28 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xA216C26603EB04E7(Global_103236.f_13922[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_984(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_985(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_103236.f_13922[iVar0 /*104*/].f_24 = 1;
				if (Global_103236.f_13922[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_103236.f_13832[0 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_103236.f_13832[1 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_103236.f_13832[2 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_103236.f_13832[3 /*20*/].f_17 = 0;
					}
					Global_103236.f_13922[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_103236.f_13922[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_986()
{
	if (func_364(unk_0x0FFED3E94261A832()))
	{
		func_353(25);
	}
}

int func_987(int iParam0)
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

int func_988(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_989(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_675();
	}
	if (iParam0 > 0)
	{
		if (func_513() != func_18())
		{
			if (func_992(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_991(iParam0)] = 1;
			}
		}
		iVar0 = func_991(159);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(157);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(148);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(164);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(142);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(152);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(166);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(170);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(173);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(179);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(200);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(201);
		if (func_990(iVar0, Global_262145.f_11258, bParam1))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(182);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(183);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(185);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(186);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(180);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(195);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(197);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(198);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(207);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(208);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(209);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(214);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(215);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(216);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(217);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(218);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(219);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(220);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(221);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_990(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_248(unk_0x0FFED3E94261A832(), 19) && !func_248(unk_0x0FFED3E94261A832(), 20)) && !func_248(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_9(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_893(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_991(int iParam0)
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

int func_992(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_993(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_675();
	}
	if (iParam0 > 0)
	{
		if (func_513() != func_18())
		{
			Global_2484845.f_93[func_991(iParam0)] = 1;
		}
		iVar0 = func_991(155);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(163);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(160);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(153);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(162);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(154);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(171);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(172);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(199);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(194);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(193);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(210);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(205);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(189);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_991(211);
		if (func_990(iVar0, Global_262145.f_11259, 0))
		{
			func_216(&(Global_2484845[iVar0 /*2*/]));
			func_8(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_994(int iParam0)
{
	if (!func_405(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_995(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_995() };
	}
	if (!func_405(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_995(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_995() };
	}
}

Vector3 func_995()
{
	struct<3> Var0;
	
	return Var0;
}

void func_996(int iParam0)
{
	if (!func_405(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_995(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_995() };
	}
	if (!func_405(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_995(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_995() };
	}
}

void func_997()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_18();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_998(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1001(unk_0x0FFED3E94261A832(), 14))
		{
			func_1000(14);
		}
	}
	else if (func_1001(unk_0x0FFED3E94261A832(), 14))
	{
		func_999(14);
	}
}

void func_999(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_1000(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_1001(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_1002(int iParam0)
{
	if (func_20(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1003(int iParam0)
{
	if (func_1004(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_1004(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_1005(int iParam0)
{
	return func_800(iParam0) == 5;
}

void func_1006(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_799(iParam0, iParam1) && func_1021(iParam0, iParam1))
	{
		iVar0 = func_798(iParam0, iParam1);
		func_1009(iVar0, bParam2, bParam3);
		func_1007(iVar0, 1);
	}
}

void func_1007(int iParam0, int iParam1)
{
	func_782(func_1008(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_1008(int iParam0)
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
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_1009(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_895(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_1020(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_1019(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_1018(iParam0, 0, bParam2);
	}
	else if (func_1016(iParam0, bParam2))
	{
		iVar0 = func_1015(iVar2, 0);
		iVar3 = func_857(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_1014(iVar2, bParam2);
		iVar5 = func_1015(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1005(iVar2) && func_1013(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1020(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1012(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_1011(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_1014(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1015(iVar2, bParam2) / func_1012(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1005(iVar2) && func_1013(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1010(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_1010(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_789(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1011(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1012(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_789(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1013(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_789(iParam1) && func_1005(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1014(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_800(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_1015(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_800(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_797(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_1013(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1016(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_783(15384, -1, -1);
	}
	return func_783(func_1017(iParam0), -1, -1);
}

int func_1017(int iParam0)
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
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1018(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_782(15384, iParam1, -1, 1);
		return;
	}
	func_782(func_1017(iParam0), iParam1, -1, 1);
}

int func_1019(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_895(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_1005(iVar1))
	{
		if (func_1013(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1020(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_1021(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_799(iParam0, iParam1))
	{
		iVar0 = func_798(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1022()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_1023(24);
}

void func_1023(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_1024()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_379, 24))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 8))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 9))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 10))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 15))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1025(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0xFABF5258A318B1DC();
	Var1.f_0 = Global_1773254;
	Var1.f_1 = Global_1773254.f_1;
	Var1.f_2 = Global_1773254.f_2;
	Var1.f_3 = Global_1773254.f_3;
	Var1.f_4 = Global_1773254.f_4;
	Var1.f_5 = Global_1773254.f_5;
	Var1.f_6 = Global_1773254.f_6;
	Var1.f_7 = Global_1773254.f_7;
	Var1.f_8 = Global_1773254.f_8;
	Var1.f_9 = Global_1773254.f_9;
	Var1.f_10 = Global_1773254.f_10;
	Var1.f_11 = Global_1773254.f_11;
	Var1.f_12 = Global_1773254.f_12;
	Var1.f_13 = Global_1773254.f_14;
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x35302CD5A5D37EED(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1773254.f_15;
			Var15.f_15 = Global_1773254.f_16;
			Var15.f_16 = Global_1773254.f_17;
			unk_0x38535AEC8C6AF84E(&Var15);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1773254.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0x7867F950FD071AFE(&Var32);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1773254.f_15;
			Var49.f_15 = uParam0;
			unk_0xA8455636070B68F7(&Var49);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1773254.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0x8D0BA1C0A0384C16(&Var65);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1773254.f_15;
			Var82.f_15 = uParam0;
			unk_0x31A64EC64E1EB3B3(&Var82);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1773254.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x231FCB4459183C55(&Var98);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1773254.f_15;
			unk_0x5601D2D69A3954CE(&Var116);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1773254.f_15;
			unk_0x6E6D2D6D4552A609(&Var134);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1773254.f_15;
			unk_0x9B04C28FD4D089F5(&Var153);
		}
	}
	func_1026();
}

void func_1026()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

void func_1027()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x62E688B72E3C57B0())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 17))
		{
			Var0 = { 200f, 200f, 200f };
			Var3 = { func_24() };
			unk_0x20A9229D8F4F054A(Var3 - Var0, Var3 + Var0, 1, 1);
			unk_0x507FE690B1271947(&(Local_121.f_1), 17);
		}
	}
}

void func_1028(struct<21> Param0)
{
	func_1048(func_1049(Param0.f_0), Param0);
	unk_0xE73D26CD3CB3B618(1);
	unk_0x20DC9856B13C398C(15);
	unk_0x7E04478E16257BA0(5);
	func_1047(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_121, 65);
	unk_0xA5929B03CD847BE8(&Local_186, 193);
	if (!func_1046())
	{
		func_974();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
		}
		func_1045();
		func_1029(0, 0);
		if (func_324(8))
		{
			func_369(8);
		}
		Local_186[unk_0x88641E5BC172153A() /*6*/] = 0;
	}
	else
	{
		func_974();
	}
}

void func_1029(int iParam0, int iParam1)
{
	func_1044();
	func_1032(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_1031(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_696() && !func_19(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_356())
		{
			func_389(3);
		}
	}
	func_389(4);
	if (func_939(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_513();
	}
	if (func_670(iParam0))
	{
		func_855();
		Global_1773272.f_18 = func_851(func_304());
	}
	else if (func_673(func_1003(unk_0x0FFED3E94261A832())))
	{
		func_853();
		Global_1773325.f_18 = func_851(func_304());
	}
	func_1030();
}

void func_1030()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_18();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_1031(int iParam0, bool bParam1)
{
	return func_16(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_1032(bool bParam0)
{
	int iVar0;
	
	func_1023(33);
	func_1023(34);
	func_1023(35);
	func_1023(36);
	func_1023(37);
	func_1023(38);
	func_1023(39);
	func_1023(40);
	func_1023(43);
	func_1023(41);
	func_1023(54);
	func_1023(42);
	func_1023(47);
	func_1043(23);
	func_1043(24);
	func_1023(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_1042();
	func_1034();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1033(3))
	{
		func_1043(3);
	}
	else if (func_1033(4))
	{
		func_1043(4);
	}
	else if (func_1033(5))
	{
		func_1043(5);
	}
	else if (func_1033(6))
	{
		func_1043(6);
	}
	else if (func_1033(7))
	{
		func_1043(7);
	}
	else if (((((((((((((((((func_1033(0) || func_1033(1)) || func_1033(2)) || func_1033(8)) || func_1033(9)) || func_1033(10)) || func_1033(11)) || func_1033(12)) || func_1033(13)) || func_1033(14)) || func_1033(15)) || func_1033(16)) || func_1033(17)) || func_1033(18)) || func_1033(19)) || func_1033(20)) || func_1033(21)) || func_1033(22))
	{
		func_1043(8);
		func_1043(0);
		func_1043(1);
		func_1043(2);
		func_1043(9);
		func_1043(10);
		func_1043(11);
		func_1043(12);
		func_1043(13);
		func_1043(14);
		func_1043(15);
		func_1043(16);
		func_1043(17);
		func_1043(18);
		func_1043(19);
		func_1043(20);
		func_1043(21);
		func_1043(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1033(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_1034()
{
	if (func_1041())
	{
		func_1040(0);
		func_1040(1);
		func_1040(2);
		func_1040(3);
		func_1040(4);
		func_1040(5);
		func_1040(6);
		func_1040(7);
		func_1040(8);
		func_1040(9);
		func_1040(10);
		func_1040(11);
		func_1040(12);
		if (func_1039(13))
		{
			if (func_1036(func_1037(), 3))
			{
				func_1035(func_1037(), 3);
			}
			func_1040(13);
		}
	}
}

void func_1035(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1036(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1037()
{
	if (func_1038())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

int func_1038()
{
	int iVar0;
	
	iVar0 = func_41(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_18()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_1039(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_1040(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_1041()
{
	if ((((((((((((func_1039(0) || func_1039(1)) || func_1039(2)) || func_1039(3)) || func_1039(4)) || func_1039(5)) || func_1039(6)) || func_1039(7)) || func_1039(8)) || func_1039(9)) || func_1039(10)) || func_1039(11)) || func_1039(12))
	{
		return 1;
	}
	return 0;
}

void func_1042()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_1043(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_1044()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

void func_1045()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x3A8EFBE4AB457FE2(5, Global_1574695[iVar0], -347613984);
		unk_0x3A8EFBE4AB457FE2(5, -347613984, Global_1574695[iVar0]);
		iVar0++;
	}
}

int func_1046()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_969())
		{
			return 0;
		}
		if (func_967(155))
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

int func_1047(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_975();
			}
			else
			{
				return 0;
			}
		}
		if (!func_926())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_975();
					}
					else
					{
						return 0;
					}
				}
				if (func_969())
				{
					if (!bParam2)
					{
						func_975();
					}
					else
					{
						return 0;
					}
				}
				if (func_967(155))
				{
					if (!bParam2)
					{
						func_975();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_975();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_975();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_975();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1048(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_975();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_1049(int iParam0)
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
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
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
		
		case 109:
			return 32;
		
		case 110:
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
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

int func_1050(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

