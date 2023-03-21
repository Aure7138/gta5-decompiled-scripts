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
	struct<872> Local_121 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_993[32];
	int iLocal_1442 = 0;
	int iLocal_1443 = 0;
	int iLocal_1444 = 0;
	int iLocal_1445 = 0;
	int iLocal_1446 = 0;
	int iLocal_1447 = 0;
	int iLocal_1448 = 0;
	int iLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457[4] = { 0, 0, 0, 0 };
	struct<8> Local_1462[30];
	var uLocal_1703[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1734 = 0;
	var uLocal_1735 = 0;
	int iLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
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
	iLocal_1449 = -1;
	if (unk_0x591AF4C50B46E014() && func_813(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_789(ScriptParam_0);
	}
	else
	{
		func_740();
	}
	while (true)
	{
		func_739();
		if (func_731())
		{
			func_740();
		}
		Global_1773254.f_2 = Local_121.f_863;
		Global_1773254.f_3 = Local_121.f_864;
		switch (func_730(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_729() == 1)
				{
					if (func_728())
					{
						func_727();
						if (func_726())
						{
							func_711(166, 1, -1, 1);
							unk_0xE0125DCD8DB3EFC3(3);
							func_710(0f);
							iLocal_1448 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
							unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_1447);
						}
						else
						{
							func_711(166, 0, -1, 1);
						}
						func_709();
						func_708();
						func_707();
						Local_993[unk_0x88641E5BC172153A() /*14*/] = 1;
					}
				}
				else if (func_729() == 4)
				{
					Local_993[unk_0x88641E5BC172153A() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_704(1))
				{
					Local_993[unk_0x88641E5BC172153A() /*14*/] = 2;
				}
				if (func_729() == 1)
				{
					func_703();
					func_683();
					func_660();
					func_287();
					func_278();
					if (func_726() || func_276())
					{
						func_135(&(Global_1341327.f_529), &Global_1341327, 26, &(Global_1341327.f_1), &(Global_1341327.f_112), -1, 0);
					}
					func_73();
				}
				else if (func_729() == 4)
				{
					Local_993[unk_0x88641E5BC172153A() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_121.f_845));
				if (func_67(&(Local_121.f_845)))
				{
					Local_993[unk_0x88641E5BC172153A() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_993[unk_0x88641E5BC172153A() /*14*/] = 4;
			
			case 4:
				func_740();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_729())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0xABE13CB17EB2BE02(&(Local_121.f_863), &(Local_121.f_864));
						Local_121.f_0 = 1;
						Local_121.f_118 = unk_0x88641E5BC172153A();
						Local_121.f_119 = unk_0x0FFED3E94261A832();
						func_711(166, 1, -1, 1);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
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
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_121.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
			{
				Local_121.f_117 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				Local_121.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
	{
		if (!func_8(&(Local_121.f_849)))
		{
			func_7(&(Local_121.f_849), 0, 0);
		}
		else if (func_6(&(Local_121.f_849), 500, 0))
		{
			unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_121.f_847)))
	{
		func_7(&(Local_121.f_847), 0, 0);
	}
	else if (func_6(&(Local_121.f_847), func_10(), 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_13566;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x62E688B72E3C57B0())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_121.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_121.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
							{
								Local_121.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_121.f_2[iVar0 /*26*/] == 1)
						{
							Local_121.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_121.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_121.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xAA4F14DA15DB0B51(Local_121.f_109, iVar0))
										{
											unk_0xF6082E2ADA1C795B(&(Local_121.f_108), iVar0);
											Local_121.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_121.f_110, iVar0))
										{
											unk_0xF6082E2ADA1C795B(&(Local_121.f_108), iVar0);
											Local_121.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_121.f_111, iVar0))
										{
											unk_0xF6082E2ADA1C795B(&(Local_121.f_108), iVar0);
											Local_121.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xAA4F14DA15DB0B51(Local_121.f_112, iVar0))
										{
											Local_121.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_121.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_121.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1)))
							{
								Local_121.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_121.f_2[iVar0 /*26*/].f_2))
								{
									Local_121.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xAA4F14DA15DB0B51(Local_121.f_112, iVar0))
								{
									Local_121.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_121.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_121.f_110, iVar0))
							{
								Local_121.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_121.f_111, iVar0))
							{
								Local_121.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_121.f_2[iVar0 /*26*/].f_24)
						{
							Local_121.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_121.f_2[iVar0 /*26*/].f_25)
						{
							Local_121.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_121.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_121.f_2[iVar0 /*26*/] == 0)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_121.f_2[iVar0 /*26*/] == 2)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_121.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_121.f_2[iVar0 /*26*/].f_17 == 3 || Local_121.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_121.f_2[iVar0 /*26*/].f_24)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_121.f_2[iVar0 /*26*/].f_17 == 3 || Local_121.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_121.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_13(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(uParam0, 0))
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

int func_14(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_121.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xF6082E2ADA1C795B(&(Local_121.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			iVar1 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xB463DE5FD1717E9D(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312735;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_121.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_121.f_0 != 4)
	{
		iLocal_1444 = 0;
		while (iLocal_1444 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_1444)))
			{
				iVar3 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_1444));
				if (!func_17(iVar3, 0))
				{
					if (func_813(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1444);
					func_23(iLocal_1444);
					if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_993[iLocal_1444 /*14*/].f_1, 4))
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
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (Local_121.f_118 > -1)
				{
					if (iLocal_1444 == Local_121.f_118)
					{
						unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 5);
					}
				}
			}
			iLocal_1444++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_121.f_115 != iVar0)
		{
			Local_121.f_115 = iVar0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 1);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_113, iVar0))
			{
				if (!func_8(&(Local_121.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_121.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_121.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_121.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_109, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_109), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_110, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_110), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_112, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_112), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_111, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_111), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_121.f_113, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_113), iVar0);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_113), iVar0);
			}
		}
		if (Local_121.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_121.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_12, iVar0))
				{
					Local_121.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_121.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_993[iParam0 /*14*/].f_13, iVar0))
				{
					Local_121.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(Local_121.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_121.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xB463DE5FD1717E9D(unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2), unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iParam0)), 1);
							unk_0xF6082E2ADA1C795B(&(Local_121.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(Local_121.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_44())
	{
		return 0;
	}
	if (!func_33())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Local_121.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_121.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	iVar0 = Local_121.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_121.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_121.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_121.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x0EFB343481EA3E51(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_121.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x333EF04F1A5ADEB5(Var3, 10f, 1, 0, 0, 1);
							unk_0xF6082E2ADA1C795B(&(Local_121.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x675A76D2D74FEAFE(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x4ACEF9AFD39C05AD(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1447);
							unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0x66836FB7C87AD349(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
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

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_121.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_121.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_121.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_121.f_2[iParam0 /*26*/];
	iVar2 = Local_121.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_121.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_121.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_121.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0xF157AC7C4936A07C(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), Local_121.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574737);
											unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1447);
											unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0xF157AC7C4936A07C(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_121.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_121.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_121.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574737);
										unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1447);
										unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xE9BA7ED0FD3FF42D(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x4EA5B5526A4651E9(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0xF284B601CA7EB767(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0xB5FB8AA9DCCAC75B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_36()
{
	return unk_0xF2DB717A73826179(Global_262145.f_13574);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_13573;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	iVar0 = unk_0xD00B79C0E206E082(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xDF7D91421097E934(iVar0);
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(iVar0, iParam9);
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

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_41()
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		unk_0x47ABF422A76CAA6A(uParam0);
		return unk_0x434105A1C45F1BED(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_121.f_2[iParam0 /*26*/] == 0 || Local_121.f_2[iParam0 /*26*/] == 2);
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_45(int iParam0)
{
	switch (Local_121.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	
	switch (Local_121.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_121.f_2[iParam0 /*26*/].f_11;
				if (unk_0x0EFB343481EA3E51(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_121.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_121.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_121.f_2[iParam0 /*26*/].f_2), iVar0, Local_121.f_2[iParam0 /*26*/].f_13, Local_121.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0x4ACEF9AFD39C05AD(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x675A76D2D74FEAFE(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_2), 1, iLocal_1447);
								unk_0x11C8DD1ABA391722(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 0);
								unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0xD44F61F61676BA14(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x3EACD080B21FFD9A(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xBEC47B996D45CBC0(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x66836FB7C87AD349(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x5ADC55733B227FF7(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0xF157AC7C4936A07C(1))
					{
						iVar1 = Local_121.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_121.f_2[iParam0 /*26*/].f_1), Local_121.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), Global_1574737);
								unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, iLocal_1447);
								unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xF6082E2ADA1C795B(&(Local_121.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xF157AC7C4936A07C(1))
				{
					iVar1 = Local_121.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_121.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_121.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_121.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_121.f_2[iParam0 /*26*/].f_13, Local_121.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), Global_1574737);
								unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, iLocal_1447);
								unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xF6082E2ADA1C795B(&(Local_121.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xF157AC7C4936A07C(1))
				{
					iVar1 = Local_121.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_121.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_121.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_121.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_121.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_121.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_121.f_2[iParam0 /*26*/].f_13, Local_121.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), Global_1574737);
								unk_0x84758BE449C417C5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1, iLocal_1447);
								unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0xE9BA7ED0FD3FF42D(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), Local_121.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x4EA5B5526A4651E9(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0xF284B601CA7EB767(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0x176253610C53F0E0(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0xD44F61F61676BA14(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xF6082E2ADA1C795B(&(Local_121.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_47()
{
	return unk_0xF2DB717A73826179(Global_262145.f_13572);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_13571;
}

float func_50(int iParam0)
{
	if (func_28(Local_121.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_121.f_865[iVar0] = unk_0x25118499AB6F447B(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xF6082E2ADA1C795B(&(Local_121.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_121.f_865[iVar0] = unk_0x25118499AB6F447B(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xF6082E2ADA1C795B(&(Local_121.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_121.f_865[iVar0] = unk_0x25118499AB6F447B(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xF6082E2ADA1C795B(&(Local_121.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_121.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x895FB9FE885E36ED(0, Local_121.f_122);
			if (!func_28(Local_121.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_121.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_121.f_123[iVar0 /*36*/] };
					*uParam2 = Local_121.f_123[iVar0 /*36*/].f_3;
					Local_121.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x895FB9FE885E36ED(0, Local_121.f_122);
			if (!func_28(Local_121.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_121.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_121.f_123[iVar0 /*36*/] };
					*uParam2 = Local_121.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_121.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x895FB9FE885E36ED(0, 10);
			if (!func_28(Local_121.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_121.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_121.f_484[iVar0 /*36*/] };
					*uParam2 = Local_121.f_484[iVar0 /*36*/].f_3;
					Local_121.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_813(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_56(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_813(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
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
								if (unk_0x4A2E6F541CD8C36E(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x4A2E6F541CD8C36E(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_55(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_813(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_56(iVar1), Param0, 1) < fParam3)
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

int func_58(int iParam0)
{
	if (func_63(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_62(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_59(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_60())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60()
{
	return -1;
}

int func_61(int iParam0)
{
	if (iParam0 != func_60())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_62(iParam0) };
		Global_2484585 = { func_62(iParam1) };
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

void func_64()
{
	Local_121.f_2[0 /*26*/] = 2;
	Local_121.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_121.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_121.f_2[1 /*26*/] = 2;
	Local_121.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_121.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_121.f_2[2 /*26*/] = 0;
	Local_121.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_121.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_121.f_2[3 /*26*/] = 0;
	Local_121.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_121.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_121.f_122 == 0)
	{
		if (Local_121.f_121 == 0)
		{
			Local_121.f_122 = 10;
		}
		else
		{
			Local_121.f_122 = 9;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 4))
	{
		return;
	}
	switch (Local_121.f_121)
	{
		case 0:
			Local_121.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_121.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_121.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_121.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_121.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_121.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_121.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_121.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_121.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_121.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_121.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_121.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_121.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_121.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_121.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_121.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_121.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_121.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_121.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_121.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_121.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_121.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_121.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_121.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_121.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_121.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_121.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_121.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_121.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_121.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_121.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_121.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_121.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_121.f_123[6 /*36*/].f_14[2] = 180f;
			Local_121.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_121.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_121.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_121.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_121.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_121.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_121.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_121.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_121.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_121.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_121.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_121.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_121.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_121.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_121.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_121.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_121.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_121.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_121.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_121.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_121.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_121.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_121.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_121.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_121.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_121.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_121.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_121.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_121.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_121.f_484[0 /*36*/].f_3 = 179.583f;
			Local_121.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_121.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_121.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_121.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_121.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_121.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_121.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_121.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_121.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_121.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_121.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_121.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_121.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_121.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_121.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_121.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_121.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_121.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_121.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_121.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_121.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_121.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_121.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_121.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_121.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_121.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_121.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_121.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_121.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_121.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_121.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_121.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_121.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_121.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_121.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_121.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_121.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_121.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_121.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_121.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_121.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_121.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_121.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_121.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_121.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_121.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_121.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_121.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_121.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_121.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_121.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_121.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_121.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_121.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_121.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_121.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_121.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_121.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_121.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_121.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_121.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_121.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_121.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_121.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_121.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_121.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_121.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_121.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_121.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_121.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_121.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_121.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_121.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_121.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_121.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_121.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_121.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_121.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_121.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_121.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_121.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_121.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_121.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_121.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_121.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_121.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_121.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_121.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_121.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xF6082E2ADA1C795B(&(Local_121.f_1), 4);
}

var func_66()
{
	if (Local_121.f_121 != -1)
	{
		return Local_121.f_121;
	}
	if (Local_121.f_121 == -1)
	{
		if (unk_0xC1FE359AB7CCFF21(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("City"))
		{
			Local_121.f_121 = 0;
		}
		else
		{
			Local_121.f_121 = 1;
		}
	}
	return Local_121.f_121;
}

int func_67(var uParam0)
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

void func_68(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_69()
{
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_121.f_119 != -1)
	{
		iVar0 = unk_0x7C214DA899F05536(Local_121.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0x3A8EFBE4AB457FE2(5, Global_1574695[iVar1], Global_1574737);
						unk_0x3A8EFBE4AB457FE2(5, Global_1574737, Global_1574695[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_60())
	{
		if (!bParam2)
		{
			if (func_72(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_60())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 != func_60())
	{
		if (iParam0 != func_60())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_60())
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

void func_73()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_726())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_134(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_133(unk_0x0FFED3E94261A832()))
		{
			if (!func_127())
			{
				func_123(0);
				unk_0x337229861BC52CD5(0);
				unk_0xF6082E2ADA1C795B(&uLocal_1442, 18);
			}
		}
	}
	if (Local_121.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_74(166, Var0, &uLocal_1735, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_122(unk_0x0FFED3E94261A832()) && !func_121(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8)) && (func_120(unk_0x0FFED3E94261A832()) || func_119(unk_0x0FFED3E94261A832())))
	{
		return;
	}
	Global_1773245 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	func_115(iParam0, fVar0);
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_114(unk_0x0FFED3E94261A832()) || func_112(unk_0x0FFED3E94261A832()))
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
		if (!func_111(unk_0x0FFED3E94261A832(), 21))
		{
			func_110(Param1, 1, 0);
		}
		if (!*uParam4 && func_813(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			if (func_109(iParam0))
			{
				unk_0xFBC4596E19752537(func_108(iParam0));
				if (func_107(iParam0, -1))
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
			if (func_106(iParam0))
			{
				fVar1 = func_105(iParam0);
				if (fVar1 != 1f)
				{
					func_710(fVar1);
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_104(iParam0) && func_114(unk_0x0FFED3E94261A832()))
				{
					func_102(1);
					func_101(2);
				}
			}
			func_100(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_99(unk_0x0FFED3E94261A832(), 19))
			{
				func_98(19);
			}
		}
		if (*uParam4 && func_813(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 0;
			if (func_109(iParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
				{
					unk_0xFBC4596E19752537(1f);
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				func_97();
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
			}
			if (iParam7 && !func_122(unk_0x0FFED3E94261A832()))
			{
				if (func_95(unk_0x0FFED3E94261A832()) != 152)
				{
					func_77();
				}
			}
			if (func_76(2))
			{
				func_102(0);
				func_75(2);
			}
		}
	}
}

void func_75(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

void func_77()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_93();
	func_80(1, 1);
	func_78();
}

void func_78()
{
	func_79(0, 0);
}

void func_79(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_80(bool bParam0, bool bParam1)
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
		func_92();
	}
	func_83(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_82(0);
	func_81();
}

void func_81()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_82(bool bParam0)
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

void func_83(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_91())
		{
			func_90();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_88();
		func_87(8, 0, 0, 0, 0);
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
		func_84();
	}
}

void func_84()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	if (func_86())
	{
		func_85();
	}
	else
	{
		func_88();
		func_87(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_85()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_86()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_88()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	func_89();
	Global_2404996.f_676 = 0;
}

void func_89()
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

void func_90()
{
	if (func_86())
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

int func_91()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_93()
{
	func_94();
	Global_2404996.f_2053 = 0;
}

void func_94()
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

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_97()
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

void func_98(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

void func_100(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

void func_101(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_102(int iParam0)
{
	if (func_103() && iParam0)
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

int func_103()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
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

float func_105(int iParam0)
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

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1)
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

float func_108(int iParam0)
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

int func_109(int iParam0)
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

void func_110(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_112(int iParam0)
{
	if (func_113(iParam0))
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_60())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_99(iParam0, 9);
	}
	return 0;
}

void func_115(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_118(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_116();
	}
}

void func_116()
{
	if (!func_117(unk_0x0FFED3E94261A832()))
	{
		func_100(25);
	}
}

bool func_117(int iParam0)
{
	return func_99(iParam0, 25);
}

int func_118(int iParam0)
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

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!func_133(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 || func_124(unk_0x0FFED3E94261A832()) != 0)
		{
			func_100(20);
			if (func_122(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
				}
			}
		}
	}
}

int func_124(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_122(iParam0) && !func_121(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_133(iParam0);
	uVar3 = func_126();
	uVar4 = func_127();
	if ((bVar1 && (func_120(iParam0) || func_119(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_114(iParam0)) && !func_125(iParam0)))
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

bool func_125(int iParam0)
{
	return func_99(iParam0, 19);
}

bool func_126()
{
	return Global_1312416;
}

int func_127()
{
	if ((func_99(unk_0x0FFED3E94261A832(), 21) || func_99(unk_0x0FFED3E94261A832(), 22)) || func_130())
	{
		return 1;
	}
	if (func_128())
	{
		func_100(22);
		return 1;
	}
	return 0;
}

int func_128()
{
	if (func_96(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_126() && !func_129()) || func_111(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_98(27);
		}
	}
	return 0;
}

bool func_129()
{
	return Global_1312416.f_1;
}

bool func_130()
{
	return func_131(289, -1);
}

int func_131(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_133(int iParam0)
{
	return func_99(iParam0, 20);
}

float func_134(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_121.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_121.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar2 /*26*/].f_1), 1) };
					fVar1 = unk_0xB7A628320EFF8E47(Var3, Var6);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_135(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_275(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_273() || iParam2 == 26)
	{
		if (func_218(uParam1, iParam2, uParam3, Global_1574108, 0, func_271()))
		{
			func_217(1);
			if ((!func_215() && !func_213()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_212())
				{
					func_209();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_208(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_207(uParam1);
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
								if (func_813(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_206(iVar35))
										{
											iVar44 = iVar35;
											if (func_113(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_205(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_202(unk_0x0FFED3E94261A832(), 0) && func_95(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_200())
							{
								if (func_813(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_60();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_199(iVar35) && func_194(iVar35, iParam2)) && func_813(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_189(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_183(iVar35);
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
									if (!func_200())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_178(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_177(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_172(iVar35, 0);
								if (bVar34)
								{
									if (func_171(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_170(iParam5))
								{
									func_169(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_169(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
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
							if (func_813(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_199(iVar35))
							{
								if (func_813(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_189(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_183(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_172(iVar35, 1);
									if (bVar34)
									{
										if (func_171(iVar35, 1))
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
									func_149(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_146(uParam3, uParam1);
						}
						func_145(&(uParam3->f_21));
						func_144();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_143(uParam3, uParam1);
							func_142(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_143(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_138(uParam3))
						{
							Global_1574291 = 1;
						}
						func_136(uParam3);
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
			func_144();
			func_208(0);
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

void func_136(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_145(&(uParam0->f_21));
		func_137(0);
	}
}

void func_137(bool bParam0)
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

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_60() && func_813(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_141(uParam0, uParam0->f_37);
		if (func_140(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 0);
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

void func_139(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_141(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_142(var uParam0, int iParam1, int iParam2)
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

void func_143(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_144()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_145(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_60())
		{
			if (func_813(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_148(uParam0->f_38[iVar0 /*2*/], 0);
					func_147(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_148(int iParam0, bool bParam1)
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

void func_149(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_168() && iParam4 < func_167())
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
				func_166("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_166(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_166("");
			if (uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				func_166(&sParam5);
			}
			func_154(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_153(uParam3))
			{
				func_152("DPAD_FRIEND");
			}
			else if (func_151(uParam3))
			{
				func_152("DPAD_FRIEND");
			}
			else if (func_150(uParam3))
			{
				func_152("DPAD_CREW");
			}
			else
			{
				func_152("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_150(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_151(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_152(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_153(var uParam0)
{
	if (func_151(uParam0) && func_150(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_154(var uParam0, int iParam1)
{
	if (func_165(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_159(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_155())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_155()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_157() || func_156())
		{
			return 1;
		}
	}
	return 0;
}

var func_156()
{
	return Global_2445217.f_12;
}

int func_157()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_156();
	}
	return func_158(Global_1638223.f_93532);
}

int func_158(int iParam0)
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

int func_159(int iParam0)
{
	if ((func_813(iParam0, 0, 1) && func_163()) && func_160(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0, bool bParam1)
{
	return func_161(iParam0, bParam1, 1);
}

int func_161(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_162(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_60() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 != func_60())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_60())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	if (func_122(unk_0x0FFED3E94261A832()) || func_164())
	{
		return 0;
	}
	return 1;
}

int func_164()
{
	switch (func_95(unk_0x0FFED3E94261A832()))
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

int func_165(int iParam0)
{
	if (func_155())
	{
		if (func_813(iParam0, 0, 1))
		{
			return func_113(iParam0);
		}
	}
	if ((func_813(iParam0, 0, 1) && func_163()) && func_162(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_167()
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

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_169(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_168() && iParam3 < func_167())
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
					func_166("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_152(sParam16);
				}
				else
				{
					func_166(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_166("");
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
				if (func_200())
				{
					func_166("");
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
						func_152(&(uParam2->f_104));
					}
					else
					{
						func_166("");
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
					func_166("");
				}
				if (uParam2->f_108 == 6)
				{
					func_166("");
				}
				else
				{
					func_166(&sParam4);
				}
				func_154(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_166("");
					func_166("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_153(uParam2))
				{
					func_152("DPAD_FRIEND");
				}
				else if (func_151(uParam2))
				{
					func_152("DPAD_FRIEND");
				}
				else if (func_150(uParam2))
				{
					func_152("DPAD_CREW");
				}
				else
				{
					func_152("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_170(int iParam0)
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

bool func_171(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_113(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_60();
}

int func_172(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_122(iParam0)) && !func_133(iParam0))
	{
		iVar0 = func_176();
	}
	iVar1 = func_175(iParam0);
	if (!iVar1 == -1)
	{
		return func_173(iVar1);
	}
	return iVar0;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_174(iParam0);
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

var func_174(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_175(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_171(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_176()
{
	return 21;
}

char* func_177(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_178(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_182(iParam3))
	{
		*fParam1 = (func_179(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_170(iParam3))
	{
		*fParam1 = (func_179(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_179(int iParam0, int iParam1)
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
				return func_181(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_180(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_180(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_181(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_182(int iParam0)
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

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = func_186(iParam0);
	if (iVar0 == -1)
	{
		func_184(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_813(iParam0, 0, 1))
	{
		return;
	}
	if (func_186(iParam0) != -1)
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
	if (func_185(iParam0))
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

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	int iVar0;
	
	if (!func_813(iParam0, 0, 1))
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
			func_187(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_187(int iParam0)
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
	func_188(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_189(int iParam0)
{
	struct<4> Var0;
	
	if (func_813(iParam0, 0, 1))
	{
		Global_2484572 = { func_62(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_140(Global_2484572))
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
		if (func_193(&Global_2484572))
		{
			Global_2484502 = { func_191(iParam0) };
			func_190(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_190(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_191(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_192(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_192(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
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

int func_194(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_121(iParam0) || func_198(iParam0)) || func_197(iParam0))
		{
			return 0;
		}
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	if ((!func_195(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_206(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (func_813(iParam0, 0, 1))
	{
		if (func_813(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

bool func_197(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
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

int func_200()
{
	switch (func_95(unk_0x0FFED3E94261A832()))
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
	switch (func_201(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(unk_0x0FFED3E94261A832()))
	{
		switch (func_95(unk_0x0FFED3E94261A832()))
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_203(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_203(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_203(int iParam0)
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
	return func_204(iParam0, 0);
	return 0;
}

int func_204(int iParam0, int iParam1)
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

void func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_813(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_206(iVar1))
				{
					if (func_71(iVar1, iParam1, 0))
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

bool func_206(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_207(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_208(bool bParam0)
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

void func_209()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_211())
		{
			func_210();
		}
	}
}

void func_210()
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

bool func_211()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_212()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_211())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (func_211())
	{
		if (func_214(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
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

int func_215()
{
	if (func_211())
	{
		if (func_216(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0)
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

void func_217(int iParam0)
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

int func_218(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_270(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_269();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_268())
		{
			if (func_267() > 0 && Global_1574110)
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
		if (!func_250())
		{
			func_249(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_249(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_267() == 1)
		{
			func_248(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_249(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_267() == 0 && !bParam5))
		{
			func_249(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_247();
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
					func_247();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_248(bVar6, uParam0, 0))
				{
					func_207(uParam0);
					uVar4 = func_245(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_243(iParam1) };
					if (bParam4)
					{
						func_240(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_233(uParam0, func_237(uParam2), func_234(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_224(uParam0, func_226(uParam2), func_225(), -1);
					}
					else if (func_155())
					{
						uParam2->f_34 = Global_1574109;
						func_240(uParam0, uVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_240(uParam0, uVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_219(iParam1);
						func_240(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
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

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_223())
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
			if (func_222(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_221(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_220(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_220(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_221(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_222(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_223()
{
	return Global_1638223.f_1 == 0;
}

void func_224(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_152(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_225()
{
	switch (func_95(unk_0x0FFED3E94261A832()))
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

char* func_226(var uParam0)
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
	switch (func_95(unk_0x0FFED3E94261A832()))
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
			if (func_229())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_228(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_228(1))
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
			if (func_227(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_227(int iParam0)
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

bool func_228(bool bParam0)
{
	return func_160(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_229()
{
	return (func_232() && func_230(func_231()));
}

bool func_230(int iParam0)
{
	return func_162(iParam0, 1);
}

int func_231()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_232()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_233(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(uParam2))
		{
			func_152(uParam1);
		}
		else if (func_201(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(uParam1);
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
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0x0FFED3E94261A832());
	if (func_236())
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
			switch (func_235())
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

int func_235()
{
	if (func_201(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_236()
{
	return Global_1592329;
}

char* func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0x0FFED3E94261A832());
	if (func_236())
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
			if (func_239() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_239() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_235())
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
			if (func_238() == 1)
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

int func_238()
{
	return Global_2497344.f_4753;
}

int func_239()
{
	if (func_201(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_240(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_166(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(uParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_152(sParam1);
		}
		if (func_268() && iParam6)
		{
			if (func_242())
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
			func_152(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_241(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_241(int iParam0)
{
	if (func_222(iParam0) || func_221(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_242()
{
	return Global_1574110;
}

struct<4> func_243(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_244(unk_0x0FFED3E94261A832()) || func_220(unk_0x0FFED3E94261A832()))
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
	if (func_155() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_244(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_245(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_155() || unk_0x58478145CAF8429C(uParam1)))
	{
		uVar0 = func_246();
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

char* func_246()
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

void func_247()
{
	Global_36716 = 1;
}

bool func_248(bool bParam0, var uParam1, bool bParam2)
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

void func_249(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_144();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_145(&(uParam1->f_19));
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

int func_250()
{
	if (func_266())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (!func_263())
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (func_260(8, -1))
	{
		return 0;
	}
	if (func_267() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	else if (!func_256(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_255(1) || func_253(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_251(unk_0x0FFED3E94261A832()))
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
	if (func_76(0))
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

int func_251(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_252())
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

bool func_252()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_253(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_254(unk_0x2A5EB8B0FE590B91()))
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

int func_254(int iParam0)
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

bool func_255(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_256(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_257(iParam0))
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

bool func_257(int iParam0)
{
	return func_258(iParam0);
}

bool func_258(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

bool func_259()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_260(int iParam0, int iParam1)
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

int func_261()
{
	if (func_262() == 0)
	{
		return 1;
	}
	return 0;
}

int func_262()
{
	return Global_1312466.f_18;
}

int func_263()
{
	if (func_264())
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

bool func_264()
{
	return Global_1312438;
}

bool func_265()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

bool func_266()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_267()
{
	return Global_1351508.f_68;
}

int func_268()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_269()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_270(int iParam0)
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

int func_271()
{
	if (func_272(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

int func_273()
{
	if (func_271())
	{
		return 1;
	}
	if (func_197(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_236())
	{
		return 1;
	}
	if (func_122(unk_0x0FFED3E94261A832()))
	{
		switch (func_201(unk_0x0FFED3E94261A832()))
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
				if (!func_274(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_274(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_274(unk_0x0FFED3E94261A832()))
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

bool func_274(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_275(int iParam0)
{
	if ((iParam0 == 26 && func_122(unk_0x0FFED3E94261A832())) && !func_133(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_96(unk_0x0FFED3E94261A832(), 0) && func_133(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_124(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_276()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = unk_0x88641E5BC172153A();
	}
	else
	{
		iVar0 = func_277();
	}
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Local_993[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (unk_0x885F483F34E47503(iVar1))
	{
		if (unk_0x76BCE6C7B20502DA(iVar1))
		{
			iVar2 = unk_0x675E1E93DBDAF30B(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_278()
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
				func_279(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_279(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<14> Var15;
	int iVar29;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_113, iVar29))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_6, iVar29))
				{
					if (unk_0x2137828D03306CAF(Var0.f_0))
					{
						if (unk_0x82DF3B947FC3E281(Var0.f_0))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_121.f_109, iVar29))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_5, iVar29))
								{
									if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_121.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0x761AC59E782D169D(Var0.f_0) == unk_0xECBE9D2902B2B964(Local_121.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0x2137828D03306CAF(Var0.f_1))
												{
													if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
													{
														if (unk_0xC3A7AD90290CA72E(Var0.f_1) == unk_0x2A5EB8B0FE590B91())
														{
															if (func_727() == Local_121.f_118)
															{
																unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_5), iVar29);
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
						else if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
						{
							iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
							if (iVar11 == unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0x2137828D03306CAF(Var0.f_1))
								{
									if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
									{
										iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
										if (unk_0xDB61DD81432BD145(iVar10))
										{
											iVar13 = unk_0xB0BB7458627D389F(iVar10);
											if (unk_0x76BCE6C7B20502DA(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0x0FFED3E94261A832())
													{
														Local_993[unk_0x88641E5BC172153A() /*14*/].f_11++;
														unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_6), iVar29);
														Var15.f_2 = 502429287;
														Var15.f_10 = unk_0x0FFED3E94261A832();
														func_285(Var15, func_286(0));
														func_280("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0xB0BB7458627D389F(iVar10);
													unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_7), iVar29);
									}
								}
							}
						}
					}
				}
			}
			iVar29++;
		}
	}
	if (func_276())
	{
		if (!func_99(unk_0x0FFED3E94261A832(), 20))
		{
			if (unk_0x2137828D03306CAF(Var0.f_0))
			{
				if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
				{
					iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
					if (unk_0xDB61DD81432BD145(iVar11))
					{
						iVar12 = unk_0xB0BB7458627D389F(iVar11);
						if (unk_0x2137828D03306CAF(Var0.f_1))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
							{
								iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
								if (unk_0xDB61DD81432BD145(iVar10))
								{
									iVar13 = unk_0xB0BB7458627D389F(iVar10);
									if (iVar13 == unk_0x0FFED3E94261A832())
									{
										if (unk_0x76BCE6C7B20502DA(iVar12))
										{
											if (func_171(iVar12, 1))
											{
												if (Local_121.f_118 > -1)
												{
													iVar14 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_118));
													if (func_71(iVar12, iVar14, 1))
													{
														if (!func_127())
														{
															func_123(0);
															func_116();
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

int func_280(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_281(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_281(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_284() || !unk_0x1B154DE2D4606530()) || !func_17(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_282(iParam2);
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

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_283(iVar0);
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

void func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_284()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

void func_285(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_286(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (func_813(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_287()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		if (unk_0xAA4F14DA15DB0B51(uLocal_1442, 14))
		{
			unk_0x507FE690B1271947(&iLocal_1442, 14);
		}
		return;
	}
	iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 14))
	{
		if (Local_993[unk_0x88641E5BC172153A() /*14*/].f_1 != 0)
		{
			Local_993[unk_0x88641E5BC172153A() /*14*/].f_1 = 0;
		}
		unk_0xF6082E2ADA1C795B(&iLocal_1442, 14);
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 15))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_1442, 15);
		func_659();
	}
	if (unk_0x885F483F34E47503(iVar0))
	{
		if (unk_0x76BCE6C7B20502DA(iVar0))
		{
			uVar1 = unk_0x675E1E93DBDAF30B(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_993[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_614();
					func_596();
					func_581();
					break;
				
				case 2:
					func_288();
					break;
				
				case 3:
					func_740();
					break;
				}
			}
	}
}

void func_288()
{
	struct<10> Var0;
	int iVar16;
	int iVar17;
	char* sVar18;
	int iVar19;
	int iVar20;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar16 = unk_0x88641E5BC172153A();
	iVar17 = unk_0x0FFED3E94261A832();
	if (func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar16 = func_277();
		iVar17 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_993[iVar16 /*14*/].f_1, 4))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 9))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1))
			{
				if (iVar16 == Local_121.f_118 || func_727() == Local_121.f_118)
				{
					if (func_124(iVar17) >= 2)
					{
						sVar18 = func_580(iVar17);
						iVar19 = func_579(iVar17);
						func_577(87, "GB_WINNER", "BIGM_HUNTD", sVar18, iVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar17 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
						{
							func_543(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
						}
						Var0.f_0 = func_542();
						Var0.f_1 = func_541();
						func_385(166, 1, &Var0, 0);
						unk_0x03D9764FF0074A2E(iVar17);
						iLocal_1736 = unk_0xA0F7964BC7FD74A9();
						unk_0xE0125DCD8DB3EFC3(0);
						unk_0xF6082E2ADA1C795B(&iLocal_1442, 17);
						func_7(&uLocal_1737, 0, 0);
					}
				}
				else if (func_276())
				{
					if (func_171(iVar17, 1))
					{
						if (func_124(iVar17) >= 2)
						{
							sVar18 = func_580(unk_0x7C214DA899F05536(Local_121.f_119));
							iVar19 = func_579(unk_0x7C214DA899F05536(Local_121.f_119));
							func_577(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar18, iVar19, 0, -1, -1, -1, 2, -1);
						}
						if (iVar17 == unk_0x0FFED3E94261A832())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
							{
								func_543(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
							}
							if (func_117(iVar17))
							{
								Var0.f_0 = func_384();
								Var0.f_1 = func_383();
							}
							func_385(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_124(iVar17) >= 2)
						{
							sVar18 = func_580(unk_0x7C214DA899F05536(Local_121.f_119));
							iVar19 = func_579(unk_0x7C214DA899F05536(Local_121.f_119));
							func_577(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar18, iVar19, 0, -1, -1, -1, 2, -1);
						}
						if (iVar17 == unk_0x0FFED3E94261A832())
						{
							if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
							{
								func_543(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
							}
							if (func_117(iVar17))
							{
								Var0.f_0 = func_384();
								Var0.f_1 = func_383();
							}
							func_385(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_1442, 9);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3))
			{
				iVar20 = (4 - Local_121.f_115);
				if (iVar16 == Local_121.f_118 || func_727() == Local_121.f_118)
				{
					if (func_124(iVar17) >= 2)
					{
						sVar18 = func_377();
						iVar19 = func_579(iVar17);
						func_577(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar18, iVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar17 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
						{
							func_543(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
						}
						Var0.f_0 = func_542();
						Var0.f_1 = func_541();
						func_385(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_124(iVar17) >= 2)
					{
						sVar18 = func_580(unk_0x7C214DA899F05536(Local_121.f_119));
						iVar19 = func_579(unk_0x7C214DA899F05536(Local_121.f_119));
						if (iVar20 == 1)
						{
							func_577(87, "GB_WINNER", "BIGM_HUN1S", sVar18, iVar19, 0, iVar20, -1, -1, 2, -1);
						}
						else if (iVar20 > 1)
						{
							func_577(87, "GB_WINNER", "BIGM_HUNRS", sVar18, iVar19, 0, iVar20, -1, -1, 2, -1);
						}
					}
					if (iVar17 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
						{
							func_543(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
						}
						if (func_117(iVar17))
						{
							Var0.f_0 = func_384();
							Var0.f_1 = func_383();
						}
						func_385(166, 1, &Var0, 0);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
					}
				}
				unk_0xF6082E2ADA1C795B(&iLocal_1442, 9);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5))
			{
				if (func_351())
				{
					if (func_726())
					{
						if (func_124(iVar17) >= 2)
						{
						}
					}
					else if (func_124(iVar17) >= 2)
					{
						func_320(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar17 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
					{
						func_543(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
					}
					func_385(166, 0, &Var0, 0);
				}
				unk_0xF6082E2ADA1C795B(&iLocal_1442, 9);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 9))
		{
			func_659();
			if (!unk_0xAA4F14DA15DB0B51(uLocal_1443, 8))
			{
				func_307();
				func_70();
				unk_0xF6082E2ADA1C795B(&iLocal_1443, 8);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 10))
			{
			}
			if (func_289(&uLocal_1450, 0, 0))
			{
				if (iVar16 == unk_0x88641E5BC172153A())
				{
					unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 17))
			{
				if (func_6(&uLocal_1737, 10000, 0))
				{
					unk_0xE0125DCD8DB3EFC3(iLocal_1736);
					unk_0x507FE690B1271947(&iLocal_1442, 17);
				}
			}
		}
	}
}

int func_289(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_100(29);
	if ((*uParam0 > 0 && !func_211()) && func_124(unk_0x0FFED3E94261A832()) != 0)
	{
		if (!func_304())
		{
			func_303();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 2);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_302(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
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
				func_296(iParam2);
				func_302(uParam0, 2);
			}
			break;
		
		case 2:
			func_296(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_290(func_291(0)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_302(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
				func_302(uParam0, 4);
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

bool func_290(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

char* func_291(int iParam0)
{
	if (((func_294(unk_0x0FFED3E94261A832()) || func_293(unk_0x0FFED3E94261A832())) || func_229()) || iParam0)
	{
		if (func_293(unk_0x0FFED3E94261A832()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_203(func_292()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_292()
{
	return Global_1636589;
}

bool func_293(int iParam0)
{
	return func_204(func_95(iParam0), 0);
}

bool func_294(int iParam0)
{
	return func_295(func_95(iParam0));
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_162(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
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

void func_296(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if ((((((((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_813(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22()) && !func_99(unk_0x0FFED3E94261A832(), 22)) && func_124(unk_0x0FFED3E94261A832()) != 0) && !func_300(func_301())) && !func_294(unk_0x0FFED3E94261A832())) && !func_299(func_95(unk_0x0FFED3E94261A832())))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_298(func_291(iParam0), -1);
			func_297(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_297(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_228(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_211())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_298(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_299(int iParam0)
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

int func_300(int iParam0)
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

int func_301()
{
	var uVar0;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_303()
{
	Global_2456236 = 1;
}

int func_304()
{
	if (((((((func_95(unk_0x0FFED3E94261A832()) == 170 || func_95(unk_0x0FFED3E94261A832()) == 219) || func_95(unk_0x0FFED3E94261A832()) == 221) || func_95(unk_0x0FFED3E94261A832()) == 220) || func_95(unk_0x0FFED3E94261A832()) == 216) || func_95(unk_0x0FFED3E94261A832()) == 215) || func_95(unk_0x0FFED3E94261A832()) == 214) || func_95(unk_0x0FFED3E94261A832()) == 218)
	{
		return 1;
	}
	if (func_305(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_813(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_306(int iParam0)
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

void func_307()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_1457[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_1457[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 18))
	{
		func_319(1);
		unk_0x507FE690B1271947(&iLocal_1442, 18);
	}
	func_316();
	func_308();
}

void func_308()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 7))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_1442, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_8, iVar0))
					{
						func_314(iVar1, 432, 0);
						func_309(iVar1, func_313(iLocal_1734), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_309(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_310(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = uParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_310(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

int func_311()
{
	switch (func_312())
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

int func_312()
{
	return Global_25222;
}

int func_313(int iParam0)
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

void func_314(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_311())
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
				func_315();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_315();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_315()
{
	Global_2415029.f_1002 = 1;
}

void func_316()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 16))
	{
		func_81();
		func_317();
		unk_0x507FE690B1271947(&iLocal_1442, 16);
	}
}

void func_317()
{
	if (Global_2412851.f_6 == unk_0xFF09208EC90C94CB())
	{
		func_318();
	}
}

void func_318()
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

void func_319(bool bParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_126())
		{
			if (func_813(unk_0x0FFED3E94261A832(), 1, 0))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 0);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 0);
			}
			unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 1f);
			unk_0xDC79B631D35E6B71(0);
			unk_0x337229861BC52CD5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x0E76FE9D6BA1007D(0, 0);
				}
			}
		}
		else
		{
			if (func_813(unk_0x0FFED3E94261A832(), 1, 1))
			{
				unk_0x92124F49C2CE9DB0(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 342, 1);
				unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 122, 1);
				unk_0x6D56F76C9BA92337(unk_0x0FFED3E94261A832(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x0E76FE9D6BA1007D(1, 0);
				}
			}
			unk_0xDC79B631D35E6B71(1);
			unk_0x337229861BC52CD5(0);
		}
	}
}

int func_320(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_350(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_321(&Var0);
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_331(uParam0, uParam0->f_16);
	func_330(uParam0);
	if (func_329(uParam0->f_1))
	{
		func_322();
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
				func_322();
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
				if (func_214(Global_2434604.f_2483[iVar0 /*76*/].f_1))
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

void func_322()
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
	func_323();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_323()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_327(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_324(&(Global_2434604.f_2791.f_1));
}

void func_324(var uParam0)
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
				if (unk_0xF4EE9D6C8E60AE22() && !func_326(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_325(0);
}

void func_325(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_326(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_327(var uParam0)
{
	func_328(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_328(var uParam0)
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

int func_329(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_330(var uParam0)
{
	if (func_216(uParam0->f_1))
	{
		uParam0->f_70 = func_176();
	}
}

void func_331(var uParam0, int iParam1)
{
	if (func_216(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_60())
	{
		return;
	}
	if (func_214(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_332(iParam1, -2, 0, 0);
		}
	}
}

int func_332(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_251(iParam0))
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
	if ((func_251(unk_0x0FFED3E94261A832()) || (func_349() && func_348())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_347();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_813(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_345(iParam1, iParam0, 0);
							}
							else
							{
								return func_340(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_340(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_345(iParam1, iParam0, 0);
				}
				else
				{
					return func_333(0, -1, 0);
				}
			}
			else
			{
				return func_333(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_345(iParam1, iParam0, 0);
		}
		else
		{
			return func_340(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_340(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_333(bool bParam0, int iParam1, bool bParam2)
{
	return func_334(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_334(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_339(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_338(1);
				}
				else
				{
					return func_338(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_335(iVar0, iParam2, 1);
			}
			else
			{
				return func_335(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_338(1);
	}
	return func_338(0);
}

int func_335(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_337(iParam0, iParam1);
	if (func_336(Global_1638223.f_93532))
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

int func_336(int iParam0)
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

int func_337(int iParam0, int iParam1)
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
			if (!func_339(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_338(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_339(int iParam0, int iParam1, int iParam2)
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

int func_340(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_343())
			{
				iVar3 = func_175(iParam0);
				if (!iVar3 == -1)
				{
					return func_173(iVar3);
				}
			}
			if ((func_342(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_339(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_338(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_341(1);
			}
			else
			{
				return func_334(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_338(1);
			}
			else
			{
				return func_334(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_175(iParam0);
	if (!iVar4 == -1)
	{
		return func_173(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_341(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_342(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_343()
{
	if (func_156() || func_344())
	{
		return 1;
	}
	return 0;
}

var func_344()
{
	return Global_2445217.f_13;
}

int func_345(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_343())
	{
		iVar1 = func_175(iParam1);
		if (!iVar1 == -1)
		{
			return func_173(iVar1);
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
		iVar0 = func_334(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_346(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_346(int iParam0)
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

var func_347()
{
	return Global_2359301.f_2;
}

bool func_348()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_349()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

void func_350(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_60();
	uParam1->f_17 = func_60();
	uParam1->f_18 = func_60();
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

int func_351()
{
	int iVar0;
	
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		if (!func_352(1))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1, 6))
			{
				unk_0x507FE690B1271947(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_127())
		{
			if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1, 6))
			{
				unk_0x507FE690B1271947(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1, 6))
		{
			unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_277();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_993[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_352(bool bParam0)
{
	if (func_111(unk_0x0FFED3E94261A832(), 21))
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
	if (func_376(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_375())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_257(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (func_111(unk_0x0FFED3E94261A832(), 0) || func_111(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_111(unk_0x0FFED3E94261A832(), 12) || func_111(unk_0x0FFED3E94261A832(), 14)) || func_111(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_373(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_358())
		{
			return 0;
		}
	}
	if (func_357())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_356(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (func_354(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_353(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)
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

int func_355()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (!func_813(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_357()
{
	return Global_91829.f_310 > 0;
}

int func_358()
{
	int iVar0;
	
	iVar0 = func_95(unk_0x0FFED3E94261A832());
	if (((func_372(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_371(unk_0x0FFED3E94261A832())) || func_370(unk_0x0FFED3E94261A832())) || func_365(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_363(unk_0x0FFED3E94261A832()))
	{
		if (func_362(iVar0) || func_361(iVar0))
		{
			return 1;
		}
	}
	if (func_305(unk_0x0FFED3E94261A832()))
	{
		if (func_361(iVar0))
		{
			return 1;
		}
	}
	if (func_360(unk_0x0FFED3E94261A832()))
	{
		if (func_359(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_813(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
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

int func_362(int iParam0)
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

int func_363(int iParam0)
{
	if (func_364(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0, int iParam1)
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

int func_365(int iParam0)
{
	if (func_366(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_367(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_367(unk_0x0FFED3E94261A832(), 0))
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

bool func_367(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_60())
	{
		if (!func_369(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_368(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_368(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_813(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_813(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
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

int func_373(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_305(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_360(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_374()
{
	return Global_1312852;
}

bool func_375()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_376(int iParam0)
{
	if (func_256(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

char* func_377()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(unk_0x0FFED3E94261A832());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0x0FFED3E94261A832())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0x0FFED3E94261A832(), 28)) || func_382(iVar0)) && !func_381(iVar0))
			{
				return func_379(iVar0, 0);
			}
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_379(iVar0, 0);
			}
		}
		uVar1 = func_378(&(Global_1622795[iVar0 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar1))
		{
			return func_379(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_378(var uParam0)
{
	return uParam0;
}

var func_379(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_160(iParam0, 1))
		{
			return func_380();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_380()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

int func_381(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
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

int func_382(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
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

int func_383()
{
	return ((4 - Local_121.f_115) * Global_262145.f_14070);
}

int func_384()
{
	return ((4 - Local_121.f_115) * Global_262145.f_14069);
}

void func_385(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_539(iParam0, &fVar2, &fVar3);
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
			iVar1 = (iVar1 + func_538(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_537(iParam0));
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
	if (func_535(iParam0))
	{
		if (bParam1)
		{
			if (func_534(unk_0x0FFED3E94261A832()) > 0)
			{
				func_533();
			}
			else
			{
				func_532();
			}
		}
		else
		{
			func_531();
		}
	}
	func_515(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_512(iParam0, uParam2, &iVar0, &uVar5);
	func_473(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_231();
	if (iVar6 != func_60() && iParam0 != 148)
	{
		if (func_171(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_71(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_461(&iVar0, 1);
			}
		}
	}
	func_458(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_457();
		func_415(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_414();
		if (iVar11 != func_60())
		{
			func_413(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_412(1);
		if (iParam0 == 168)
		{
			if (!func_411())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_410())
			{
				if (!func_411())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_411())
			{
				func_401(-856006867, iVar0, &iVar13, 0, 1, 0);
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
			if (func_400())
			{
				if (!func_411())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_411())
			{
				func_401(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_411())
		{
			func_401(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_399(iParam0, iVar0);
		if (func_398(iParam0))
		{
			if (func_397(iParam0) > -1)
			{
				func_396(func_397(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_395(&Global_2455167, 0, 0);
	}
	if (func_114(unk_0x0FFED3E94261A832()) || func_133(unk_0x0FFED3E94261A832()))
	{
		func_386(iParam0);
	}
	if (func_295(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_299(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_359(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

void func_386(int iParam0)
{
	if (func_394(unk_0x0FFED3E94261A832()) && func_410())
	{
		if (func_362(iParam0))
		{
			func_389(6303, -1);
		}
		else if (func_388(iParam0))
		{
			func_389(6305, -1);
		}
		else if (func_204(iParam0, 1))
		{
			func_389(6306, -1);
		}
		else if (func_387(iParam0))
		{
			func_389(6307, -1);
		}
	}
}

int func_387(int iParam0)
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

int func_388(int iParam0)
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

void func_389(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_393(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_392(iParam0))
	{
		func_391(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_390(iParam0, iVar0, iParam1, 1);
	}
}

void func_390(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_132(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_132(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_132(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_132(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_132(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_132(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_132(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_132(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_132(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_132(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_132(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_132(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_132(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_132(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_132(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_392(int iParam0)
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

int func_393(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_394(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_395(var uParam0, bool bParam1, bool bParam2)
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

void func_396(int iParam0, int iParam1)
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

int func_397(int iParam0)
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

int func_398(int iParam0)
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

void func_399(int iParam0, int iParam1)
{
	if (func_394(unk_0x0FFED3E94261A832()) && func_410())
	{
		if (func_362(iParam0) && iParam1 > 0)
		{
			func_391(6304, (func_393(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

bool func_400()
{
	return func_113(unk_0x0FFED3E94261A832());
}

void func_401(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_411())
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
				func_402(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_402(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_402(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_411())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_19()) || unk_0x3227E797058C3C9A())
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
			*uParam0 = func_409(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_408(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_403(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_403(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_404(iParam0);
	}
}

void func_404(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_411())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_407(iParam0))
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
		func_405(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_405(var uParam0)
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
	func_406(&(uParam0->f_8.f_3));
	func_406(&(uParam0->f_8.f_16));
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

void func_406(var uParam0)
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

int func_407(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_408(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

int func_409(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_411())
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

bool func_410()
{
	return func_230(unk_0x0FFED3E94261A832());
}

int func_411()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

bool func_412(bool bParam0)
{
	return func_171(unk_0x0FFED3E94261A832(), bParam0);
}

void func_413(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_414()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

int func_415(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_416(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_416(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_426(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_422(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_417(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_417(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_420(iParam0, 1) };
	if (iParam0 == func_419(unk_0x2A5EB8B0FE590B91()))
	{
		func_418(1);
	}
	func_422(Var0, iParam1, 0, sParam2, iParam3);
}

void func_418(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_419(var uParam0)
{
	return uParam0;
}

Vector3 func_420(int iParam0, bool bParam1)
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
	if (iParam0 == func_421(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
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

int func_421(var uParam0)
{
	return uParam0;
}

void func_422(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_425(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_424();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_423();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_423()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_424()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_425(struct<3> Param0, var uParam3, var uParam4)
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

var func_426(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_427(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_427(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_456(unk_0x0FFED3E94261A832()) || func_455(unk_0x0FFED3E94261A832()))
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
	if (func_454(uParam2))
	{
	}
	if (func_453())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_451(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_450(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_448(0, &iVar1);
					break;
				
				case 3:
					func_448(1, &iVar1);
					break;
				
				case 1:
					func_446(&iVar1);
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
			func_445(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_437((func_444(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_445(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_432(iVar1);
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
				func_428((func_430(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_428((func_430(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_428(int iParam0)
{
	if (func_453())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_429(joaat("mpply_globalxp"), iParam0);
	}
}

void func_429(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_430(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_813(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_431(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_431(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_431(int iParam0)
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

void func_432(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_435(func_436(&Var0));
			if (iVar13 == 0)
			{
				func_434(&Global_1361887, iParam0);
				func_433(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_434(&Global_1361888, iParam0);
				func_433(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_434(&Global_1361889, iParam0);
				func_433(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_434(&Global_1361890, iParam0);
				func_433(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_434(&Global_1361891, iParam0);
				func_433(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_433(int iParam0, int iParam1)
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

void func_434(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_435(int iParam0)
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

int func_436(var uParam0)
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

void func_437(int iParam0, int iParam1, int iParam2)
{
	if (func_453())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_132(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_132(-1)])
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
		if (func_443(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_441(iParam0, 1);
		}
		func_390(635, iParam0, -1, 1);
		func_391(636, func_441(iParam0, 1), -1, 1, 0);
		Global_1362002[func_132(-1)] = iParam0;
		func_438(7, 0);
	}
}

void func_438(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_440(iParam0, iParam1))
	{
		iVar0 = func_439();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_439()
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

int func_440(int iParam0, var uParam1)
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

int func_441(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_442(iParam0, 0);
}

int func_442(int iParam0, int iParam1)
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

int func_443(int iParam0)
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

int func_444(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_132(-1)];
			}
			else if (func_443(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_132(-1)];
	}
	return 0;
}

void func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_393(iParam0, func_132(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_392(iParam0))
	{
		func_391(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_390(iParam0, iVar0, iParam2, 1);
	}
}

void func_446(int iParam0)
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
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_339(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_63(unk_0x0FFED3E94261A832(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_447(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_447(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_447(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_448(bool bParam0, int iParam1)
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
				if (func_813(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_63(unk_0x0FFED3E94261A832(), iVar4))
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
			if (func_813(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_449(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0x0FFED3E94261A832(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_447(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_447(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_449(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_450(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_447(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_451(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_444(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_444(unk_0x0FFED3E94261A832());
		}
	}
	if (func_452(8000, 0, 0) > 0)
	{
		if (func_452(8000, 0, 0) < (iParam0 + func_444(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_452(8000, 0, 0) - func_444(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_452(int iParam0, bool bParam1, int iParam2)
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

int func_453()
{
	return 1;
}

int func_454(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_455(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_456(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_457()
{
	Global_2456235 = 1;
}

void func_458(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_76(7))
	{
		return;
	}
	iVar0 = func_460(iParam0);
	iVar1 = func_459(iParam0);
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
	else if (func_362(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_204(iParam0, 0) || func_388(iParam0))
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

int func_459(int iParam0)
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
			if (func_412(0) || func_228(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_412(0) || func_228(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_412(0) || func_228(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

int func_460(int iParam0)
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
			if (!func_400())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_400())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_400())
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
			if (func_228(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_228(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_228(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_400())
		{
			if (func_412(0))
			{
				if (!func_228(0))
				{
					if (unk_0x885F483F34E47503(func_414()))
					{
						if (func_472() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_472());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_470(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_467("GB_BCUT_TICK1", func_414(), iVar0, 0, 0, 1, 1);
						}
						func_466(20);
						func_462(func_414(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_462(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_813(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_465(iParam0);
		func_464(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_463(iParam0));
	}
}

var func_463(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_464(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_465(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

void func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

int func_467(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x95CE6D748899618C(func_332(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_468(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_281(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_468(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_469(&cVar0);
}

var func_469(char[4] cParam0)
{
	return cParam0;
}

void func_470(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_471(1);
	}
	else
	{
		iVar1 = func_471(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_471(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_472()
{
	return Global_262145.f_11041;
}

void func_473(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_228(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_400())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_414();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_511(iVar15);
			iVar0 = (func_510(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_505(iVar15, iVar16, iVar1);
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
				func_499(iVar16, iVar2);
				if (func_495(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_485(5);
				}
				iVar6 = func_484(&uVar5);
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
						func_466(108);
					}
					else
					{
						func_466(110);
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
								if (func_483(iVar20))
								{
									func_474(iVar20, 1, 3, 0);
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
					func_466(112);
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

void func_474(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_477(iParam0);
	if (bParam3)
	{
		func_476(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_475(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_475(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_465(iParam0);
	func_464(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_60())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_463(iParam0));
		}
	}
}

void func_476(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_465(iParam0);
	func_464(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_60())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_463(iParam0));
		}
	}
}

int func_477(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_482();
	iVar0 = func_480(iParam0, iVar0);
	iVar1 = Global_1622795[func_414() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_479())
	{
		iVar0 = func_479();
	}
	if (iVar0 > func_478())
	{
		iVar0 = func_478();
	}
	return iVar0;
}

int func_478()
{
	return Global_262145.f_13508;
}

int func_479()
{
	return Global_262145.f_14683;
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_534(iParam0) * func_481());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_481()
{
	return Global_262145.f_14682;
}

var func_482()
{
	return Global_262145.f_11033;
}

int func_483(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_71(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_99(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_484(var uParam0)
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
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0x0FFED3E94261A832(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_488(Global_262145.f_19027))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_488(Global_262145.f_19029))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_488(Global_262145.f_19031))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_488(Global_262145.f_19033))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_488(Global_262145.f_19035))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_488(Global_262145.f_19037))
				{
					func_486("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_488(Global_262145.f_19040))
				{
					func_486("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_488(Global_262145.f_19043))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_488(Global_262145.f_19045))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_488(Global_262145.f_19047))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_488(Global_262145.f_19049))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_488(Global_262145.f_19051))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_488(Global_262145.f_19053))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_488(Global_262145.f_19055))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_488(Global_262145.f_19057))
				{
					func_487("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_486(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_281(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_487(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		Global_2484572 = { func_62(unk_0x0FFED3E94261A832()) };
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
	func_281(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_492(15417, -1, -1))
			{
				func_491(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_492(15418, -1, -1))
			{
				func_491(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_492(15425, -1, -1))
			{
				func_491(15425, 1, -1, 1);
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
			if (!func_492(15405, -1, -1))
			{
				func_491(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_492(15393, -1, -1))
			{
				func_491(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_492(15409, -1, -1))
			{
				func_491(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_492(15396, -1, -1))
			{
				func_491(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_492(15412, -1, -1))
			{
				func_491(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_492(15403, -1, -1))
			{
				func_491(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_492(15389, -1, -1))
			{
				func_491(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_492(15398, -1, -1))
			{
				func_491(15398, 1, -1, 1);
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
			if (!func_492(15400, -1, -1))
			{
				func_491(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_492(15408, -1, -1))
			{
				func_491(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_492(15411, -1, -1))
			{
				func_491(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_492(15397, -1, -1))
			{
				func_491(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_492(15413, -1, -1))
			{
				func_491(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_492(15391, -1, -1))
			{
				func_491(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_492(15388, -1, -1))
			{
				func_491(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_492(15401, -1, -1))
			{
				func_491(15401, 1, -1, 1);
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
			if (!func_492(15394, -1, -1))
			{
				func_491(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_492(15406, -1, -1))
			{
				func_491(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_492(15395, -1, -1))
			{
				func_491(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_492(15410, -1, -1))
			{
				func_491(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_492(15407, -1, -1))
			{
				func_491(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_492(15414, -1, -1))
			{
				func_491(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_492(15415, -1, -1))
			{
				func_491(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_492(15399, -1, -1))
			{
				func_491(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_492(15404, -1, -1))
			{
				func_491(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_492(15392, -1, -1))
			{
				func_491(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_492(15390, -1, -1))
			{
				func_491(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_492(15402, -1, -1))
			{
				func_491(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_492(15416, -1, -1))
			{
				func_491(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_131(209, -1))
			{
				func_489(209, 1, -1, 1);
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
			if (!func_492(15426, -1, -1))
			{
				func_491(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_492(15422, -1, -1))
			{
				func_491(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_492(15423, -1, -1))
			{
				func_491(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_492(15421, -1, -1))
			{
				func_491(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_492(15427, -1, -1))
			{
				func_491(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_492(15419, -1, -1))
			{
				func_491(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_492(15420, -1, -1))
			{
				func_491(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_490())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_132(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_490()
{
	return 1;
	return 0;
}

int func_491(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

int func_492(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_494(iParam0, iParam1);
	uVar2 = func_493(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_493(int iParam0)
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

int func_494(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_495(int iParam0)
{
	int iVar0;
	
	iVar0 = func_497(iParam0);
	return func_393(func_496(iVar0), -1, 0);
}

int func_496(int iParam0)
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

int func_497(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
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

int func_498(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_499(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_497(iParam0);
	iVar1 = func_496(iVar0);
	iVar2 = (func_393(iVar1, -1, 0) + iParam1);
	func_391(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_502(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_496(iVar0);
				iVar3 = (iVar3 + func_393(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_501(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_500(9357, iVar5, -1, 1);
	}
}

var func_500(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_501(int iParam0)
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

int func_502(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_504(iParam0, iParam1);
	uVar2 = func_503(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_503(int iParam0)
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

int func_504(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_509(iParam1);
	if (func_498(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_506(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_506(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_508(iParam0, iParam1))
	{
		iVar0 = func_507(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_498(iParam1) && iParam0 != func_60())
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

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_498(iParam1) && iParam0 != func_60())
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

int func_509(int iParam0)
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

int func_510(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_498(iParam1))
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

int func_511(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_512(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_410())
			{
				Var0 = { func_514() };
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
				iVar7 = func_505(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
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
				iVar11 = func_484(&uVar10);
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
					func_466(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_228(0))
			{
				Var15 = { func_513(func_414()) };
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
				iVar22 = func_505(func_414(), Var15.f_0, *uParam3);
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

struct<2> func_513(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_514()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_515(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_113(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_530();
			}
			func_529();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_113(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_521(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_520(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_484(&uVar2);
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
						func_466(44);
					}
				}
				func_518(*iParam3);
				func_517();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_483(iVar9))
						{
							func_474(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_113(unk_0x0FFED3E94261A832()))
		{
			func_516();
		}
	}
}

void func_516()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_19()];
	iVar0++;
	func_390(3652, iVar0, -1, 1);
}

void func_517()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_19()];
	iVar0++;
	func_390(3651, iVar0, -1, 1);
}

void func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_390(3653, iVar0, -1, 1);
	if (func_502(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_519(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_500(7666, iVar2, -1, 1);
	}
}

int func_519(int iParam0)
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

var func_520(int iParam0)
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

int func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_528(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_527(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_526(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_522(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_522(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_526(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_522(int iParam0)
{
	int iVar0;
	
	if (func_525(iParam0))
	{
		iVar0 = func_523(func_524(iParam0));
		return func_393(iVar0, -1, 0);
	}
	return 0;
}

int func_523(int iParam0)
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

int func_524(int iParam0)
{
	int iVar0;
	
	if (func_525(iParam0))
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

int func_525(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_526(int iParam0)
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

int func_527(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_525(iParam0))
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

int func_528(int iParam0)
{
	int iVar0;
	
	if (func_525(iParam0))
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

void func_529()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_19()];
	iVar0++;
	Global_2528808[func_19()] = iVar0;
	func_390(3650, iVar0, -1, 1);
}

void func_530()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_19()];
	iVar1 = Global_2528814[func_19()];
	iVar0++;
	iVar1++;
	Global_2528805[func_19()] = iVar0;
	Global_2528814[func_19()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_390(3648, iVar0, -1, 1);
	func_390(3649, iVar1, -1, 1);
}

void func_531()
{
	if (func_400())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_532()
{
	if (func_400())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_533()
{
	if (func_400())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_534(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_535(int iParam0)
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
			if (func_412(1) && !func_228(1))
			{
				if (func_536(func_414()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_536(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_537(int iParam0)
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

int func_538(int iParam0, bool bParam1)
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
			if (func_400())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_400())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_400() && !func_410())
			{
				if (func_536(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_410())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_400() && !func_410())
			{
				if (func_536(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_410())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_400() && !func_410())
			{
				if (func_536(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_410())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_539(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_540(iParam0))
	{
		if (!func_400())
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
	if (func_295(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_295(iParam0))
	{
		if (func_171(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_171(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_231();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_540(int iParam0)
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

int func_541()
{
	return (Local_121.f_115 * Global_262145.f_13578);
}

int func_542()
{
	return (Local_121.f_115 * Global_262145.f_13577);
}

void func_543(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_95(unk_0x0FFED3E94261A832());
	if (func_295(iVar0))
	{
		Global_1773272.f_2 = func_576();
		Global_1773272.f_3 = func_575();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = iParam1;
		Global_1773272.f_19 = func_569(iVar0, bParam0, func_574(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_114(unk_0x0FFED3E94261A832()) || func_125(unk_0x0FFED3E94261A832())) || func_133(unk_0x0FFED3E94261A832()))
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
			Global_1773272.f_45 = func_568(func_414(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_567(func_414(), iParam2);
		}
		func_565(iVar0);
	}
	else if (func_299(iVar0))
	{
		Global_1773325.f_2 = func_576();
		Global_1773325.f_3 = func_575();
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
		if ((func_114(unk_0x0FFED3E94261A832()) || func_125(unk_0x0FFED3E94261A832())) || func_133(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_563(iVar0);
	}
	else if (func_359(iVar0))
	{
		Global_1773387.f_2 = func_576();
		Global_1773387.f_3 = func_575();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = iParam1;
		Global_1773387.f_7 = func_561();
		Global_1773387.f_42 = func_559(func_19(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_511(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_556((func_558(iVar1) || func_557(iVar1)));
		Global_1773387.f_30 = func_556(func_555(iVar1));
		Global_1773387.f_32 = func_556(func_554(iVar1));
		Global_1773387.f_33 = func_556(func_553(iVar1));
		Global_1773387.f_34 = func_556(func_552(iVar1));
		Global_1773387.f_35 = func_556(func_551(0, iVar1) == 1);
		Global_1773387.f_36 = func_556(func_550(iVar1));
		Global_1773387.f_37 = func_556(func_549(iVar1));
		Global_1773387.f_38 = func_556(func_548(iVar1));
		Global_1773387.f_39 = func_556(func_506(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_556(func_506(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_556(func_506(iVar1, iVar2, 1));
		if (func_547(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_546(iVar1))
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
		if ((func_114(unk_0x0FFED3E94261A832()) || func_125(unk_0x0FFED3E94261A832())) || func_133(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_544(iVar0);
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
			if ((func_114(unk_0x0FFED3E94261A832()) || func_125(unk_0x0FFED3E94261A832())) || func_133(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_544(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_545();
}

void func_545()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_546(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_547(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_548(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_549(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_550(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_551(int iParam0, int iParam1)
{
	if (iParam1 == func_60())
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

int func_552(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_553(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_554(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_555(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_556(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_557(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_558(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_559(int iParam0, int iParam1)
{
	return func_393(func_560(iParam1), iParam0, 0);
}

int func_560(int iParam0)
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

int func_561()
{
	int iVar0;
	
	if (func_410())
	{
		return 4;
	}
	else if (func_400())
	{
		if (func_536(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_228(1))
	{
		iVar0 = func_562(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_412(1))
	{
		if (func_536(func_414()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_562(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_563(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_564();
}

void func_564()
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

void func_565(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_566();
}

void func_566()
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

int func_567(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_506(iParam0, iParam1, 2);
	bVar1 = func_506(iParam0, iParam1, 1);
	bVar2 = func_506(iParam0, iParam1, 0);
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

int func_568(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_498(iParam1))
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

int func_569(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_362(iParam0))
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
	else if (func_361(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_204(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_295(iParam0))
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
		unk_0xEE4C451D799A4C78(func_573(func_414()), func_572(func_414()), func_576(), func_575(), iVar1, iVar0);
	}
	func_571(iVar0);
	func_570(iVar0);
	return iVar0;
}

void func_570(int iParam0)
{
	int iVar0;
	
	iVar0 = func_393(3943, -1, 0);
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
	func_391(3943, iVar0, -1, 1, 0);
}

void func_571(int iParam0)
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

int func_572(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_573(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_574(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_114(unk_0x0FFED3E94261A832()) || func_133(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_575()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_576()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_577(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_60();
	iVar1 = func_60();
	iVar2 = func_60();
	return func_578(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_578(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_350(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_321(&Var0);
}

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	if (iVar0 != -1)
	{
		return func_173(iVar0);
	}
	return 1;
}

char* func_580(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		uVar0 = func_378(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		uVar0 = func_379(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0x0FFED3E94261A832(), 28)) || func_382(iParam0)) && !func_381(iParam0))
	{
		return func_379(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_379(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_378(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar0))
		{
			return func_379(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_581()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_726() && !func_276())
	{
		return;
	}
	if (!func_351())
	{
		return;
	}
	iVar0 = unk_0x0FFED3E94261A832();
	if (func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	iVar1 = func_124(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_121.f_847)))
	{
		iVar2 = (func_10() - func_595(&(Local_121.f_847), 0, 0));
		iVar3 = (func_594() - Local_121.f_115);
		func_592(iVar2);
		if (iVar2 > 30000)
		{
			func_582(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_582(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_582(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_582(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_590(0) == 0)
	{
		return;
	}
	func_589();
	func_586(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_454(sParam4))
	{
		sVar0 = sParam4;
	}
	func_583(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_583(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_585(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_584(7, iVar0);
		Global_1353013.f_4366[iVar0] = uParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = uParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = uParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_584(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_585(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_586(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_585(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_584(6, iVar0);
		Global_1353013.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_3770.f_183[iVar0] = iParam3;
		Global_1353013.f_3770.f_172[iVar0] = iParam2;
		Global_1353013.f_3770.f_260[iVar0] = iParam4;
		Global_1353013.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1353013.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1353013.f_3770.f_443[iVar0] = iParam7;
		Global_1353013.f_3770.f_454[iVar0] = iParam8;
		Global_1353013.f_3770.f_497[iVar0] = iParam9;
		Global_1353013.f_3770.f_508[iVar0] = iParam10;
		Global_1353013.f_3770.f_205[iVar0] = iParam11;
		Global_1353013.f_3770.f_216[iVar0] = iParam12;
		Global_1353013.f_3770.f_227[iVar0] = iParam13;
		Global_1353013.f_3770.f_238[iVar0] = iParam14;
		Global_1353013.f_3770.f_249[iVar0] = iParam15;
		Global_1353013.f_3770.f_519[iVar0] = iParam16;
		Global_1353013.f_3770.f_530[iVar0] = iParam17;
		Global_1353013.f_3770.f_541[iVar0] = iParam18;
		Global_1353013.f_3770.f_552[iVar0] = iParam19;
		Global_1353013.f_3770.f_563[iVar0] = iParam20;
		Global_1353013.f_3770.f_574[iVar0] = iParam21;
		Global_1353013.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_588())
		{
			Global_1353013.f_1088 = 1;
		}
		if (unk_0x5018862FF5D9F844())
		{
			iVar2 = 0;
			unk_0xEB51D9D737FD6BC1(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1353013.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1353013.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1353013.f_1088 = 1;
			}
			if (func_587())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_587()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x5018862FF5D9F844())
	{
		unk_0xEB51D9D737FD6BC1(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_588()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_589()
{
	unk_0x47BFFB0507046AE3(8);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	Global_2456239 = 1;
}

int func_590(bool bParam0)
{
	if (func_591())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_813(unk_0x0FFED3E94261A832(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_591()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 12);
}

void func_592(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 8))
	{
		func_593();
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x988197573BDAD49A("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_1443, 15);
				unk_0xF6082E2ADA1C795B(&iLocal_1443, 9);
				unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 1);
				unk_0x6040865446FA4030(0);
				unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 11))
			{
				if (unk_0x8CF1128C350F1552("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_1443, 11);
				}
			}
			else
			{
				unk_0xAA4F14DA15DB0B51(iLocal_1443, 11);
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 14))
				{
					if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_1443, 14);
					}
				}
			}
			if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 12))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
						unk_0xF6082E2ADA1C795B(&iLocal_1443, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0x15AFDA4756FDF7EC("APT_COUNTDOWN_30S_KILL");
							unk_0x507FE690B1271947(&iLocal_1443, 9);
						}
					}
				}
			}
		}
	}
}

void func_593()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 9))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 10))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 11))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 12))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
						unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 16))
				{
					if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_1443, 16);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 16))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_1443, 13))
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_1443, 13);
						}
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_1443, 13))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_1443, 10);
					}
				}
			}
		}
	}
}

int func_594()
{
	return 4;
}

int func_595(var uParam0, bool bParam1, bool bParam2)
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

void func_596()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0x0FFED3E94261A832();
	iVar18 = unk_0x88641E5BC172153A();
	if (func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar18 = func_277();
		iVar17 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	iVar19 = func_124(iVar17);
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		if (!func_351())
		{
			if (func_613("HUNT_OBJ"))
			{
				func_659();
			}
			if (func_613("HUNT_OBJ1L"))
			{
				func_659();
			}
			if (func_613("HUNT_TOBJ"))
			{
				func_659();
			}
			if (func_613("HUNT_DOBJ"))
			{
				func_659();
			}
			if (func_613("HUNT_DOBJ1L"))
			{
				func_659();
			}
			return;
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(Local_993[iVar18 /*14*/].f_1, 6))
	{
		func_659();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_613("HUNT_OBJ"))
		{
			func_659();
		}
		if (func_613("HUNT_OBJ1L"))
		{
			func_659();
		}
		if (func_613("HUNT_TOBJ"))
		{
			func_659();
		}
		if (func_613("HUNT_DOBJ"))
		{
			func_659();
		}
		if (func_613("HUNT_DOBJ1L"))
		{
			func_659();
		}
		return;
	}
	bVar20 = func_612() == true;
	if (iVar18 == Local_121.f_118)
	{
		if (!bVar20)
		{
			if (!func_613("HUNT_OBJ"))
			{
				func_609("HUNT_OBJ", 0);
			}
		}
		else if (!func_613("HUNT_OBJ1L"))
		{
			func_609("HUNT_OBJ1L", 0);
		}
	}
	else if (func_727() == Local_121.f_118)
	{
		if (!bVar20)
		{
			if (!func_613("HUNT_OBJ"))
			{
				func_609("HUNT_OBJ", 0);
			}
		}
		else if (!func_613("HUNT_OBJ1L"))
		{
			func_609("HUNT_OBJ1L", 0);
		}
	}
	else if (func_276())
	{
		if (Local_121.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_613("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_580(unk_0x7C214DA899F05536(Local_121.f_119)), 64);
					iVar0 = func_579(unk_0x7C214DA899F05536(Local_121.f_119));
					func_597("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_613("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_580(unk_0x7C214DA899F05536(Local_121.f_119)), 64);
				iVar0 = func_579(unk_0x7C214DA899F05536(Local_121.f_119));
				func_597("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_597(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_598(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 16;
		Global_1312575.f_56 = iParam2;
	}
}

int func_598(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_608(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_602();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_601();
	func_600(bParam2);
	func_599();
	return 1;
}

void func_599()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_600(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_601()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

void func_602()
{
	func_604();
	func_603(0);
}

void func_603(bool bParam0)
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

void func_604()
{
	if (!func_607())
	{
	}
	if (func_606())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_605();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_605()
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

int func_606()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_607()
{
	if (!func_606())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_605();
	return unk_0x0D3452E263E036CA();
}

bool func_608(char* sParam0, char* sParam1)
{
	if (!func_606())
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

void func_609(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_610(sParam0))
	{
		return;
	}
	func_602();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_601();
	func_600(bParam1);
	func_599();
}

bool func_610(char* sParam0)
{
	if (!func_606())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_611(uParam0);
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_611(char* sParam0)
{
	if (!func_606())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_612()
{
	return (4 - Local_121.f_115);
}

int func_613(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_606())
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
	return func_610(sParam0);
}

void func_614()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_726() && !func_276())
	{
		return;
	}
	if (!func_351())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = unk_0x88641E5BC172153A();
	}
	else
	{
		iVar2 = func_277();
		iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 1))
	{
		iVar0 = func_124(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_121.f_118 || func_727() == Local_121.f_118)
			{
				if (func_642(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_320(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x88641E5BC172153A())
					{
						func_641(1);
						func_615(-1, 0, 0, -1);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x88641E5BC172153A())
				{
					func_615(-1, 0, 0, -1);
				}
				func_320(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0xF6082E2ADA1C795B(&iLocal_1442, 1);
	}
}

void func_615(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_95(unk_0x0FFED3E94261A832());
	if (iParam2 || func_295(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_362(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_361(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_204(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_387(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_414() != func_60())
		{
			Global_1773272.f_4 = func_573(func_414());
			Global_1773272.f_5 = func_572(func_414());
		}
		if (func_231() != func_60())
		{
			func_413(func_231(), &(Global_1773272.f_6), &(Global_1773272.f_7));
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
			Global_1773272.f_40 = func_509(iParam1);
			Global_1773272.f_41 = func_640();
			Global_1773272.f_42 = func_510(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_568(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_359(iVar0))
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
			Global_1773387 = func_639(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_638(unk_0x0FFED3E94261A832()) == 0)
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
		if (func_414() != func_60())
		{
			Global_1773387.f_4 = func_573(func_414());
			Global_1773387.f_5 = func_572(func_414());
		}
		if (func_231() != func_60())
		{
			func_413(func_231(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_299(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_414() != func_60())
		{
			Global_1773325.f_4 = func_573(func_414());
			Global_1773325.f_5 = func_572(func_414());
		}
		if (func_231() != func_60())
		{
			func_413(func_231(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_414() != func_60())
		{
			Global_1773254 = func_573(func_414());
			Global_1773254.f_1 = func_572(func_414());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_637();
		Global_1773254.f_15 = 0;
		if (func_412(1))
		{
			if (func_231() == func_414())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_636())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_635() || func_634()) || func_633())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_631(func_632(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_619(func_630(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_558(unk_0x0FFED3E94261A832()) || func_557(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_553(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_554(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_551(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_618(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_618(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_617(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_616(unk_0x0FFED3E94261A832(), iVar2);
				if (func_506(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_506(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_506(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_616(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_498(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_60())
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

int func_618(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_551(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_619(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_629(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_627(11));
		func_626(iVar1, &iVar0, 1);
		iVar2 = func_629(func_621(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_393(func_620(4, iVar0), -1, 0);
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

int func_620(int iParam0, int iParam1)
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

int func_621(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_627(iVar0) && iParam0 < func_622(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_622(int iParam0)
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
		iVar0 = func_625(iParam0);
		return func_624(iVar0);
	}
	return (func_623(iParam0, -1) * iParam0 + 1);
}

int func_623(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_366(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_372(iParam1))
			{
				return 0;
			}
			else if (func_364(iParam1, -1))
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

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_625(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_626(int iParam0, int iParam1, bool bParam2)
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

int func_627(int iParam0)
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
		iVar0 = func_625(iParam0);
		return func_628(iVar0);
	}
	return (func_623(iParam0, -1) * iParam0);
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_625(iParam0);
		if (iVar1 == 0 && func_393(5368, iParam1, 0) != 0)
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

int func_630(int iParam0)
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

int func_631(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_626(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_393(func_620(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_633()
{
	return func_393(5355, -1, 0) != 0;
}

bool func_634()
{
	return func_393(3803, -1, 0) != 0;
}

bool func_635()
{
	return func_393(3208, -1, 0) != 0;
}

bool func_636()
{
	return func_393(5354, -1, 0) != 0;
}

int func_637()
{
	int iVar0;
	
	iVar0 = func_414();
	if (iVar0 != func_60())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_638(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_639(int iParam0)
{
	if (func_95(iParam0) == 225 || func_95(iParam0) == 226)
	{
		return func_638(iParam0);
	}
	return -1;
}

var func_640()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_508(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_641(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_124(unk_0x0FFED3E94261A832()) != 0)
			{
				func_100(9);
			}
		}
	}
	else if (func_99(unk_0x0FFED3E94261A832(), 9))
	{
		func_98(9);
	}
}

int func_642(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_643(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_643(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_653();
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
	if (func_652() == 0)
	{
		func_650();
		return 0;
	}
	func_649(Global_16812);
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
		func_648(0);
		func_648(2);
		func_648(1);
	}
	else
	{
		func_653();
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
					func_648(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_648(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_648(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_648(3);
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
		func_653();
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
			if (!func_374())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_647(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_644(1);
			func_647(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_644(int iParam0)
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
		if (func_646(14))
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_645(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_645(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0x58478145CAF8429C(uParam7))
	{
		func_152(sParam7);
	}
	if (!unk_0x58478145CAF8429C(iParam8))
	{
		func_152(iParam8);
	}
	if (!unk_0x58478145CAF8429C(iParam9))
	{
		func_152(iParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_152(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_152(iParam11);
	}
	unk_0x8123397DC676E794();
}

bool func_646(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_647(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_648(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_649(int iParam0)
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

void func_650()
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
		if (!func_651(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_651(struct<6> Param0, struct<6> Param6)
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

int func_652()
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
			if (!func_651(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
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

void func_653()
{
	if (func_646(14))
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
		Global_14443 = func_654();
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

var func_654()
{
	func_655();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_655()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_658(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_657(unk_0x2A5EB8B0FE590B91());
			if (func_656(iVar0) && (!func_646(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_656(Global_103236.f_2164.f_539.f_4301))
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

bool func_656(int iParam0)
{
	return iParam0 < 3;
}

int func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_658(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_658(int iParam0)
{
	if (func_656(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_659()
{
	if (!func_606())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_602();
}

void func_660()
{
	if (func_17(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	switch (Local_993[unk_0x88641E5BC172153A() /*14*/].f_9)
	{
		case 0:
			func_662();
			func_288();
			if (Local_121.f_117 == 2)
			{
				Local_993[unk_0x88641E5BC172153A() /*14*/].f_9 = 2;
			}
			else if (Local_121.f_117 == 3)
			{
				Local_993[unk_0x88641E5BC172153A() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_288();
			if (func_661())
			{
				func_593();
			}
			if (Local_121.f_117 == 3)
			{
				Local_993[unk_0x88641E5BC172153A() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_740();
			break;
	}
}

bool func_661()
{
	return ((unk_0xAA4F14DA15DB0B51(Local_121.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 3)) || unk_0xAA4F14DA15DB0B51(Local_121.f_1, 5));
}

void func_662()
{
	func_682();
	func_681();
	func_614();
	func_596();
	func_671();
	func_670();
	func_665();
	func_664();
	func_581();
	func_663();
}

void func_663()
{
}

void func_664()
{
	if (func_661())
	{
		return;
	}
	if (!func_726())
	{
		return;
	}
	if (!Global_262145.f_13570)
	{
		return;
	}
	if (Local_121.f_115 == 0)
	{
		return;
	}
}

void func_665()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_726())
	{
		return;
	}
	if (func_661())
	{
		return;
	}
	fVar4 = func_134(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1449 != iVar0)
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 0) };
				func_87(10, 0, 0, 0, 0);
				func_666(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1449 = iVar0;
				unk_0xF6082E2ADA1C795B(&iLocal_1442, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_316();
	}
}

void func_666(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
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
	if (func_667(unk_0x0FFED3E94261A832()))
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

int func_667(int iParam0)
{
	if ((func_668(iParam0, 1) || func_122(iParam0)) || func_96(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_668(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_669(iParam0) != 0;
	}
	return func_256(iParam0, bParam1);
}

int func_669(int iParam0)
{
	if (func_813(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

void func_670()
{
	int iVar0;
	
	if (iLocal_1446 != Local_121.f_115)
	{
		if (func_726())
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
				{
					if (!unk_0x45A42C7863C1A2B9())
					{
						iVar0 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
						switch (Local_121.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_13567)
								{
									unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), Global_262145.f_13567, 0);
									unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_13568)
								{
									unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), Global_262145.f_13568, 0);
									unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_13569)
								{
									unk_0xE0125DCD8DB3EFC3(Global_262145.f_13569);
									unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), Global_262145.f_13569, 0);
									unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
								}
								break;
						}
						iLocal_1446 = Local_121.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1446 = Local_121.f_115;
		}
	}
}

void func_671()
{
	int iVar0;
	
	if (!func_351())
	{
		if (func_680("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	iVar0 = func_124(unk_0x0FFED3E94261A832());
	if (iVar0 < 2)
	{
		if (func_680("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 2))
	{
		if (!func_679(86))
		{
			if (func_673(0, 1, 1, 1))
			{
				if (unk_0x88641E5BC172153A() == Local_121.f_118)
				{
					func_672("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xF6082E2ADA1C795B(&iLocal_1442, 2);
				}
				else if (func_727() == Local_121.f_118)
				{
					func_672("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xF6082E2ADA1C795B(&iLocal_1442, 2);
				}
				else if (func_276())
				{
					func_672("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_297(1);
					unk_0xF6082E2ADA1C795B(&iLocal_1442, 2);
				}
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 2))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 3))
		{
			if (func_673(0, 1, 1, 1))
			{
				if (!func_680("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x88641E5BC172153A() == Local_121.f_118 || func_727() == Local_121.f_118)
					{
						func_298("HUNT_HELPB", -1);
						func_297(1);
						unk_0xF6082E2ADA1C795B(&iLocal_1442, 3);
					}
				}
			}
		}
	}
}

void func_672(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x2D1CC533F8B39221(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam3);
}

int func_673(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_678())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_266())
	{
		return 0;
	}
	if (func_375())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_256(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_677(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_676())
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
	if (func_675())
	{
		return 0;
	}
	if (func_674())
	{
		return 0;
	}
	if (func_259())
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

bool func_674()
{
	return Global_2445217.f_571;
}

bool func_675()
{
	return Global_2445217.f_723;
}

bool func_676()
{
	return Global_2434604.f_2791.f_578;
}

int func_677(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_678()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

bool func_679(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

bool func_680(char* sParam0, char* sParam1)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	unk_0xD5DA3EC5EEC78358(sParam1);
	return unk_0x95886DF60C19E1CC(0);
}

void func_681()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_134(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_117(unk_0x0FFED3E94261A832()))
		{
			func_116();
		}
	}
}

void func_682()
{
	if (func_127())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1, 1))
		{
			func_102(0);
			unk_0x507FE690B1271947(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_124(unk_0x0FFED3E94261A832()) == 0)
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1, 1))
	{
		if (!func_726())
		{
			if (!func_126())
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_1, 6))
				{
					func_102(1);
					unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_683()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	iVar4 = func_60();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_2, iVar0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_110, iVar0))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (func_727() == Local_121.f_118)
							{
								if (func_701(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_3, iVar0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_112, iVar0))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
				{
					if (func_700(iVar0))
					{
						unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_4, iVar0))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_121.f_111, iVar0))
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_699(iVar0);
		if (func_351())
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_1457[iVar0]))
			{
				if (!func_661())
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1457[iVar0] = unk_0x9E3A324AB806771E(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1));
							if (func_727() == Local_121.f_118)
							{
								unk_0x697F84823ACFF84C(uLocal_1457[iVar0], 12);
								unk_0x9FD1808EF916E312(uLocal_1457[iVar0], 432);
								func_698(&(uLocal_1457[iVar0]), 6);
							}
							else
							{
								unk_0x9FD1808EF916E312(uLocal_1457[iVar0], 480);
								func_698(&(uLocal_1457[iVar0]), 9);
							}
							unk_0xA4F6216A8431C2E8(uLocal_1457[iVar0], 1);
							unk_0x43FC07DB1C2FA4B3(uLocal_1457[iVar0], 7000);
							unk_0x0B584E556B01101F(uLocal_1457[iVar0], 1.1f);
							unk_0xA6B842B66643C116(uLocal_1457[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_1457[iVar0]));
				}
				else if (func_661())
				{
					unk_0x789C84F1B8496AD0(&(uLocal_1457[iVar0]));
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uLocal_1457[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_1457[iVar0]));
		}
		func_697(iVar0);
		func_696(iVar0);
		func_694(iVar0);
		switch (Local_121.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x62E688B72E3C57B0())
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_121.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x37959C6A7F431781(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x62E688B72E3C57B0())
				{
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_121.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xAA4F14DA15DB0B51(Local_121.f_108, iVar0))
										{
											unk_0x37959C6A7F431781(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0xECBE9D2902B2B964(Local_121.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xAA4F14DA15DB0B51(Local_121.f_108, iVar0))
											{
												unk_0x507FE690B1271947(&(Local_121.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x8F2751B831A7B303(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x57747A7618E67953(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_690(iVar0);
										if (!unk_0x769F0F6444C1ABE0(uVar2))
										{
											unk_0xCD6FB688ED8B6284(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x3EFE40733EFB6649(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 0);
									unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x3EFE40733EFB6649(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x6653C5D5D9140805(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_689(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0x21CAD532E4CCFFA8(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0x1E199569E0295838(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_121.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_692(Local_121.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x9F4D90A6D0682C51(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_121.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_692(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x9F4D90A6D0682C51(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_692(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_692(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_692(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0x434105A1C45F1BED(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x8F2751B831A7B303(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_726())
	{
		func_684();
	}
}

void func_684()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_685(uLocal_1703[iVar0], &(Local_1462[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_685(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (func_688())
		{
			Global_2434604 = unk_0x0FFED3E94261A832();
		}
		if (bParam3)
		{
			func_687(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, 1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_687(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, -1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam1))
	{
		func_686(uParam1);
	}
}

void func_686(var uParam0)
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

int func_687(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
					unk_0xD5DA3EC5EEC78358(uParam7);
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

bool func_688()
{
	return Global_1312829;
}

int func_689(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+08f;
	Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar6)))
		{
			iVar7 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x1E199569E0295838(iVar7);
				if (iVar6 == Local_121.f_118 || Local_993[iVar6 /*14*/].f_10 == Local_121.f_118)
				{
					if (!unk_0x769F0F6444C1ABE0(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iVar8, 1), Var3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar7;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != func_60())
	{
		*uParam1 = fVar1;
	}
	return iVar0;
}

var func_690(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_691(iParam0);
	if (iVar1 != func_60())
	{
		uVar0 = unk_0x1E199569E0295838(iVar1);
	}
	return uVar0;
}

int func_691(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	
	iVar0 = func_60();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar3)))
		{
			iVar7 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar3));
			uVar8 = unk_0x1E199569E0295838(iVar7);
			if (func_171(iVar7, 1))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_993[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_118)))
					{
						if (!unk_0x769F0F6444C1ABE0(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iVar8, 1), Var4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar7;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_692(var uParam0)
{
	if (unk_0x2D46D2FB70C76390(uParam0))
	{
		return 1;
	}
	if (func_693(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_693(var uParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_694(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_351())
	{
		return;
	}
	if (func_124(unk_0x0FFED3E94261A832()) < 1)
	{
		return;
	}
	if (!func_726() && !func_276())
	{
		return;
	}
	if (func_661())
	{
		return;
	}
	if (func_726())
	{
		unk_0xF9C830438D0097FD(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xF9C830438D0097FD(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_121.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0x47C0431D5D179992(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0x0C20E539D876C5B3(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 0);
				func_695(uVar7, uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_695(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_696(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_121.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_121.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_727() != Local_121.f_118)
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
	Var4 = { unk_0xD1EE0E9FCD74A37B(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_121.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_13), iParam0);
	}
}

void func_697(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_121.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_121.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_727() != Local_121.f_118)
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_121.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
	Var4 = { unk_0xD1EE0E9FCD74A37B(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_121.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_727() == Local_121.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
						return;
					}
					if (func_701(uVar7))
					{
						unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_698(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		uVar0 = func_313(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, uVar0);
	}
}

void func_699(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_121.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0x434105A1C45F1BED(Local_121.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_121.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0xD2660BAC03EB7433(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0xE423CA97BB7EA540(Var5, &fVar1, 0))
							{
								if (unk_0x3FEF699D13BCC798((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iParam0 /*26*/].f_1), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_700(int iParam0)
{
	if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_121.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x12CF5C6534A94BEE(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x12CF5C6534A94BEE(unk_0xECBE9D2902B2B964(Local_121.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_701(var uParam0)
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
	if (func_702())
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

bool func_702()
{
	return Global_1574289;
}

void func_703()
{
	int iVar0;
	int iVar1;
	
	if (Local_121.f_0 != 4)
	{
		iVar1 = unk_0x7C214DA899F05536(iLocal_1445);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (unk_0x76BCE6C7B20502DA(iVar1))
			{
				if (!func_661())
				{
					if (!func_726())
					{
						if (func_276())
						{
							if (func_171(iVar1, 1))
							{
								iVar0 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_8, iLocal_1445))
									{
										func_314(iVar1, 432, 1);
										func_309(iVar1, func_313(iLocal_1734), 1);
										unk_0xF6082E2ADA1C795B(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_8), iLocal_1445);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_993[unk_0x88641E5BC172153A() /*14*/].f_8, iLocal_1445))
			{
				func_314(iVar1, 432, 0);
				func_309(iVar1, func_313(iLocal_1734), 0);
				unk_0x507FE690B1271947(&(Local_993[unk_0x88641E5BC172153A() /*14*/].f_8), iLocal_1445);
			}
		}
	}
	iLocal_1445++;
	if (iLocal_1445 >= 32)
	{
		iLocal_1445 = 0;
	}
}

int func_704(bool bParam0)
{
	if (func_705(1))
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
		if (func_231() == func_60() || !func_813(func_231(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_705(bool bParam0)
{
	bool bVar0;
	
	if (!func_412(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_60())
		{
			if (func_813(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_706(func_95(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_466(31);
				if (func_295(func_95(unk_0x0FFED3E94261A832())))
				{
					func_466(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_332(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_230(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_466(88);
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

int func_706(int iParam0)
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

void func_707()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_121.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1703[iVar0] = Local_121.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_708()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x88641E5BC172153A() == Local_121.f_118 || func_727() == Local_121.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
			{
				unk_0xA12751452A2A58D1(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_1), unk_0x0FFED3E94261A832(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0xA12751452A2A58D1(unk_0xC09E9E2B61AD04E7(Local_121.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x0FFED3E94261A832(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_709()
{
	if (Local_121.f_118 > -1)
	{
		iLocal_1734 = func_579(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_121.f_118)));
	}
}

void func_710(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_311())
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

void func_711(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_725(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_724() != -1)
		{
			func_723(-1);
		}
		if (func_722() != -1)
		{
			func_721(-1);
		}
		func_720(iParam2);
		func_718(iParam0);
		if (!func_106(iParam0))
		{
			fVar0 = func_105(iParam0);
			if (fVar0 != 1f)
			{
				func_710(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_109(iParam0) || iParam3)
		{
			if (func_107(iParam0, iParam2) && iParam3 == 1)
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
		if (func_126())
		{
			func_100(27);
		}
		if (bParam1)
		{
			if (!func_127())
			{
				func_102(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_466(6);
			}
			func_717();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_122(unk_0x0FFED3E94261A832()) && func_114(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_713();
		if (func_712(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_712(int iParam0)
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

void func_713()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_716();
	iVar2 = func_61(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_71(iVar1, iVar2, 1) || func_714(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_714(int iParam0, int iParam1)
{
	if (func_171(iParam0, 1) && func_171(iParam1, 1))
	{
		return (func_715(iParam0) == func_61(iParam1) || func_715(iParam1) == func_61(iParam0));
	}
	return 0;
}

int func_715(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1622795[func_61(iParam0) /*431*/].f_11.f_351;
	}
	return func_60();
}

int func_716()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_414();
	if (iVar0 != func_60())
	{
		if (func_813(iVar0, 0, 1))
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

void func_717()
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

void func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_393(3766, -1, 0);
	iVar1 = func_719(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_391(3766, iVar0, -1, 1, 0);
	}
}

int func_719(int iParam0)
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

void func_720(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_721(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_722()
{
	return Global_2497344.f_4828.f_151;
}

void func_723(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

int func_724()
{
	return Global_2497344.f_4828.f_150;
}

void func_725(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

int func_726()
{
	int iVar0;
	
	iVar0 = func_727();
	if (iVar0 > -1)
	{
		if (Local_121.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_727()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = unk_0x88641E5BC172153A();
		iVar1 = unk_0x0FFED3E94261A832();
	}
	else
	{
		iVar0 = func_277();
		iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_993[iVar0 /*14*/].f_10 != -1)
	{
		return Local_993[iVar0 /*14*/].f_10;
	}
	if (func_113(iVar1))
	{
		Local_993[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_121.f_118)
		{
			func_641(1);
		}
	}
	else if (func_171(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (unk_0x76BCE6C7B20502DA(iVar2))
			{
				Local_993[iVar0 /*14*/].f_10 = unk_0x675E1E93DBDAF30B(iVar2);
			}
		}
	}
	return Local_993[iVar0 /*14*/].f_10;
}

int func_728()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_121.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_729()
{
	return Local_121.f_0;
}

int func_730(int iParam0)
{
	return Local_993[iParam0 /*14*/];
}

int func_731()
{
	var uVar0;
	
	func_736(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_735())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_734())
	{
		return 1;
	}
	if (func_733(157))
	{
		if (!func_732())
		{
			return 1;
		}
	}
	if (func_733(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_311() != 0)
	{
		if (unk_0x09952BA662A7629B(func_311()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_732()
{
	return Global_2445217.f_578;
}

int func_733(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_734()
{
	return Global_2454709;
}

bool func_735()
{
	return Global_2445217.f_573;
}

void func_736(var uParam0)
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
					func_737(iVar0);
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

void func_737(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_813(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_738(uVar4, &bVar5))
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

int func_738(int iParam0, var uParam1)
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

void func_739()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_740()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x0FFED3E94261A832(), 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_1442, 6))
		{
			if (unk_0x591AF4C50B46E014())
			{
				if (func_726() || func_276())
				{
					func_543(0, 4, 0, 0, -1, -1, -1, -1);
					unk_0xF6082E2ADA1C795B(&iLocal_1442, 6);
				}
			}
		}
		uVar0 = Local_121.f_115;
		uVar1 = Local_121.f_121;
		iVar2 = -1;
		if (unk_0x591AF4C50B46E014())
		{
			iVar2 = Local_993[unk_0x88641E5BC172153A() /*14*/].f_11;
		}
		func_787(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x591AF4C50B46E014())
		{
			if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_1447)
			{
				unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), iLocal_1448);
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 18))
	{
		func_319(1);
		unk_0x507FE690B1271947(&iLocal_1442, 18);
	}
	func_786();
	if (Local_121.f_119 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 5))
		{
			if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_121.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x62E688B72E3C57B0())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_121.f_871, iVar3))
				{
					unk_0x6790C1CEA32DA629(Local_121.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_1442, 17))
	{
		unk_0xE0125DCD8DB3EFC3(iLocal_1736);
		unk_0x507FE690B1271947(&iLocal_1442, 17);
	}
	func_316();
	unk_0xF6082E2ADA1C795B(&iLocal_1443, 8);
	func_593();
	unk_0x768882AFD4B41EEA(1);
	func_641(0);
	func_742(1, 0);
	unk_0xE0125DCD8DB3EFC3(5);
	func_308();
	func_741();
}

void func_741()
{
	unk_0xA232817B0B36F2E5();
}

void func_742(bool bParam0, int iParam1)
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
		func_784();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_410() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_768(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_767(iParam1))
			{
				func_768(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
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
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_122(unk_0x0FFED3E94261A832()))
		{
			func_102(0);
		}
	}
	else if (func_765(unk_0x0FFED3E94261A832()) != -1)
	{
		func_725(-1);
	}
	func_764(func_60());
	if (func_76(16))
	{
		func_75(16);
	}
	func_760(0);
	func_720(-1);
	func_759();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_758(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_756(iVar1);
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
	iVar2 = func_301();
	if ((func_203(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_755(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_362(iVar2))
	{
		func_751(-1, 1);
	}
	else if (((func_300(iVar2) || func_750(iVar2)) || func_749(iVar2)) || func_359(iVar2))
	{
	}
	else
	{
		func_751(-1, 1);
	}
	func_98(19);
	func_98(20);
	func_98(21);
	func_98(22);
	func_98(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_748();
	if (func_114(unk_0x0FFED3E94261A832()))
	{
		func_641(0);
	}
	func_98(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_60();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_122(unk_0x0FFED3E94261A832()))
	{
		func_97();
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
		func_747("IMPEXP_SELFDES", 0);
		func_745("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_743(iVar2, 0);
}

void func_743(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_744(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_744(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_744(int iParam0)
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

void func_745(char* sParam0)
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
					func_653();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_746(iVar0))
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

int func_746(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_747(char* sParam0, int iParam1)
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

void func_748()
{
	if (func_117(unk_0x0FFED3E94261A832()))
	{
		func_98(25);
	}
}

int func_749(int iParam0)
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

int func_750(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_751(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_414() != func_60())
		{
			if (func_754(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_753(iParam0)] = 1;
			}
		}
		iVar0 = func_753(159);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(157);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(148);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(164);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(142);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(152);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(166);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(170);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(173);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(179);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(200);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(201);
		if (func_752(iVar0, Global_262145.f_11258, bParam1))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(182);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(183);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(185);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(186);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(180);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(195);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(197);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(198);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(207);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(208);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(209);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(214);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(215);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(216);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(217);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(218);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(219);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(220);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(221);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_752(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0x0FFED3E94261A832(), 19) && !func_99(unk_0x0FFED3E94261A832(), 20)) && !func_99(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_8(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_595(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_753(int iParam0)
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

int func_754(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_755(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_414() != func_60())
		{
			Global_2484845.f_93[func_753(iParam0)] = 1;
		}
		iVar0 = func_753(155);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(163);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(160);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(153);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(162);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(154);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(171);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(172);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(199);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(194);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(193);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(210);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(205);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(189);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(211);
		if (func_752(iVar0, Global_262145.f_11259, 0))
		{
			func_145(&(Global_2484845[iVar0 /*2*/]));
			func_7(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_756(int iParam0)
{
	if (!func_28(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_757(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_757() };
	}
	if (!func_28(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_757(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_757() };
	}
}

Vector3 func_757()
{
	struct<3> Var0;
	
	return Var0;
}

void func_758(int iParam0)
{
	if (!func_28(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_757(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_757() };
	}
	if (!func_28(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_757(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_757() };
	}
}

void func_759()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_60();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_760(bool bParam0)
{
	if (bParam0)
	{
		if (!func_763(unk_0x0FFED3E94261A832(), 14))
		{
			func_762(14);
		}
	}
	else if (func_763(unk_0x0FFED3E94261A832(), 14))
	{
		func_761(14);
	}
}

void func_761(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_762(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_763(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_764(int iParam0)
{
	if (func_113(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_60())
				{
				}
			}
		}
	}
}

int func_765(int iParam0)
{
	if (func_766(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_766(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_767(int iParam0)
{
	return func_509(iParam0) == 5;
}

void func_768(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_508(iParam0, iParam1) && func_783(iParam0, iParam1))
	{
		iVar0 = func_507(iParam0, iParam1);
		func_771(iVar0, bParam2, bParam3);
		func_769(iVar0, 1);
	}
}

void func_769(int iParam0, int iParam1)
{
	func_491(func_770(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_770(int iParam0)
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

void func_771(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_616(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_782(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_781(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_780(iParam0, 0, bParam2);
	}
	else if (func_778(iParam0, bParam2))
	{
		iVar0 = func_777(iVar2, 0);
		iVar3 = func_568(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_776(iVar2, bParam2);
		iVar5 = func_777(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_767(iVar2) && func_775(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_782(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_774(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_773(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_776(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_777(iVar2, bParam2) / func_774(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_767(iVar2) && func_775(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_772(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_772(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (func_498(iParam1))
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

void func_773(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_774(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_498(iParam1))
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

int func_775(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_498(iParam1) && func_767(iParam1))
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

int func_776(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_509(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_777(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_509(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
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
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 0))
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
			if (func_506(unk_0x0FFED3E94261A832(), iParam0, 1))
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
			if (func_775(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_778(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_492(15384, -1, -1);
	}
	return func_492(func_779(iParam0), -1, -1);
}

int func_779(int iParam0)
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

void func_780(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_491(15384, iParam1, -1, 1);
		return;
	}
	func_491(func_779(iParam0), iParam1, -1, 1);
}

int func_781(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_616(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_767(iVar1))
	{
		if (func_775(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_782(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_783(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_508(iParam0, iParam1))
	{
		iVar0 = func_507(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_784()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_785(24);
}

void func_785(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

void func_786()
{
	unk_0x28BD561DA3E207B1(iLocal_1447);
}

void func_787(var uParam0, var uParam1, int iParam2, int iParam3)
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
			Var32.f_16 = uParam1;
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
			Var65.f_16 = uParam1;
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
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0x231FCB4459183C55(&Var98);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1773254.f_15;
			unk_0x5601D2D69A3954CE(&Var116);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1773254.f_15;
			unk_0x6E6D2D6D4552A609(&Var134);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1773254.f_15;
			unk_0x9B04C28FD4D089F5(&Var153);
		}
	}
	func_788();
}

void func_788()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

void func_789(struct<21> Param0)
{
	func_811(func_812(Param0.f_0), Param0);
	unk_0x20DC9856B13C398C(16);
	unk_0x7E04478E16257BA0(8);
	func_810(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_121, 872);
	unk_0xA5929B03CD847BE8(&Local_993, 449);
	if (!func_809())
	{
		func_740();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
		}
		func_806();
		func_790(0, 0);
		Local_993[unk_0x88641E5BC172153A() /*14*/] = 0;
	}
	else
	{
		func_740();
	}
}

void func_790(int iParam0, int iParam1)
{
	func_805();
	func_793(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_792(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_400() && !func_171(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_130())
		{
			func_101(3);
		}
	}
	func_101(4);
	if (func_412(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_414();
	}
	if (func_295(iParam0))
	{
		func_566();
		Global_1773272.f_18 = func_562(func_231());
	}
	else if (func_299(func_765(unk_0x0FFED3E94261A832())))
	{
		func_564();
		Global_1773325.f_18 = func_562(func_231());
	}
	func_791();
}

void func_791()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_60();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_792(int iParam0, bool bParam1)
{
	return func_71(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_793(bool bParam0)
{
	int iVar0;
	
	func_785(33);
	func_785(34);
	func_785(35);
	func_785(36);
	func_785(37);
	func_785(38);
	func_785(39);
	func_785(40);
	func_785(43);
	func_785(41);
	func_785(54);
	func_785(42);
	func_785(47);
	func_804(23);
	func_804(24);
	func_785(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_803();
	func_795();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_794(3))
	{
		func_804(3);
	}
	else if (func_794(4))
	{
		func_804(4);
	}
	else if (func_794(5))
	{
		func_804(5);
	}
	else if (func_794(6))
	{
		func_804(6);
	}
	else if (func_794(7))
	{
		func_804(7);
	}
	else if (((((((((((((((((func_794(0) || func_794(1)) || func_794(2)) || func_794(8)) || func_794(9)) || func_794(10)) || func_794(11)) || func_794(12)) || func_794(13)) || func_794(14)) || func_794(15)) || func_794(16)) || func_794(17)) || func_794(18)) || func_794(19)) || func_794(20)) || func_794(21)) || func_794(22))
	{
		func_804(8);
		func_804(0);
		func_804(1);
		func_804(2);
		func_804(9);
		func_804(10);
		func_804(11);
		func_804(12);
		func_804(13);
		func_804(14);
		func_804(15);
		func_804(16);
		func_804(17);
		func_804(18);
		func_804(19);
		func_804(20);
		func_804(21);
		func_804(22);
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

bool func_794(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_795()
{
	if (func_802())
	{
		func_801(0);
		func_801(1);
		func_801(2);
		func_801(3);
		func_801(4);
		func_801(5);
		func_801(6);
		func_801(7);
		func_801(8);
		func_801(9);
		func_801(10);
		func_801(11);
		func_801(12);
		if (func_800(13))
		{
			if (func_797(func_798(), 3))
			{
				func_796(func_798(), 3);
			}
			func_801(13);
		}
	}
}

void func_796(int iParam0, int iParam1)
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

int func_797(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_798()
{
	if (func_799())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

int func_799()
{
	int iVar0;
	
	iVar0 = func_61(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_60()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_800(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_801(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_802()
{
	if ((((((((((((func_800(0) || func_800(1)) || func_800(2)) || func_800(3)) || func_800(4)) || func_800(5)) || func_800(6)) || func_800(7)) || func_800(8)) || func_800(9)) || func_800(10)) || func_800(11)) || func_800(12))
	{
		return 1;
	}
	return 0;
}

void func_803()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_805()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

void func_806()
{
	int iVar0;
	int iVar1;
	
	unk_0xEE8231F61ED038B0("relHeadHunterPlayer", &iLocal_1447);
	iVar0 = unk_0xAEF0E480E33587E6(unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0x3A8EFBE4AB457FE2(5, Global_1574695[iVar1], iLocal_1447);
		unk_0x3A8EFBE4AB457FE2(5, iLocal_1447, Global_1574695[iVar1]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar1], Global_1574737);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574737, Global_1574695[iVar1]);
		unk_0x3A8EFBE4AB457FE2(iVar0, iLocal_1447, joaat("COP"));
		unk_0x3A8EFBE4AB457FE2(iVar0, joaat("COP"), iLocal_1447);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1447, Global_1574739[5]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574739[5], iLocal_1447);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_1447, Global_1574728);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574728, iLocal_1447);
		iVar1++;
	}
	unk_0x3A8EFBE4AB457FE2(5, iLocal_1447, Global_1574737);
	unk_0x3A8EFBE4AB457FE2(5, Global_1574737, iLocal_1447);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, Global_1574737);
	unk_0x3A8EFBE4AB457FE2(5, 2017343592, iLocal_1447);
	func_808(1, &Global_1574737);
	func_807(&Global_1574737);
	func_807(&iLocal_1447);
}

void func_807(int iParam0)
{
	unk_0x3A8EFBE4AB457FE2(1, -1865950624, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1865950624);
	unk_0x3A8EFBE4AB457FE2(1, 296331235, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 296331235);
	unk_0x3A8EFBE4AB457FE2(1, 1166638144, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1166638144);
	unk_0x3A8EFBE4AB457FE2(1, 2037579709, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2037579709);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2017343592);
	unk_0x3A8EFBE4AB457FE2(1, -1821475077, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1821475077);
	unk_0x3A8EFBE4AB457FE2(1, 1782292358, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1782292358);
	unk_0x3A8EFBE4AB457FE2(1, -1033021910, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1033021910);
	unk_0x3A8EFBE4AB457FE2(1, -1285976420, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1285976420);
}

void func_808(int iParam0, var uParam1)
{
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("COP"), *uParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *uParam1, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("army"), *uParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *uParam1, joaat("army"));
	unk_0x3A8EFBE4AB457FE2(iParam0, -183807561, *uParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *uParam1, -183807561);
}

int func_809()
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
		if (func_735())
		{
			return 0;
		}
		if (func_733(155))
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

int func_810(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0;
			}
		}
		if (!func_688())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_735())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_733(155))
				{
					if (!bParam2)
					{
						func_741();
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
					func_741();
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
				func_741();
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
			func_741();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_811(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_741();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_812(int iParam0)
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

int func_813(int iParam0, bool bParam1, bool bParam2)
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

