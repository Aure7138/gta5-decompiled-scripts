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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<872> Local_98 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_970[32];
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434[4] = { 0, 0, 0, 0 };
	struct<8> Local_1439[30];
	var uLocal_1680[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1711 = 0;
	var uLocal_1712 = 0;
	int iLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_1426 = -1;
	if (unk_0x3A711520F83BAE98() && func_879(unk_0x9EB17624F44A8DA4(), 0, 1))
	{
		func_845(ScriptParam_0);
	}
	else
	{
		func_796();
	}
	while (true)
	{
		func_795();
		if (func_787())
		{
			func_796();
		}
		Global_1667867.f_2 = Local_98.f_863;
		Global_1667867.f_3 = Local_98.f_864;
		switch (func_786(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_785() == 1)
				{
					if (func_784())
					{
						func_783();
						if (func_782())
						{
							func_767(166, 1, -1, 0);
							unk_0xC0EBC1452FCAB15C(3);
							func_766(0f);
							iLocal_1425 = unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502());
							unk_0xCE93FCB8A8D8DF0B(unk_0xFC1458A37D98B502(), iLocal_1424);
						}
						else
						{
							func_767(166, 0, -1, 0);
						}
						func_765();
						func_764();
						func_763();
						Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 1;
					}
				}
				else if (func_785() == 4)
				{
					Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_760(1))
				{
					Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 2;
				}
				if (func_785() == 1)
				{
					func_759();
					func_739();
					func_716();
					func_295();
					func_286();
					if (func_782() || func_284())
					{
						func_141(&(Global_1347666.f_532), &Global_1347666, 27, &(Global_1347666.f_1), &(Global_1347666.f_115), -1, 0);
					}
					func_76();
				}
				else if (func_785() == 4)
				{
					Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 3;
					func_73();
				}
				func_72();
				break;
			
			case 3:
				func_71(&(Local_98.f_845));
				if (func_70(&(Local_98.f_845)))
				{
					Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 4;
			
			case 4:
				func_796();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_785())
			{
				case 0:
					func_68();
					func_67();
					if (func_25())
					{
						unk_0x29723B8B6E11E8F2(&(Local_98.f_863), &(Local_98.f_864));
						Local_98.f_0 = 1;
						Local_98.f_118 = unk_0x622FF3AE4B1D07C3();
						Local_98.f_119 = unk_0x9EB17624F44A8DA4();
						func_767(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_98.f_0 = 4;
					}
					else if (func_1())
					{
						Local_98.f_0 = 4;
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
	if (Global_2512808.f_4856.f_29)
	{
		Global_2512808.f_4856.f_29 = 0;
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
	if (unk_0xC80D31E4B587871C(Local_98.f_1, 2))
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
	switch (Local_98.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xC80D31E4B587871C(Local_98.f_1, 1))
			{
				Local_98.f_117 = 2;
			}
			else if (unk_0xC80D31E4B587871C(Local_98.f_1, 3))
			{
				Local_98.f_117 = 2;
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
	if (!unk_0xC80D31E4B587871C(Local_98.f_1, 6))
	{
		if (!func_8(&(Local_98.f_849)))
		{
			func_7(&(Local_98.f_849), 0, 0);
		}
		else if (func_6(&(Local_98.f_849), 500, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 6);
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
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
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
	if (!func_8(&(Local_98.f_847)))
	{
		func_7(&(Local_98.f_847), 0, 0);
	}
	else if (func_6(&(Local_98.f_847), func_10(), 0))
	{
		unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_14340;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_98.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_98.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
							{
								Local_98.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_98.f_2[iVar0 /*26*/] == 1)
						{
							Local_98.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_98.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_98.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0xAAA8D20859E2D36D(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xC80D31E4B587871C(Local_98.f_109, iVar0))
										{
											unk_0x872F1C1F8587CCC7(&(Local_98.f_108), iVar0);
											Local_98.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xC80D31E4B587871C(Local_98.f_110, iVar0))
										{
											unk_0x872F1C1F8587CCC7(&(Local_98.f_108), iVar0);
											Local_98.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xC80D31E4B587871C(Local_98.f_111, iVar0))
										{
											unk_0x872F1C1F8587CCC7(&(Local_98.f_108), iVar0);
											Local_98.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xC80D31E4B587871C(Local_98.f_112, iVar0))
										{
											Local_98.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_98.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_98.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x1ED974E122CB5C47(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1)))
							{
								Local_98.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_98.f_2[iVar0 /*26*/].f_2))
								{
									Local_98.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xC80D31E4B587871C(Local_98.f_112, iVar0))
								{
									Local_98.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x88DDBE9908752BF0(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_98.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xC80D31E4B587871C(Local_98.f_110, iVar0))
							{
								Local_98.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xC80D31E4B587871C(Local_98.f_111, iVar0))
							{
								Local_98.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_98.f_2[iVar0 /*26*/].f_24)
						{
							Local_98.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_98.f_2[iVar0 /*26*/].f_25)
						{
							Local_98.f_2[iVar0 /*26*/].f_17 = 6;
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
				switch (Local_98.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_98.f_2[iVar0 /*26*/] == 0)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_98.f_2[iVar0 /*26*/] == 2)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_98.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_98.f_2[iVar0 /*26*/].f_17 == 3 || Local_98.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_98.f_2[iVar0 /*26*/].f_24)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_98.f_2[iVar0 /*26*/].f_17 == 3 || Local_98.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x88DDBE9908752BF0(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_98.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
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
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_13(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
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
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_98.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0x872F1C1F8587CCC7(&(Local_98.f_116), iVar0);
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
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0x4B71BC2F3CC0D5B4(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_98.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	if (Local_98.f_0 != 4)
	{
		iLocal_1421 = 0;
		while (iLocal_1421 < unk_0xB72D370CB7ABC3EF())
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_1421)))
			{
				iVar3 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_1421));
				if (!func_17(iVar3, 0))
				{
					if (func_879(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1421);
					func_23(iLocal_1421);
					if (!unk_0xC80D31E4B587871C(Local_98.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xC80D31E4B587871C(Local_98.f_1, 1) || unk_0xC80D31E4B587871C(Local_98.f_1, 3)) || unk_0xC80D31E4B587871C(Local_98.f_1, 5))
							{
								if (!unk_0xC80D31E4B587871C(Local_970[iLocal_1421 /*14*/].f_1, 4))
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
			else if (!unk_0xC80D31E4B587871C(Local_98.f_1, 5))
			{
				if (Local_98.f_118 > -1)
				{
					if (iLocal_1421 == Local_98.f_118)
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 5);
					}
				}
			}
			iLocal_1421++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xC80D31E4B587871C(Local_98.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_98.f_115 != iVar0)
		{
			Local_98.f_115 = iVar0;
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 1);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 2);
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
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_113, iVar0))
			{
				if (!func_8(&(Local_98.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_98.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_98.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_98.f_113), iVar0);
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
		if (!unk_0xC80D31E4B587871C(Local_98.f_109, iVar0))
		{
			if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_109), iVar0);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_110, iVar0))
		{
			if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_110), iVar0);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_112, iVar0))
		{
			if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_112), iVar0);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_111, iVar0))
		{
			if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_111), iVar0);
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_98.f_113, iVar0))
		{
			if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_113), iVar0);
			}
			else if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_113), iVar0);
			}
		}
		if (Local_98.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_98.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_12, iVar0))
				{
					Local_98.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_98.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xC80D31E4B587871C(Local_970[iParam0 /*14*/].f_13, iVar0))
				{
					Local_98.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_98.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_98.f_2[iVar0 /*26*/].f_2))
						{
							unk_0x4B71BC2F3CC0D5B4(unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2), unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iParam0)), 1);
							unk_0x872F1C1F8587CCC7(&(Local_98.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(Local_98.f_114), iParam0);
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
	
	iVar0 = Local_98.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_98.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]))
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
	
	iVar0 = Local_98.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_98.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_98.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_98.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x49DB840E3FC89FEE(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0xC80D31E4B587871C(Local_98.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x247EAA2E93D4A021(Var3, 10f, 1, 0, 0, 1);
							unk_0x872F1C1F8587CCC7(&(Local_98.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0xF91E58AE0DFA3063(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xF80DF4F5C0773B3B(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1424);
							unk_0x4C44781F822B0B00(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0x29966F4536E0E478(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
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
	float fVar0;
	var uVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x9B8406983378711E(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	uVar1 = unk_0xEA60F3B426BB095B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x6ADD12BF4D6D2587(uVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(uVar1);
		Global_2512808.f_5827 = uVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam15)
			{
				unk_0xB2CBFA871D3387B6(uVar1, 1);
			}
			unk_0xFBA991D3A851E195(uVar1, iParam10);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam8)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, iParam9);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_98.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_98.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_98.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
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
	
	iVar1 = Local_98.f_2[iParam0 /*26*/];
	iVar2 = Local_98.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_98.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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
	
	if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_98.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_98.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x7A419CA188B4A665(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), Local_98.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x35829E9BFCED1A3F(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574768);
											unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1424);
											unk_0xA37FFE314E45ED5D(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
					if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x7A419CA188B4A665(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_98.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_98.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_98.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0x35829E9BFCED1A3F(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574768);
										unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1424);
										unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x2A2AEB84A449E99E(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x3811A0FC01E02FC1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x4EC2D0046891F1C5(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x8710B0752BF74EA2(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										uVar4 = func_37();
										unk_0xEE632EEBBC285F6E(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0xD1980BC8CFFBF0B9(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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
	return unk_0xF2DB717A73826179(Global_262145.f_14348);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_14347;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	iVar0 = unk_0xAC992EFAD62C33BF(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xABF6E3937F555048(iVar0);
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(iVar0, iParam9);
		if (unk_0x0D4BF24EE51A419A(iVar0))
		{
			if (bParam7)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
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
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_98.f_2[iParam0 /*26*/] == 0 || Local_98.f_2[iParam0 /*26*/] == 2);
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
	switch (Local_98.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
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
	
	switch (Local_98.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_98.f_2[iParam0 /*26*/].f_11;
				if (unk_0x49DB840E3FC89FEE(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_98.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_98.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_98.f_2[iParam0 /*26*/].f_2), iVar0, Local_98.f_2[iParam0 /*26*/].f_13, Local_98.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0xF80DF4F5C0773B3B(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xF91E58AE0DFA3063(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_2), 1, iLocal_1424);
								unk_0x4D7D93C6E0C1063B(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x4C44781F822B0B00(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0xCFF0CD14B439821D(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1, 1);
								unk_0x9980244E5DAEFED4(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xB6896384121AB45B(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x29966F4536E0E478(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x3E6141E2AFA33365(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x7A419CA188B4A665(1))
					{
						iVar1 = Local_98.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_98.f_2[iParam0 /*26*/].f_1), Local_98.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x35829E9BFCED1A3F(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), Global_1574768);
								unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, iLocal_1424);
								unk_0xA37FFE314E45ED5D(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x872F1C1F8587CCC7(&(Local_98.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x7A419CA188B4A665(1))
				{
					iVar1 = Local_98.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_98.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_98.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_98.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_98.f_2[iParam0 /*26*/].f_13, Local_98.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x35829E9BFCED1A3F(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), Global_1574768);
								unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, iLocal_1424);
								unk_0xA37FFE314E45ED5D(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x872F1C1F8587CCC7(&(Local_98.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x7A419CA188B4A665(1))
				{
					iVar1 = Local_98.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_98.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_98.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_98.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_98.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_98.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_98.f_2[iParam0 /*26*/].f_13, Local_98.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x35829E9BFCED1A3F(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xE0F761CE722765C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), Global_1574768);
								unk_0x4D316B4E3E0FED0B(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, iLocal_1424);
								unk_0xA37FFE314E45ED5D(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x2A2AEB84A449E99E(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x3811A0FC01E02FC1(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0x4EC2D0046891F1C5(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), Local_98.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x8710B0752BF74EA2(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), iVar7, 0);
								uVar8 = func_48();
								unk_0xEE632EEBBC285F6E(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0xBB3CC641B6AED5E5(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0xCFF0CD14B439821D(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1, 1);
								unk_0x872F1C1F8587CCC7(&(Local_98.f_107), iParam0);
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
	return unk_0xF2DB717A73826179(Global_262145.f_14346);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_14345;
}

float func_50(int iParam0)
{
	if (func_28(Local_98.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
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
			if (!unk_0xC80D31E4B587871C(Local_98.f_871, iVar1))
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
		Local_98.f_865[iVar0] = unk_0xCB389937EDB1519A(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0x872F1C1F8587CCC7(&(Local_98.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_98.f_865[iVar0] = unk_0xCB389937EDB1519A(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0x872F1C1F8587CCC7(&(Local_98.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_98.f_865[iVar0] = unk_0xCB389937EDB1519A(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0x872F1C1F8587CCC7(&(Local_98.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_98.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x63A6486593EC7EC3(0, Local_98.f_122);
			if (!func_28(Local_98.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_98.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_98.f_123[iVar0 /*36*/] };
					*uParam2 = Local_98.f_123[iVar0 /*36*/].f_3;
					Local_98.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x63A6486593EC7EC3(0, Local_98.f_122);
			if (!func_28(Local_98.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_98.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_98.f_123[iVar0 /*36*/] };
					*uParam2 = Local_98.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_98.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x63A6486593EC7EC3(0, 10);
			if (!func_28(Local_98.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_98.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_98.f_484[iVar0 /*36*/] };
					*uParam2 = Local_98.f_484[iVar0 /*36*/].f_3;
					Local_98.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x0D3330EAF6340496(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x0D3330EAF6340496(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xAA0BDFF32B6BC02A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_60(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
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
	Global_2405047.f_2++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_879(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xBE3C4023003180FC(func_56(unk_0x9EB17624F44A8DA4()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9E06F0EE20F58CED(Param0, fParam3))
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
		if (func_879(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam8 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
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
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_59() && Global_1595693[iVar0 /*680*/].f_673) && !func_58(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_57(iParam0);
}

Vector3 func_57(int iParam0)
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_58(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_2447174.f_16;
}

int func_60(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam8 == 0)
		{
			if (func_879(iVar1, bParam4, bParam5))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam7 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam9) && bParam6) && func_61(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_57(iVar1), Param0, 1) < fParam3)
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

int func_61(int iParam0)
{
	if (func_66(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_65(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_62(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	return -1;
}

int func_64(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_63();
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, int iParam1)
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_65(iParam0) };
		Global_2492170 = { func_65(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_67()
{
	Local_98.f_2[0 /*26*/] = 2;
	Local_98.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_98.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_98.f_2[1 /*26*/] = 2;
	Local_98.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_98.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_98.f_2[2 /*26*/] = 0;
	Local_98.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_98.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_98.f_2[3 /*26*/] = 0;
	Local_98.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_98.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_68()
{
	func_69();
	if (Local_98.f_122 == 0)
	{
		if (Local_98.f_121 == 0)
		{
			Local_98.f_122 = 10;
		}
		else
		{
			Local_98.f_122 = 9;
		}
	}
	if (unk_0xC80D31E4B587871C(Local_98.f_1, 4))
	{
		return;
	}
	switch (Local_98.f_121)
	{
		case 0:
			Local_98.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_98.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_98.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_98.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_98.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_98.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_98.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_98.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_98.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_98.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_98.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_98.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_98.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_98.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_98.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_98.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_98.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_98.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_98.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_98.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_98.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_98.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_98.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_98.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_98.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_98.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_98.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_98.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_98.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_98.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_98.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_98.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_98.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_98.f_123[6 /*36*/].f_14[2] = 180f;
			Local_98.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_98.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_98.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_98.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_98.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_98.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_98.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_98.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_98.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_98.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_98.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_98.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_98.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_98.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_98.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_98.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_98.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_98.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_98.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_98.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_98.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_98.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_98.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_98.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_98.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_98.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_98.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_98.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_98.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_98.f_484[0 /*36*/].f_3 = 179.583f;
			Local_98.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_98.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_98.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_98.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_98.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_98.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_98.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_98.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_98.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_98.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_98.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_98.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_98.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_98.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_98.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_98.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_98.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_98.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_98.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_98.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_98.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_98.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_98.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_98.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_98.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_98.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_98.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_98.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_98.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_98.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_98.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_98.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_98.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_98.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_98.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_98.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_98.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_98.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_98.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_98.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_98.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_98.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_98.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_98.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_98.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_98.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_98.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_98.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_98.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_98.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_98.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_98.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_98.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_98.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_98.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_98.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_98.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_98.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_98.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_98.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_98.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_98.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_98.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_98.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_98.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_98.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_98.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_98.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_98.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_98.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_98.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_98.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_98.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_98.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_98.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_98.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_98.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_98.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_98.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_98.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_98.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_98.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_98.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_98.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_98.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_98.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_98.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_98.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_98.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0x872F1C1F8587CCC7(&(Local_98.f_1), 4);
}

var func_69()
{
	if (Local_98.f_121 != -1)
	{
		return Local_98.f_121;
	}
	if (Local_98.f_121 == -1)
	{
		if (unk_0x28178A41B053359D(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0)) == joaat("City"))
		{
			Local_98.f_121 = 0;
		}
		else
		{
			Local_98.f_121 = 1;
		}
	}
	return Local_98.f_121;
}

int func_70(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_72()
{
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_98.f_119 != -1)
	{
		iVar0 = unk_0xF6A72924028F588B(Local_98.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_63())
				{
					if (iVar2 == iVar0 || func_74(iVar2, iVar0, 1))
					{
						unk_0xF96119FCCD4D1889(5, Global_1574725[iVar1], Global_1574768);
						unk_0xF96119FCCD4D1889(5, Global_1574768, Global_1574725[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_63())
	{
		if (!bParam2)
		{
			if (func_75(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_63())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 != func_63())
	{
		if (iParam0 != func_63())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_63())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_76()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_782())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_140(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_139(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_133())
			{
				func_129(0);
				unk_0x2BDCC0C0CA635E27(0);
				unk_0x872F1C1F8587CCC7(&uLocal_1419, 18);
			}
		}
	}
	if (Local_98.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_77(166, Var0, &uLocal_1712, 1140457472, 1144750080, 0);
	}
}

void func_77(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_128(unk_0x9EB17624F44A8DA4()) && !func_127(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8)) && (func_126(unk_0x9EB17624F44A8DA4()) || func_125(unk_0x9EB17624F44A8DA4())))
	{
		return;
	}
	Global_1667858 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Param1);
	func_121(iParam0, fVar0);
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_120(unk_0x9EB17624F44A8DA4()) || func_118(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_117(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_116(Param1, 1, 0);
		}
		if (!*uParam4 && func_879(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam4 = 1;
			if (func_115(iParam0))
			{
				unk_0x94BD6F0436473406(func_114(iParam0));
				if (func_113(iParam0, -1))
				{
					unk_0xC0EBC1452FCAB15C(0);
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 1);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 1);
					}
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				fVar1 = func_111(iParam0);
				if (fVar1 != 1f)
				{
					func_766(fVar1);
					unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_110(iParam0) && func_120(unk_0x9EB17624F44A8DA4()))
				{
					func_108(1);
					func_107(2);
				}
			}
			func_106(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_105(unk_0x9EB17624F44A8DA4(), 19))
			{
				func_104(19);
			}
		}
		if (*uParam4 && func_879(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam4 = 0;
			if (func_115(iParam0))
			{
				if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
				{
					unk_0x94BD6F0436473406(1f);
					unk_0xC0EBC1452FCAB15C(5);
					unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				func_103();
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
			}
			if (iParam7 && !func_128(unk_0x9EB17624F44A8DA4()))
			{
				if (func_101(unk_0x9EB17624F44A8DA4()) != 152)
				{
					func_80();
				}
			}
			if (func_79(2))
			{
				func_108(0);
				func_78(2);
			}
		}
	}
}

void func_78(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_34), iParam0);
}

bool func_79(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

void func_80()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_99();
	func_83(1, 1, 0);
	func_81();
}

void func_81()
{
	func_82(0, 0);
}

void func_82(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_83(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_98();
	}
	if (!bParam2)
	{
		func_86(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_85(0);
	func_84();
}

void func_84()
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_86(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_97())
		{
			func_96();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_94();
		func_90(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_87();
	}
}

void func_87()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	if (func_89())
	{
		func_88();
	}
	else
	{
		func_94();
		func_90(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_88()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_89()
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436181.f_1777.f_690.f_16 != func_63())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_91())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_91()
{
	if (((func_101(unk_0x9EB17624F44A8DA4()) == 229 || func_101(unk_0x9EB17624F44A8DA4()) == 191) || func_93()) || func_92())
	{
		return 0;
	}
	return 1;
}

var func_92()
{
	return Global_1574307;
}

int func_93()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	func_95();
	Global_2405047.f_687 = 0;
}

void func_95()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_96()
{
	if (func_89())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_97()
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_99()
{
	func_100();
	Global_2405047.f_2229 = 0;
}

void func_100()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_101(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_102(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

void func_104(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

void func_106(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

void func_107(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_34), iParam0);
}

void func_108(int iParam0)
{
	if (func_109() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_109()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
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

float func_111(int iParam0)
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
		case 229:
		case 230:
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1)
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

float func_114(int iParam0)
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
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

void func_116(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405047.f_44.f_49 = { Param0 };
	Global_2405047.f_44.f_52 = iParam3;
	Global_2405047.f_44.f_53 = iParam4;
}

bool func_117(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_118(int iParam0)
{
	if (func_119(iParam0))
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_63())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

void func_121(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_122();
	}
}

void func_122()
{
	if (!func_123(unk_0x9EB17624F44A8DA4()))
	{
		func_106(25);
	}
}

bool func_123(int iParam0)
{
	return func_105(iParam0, 25);
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11862;
		
		case 142:
			return Global_262145.f_11850;
		
		case 157:
			return Global_262145.f_11817;
		
		case 159:
			return Global_262145.f_11800;
		
		case 162:
			return Global_262145.f_11911;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

bool func_127(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (!func_139(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam0 || func_130(unk_0x9EB17624F44A8DA4()) != 0)
		{
			func_106(20);
			if (func_128(unk_0x9EB17624F44A8DA4()))
			{
				if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 8))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
				}
			}
		}
	}
}

int func_130(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_139(iParam0);
	uVar3 = func_132();
	uVar4 = func_133();
	if ((bVar1 && (func_126(iParam0) || func_125(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_120(iParam0)) && !func_131(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

bool func_131(int iParam0)
{
	return func_105(iParam0, 19);
}

bool func_132()
{
	return Global_1312416;
}

int func_133()
{
	if ((func_105(unk_0x9EB17624F44A8DA4(), 21) || func_105(unk_0x9EB17624F44A8DA4(), 22)) || func_136())
	{
		return 1;
	}
	if (func_134())
	{
		func_106(22);
		return 1;
	}
	return 0;
}

int func_134()
{
	if (func_102(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_132() && !func_135()) || func_117(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_104(27);
		}
	}
	return 0;
}

bool func_135()
{
	return Global_1312416.f_1;
}

bool func_136()
{
	return func_137(306, -1);
}

int func_137(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

bool func_139(int iParam0)
{
	return func_105(iParam0, 20);
}

float func_140(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_98.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_98.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar2 /*26*/].f_1), 1) };
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

void func_141(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	struct<2> Var57;
	
	if (func_283(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_281() || iParam2 == 27)
	{
		if (func_224(uParam1, iParam2, uParam3, Global_1574123, 0, func_279()))
		{
			func_223(1);
			if ((!func_221() && !func_219()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_218())
				{
					func_215();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_214(1);
						Global_1574123 = 0;
						iVar54 = -1;
						if (Global_1574308 != 1)
						{
							func_213(uParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
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
								if (func_879(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar35 = unk_0xF6A72924028F588B(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((func_212(iVar35) || Global_2422736[iVar35 /*420*/].f_251 != -1) || func_211(iVar35))
										{
											iVar44 = iVar35;
											if (func_119(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_210(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_207(unk_0x9EB17624F44A8DA4(), 0) && func_101(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_205())
							{
								if (func_879(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar35 = unk_0xF6A72924028F588B(iVar52);
								}
								else
								{
									iVar35 = func_63();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_204(iVar35) && func_200(iVar35, iParam2)) && func_879(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1595693[iVar44 /*680*/].f_211.f_6;
								Var38 = { func_195(iVar35) };
								if (iVar35 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_65(iVar35) };
								iVar37 = func_189(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xF85532D53BDB3017(iVar37);
								}
								Global_1574123++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_205())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_184(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_183(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_178(iVar35, 0);
								if (bVar34)
								{
									if (func_177(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_176(iParam5))
								{
									func_175(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_175(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xF6A72924028F588B(iVar52);
							if (func_879(iVar35, 0, 1) && !unk_0xC80D31E4B587871C(iVar49, iVar35))
							{
								iVar35 = unk_0xF6A72924028F588B(iVar52);
							}
							else
							{
								iVar35 = func_63();
							}
							if (func_204(iVar35))
							{
								if (func_879(unk_0xF6A72924028F588B(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1595693[iVar44 /*680*/].f_211.f_6;
									Var38 = { func_195(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_65(iVar35) };
									iVar37 = func_189(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xF85532D53BDB3017(iVar37);
									}
									Global_1574123++;
									iVar51 = func_178(iVar35, 1);
									if (bVar34)
									{
										if (func_177(iVar35, 1))
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
									func_155(iVar35, unk_0xDE2D3B9654C31EB3(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_152(uParam3, uParam1);
						}
						func_151(&(uParam3->f_21));
						func_150();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_149(uParam3, uParam1);
							func_148(uParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_149(uParam3, uParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_144(uParam3))
						{
							Global_1574308 = 1;
						}
						func_142(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*uParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_150();
			func_214(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_142(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_151(&(uParam0->f_21));
		func_143(0);
	}
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar15 != func_63() && func_879(iVar15, 0, 1))
	{
		Var2 = { func_65(iVar15) };
		iVar1 = func_147(uParam0, uParam0->f_37);
		if (func_146(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 0);
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

void func_145(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_147(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_148(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x008F3E3CC076EA0E(*uParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(iParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_149(var uParam0, var uParam1)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*uParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_150()
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_151(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_152(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_63())
		{
			if (func_879(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_154(uParam0->f_38[iVar0 /*2*/], 0);
					func_153(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_154(int iParam0, bool bParam1)
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

void func_155(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_174() && iParam4 < func_173())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*uParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_172("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_172(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_172("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_172("");
			if (uParam3->f_108 == 6)
			{
				func_172("");
			}
			else
			{
				func_172(&sParam5);
			}
			func_160(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_159(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_157(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_156(uParam3))
			{
				func_158("DPAD_CREW");
			}
			else
			{
				func_158("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_156(var uParam0)
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_157(var uParam0)
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_158(char* sParam0)
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_159(var uParam0)
{
	if (func_157(uParam0) && func_156(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1)
{
	if (func_171(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_165(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_161())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_161()
{
	if (unk_0x4916190900E76373())
	{
		if (func_163() || func_162())
		{
			return 1;
		}
	}
	return 0;
}

var func_162()
{
	return Global_2447174.f_14;
}

int func_163()
{
	if (unk_0x4916190900E76373())
	{
		return func_162();
	}
	return func_164(Global_4456448.f_122309);
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)
{
	if ((func_879(iParam0, 0, 1) && func_169()) && func_166(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)
{
	return func_167(iParam0, bParam1, 1);
}

int func_167(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_168(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_63() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 != func_63())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_63())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	if (func_128(unk_0x9EB17624F44A8DA4()) || func_170())
	{
		return 0;
	}
	return 1;
}

int func_170()
{
	switch (func_101(unk_0x9EB17624F44A8DA4()))
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

int func_171(int iParam0)
{
	if (func_161())
	{
		if (func_879(iParam0, 0, 1))
		{
			return func_119(iParam0);
		}
	}
	if ((func_879(iParam0, 0, 1) && func_169()) && func_168(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_172(char* sParam0)
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_173()
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_175(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_174() && iParam3 < func_173())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*uParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*uParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_172("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_158(sParam16);
				}
				else
				{
					func_172(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_172("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_205())
				{
					func_172("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_158(&(uParam2->f_104));
					}
					else
					{
						func_172("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_172("");
				}
				if (uParam2->f_108 == 6)
				{
					func_172("");
				}
				else
				{
					func_172(&sParam4);
				}
				func_160(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_172("");
					func_172("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_159(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_157(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_156(uParam2))
				{
					func_158("DPAD_CREW");
				}
				else
				{
					func_158("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_176(int iParam0)
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

bool func_177(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_119(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_63();
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_128(iParam0)) && !func_139(iParam0))
	{
		iVar0 = func_182();
	}
	iVar1 = func_181(iParam0);
	if (!iVar1 == -1)
	{
		return func_179(iVar1);
	}
	return iVar0;
}

int func_179(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_180(iParam0);
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

var func_180(int iParam0)
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_181(int iParam0)
{
	if (!iParam0 == func_63())
	{
		if (func_177(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

int func_182()
{
	return 21;
}

char* func_183(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x485A7F3B0AD1A79D())
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
			if (unk_0x485A7F3B0AD1A79D())
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

int func_184(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_188(iParam3))
	{
		*fParam1 = (func_185(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_176(iParam3))
	{
		*fParam1 = (func_185(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_185(int iParam0, int iParam1)
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
			if (unk_0x485A7F3B0AD1A79D())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_187(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_186(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_186(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_187(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = func_192(iParam0);
	if (iVar0 == -1)
	{
		func_190(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_190(int iParam0, bool bParam1)
{
	if (!func_879(iParam0, 0, 1))
	{
		return;
	}
	if (func_192(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_191(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (!func_879(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_193(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_193(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1369337)
	{
		Global_1369176[iVar32 /*5*/] = { Global_1369176[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_194(&(Global_1369176[iVar32 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_63();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_195(int iParam0)
{
	struct<4> Var0;
	
	if (func_879(iParam0, 0, 1))
	{
		Global_2492157 = { func_65(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_146(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return Var0;
		}
		if (func_199(&Global_2492157))
		{
			Global_2492087 = { func_197(iParam0) };
			func_196(&Global_2492087, &Var0);
		}
	}
	return Var0;
}

void func_196(var uParam0, var uParam1)
{
	unk_0x22889E844C3772CE(uParam0, 35, uParam1);
}

struct<35> func_197(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_198(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_65(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var13, 35, &Var0);
	return Var13;
}

int func_198(int iParam0)
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_199(var uParam0)
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_127(iParam0) || func_203(iParam0)) || func_202(iParam0))
		{
			return 0;
		}
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	if ((!func_212(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_211(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_201(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

bool func_202(int iParam0)
{
	if (func_127(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
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
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_205()
{
	switch (func_101(unk_0x9EB17624F44A8DA4()))
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
	switch (func_206(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_139(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_101(unk_0x9EB17624F44A8DA4()))
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

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_207(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_208(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_208(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
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
	return func_209(iParam0, 0);
	return 0;
}

int func_209(int iParam0, int iParam1)
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

void func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_879(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_212(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_211(iVar1))
				{
					if (func_74(iVar1, iParam1, 0))
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

bool func_211(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_212(int iParam0)
{
	if (func_879(iParam0, 0, 1))
	{
		if (func_879(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_101(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_213(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_214(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_215()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_217())
		{
			func_216();
		}
	}
}

void func_216()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_217()
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

int func_218()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_217())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_217())
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (func_217())
	{
		if (func_220(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)
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

int func_221()
{
	if (func_217())
	{
		if (func_222(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
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

void func_223(int iParam0)
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_224(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_278(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_277();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_276())
		{
			if (func_275() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar7);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_258())
		{
			func_257(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_257(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_275() == 1)
		{
			func_256(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_257(uParam0, uParam2, 0);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_275() == 0 && !bParam5))
		{
			func_257(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_255();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_255();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar7);
				if (func_256(bVar6, uParam0, 0))
				{
					func_213(uParam0);
					uVar4 = func_253(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_251(iParam1) };
					if (bParam4)
					{
						func_248(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_241(uParam0, func_245(uParam2), func_242(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_232(uParam0, func_234(uParam2), func_233(), -1);
					}
					else if (func_161())
					{
						uParam2->f_34 = Global_1574124;
						func_248(uParam0, uVar4, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574124;
						func_248(uParam0, uVar4, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar8 = func_225(iParam1);
						func_248(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_231())
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
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_230(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_229(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_228(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_226())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_226()
{
	if (unk_0x4916190900E76373())
	{
		return func_59();
	}
	return func_227(Global_4456448.f_122309);
}

int func_227(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_228(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_229(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_230(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_231()
{
	return Global_4456448.f_1 == 0;
}

void func_232(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_158(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_158("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_233()
{
	switch (func_101(unk_0x9EB17624F44A8DA4()))
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

char* func_234(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
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
	switch (func_101(unk_0x9EB17624F44A8DA4()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
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
			if (func_237())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_236(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_236(1))
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
			if (func_235(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_235(int iParam0)
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

bool func_236(bool bParam0)
{
	return func_166(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_237()
{
	return (func_240() && func_238(func_239()));
}

bool func_238(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_239()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_240()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_241(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(uParam2))
		{
			func_158(uParam1);
		}
		else if (func_206(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(uParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_158("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = func_206(unk_0x9EB17624F44A8DA4());
	if (func_244())
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
			switch (func_243())
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

int func_243()
{
	if (func_206(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

bool func_244()
{
	return Global_1595566;
}

char* func_245(var uParam0)
{
	int iVar0;
	
	iVar0 = func_206(unk_0x9EB17624F44A8DA4());
	if (func_244())
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
			if (func_247() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_247() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_243())
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
			if (func_246() == 1)
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

int func_246()
{
	return Global_2512808.f_4780;
}

int func_247()
{
	if (func_206(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_248(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_172(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(uParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_158(sParam1);
		}
		if (func_276() && iParam6)
		{
			if (func_250())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_158(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_249(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_59())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_249(int iParam0)
{
	if (func_230(iParam0) || func_229(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_250()
{
	return Global_1574125;
}

struct<4> func_251(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_252(unk_0x9EB17624F44A8DA4()) || func_228(unk_0x9EB17624F44A8DA4()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_161() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_252(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_253(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_161() || unk_0xAB019B170BF1309C(uParam1)))
	{
		uVar0 = func_254();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
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
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_254()
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_255()
{
	Global_36765 = 1;
}

bool func_256(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*uParam1);
}

void func_257(var uParam0, var uParam1, bool bParam2)
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_150();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_151(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0xA68F7B004463AB6F(uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_258()
{
	if (func_274())
	{
		return 0;
	}
	if (func_273())
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (!func_269())
	{
		return 0;
	}
	if (func_268(8, -1))
	{
		return 0;
	}
	if (func_275() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	else if (!func_264(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_263(1) || func_261(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_259(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_260())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_260()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_261(bool bParam0)
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_262(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_263(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_264(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_265(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_265(int iParam0)
{
	return func_266(iParam0);
}

bool func_266(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_267()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

int func_269()
{
	if (func_270() == 0)
	{
		return 1;
	}
	return 0;
}

int func_270()
{
	return Global_1312466.f_18;
}

int func_271()
{
	if (func_272())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_272()
{
	return Global_1312438;
}

bool func_273()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

bool func_274()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_275()
{
	return Global_1357530.f_68;
}

int func_276()
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_277()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_279()
{
	if (func_280(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_280(int iParam0)
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

int func_281()
{
	if (func_279())
	{
		return 1;
	}
	if (func_202(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_244())
	{
		return 1;
	}
	if (func_128(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_206(unk_0x9EB17624F44A8DA4()))
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
				if (!func_282(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_282(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_282(unk_0x9EB17624F44A8DA4()))
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

bool func_282(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_283(int iParam0)
{
	if ((iParam0 == 27 && func_128(unk_0x9EB17624F44A8DA4())) && !func_139(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_102(unk_0x9EB17624F44A8DA4(), 0) && func_139(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_130(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_284()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = unk_0x622FF3AE4B1D07C3();
	}
	else
	{
		iVar0 = func_285();
	}
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Local_970[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	if (unk_0x552F39AE86E07792(iVar1))
	{
		if (unk_0xDE597476C8B96D1A(iVar1))
		{
			iVar2 = unk_0x87678BB8392EFD41(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_286()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_287(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_287(int iParam0)
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<14> Var16;
	int iVar30;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 11))
	{
		iVar30 = 0;
		while (iVar30 < 4)
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_113, iVar30))
			{
				if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_6, iVar30))
				{
					if (unk_0x6ADD12BF4D6D2587(Var0.f_0))
					{
						if (unk_0x8A3FF8E81B40BB75(Var0.f_0))
						{
							if (!unk_0xC80D31E4B587871C(Local_98.f_109, iVar30))
							{
								if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_5, iVar30))
								{
									if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar30 /*26*/].f_2))
									{
										if (unk_0x6ADD12BF4D6D2587(unk_0xF32FBF2453AC1753(Local_98.f_2[iVar30 /*26*/].f_2)))
										{
											if (unk_0x79A6CD762DCCABE4(Var0.f_0) == unk_0xF32FBF2453AC1753(Local_98.f_2[iVar30 /*26*/].f_2))
											{
												if (unk_0x6ADD12BF4D6D2587(Var0.f_1))
												{
													if (unk_0x52C56492660097C7(Var0.f_1))
													{
														if (unk_0x07F64790D10D1DB5(Var0.f_1) == unk_0xFC1458A37D98B502())
														{
															if (func_783() == Local_98.f_118)
															{
																unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_5), iVar30);
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
						else if (unk_0x52C56492660097C7(Var0.f_0))
						{
							iVar12 = unk_0x07F64790D10D1DB5(Var0.f_0);
							if (iVar12 == unk_0x47BA76CE3C825A08(Local_98.f_2[iVar30 /*26*/].f_1))
							{
								if (unk_0x6ADD12BF4D6D2587(Var0.f_1))
								{
									if (unk_0x52C56492660097C7(Var0.f_1))
									{
										iVar11 = unk_0x07F64790D10D1DB5(Var0.f_1);
										if (unk_0x1417A5CC924DE120(iVar11))
										{
											iVar14 = unk_0xDF35170AEEFB473B(iVar11);
											if (unk_0xDE597476C8B96D1A(iVar14))
											{
												if (Var0.f_3)
												{
													if (iVar14 == unk_0x9EB17624F44A8DA4())
													{
														Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_11++;
														unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_6), iVar30);
														Var16.f_2 = -489240077;
														Var16.f_10 = unk_0x9EB17624F44A8DA4();
														func_293(Var16, func_294(0));
														func_288("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7, iVar30))
											{
												if (Var0.f_3)
												{
													iVar14 = unk_0xDF35170AEEFB473B(iVar11);
													unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7), iVar30);
												}
											}
										}
										else if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7, iVar30))
										{
											if (Var0.f_3)
											{
												unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7), iVar30);
											}
										}
									}
									else if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7, iVar30))
									{
										if (Var0.f_3)
										{
											unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7), iVar30);
										}
									}
								}
								else if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7, iVar30))
								{
									if (Var0.f_3)
									{
										unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_7), iVar30);
									}
								}
							}
						}
					}
				}
			}
			iVar30++;
		}
	}
	if (func_284())
	{
		if (!func_105(unk_0x9EB17624F44A8DA4(), 20))
		{
			if (unk_0x6ADD12BF4D6D2587(Var0.f_0))
			{
				if (unk_0x52C56492660097C7(Var0.f_0))
				{
					iVar12 = unk_0x07F64790D10D1DB5(Var0.f_0);
					if (unk_0x1417A5CC924DE120(iVar12))
					{
						iVar13 = unk_0xDF35170AEEFB473B(iVar12);
						if (unk_0x6ADD12BF4D6D2587(Var0.f_1))
						{
							if (unk_0x52C56492660097C7(Var0.f_1))
							{
								iVar11 = unk_0x07F64790D10D1DB5(Var0.f_1);
								if (unk_0x1417A5CC924DE120(iVar11))
								{
									iVar14 = unk_0xDF35170AEEFB473B(iVar11);
									if (iVar14 == unk_0x9EB17624F44A8DA4())
									{
										if (unk_0xDE597476C8B96D1A(iVar13))
										{
											if (func_177(iVar13, 1))
											{
												if (Local_98.f_118 > -1)
												{
													iVar15 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_118));
													if (func_74(iVar13, iVar15, 1))
													{
														if (!func_133())
														{
															func_129(0);
															func_122();
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

int func_288(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_289(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_289(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_292() || !unk_0x4916190900E76373()) || !func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_290(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_291(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_291(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_292()
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_293(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam14 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam14);
	}
}

int func_294(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_879(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_295()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (unk_0xC80D31E4B587871C(uLocal_1419, 14))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 14);
		}
		return;
	}
	iVar0 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	if (!unk_0xC80D31E4B587871C(iLocal_1419, 14))
	{
		if (Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1 != 0)
		{
			Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1 = 0;
		}
		unk_0x872F1C1F8587CCC7(&iLocal_1419, 14);
	}
	if (!unk_0xC80D31E4B587871C(iLocal_1419, 15))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_1419, 15);
		func_715();
	}
	if (unk_0x552F39AE86E07792(iVar0))
	{
		if (unk_0xDE597476C8B96D1A(iVar0))
		{
			uVar1 = unk_0x87678BB8392EFD41(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_970[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_674();
					func_656();
					func_641();
					break;
				
				case 2:
					func_296();
					break;
				
				case 3:
					func_796();
					break;
				}
			}
	}
}

void func_296()
{
	struct<10> Var0;
	int iVar17;
	int iVar18;
	char* sVar19;
	int iVar20;
	int iVar21;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar17 = unk_0x622FF3AE4B1D07C3();
	iVar18 = unk_0x9EB17624F44A8DA4();
	if (func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar17 = func_285();
		iVar18 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	}
	if (!unk_0xC80D31E4B587871C(Local_970[iVar17 /*14*/].f_1, 4))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_1419, 9))
		{
			if (unk_0xC80D31E4B587871C(Local_98.f_1, 1))
			{
				if (iVar17 == Local_98.f_118 || func_783() == Local_98.f_118)
				{
					if (func_130(iVar18) >= 2)
					{
						sVar19 = func_640(iVar18);
						iVar20 = func_639(iVar18);
						func_637(87, "GB_WINNER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
					}
					if (iVar18 == unk_0x9EB17624F44A8DA4())
					{
						if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
						{
							func_575(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
						}
						Var0.f_0 = func_574();
						Var0.f_1 = func_573();
						func_399(166, 1, &Var0, 0);
						unk_0x00012827489F2A9A(iVar18);
						iLocal_1713 = unk_0xB89B7DB2727D69D6();
						unk_0xC0EBC1452FCAB15C(0);
						unk_0x872F1C1F8587CCC7(&iLocal_1419, 17);
						func_7(&uLocal_1714, 0, 0);
					}
				}
				else if (func_284())
				{
					if (func_177(iVar18, 1))
					{
						if (func_130(iVar18) >= 2)
						{
							sVar19 = func_640(unk_0xF6A72924028F588B(Local_98.f_119));
							iVar20 = func_639(unk_0xF6A72924028F588B(Local_98.f_119));
							func_637(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (iVar18 == unk_0x9EB17624F44A8DA4())
						{
							if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
							{
								func_575(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
							}
							if (func_123(iVar18))
							{
								Var0.f_0 = func_398();
								Var0.f_1 = func_397();
							}
							func_399(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_130(iVar18) >= 2)
						{
							sVar19 = func_640(unk_0xF6A72924028F588B(Local_98.f_119));
							iVar20 = func_639(unk_0xF6A72924028F588B(Local_98.f_119));
							func_637(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (iVar18 == unk_0x9EB17624F44A8DA4())
						{
							if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
							{
								func_575(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
							}
							if (func_123(iVar18))
							{
								Var0.f_0 = func_398();
								Var0.f_1 = func_397();
							}
							func_399(166, 0, &Var0, 0);
						}
					}
				}
				unk_0x872F1C1F8587CCC7(&iLocal_1419, 9);
			}
			else if (unk_0xC80D31E4B587871C(Local_98.f_1, 3))
			{
				iVar21 = (4 - Local_98.f_115);
				if (iVar17 == Local_98.f_118 || func_783() == Local_98.f_118)
				{
					if (func_130(iVar18) >= 2)
					{
						sVar19 = func_391();
						iVar20 = func_639(iVar18);
						func_637(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
					}
					if (iVar18 == unk_0x9EB17624F44A8DA4())
					{
						if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
						{
							func_575(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
						}
						Var0.f_0 = func_574();
						Var0.f_1 = func_573();
						func_399(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_130(iVar18) >= 2)
					{
						sVar19 = func_640(unk_0xF6A72924028F588B(Local_98.f_119));
						iVar20 = func_639(unk_0xF6A72924028F588B(Local_98.f_119));
						if (iVar21 == 1)
						{
							func_637(87, "GB_WINNER", "BIGM_HUN1S", sVar19, iVar20, 0, iVar21, -1, -1, 2, -1);
						}
						else if (iVar21 > 1)
						{
							func_637(87, "GB_WINNER", "BIGM_HUNRS", sVar19, iVar20, 0, iVar21, -1, -1, 2, -1);
						}
					}
					if (iVar18 == unk_0x9EB17624F44A8DA4())
					{
						if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
						{
							func_575(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
						}
						if (func_123(iVar18))
						{
							Var0.f_0 = func_398();
							Var0.f_1 = func_397();
						}
						func_399(166, 1, &Var0, 0);
						unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
					}
				}
				unk_0x872F1C1F8587CCC7(&iLocal_1419, 9);
			}
			else if (unk_0xC80D31E4B587871C(Local_98.f_1, 5))
			{
				if (func_359())
				{
					if (func_782())
					{
						if (func_130(iVar18) >= 2)
						{
						}
					}
					else if (func_130(iVar18) >= 2)
					{
						func_328(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar18 == unk_0x9EB17624F44A8DA4())
				{
					if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
					{
						func_575(0, 8, 0, 0, -1, -1, -1, -1, -1);
						unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
					}
					func_399(166, 0, &Var0, 0);
				}
				unk_0x872F1C1F8587CCC7(&iLocal_1419, 9);
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_1419, 9))
		{
			func_715();
			if (!unk_0xC80D31E4B587871C(uLocal_1420, 8))
			{
				func_315();
				func_73();
				unk_0x872F1C1F8587CCC7(&iLocal_1420, 8);
			}
			if (!unk_0xC80D31E4B587871C(iLocal_1419, 10))
			{
			}
			if (func_297(&uLocal_1427, 0, 0))
			{
				if (iVar17 == unk_0x622FF3AE4B1D07C3())
				{
					unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xC80D31E4B587871C(iLocal_1419, 17))
			{
				if (func_6(&uLocal_1714, 10000, 0))
				{
					unk_0xC0EBC1452FCAB15C(iLocal_1713);
					unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 17);
				}
			}
		}
	}
}

int func_297(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_106(29);
	if ((*uParam0 > 0 && !func_217()) && func_130(unk_0x9EB17624F44A8DA4()) != 0)
	{
		if (!func_312())
		{
			func_311();
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
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 2);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_310(uParam0, 1);
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
				func_304(iParam2);
				func_310(uParam0, 2);
			}
			break;
		
		case 2:
			func_304(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_298(func_299(0)))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_310(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
				func_310(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_298(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

char* func_299(int iParam0)
{
	if (((func_302(unk_0x9EB17624F44A8DA4()) || func_301(unk_0x9EB17624F44A8DA4())) || func_237()) || iParam0)
	{
		if (func_301(unk_0x9EB17624F44A8DA4()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_208(func_300()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_300()
{
	return Global_1644563;
}

bool func_301(int iParam0)
{
	return func_209(func_101(iParam0), 0);
}

bool func_302(int iParam0)
{
	return func_303(func_101(iParam0));
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148 && func_168(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35, 1))
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

void func_304(int iParam0)
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if ((((((((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_879(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173()) && !func_105(unk_0x9EB17624F44A8DA4(), 22)) && func_130(unk_0x9EB17624F44A8DA4()) != 0) && !func_308(func_309())) && !func_302(unk_0x9EB17624F44A8DA4())) && !func_307(func_101(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_306(func_299(iParam0), -1);
			func_305(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_305(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_236(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_217())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_306(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam1);
}

int func_307(int iParam0)
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

int func_308(int iParam0)
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

int func_309()
{
	var uVar0;
	
	uVar0 = unk_0x436287B7DB306165();
	if (unk_0x74C475EB8E73D398(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x74C475EB8E73D398(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_311()
{
	Global_2458365 = 1;
}

int func_312()
{
	if (((((((func_101(unk_0x9EB17624F44A8DA4()) == 170 || func_101(unk_0x9EB17624F44A8DA4()) == 219) || func_101(unk_0x9EB17624F44A8DA4()) == 221) || func_101(unk_0x9EB17624F44A8DA4()) == 220) || func_101(unk_0x9EB17624F44A8DA4()) == 216) || func_101(unk_0x9EB17624F44A8DA4()) == 215) || func_101(unk_0x9EB17624F44A8DA4()) == 214) || func_101(unk_0x9EB17624F44A8DA4()) == 218)
	{
		return 1;
	}
	if (func_313(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
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
	}
	return -1;
}

void func_315()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_1434[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_1434[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xC80D31E4B587871C(iLocal_1419, 18))
	{
		func_327(1);
		unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 18);
	}
	func_324();
	func_316();
}

void func_316()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(iLocal_1419, 7))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_1419, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (unk_0x552F39AE86E07792(iVar1))
			{
				if (iVar1 != unk_0x9EB17624F44A8DA4())
				{
					if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_8, iVar0))
					{
						func_322(iVar1, 432, 0);
						func_317(iVar1, func_321(iLocal_1711), 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_317(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_319())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_318(iParam0))
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = unk_0xBBA15366508D1BDE();
			Global_2415606.f_446[iVar0] = uParam1;
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_318(int iParam0)
{
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == unk_0xBBA15366508D1BDE())
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	switch (func_320())
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

int func_320()
{
	return Global_25233;
}

int func_321(int iParam0)
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
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_322(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_319())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_578[iParam0]) || Global_2415606.f_578[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			if (!unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_323();
			}
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_413[iVar0] = uVar1;
			Global_2415606.f_578[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_323();
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_578[iParam0] = -1;
		}
	}
}

void func_323()
{
	Global_2415606.f_1009 = 1;
}

void func_324()
{
	if (unk_0xC80D31E4B587871C(iLocal_1419, 16))
	{
		func_84();
		func_325();
		unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 16);
	}
}

void func_325()
{
	if (Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
	{
		func_326();
	}
}

void func_326()
{
	struct<28> Var0;
	
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413426 = { Var0 };
	Global_2413426.f_6 = -1;
}

void func_327(bool bParam0)
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_132())
		{
			if (func_879(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, 0);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, 0);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_879(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, 1);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

int func_328(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_358(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_329(&Var0);
}

int func_329(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_339(uParam0, uParam0->f_16);
	func_338(uParam0);
	if (func_59())
	{
		func_338(uParam0);
	}
	if (func_337(uParam0->f_1))
	{
		func_330();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_330();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_220(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_330()
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_331();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_331()
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_335(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_332(&(Global_2436181.f_2912.f_1));
}

void func_332(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(0);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_334(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_333(0);
}

void func_333(int iParam0)
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_334(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_335(var uParam0)
{
	func_336(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_336(var uParam0)
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

int func_337(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_338(var uParam0)
{
	if (func_222(uParam0->f_1))
	{
		uParam0->f_71 = func_182();
	}
}

void func_339(var uParam0, int iParam1)
{
	if (func_222(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_63() || !func_879(iParam1, 0, 1))
	{
		return;
	}
	if (func_220(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_340(iParam1, -2, 0, 0);
		}
	}
}

int func_340(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_259(iParam0))
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
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_259(unk_0x9EB17624F44A8DA4()) || (func_357() && func_356())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		uVar1 = func_355();
		if (unk_0x6ADD12BF4D6D2587(uVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_879(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_353(iParam1, iParam0, 0);
							}
							else
							{
								return func_348(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_348(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_353(iParam1, iParam0, 0);
				}
				else
				{
					return func_341(0, -1, 0);
				}
			}
			else
			{
				return func_341(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_353(iParam1, iParam0, 0);
		}
		else
		{
			return func_348(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_348(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_341(bool bParam0, int iParam1, bool bParam2)
{
	return func_342(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_342(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_347(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_346(1);
				}
				else
				{
					return func_346(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_343(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_343(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_346(1);
	}
	return func_346(0);
}

int func_343(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_345(iParam0, iParam1, iParam3);
	if (func_344(Global_4456448.f_122309))
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
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
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

int func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_347(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_346(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_347(int iParam0, int iParam1, int iParam2)
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
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_351(1))
			{
				iVar3 = func_181(iParam0);
				if (!iVar3 == -1)
				{
					return func_179(iVar3);
				}
			}
			if ((func_350(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_347(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_346(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_349(1);
			}
			else
			{
				return func_342(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_346(1);
			}
			else
			{
				return func_342(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_181(iParam0);
	if (!iVar4 == -1)
	{
		return func_179(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_349(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_350(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_351(int iParam0)
{
	if ((func_162() || func_352()) || (func_59() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_352()
{
	return Global_2447174.f_15;
}

int func_353(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_351(1))
	{
		iVar2 = func_181(iParam1);
		if (!iVar2 == -1)
		{
			return func_179(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_63())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_342(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_354(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_354(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
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

var func_355()
{
	return Global_2359302.f_2;
}

bool func_356()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_357()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

void func_358(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_63();
	uParam1->f_17 = func_63();
	uParam1->f_18 = func_63();
	uParam1->f_19 = func_63();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_359()
{
	int iVar0;
	
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (!func_360(1, 1, 1))
		{
			if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1, 6))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_133())
		{
			if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1, 6))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1, 6))
		{
			unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_285();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xC80D31E4B587871C(Local_970[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_360(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_390(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_117(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xB01117EF93F91860())
		{
			return 0;
		}
	}
	if (!func_201(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x78E929955680CA05())
		{
			return 0;
		}
	}
	if (func_389(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_388())
	{
		return 0;
	}
	if (func_273())
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_265(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_269())
	{
		return 0;
	}
	if (func_117(unk_0x9EB17624F44A8DA4(), 0) || func_117(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_117(unk_0x9EB17624F44A8DA4(), 12) || func_117(unk_0x9EB17624F44A8DA4(), 14)) || func_117(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_385(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_366())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_365())
		{
			return 0;
		}
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_364(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_363())
	{
		return 0;
	}
	if (func_362(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_361(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_361(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_363()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)
{
	if (!func_879(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

bool func_365()
{
	return Global_92885.f_316 > 0;
}

int func_366()
{
	int iVar0;
	
	iVar0 = func_101(unk_0x9EB17624F44A8DA4());
	if (((func_384(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || func_383(unk_0x9EB17624F44A8DA4())) || func_382(unk_0x9EB17624F44A8DA4())) || func_377(unk_0x9EB17624F44A8DA4()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_375(unk_0x9EB17624F44A8DA4()))
	{
		if (func_374(iVar0) || func_373(iVar0))
		{
			return 1;
		}
	}
	if (func_313(unk_0x9EB17624F44A8DA4()))
	{
		if (func_373(iVar0))
		{
			return 1;
		}
	}
	if (func_372(unk_0x9EB17624F44A8DA4()))
	{
		if (func_371(iVar0))
		{
			return 1;
		}
	}
	if (func_370(unk_0x9EB17624F44A8DA4()))
	{
		if (func_369(iVar0))
		{
			return 1;
		}
	}
	if (func_368(unk_0x9EB17624F44A8DA4()))
	{
		if (func_367(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
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

int func_372(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
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

int func_374(int iParam0)
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

int func_375(int iParam0)
{
	if (func_376(Global_1595693[iParam0 /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, int iParam1)
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

int func_377(int iParam0)
{
	if (func_378(Global_1595693[iParam0 /*680*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_379(unk_0x9EB17624F44A8DA4(), 0);
	}
	if (bParam1)
	{
		if (func_379(unk_0x9EB17624F44A8DA4(), 0))
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

bool func_379(int iParam0, bool bParam1)
{
	if (Global_1595537 != func_63())
	{
		if (!func_381(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_380(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

int func_380(int iParam0)
{
	if (iParam0 != func_63())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_63())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 2);
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_384(int iParam0)
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

int func_385(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
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
		if (func_383(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_313(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_372(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_879(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_63())
			{
				return func_314(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_387()
{
	return Global_1312854;
}

bool func_388()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_389(int iParam0)
{
	if (func_264(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_390(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

char* func_391()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_64(unk_0x9EB17624F44A8DA4());
	if (iVar0 != func_63())
	{
		if (iVar0 != unk_0x9EB17624F44A8DA4())
		{
			if (((func_105(iVar0, 28) || func_105(unk_0x9EB17624F44A8DA4(), 28)) || func_396(iVar0)) && !func_395(iVar0))
			{
				return func_393(iVar0, 0);
			}
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_393(iVar0, 0);
			}
		}
		uVar1 = func_392(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(uVar1))
		{
			return func_393(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_392(var uParam0)
{
	return uParam0;
}

var func_393(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_166(iParam0, 1))
		{
			return func_394();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

var func_394()
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

int func_395(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_63())
	{
		Var0 = { func_65(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_397()
{
	return ((4 - Local_98.f_115) * Global_262145.f_14844);
}

int func_398()
{
	return ((4 - Local_98.f_115) * Global_262145.f_14843);
}

void func_399(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	func_571(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17603);
		}
		else
		{
			iVar1 = (iVar1 + func_570(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_569(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17602);
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
	if (func_567(iParam0))
	{
		if (bParam1)
		{
			if (func_566(unk_0x9EB17624F44A8DA4()) > 0)
			{
				func_565();
			}
			else
			{
				func_564();
			}
		}
		else
		{
			func_563();
		}
	}
	func_547(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_545(iParam0, uParam2, &iVar0, &iVar5);
	func_523(iParam0, uParam2, &iVar0, &iVar5);
	func_497(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512808.f_4856.f_200 = uVar4;
	}
	else
	{
		Global_2512808.f_4856.f_200 = iVar5;
	}
	iVar8 = func_239();
	if (iVar8 != func_63() && iParam0 != 148)
	{
		if (func_177(unk_0x9EB17624F44A8DA4(), 0))
		{
			if (!func_74(unk_0x9EB17624F44A8DA4(), iVar8, 1))
			{
				func_485(&iVar0, 1);
			}
		}
	}
	func_481(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1667867.f_10 = iVar1;
		func_480();
		func_437(0, unk_0xFC1458A37D98B502(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1667867.f_9 = iVar0;
		iVar13 = func_436();
		if (iVar13 != func_63())
		{
			func_435(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_434(1);
		if (iParam0 == 168)
		{
			if (!func_433())
			{
				unk_0x855E2247C6A664E1(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_432())
			{
				if (!func_433())
				{
					Var15 = { func_431() };
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_430(Var15.f_0)), func_429(Var15.f_0), iVar5);
				}
			}
			else if (func_433())
			{
				func_420(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_419())
			{
				if (!func_433())
				{
					unk_0x546B939A37611593(iVar0, unk_0x8B948C59217A295D(func_430(func_418(unk_0x9EB17624F44A8DA4()))), 5, iVar5);
				}
			}
			else if (func_433())
			{
				func_420(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4261865[iVar18 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar18 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar18 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x855E2247C6A664E1(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_419())
			{
				if (!func_433())
				{
					iVar19 = func_414(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x59B71C42AA64D71F(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_433())
			{
				func_420(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xDE91362FF833B59D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_433())
			{
				func_420(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xA87AFD802B734F62(iVar0);
			}
		}
		else if (func_433())
		{
			func_420(-856006867, iVar0, &iVar23, 0, 1, 0);
			Global_4261865[iVar23 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar23 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar23 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0x56D43E9CA23B5F41(uVar11, uVar12, iVar0, bVar14);
		}
		func_413(iParam0, iVar0);
		if (func_412(iParam0))
		{
			if (func_411(iParam0) > -1)
			{
				func_410(func_411(iParam0), iVar0);
			}
		}
		Global_2459022 = iVar0;
		func_409(&Global_2457290, 0, 0);
	}
	if (func_120(unk_0x9EB17624F44A8DA4()) || func_139(unk_0x9EB17624F44A8DA4()))
	{
		func_400(iParam0);
	}
	if (func_303(iParam0))
	{
		Global_1667885.f_13 = iVar0;
		Global_1667885.f_14 = iVar1;
	}
	if (func_307(iParam0))
	{
		Global_1667938.f_13 = iVar0;
		Global_1667938.f_14 = iVar1;
	}
	if (func_371(iParam0))
	{
		Global_1668000.f_12 = iVar0;
		Global_1668000.f_13 = iVar1;
	}
	if (func_369(iParam0))
	{
		Global_1668043.f_12 = iVar0;
		Global_1668043.f_13 = iVar1;
	}
	if (func_367(iParam0))
	{
		Global_1668096.f_12 = iVar0;
		Global_1668096.f_13 = iVar1;
	}
}

void func_400(int iParam0)
{
	if (func_408(unk_0x9EB17624F44A8DA4()) && func_432())
	{
		if (func_374(iParam0))
		{
			func_403(7182, -1);
		}
		else if (func_402(iParam0))
		{
			func_403(7184, -1);
		}
		else if (func_209(iParam0, 1))
		{
			func_403(7185, -1);
		}
		else if (func_401(iParam0))
		{
			func_403(7186, -1);
		}
	}
}

int func_401(int iParam0)
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

int func_402(int iParam0)
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

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_407(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_406(iParam0))
	{
		func_405(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_404(iParam0, iVar0, iParam1, 1);
	}
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_138(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_138(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_138(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_138(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_138(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_138(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_138(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_138(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_138(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_138(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_138(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_138(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_138(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_138(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_138(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_138(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_138(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_138(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_138(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_138(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_138(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_138(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_138(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_138(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_138(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_405(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_406(int iParam0)
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_408(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_101, 14);
}

void func_409(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

void func_410(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

int func_411(int iParam0)
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

int func_412(int iParam0)
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

void func_413(int iParam0, int iParam1)
{
	if (func_408(unk_0x9EB17624F44A8DA4()) && func_432())
	{
		if (func_374(iParam0) && iParam1 > 0)
		{
			func_405(7183, (func_407(7183, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_414(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_417(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_415(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_415(int iParam0, int iParam1)
{
	return (func_416(iParam0) * iParam1);
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21602;
		
		case 0:
			return Global_262145.f_21603;
		
		case 1:
			return Global_262145.f_21604;
		
		case 2:
			return Global_262145.f_21605;
		
		case 3:
			return Global_262145.f_21606;
		
		case 4:
			return Global_262145.f_21607;
		
		case 5:
			return Global_262145.f_21608;
		
		case 6:
			return Global_262145.f_21609;
		
		case 7:
			return Global_262145.f_21610;
		
		default:
	}
	return 0;
}

float func_417(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21612);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21614;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21611);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21614;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21611);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21615;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21616;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21613);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21616;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21613);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21616;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21613);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_418(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

bool func_419()
{
	return func_119(unk_0x9EB17624F44A8DA4());
}

void func_420(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_433())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_421(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_421(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_421(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_433())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_19()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_428(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_427(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_422(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_422(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_423(iParam0);
	}
}

void func_423(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_433())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_426(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_424(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_424(var uParam0)
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
	func_425(&(uParam0->f_8.f_3));
	func_425(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_425(var uParam0)
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

int func_426(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_427(int iParam0, var uParam1)
{
	Global_2459156 = uParam1;
	Global_2459155 = iParam0;
}

int func_428(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_433())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_429(int iParam0)
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

char* func_430(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_431()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_188;
}

bool func_432()
{
	return func_238(unk_0x9EB17624F44A8DA4());
}

int func_433()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

bool func_434(bool bParam0)
{
	return func_177(unk_0x9EB17624F44A8DA4(), bParam0);
}

void func_435(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1627537[iParam0 /*532*/].f_11.f_8[0];
	*uParam2 = Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_436()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

int func_437(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_438(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_438(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_448(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				uVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_444(unk_0xD0E00576168D19BB(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_439(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_439(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_442(iParam0, 1) };
	if (iParam0 == func_441(unk_0xFC1458A37D98B502()))
	{
		func_440(1);
	}
	func_444(Var0, iParam1, 0, sParam2, iParam3);
}

void func_440(int iParam0)
{
	Global_2436181.f_1774 = iParam0;
}

int func_441(var uParam0)
{
	return uParam0;
}

Vector3 func_442(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x4AA5DF29899B96D6())
	{
		Var3 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_443(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		Var0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar6 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x9EA50C5EC175E58E(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_443(var uParam0)
{
	return uParam0;
}

void func_444(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { Param0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_447(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam3;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam4;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_446();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_445();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam6);
		}
	}
}

int func_445()
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_446()
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_447(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), Param0, 1);
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

var func_448(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_449(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_449(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_479(unk_0x9EB17624F44A8DA4()) || func_478(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_226() || func_477(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_476(uParam2))
	{
	}
	if (func_475())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_473(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_472(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_470(0, &iVar1);
					break;
				
				case 3:
					func_470(1, &iVar1);
					break;
				
				case 1:
					func_468(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
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
			func_467(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_459((func_466(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_467(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_454(iVar1);
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
				func_450((func_452(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_450((func_452(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_450(int iParam0)
{
	if (func_475())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_451(joaat("mpply_globalxp"), iParam0);
	}
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, uParam1, 1);
	}
}

int func_452(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_879(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_453(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_453(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_454(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_65(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar13 = func_457(func_458(&Var0));
			if (iVar13 == 0)
			{
				func_456(&Global_1368098, iParam0);
				func_455(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar13 == 1)
			{
				func_456(&Global_1368099, iParam0);
				func_455(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar13 == 2)
			{
				func_456(&Global_1368100, iParam0);
				func_455(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar13 == 3)
			{
				func_456(&Global_1368101, iParam0);
				func_455(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar13 == 4)
			{
				func_456(&Global_1368102, iParam0);
				func_455(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_456(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_457(int iParam0)
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_458(var uParam0)
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_459(int iParam0, int iParam1, int iParam2)
{
	if (func_475())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_138(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_138(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_465(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_463(iParam0, 1);
		}
		func_404(636, iParam0, -1, 1);
		func_405(637, func_463(iParam0, 1), -1, 1, 0);
		Global_1368213[func_138(-1)] = iParam0;
		func_460(7, 0);
	}
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_462(iParam0, iParam1))
	{
		iVar0 = func_461();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_461()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_462(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_463(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_464(iParam0, 0);
}

int func_464(int iParam0, int iParam1)
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
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
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

int func_465(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

int func_466(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_138(-1)];
			}
			else if (func_465(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_138(-1)];
	}
	return 0;
}

void func_467(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_407(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_406(iParam0))
	{
		func_405(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_404(iParam0, iVar0, iParam2, 1);
	}
}

void func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_347(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_66(unk_0x9EB17624F44A8DA4(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_469(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_469(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_469(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_470(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_879(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_66(unk_0x9EB17624F44A8DA4(), iVar4))
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
			if (func_879(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_471(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_66(unk_0x9EB17624F44A8DA4(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_469(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_469(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_471(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_472(int iParam0)
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_469(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_473(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_466(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_466(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_474(8000, 0, 0) > 0)
	{
		if (func_474(8000, 0, 0) < (iParam0 + func_466(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_474(8000, 0, 0) - func_466(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_474(int iParam0, bool bParam1, int iParam2)
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
	return Global_285062[iParam0];
}

int func_475()
{
	return 1;
}

int func_476(var uParam0)
{
	if (unk_0x8C1C362CA8299475(uParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(uParam0, "") || unk_0x74C475EB8E73D398(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	return func_367(func_101(iParam0));
}

bool func_478(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_479(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_480()
{
	Global_2458364 = 1;
}

void func_481(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_79(7))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	iVar1 = func_483(iParam0);
	iVar2 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(Global_2512808.f_4856.f_87, unk_0xD1952A425B78FFC0()));
	if (func_482(iParam0) != -1)
	{
		if (iVar2 > func_482(iParam0))
		{
			iVar2 = func_482(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11735)
	{
		iVar2 = Global_262145.f_11735;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_482(int iParam0)
{
	if (func_209(iParam0, 0) || func_402(iParam0))
	{
		return Global_262145.f_17808;
	}
	if (func_374(iParam0))
	{
		return Global_262145.f_17807;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17804;
		
		case 191:
			return Global_262145.f_17806;
		
		case 190:
			return Global_262145.f_17805;
		
		case 227:
			return Global_262145.f_20340;
		
		case 226:
			return Global_262145.f_20328;
		
		case 225:
			return Global_262145.f_20348;
		
		case 230:
			return Global_262145.f_21599;
		
		case 229:
			return Global_262145.f_21503;
		
		case 233:
			return Global_262145.f_22060;
		
		default:
	}
	return -1;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11826;
		
		case 152:
			return Global_262145.f_11861;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11849;
		
		case 157:
			return Global_262145.f_11816;
		
		case 159:
			return Global_262145.f_11799;
		
		case 164:
			return Global_262145.f_11839;
		
		case 160:
			return Global_262145.f_11889;
		
		case 162:
			return Global_262145.f_11909;
		
		case 163:
			return Global_262145.f_11874;
		
		case 154:
			return Global_262145.f_11944;
		
		case 155:
			return Global_262145.f_11934;
		
		case 153:
			return Global_262145.f_11898;
		
		case 170:
			return Global_262145.f_14321;
		
		case 171:
			return Global_262145.f_14380;
		
		case 172:
			return Global_262145.f_14398;
		
		case 173:
			return Global_262145.f_14339;
		
		case 166:
			return Global_262145.f_14354;
		
		case 167:
			return Global_262145.f_14445;
		
		case 169:
			return Global_262145.f_14417;
		
		case 168:
			return Global_262145.f_14410;
		
		case 179:
			return Global_262145.f_17687;
		
		case 180:
			return Global_262145.f_17466;
		
		case 182:
			return Global_262145.f_17466;
		
		case 183:
			return Global_262145.f_17466;
		
		case 185:
			return Global_262145.f_17466;
		
		case 186:
			return Global_262145.f_17466;
		
		case 189:
			return Global_262145.f_17687;
		
		case 190:
			return Global_262145.f_17342;
		
		case 191:
			return Global_262145.f_17433;
		
		case 192:
			return Global_262145.f_17227;
		
		case 193:
			return Global_262145.f_17687;
		
		case 194:
			return Global_262145.f_17687;
		
		case 195:
			return Global_262145.f_17466;
		
		case 197:
			return Global_262145.f_17466;
		
		case 198:
			return Global_262145.f_17466;
		
		case 199:
			return Global_262145.f_17687;
		
		case 200:
			return Global_262145.f_17687;
		
		case 201:
			return Global_262145.f_17687;
		
		case 205:
			return Global_262145.f_17687;
		
		case 207:
			return Global_262145.f_17466;
		
		case 208:
			return Global_262145.f_17466;
		
		case 209:
			return Global_262145.f_17466;
		
		case 210:
			return Global_262145.f_17687;
		
		case 211:
			return Global_262145.f_17687;
		
		case 214:
			return Global_262145.f_18513;
		
		case 215:
			return Global_262145.f_18515;
		
		case 216:
			return Global_262145.f_18517;
		
		case 217:
			return Global_262145.f_18519;
		
		case 218:
			return Global_262145.f_18521;
		
		case 219:
			return Global_262145.f_18523;
		
		case 220:
			return Global_262145.f_18525;
		
		case 221:
			return Global_262145.f_18527;
		
		case 225:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_20350;
			}
			break;
		
		case 226:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_20330;
			}
			break;
		
		case 227:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_20342;
			}
			break;
		
		case 229:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_21505;
			}
			break;
		
		case 230:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_21601;
			}
			break;
		
		case 233:
			if (func_434(0) || func_236(0))
			{
				return Global_262145.f_22059;
			}
			break;
	}
	return 0;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11825;
		
		case 152:
			return Global_262145.f_11860;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11848;
		
		case 157:
			return Global_262145.f_11815;
		
		case 159:
			return Global_262145.f_11798;
		
		case 164:
			return Global_262145.f_11838;
		
		case 160:
			return Global_262145.f_11888;
		
		case 162:
			return Global_262145.f_11908;
		
		case 163:
			return Global_262145.f_11873;
		
		case 154:
			return Global_262145.f_11943;
		
		case 155:
			return Global_262145.f_11933;
		
		case 153:
			return Global_262145.f_11897;
		
		case 170:
			return Global_262145.f_14320;
		
		case 171:
			return Global_262145.f_14379;
		
		case 172:
			return Global_262145.f_14397;
		
		case 173:
			return Global_262145.f_14338;
		
		case 166:
			return Global_262145.f_14353;
		
		case 179:
			return Global_262145.f_17686;
		
		case 180:
			return Global_262145.f_17465;
		
		case 182:
			return Global_262145.f_17465;
		
		case 183:
			return Global_262145.f_17465;
		
		case 185:
			return Global_262145.f_17465;
		
		case 186:
			return Global_262145.f_17465;
		
		case 189:
			return Global_262145.f_17686;
		
		case 193:
			return Global_262145.f_17686;
		
		case 194:
			return Global_262145.f_17686;
		
		case 195:
			return Global_262145.f_17465;
		
		case 197:
			return Global_262145.f_17465;
		
		case 198:
			return Global_262145.f_17465;
		
		case 199:
			return Global_262145.f_17686;
		
		case 200:
			return Global_262145.f_17686;
		
		case 201:
			return Global_262145.f_17686;
		
		case 205:
			return Global_262145.f_17686;
		
		case 207:
			return Global_262145.f_17465;
		
		case 208:
			return Global_262145.f_17465;
		
		case 209:
			return Global_262145.f_17465;
		
		case 210:
			return Global_262145.f_17686;
		
		case 211:
			return Global_262145.f_17686;
		
		case 190:
			if (!func_419())
			{
				return Global_262145.f_17341;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_419())
			{
				return Global_262145.f_17432;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_419())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18512;
		
		case 215:
			return Global_262145.f_18514;
		
		case 216:
			return Global_262145.f_18516;
		
		case 217:
			return Global_262145.f_18518;
		
		case 218:
			return Global_262145.f_18520;
		
		case 219:
			return Global_262145.f_18522;
		
		case 220:
			return Global_262145.f_18524;
		
		case 221:
			return Global_262145.f_18526;
		
		case 225:
			if (func_236(0))
			{
				return Global_262145.f_20349;
			}
			break;
		
		case 226:
			if (func_236(0))
			{
				return Global_262145.f_20329;
			}
			break;
		
		case 227:
			if (func_236(0))
			{
				return Global_262145.f_20341;
			}
			break;
		
		case 229:
			if (func_236(0))
			{
				return Global_262145.f_21504;
			}
			break;
		
		case 230:
			if (func_236(0))
			{
				return Global_262145.f_21600;
			}
			break;
		
		case 233:
			if (func_236(0))
			{
				return Global_262145.f_22061;
			}
			break;
	}
	return 0;
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_419())
		{
			if (func_434(0))
			{
				if (!func_236(0))
				{
					if (unk_0x552F39AE86E07792(func_436()))
					{
						if (func_496() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_496());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_494(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_491("GB_BCUT_TICK1", func_436(), iVar0, 0, 0, 1, 1);
						}
						func_490(20);
						func_486(func_436(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_879(iParam0, 0, 1))
	{
		Var0.f_0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_489(iParam0);
		func_488(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_487(iParam0));
	}
}

var func_487(int iParam0)
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_488(var uParam0, var uParam1)
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_489(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_491(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_340(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_492(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_289(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_492(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_493(&cVar0);
}

var func_493(char[4] cParam0)
{
	return cParam0;
}

void func_494(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_495(1);
	}
	else
	{
		iVar1 = func_495(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_495(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_496()
{
	return Global_262145.f_11729;
}

void func_497(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_236(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_419())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_436();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_521(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_512(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
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
			iVar2 = func_415(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_414(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_511(*iParam2) > 0)
			{
				if (iVar15 == unk_0x9EB17624F44A8DA4())
				{
					func_510("SMTICK_RONCUT", func_511(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_511(*iParam2));
			}
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_508(iVar2, iVar9);
				iVar6 = func_507(&uVar5);
				iVar7 = Global_262145.f_21618;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21617));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_490(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_506(iVar20))
								{
									func_498(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21551;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21552;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_490(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_500(iParam0);
	func_499(iParam0, uVar0, iParam1, iParam2);
}

void func_499(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 698358792;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_489(iParam0);
	func_488(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_63())
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_487(iParam0));
		}
	}
}

int func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_505();
	iVar0 = func_503(iParam0, iVar0);
	iVar1 = Global_1627537[func_436() /*532*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14281));
	if (iVar0 < func_502())
	{
		iVar0 = func_502();
	}
	if (iVar0 > func_501())
	{
		iVar0 = func_501();
	}
	return iVar0;
}

int func_501()
{
	return Global_262145.f_14282;
}

int func_502()
{
	return Global_262145.f_15457;
}

int func_503(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_566(iParam0) * func_504());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_504()
{
	return Global_262145.f_15456;
}

var func_505()
{
	return Global_262145.f_11721;
}

int func_506(int iParam0)
{
	if (unk_0x552F39AE86E07792(iParam0))
	{
		if (iParam0 != unk_0x9EB17624F44A8DA4())
		{
			if (func_74(iParam0, unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!func_105(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_507(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(iVar0)))
		{
			iVar2 = unk_0xF6A72924028F588B(iVar0);
			if (!func_17(iVar2, 0) && !func_74(iVar2, unk_0x9EB17624F44A8DA4(), 1))
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

void func_508(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_509(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_509(iParam1, 6100);
	}
}

void func_509(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_407(iParam1, -1, 0);
	func_405(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_510(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_289(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_511(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21585);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21586))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21586);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_519())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_521(unk_0x9EB17624F44A8DA4());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_514(func_515(func_518(iVar0), -1, -1));
		if (func_513(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_515(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_517(iParam0, iParam1);
	uVar2 = func_516(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_516(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_519()
{
	return func_520() != 0;
}

int func_520()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_241;
}

int func_521(int iParam0)
{
	if (iParam0 != func_63() && func_522(iParam0))
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_522(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_523(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_236(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_419())
		{
			iVar15 = unk_0x9EB17624F44A8DA4();
		}
		else
		{
			iVar15 = func_436();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_418(iVar15);
			iVar0 = (func_544(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_540(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20332));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20331));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x9EB17624F44A8DA4())
			{
				func_537(iVar16, iVar2);
				if (func_533(iVar16) >= Global_262145.f_19880 || iVar2 >= Global_262145.f_19880)
				{
					func_524(5);
				}
				iVar6 = func_507(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20334);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20333));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_490(108);
					}
					else
					{
						func_490(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xB72D370CB7ABC3EF())
						{
							iVar19 = iVar18;
							if (unk_0x012BC3F18B8C7807(iVar19))
							{
								iVar20 = unk_0x43E1A43A1AA9E0BE(iVar19);
								if (func_506(iVar20))
								{
									func_498(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20335;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20336;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677780 = *iParam2;
					func_490(112);
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

void func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19868)
			{
				if (func_526(Global_262145.f_19869))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19870)
			{
				if (func_526(Global_262145.f_19871))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19872)
			{
				if (func_526(Global_262145.f_19873))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19874)
			{
				if (func_526(Global_262145.f_19875))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19876)
			{
				if (func_526(Global_262145.f_19877))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19878)
			{
				if (func_526(Global_262145.f_19879))
				{
					func_510("CLOTHAWDSTRAP3", Global_262145.f_19880, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19881)
			{
				if (func_526(Global_262145.f_19882))
				{
					func_510("CLOTHAWDSTRAP5", Global_262145.f_20014, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19884)
			{
				if (func_526(Global_262145.f_19885))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19886)
			{
				if (func_526(Global_262145.f_19887))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19888)
			{
				if (func_526(Global_262145.f_19889))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19890)
			{
				if (func_526(Global_262145.f_19891))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19892)
			{
				if (func_526(Global_262145.f_19893))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19894)
			{
				if (func_526(Global_262145.f_19895))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19896)
			{
				if (func_526(Global_262145.f_19897))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19898)
			{
				if (func_526(Global_262145.f_19899))
				{
					func_525("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_525(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam3);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
	}
	else
	{
		Global_2492157 = { func_65(unk_0x9EB17624F44A8DA4()) };
		if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
		{
			iVar1 = 0;
			if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2492087.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x679630D62246D8FF(iVar2, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar1, 0, Global_2492087, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
	}
	func_289(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_530(15417, -1, -1))
			{
				func_529(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_530(15418, -1, -1))
			{
				func_529(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_530(15425, -1, -1))
			{
				func_529(15425, 1, -1, 1);
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
			if (!func_530(15405, -1, -1))
			{
				func_529(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_530(15393, -1, -1))
			{
				func_529(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_530(15409, -1, -1))
			{
				func_529(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_530(15396, -1, -1))
			{
				func_529(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_530(15412, -1, -1))
			{
				func_529(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_530(15403, -1, -1))
			{
				func_529(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_530(15389, -1, -1))
			{
				func_529(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_530(15398, -1, -1))
			{
				func_529(15398, 1, -1, 1);
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
			if (!func_530(15400, -1, -1))
			{
				func_529(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_530(15408, -1, -1))
			{
				func_529(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_530(15411, -1, -1))
			{
				func_529(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_530(15397, -1, -1))
			{
				func_529(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_530(15413, -1, -1))
			{
				func_529(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_530(15391, -1, -1))
			{
				func_529(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_530(15388, -1, -1))
			{
				func_529(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_530(15401, -1, -1))
			{
				func_529(15401, 1, -1, 1);
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
			if (!func_530(15394, -1, -1))
			{
				func_529(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_530(15406, -1, -1))
			{
				func_529(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_530(15395, -1, -1))
			{
				func_529(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_530(15410, -1, -1))
			{
				func_529(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_530(15407, -1, -1))
			{
				func_529(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_530(15414, -1, -1))
			{
				func_529(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_530(15415, -1, -1))
			{
				func_529(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_530(15399, -1, -1))
			{
				func_529(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_530(15404, -1, -1))
			{
				func_529(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_530(15392, -1, -1))
			{
				func_529(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_530(15390, -1, -1))
			{
				func_529(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_530(15402, -1, -1))
			{
				func_529(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_530(15416, -1, -1))
			{
				func_529(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_137(209, -1))
			{
				func_527(209, 1, -1, 1);
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
			if (!func_530(15426, -1, -1))
			{
				func_529(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_530(15422, -1, -1))
			{
				func_529(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_530(15423, -1, -1))
			{
				func_529(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_530(15421, -1, -1))
			{
				func_529(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_530(15427, -1, -1))
			{
				func_529(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_530(15419, -1, -1))
			{
				func_529(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_530(15420, -1, -1))
			{
				func_529(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_528())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

int func_528()
{
	return 1;
	return 0;
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_532(iParam0, iParam1);
	uVar2 = func_531(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_533(int iParam0)
{
	int iVar0;
	
	iVar0 = func_535(iParam0);
	return func_407(func_534(iVar0), -1, 0);
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_535(int iParam0)
{
	int iVar0;
	
	if (func_536(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_536(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_537(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_535(iParam0);
	iVar1 = func_534(iVar0);
	iVar2 = (func_407(iVar1, -1, 0) + iParam1);
	func_405(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_515(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_534(iVar0);
				iVar3 = (iVar3 + func_407(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_539(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_538(9357, iVar5, -1, 1);
	}
}

var func_538(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xFD227BDFDE38A9C4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_539(int iParam0)
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

int func_540(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_429(iParam1);
	if (func_536(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16286;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16291);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16296);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16285;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16290);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16295);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16284;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16289);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16294);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16282;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16287);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16292);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16283;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16288);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16293);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20357;
				if (func_541(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20359);
				}
				if (func_541(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20358);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_541(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_543(iParam0, iParam1))
	{
		iVar0 = func_542(iParam0, iParam1);
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_542(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_536(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_536(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_544(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_536(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_545(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_432())
			{
				Var0 = { func_431() };
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
				iVar7 = func_540(unk_0x9EB17624F44A8DA4(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17916);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17915);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_507(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17906);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17905));
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
					func_490(86);
				}
				Global_2512808.f_4856.f_199 = *iParam2;
			}
			else if (func_236(0))
			{
				Var15 = { func_546(func_436()) };
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
				iVar22 = func_540(func_436(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17916));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17915));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17955;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17956;
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

struct<2> func_546(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_188;
}

void func_547(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_119(unk_0x9EB17624F44A8DA4()))
		{
			if (bParam1)
			{
				func_562();
			}
			func_561();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_119(unk_0x9EB17624F44A8DA4()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_553(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_552(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_507(&uVar2);
					iVar4 = Global_262145.f_15467;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14676));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_490(44);
					}
				}
				func_550(*iParam3);
				func_549();
				Global_2512808.f_4856.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xB72D370CB7ABC3EF())
				{
					iVar8 = iVar7;
					if (unk_0x012BC3F18B8C7807(iVar8))
					{
						iVar9 = unk_0x43E1A43A1AA9E0BE(iVar8);
						if (func_506(iVar9))
						{
							func_498(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_119(unk_0x9EB17624F44A8DA4()))
		{
			func_548();
		}
	}
}

void func_548()
{
	int iVar0;
	
	iVar0 = Global_2549323[func_19()];
	iVar0++;
	func_404(3656, iVar0, -1, 1);
}

void func_549()
{
	int iVar0;
	
	iVar0 = Global_2549329[func_19()];
	iVar0++;
	func_404(3655, iVar0, -1, 1);
}

void func_550(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549332[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_404(3657, iVar0, -1, 1);
	if (func_515(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_551(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_538(7666, iVar2, -1, 1);
	}
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15600;
			break;
		
		case 2:
			return Global_262145.f_15601;
			break;
		
		case 3:
			return Global_262145.f_15602;
			break;
		
		case 4:
			return Global_262145.f_15603;
			break;
		
		case 5:
			return Global_262145.f_15604;
			break;
		
		case 6:
			return Global_262145.f_15605;
			break;
		
		case 7:
			return Global_262145.f_15606;
			break;
		
		case 8:
			return Global_262145.f_15607;
			break;
		
		case 9:
			return Global_262145.f_15608;
			break;
		
		case 10:
			return Global_262145.f_15609;
			break;
		
		case 11:
			return Global_262145.f_15610;
			break;
		
		case 12:
			return Global_262145.f_15611;
			break;
		
		case 13:
			return Global_262145.f_15612;
			break;
		
		case 14:
			return Global_262145.f_15613;
			break;
		
		case 15:
			return Global_262145.f_15614;
			break;
		
		case 16:
			return Global_262145.f_15615;
			break;
		
		case 17:
			return Global_262145.f_15616;
			break;
		
		case 18:
			return Global_262145.f_15617;
			break;
		
		case 19:
			return Global_262145.f_15618;
			break;
		
		case 20:
			return Global_262145.f_15619;
			break;
		
		case 21:
			return Global_262145.f_15620;
			break;
		
		case 22:
			return Global_262145.f_15621;
			break;
		
		case 23:
			return Global_262145.f_15622;
			break;
		
		case 24:
			return Global_262145.f_15623;
			break;
	}
	return 0;
}

var func_552(int iParam0)
{
	if (iParam0 >= Global_262145.f_14654)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 >= Global_262145.f_14653)
	{
		return Global_262145.f_14674;
	}
	else if (iParam0 >= Global_262145.f_14652)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 >= Global_262145.f_14651)
	{
		return Global_262145.f_14672;
	}
	else if (iParam0 >= Global_262145.f_14650)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 >= Global_262145.f_14649)
	{
		return Global_262145.f_14670;
	}
	else if (iParam0 >= Global_262145.f_14648)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 >= Global_262145.f_14647)
	{
		return Global_262145.f_14668;
	}
	else if (iParam0 >= Global_262145.f_14646)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 >= Global_262145.f_14645)
	{
		return Global_262145.f_14666;
	}
	else if (iParam0 >= Global_262145.f_14644)
	{
		return Global_262145.f_14665;
	}
	else if (iParam0 >= Global_262145.f_14643)
	{
		return Global_262145.f_14664;
	}
	else if (iParam0 >= Global_262145.f_14642)
	{
		return Global_262145.f_14663;
	}
	else if (iParam0 >= Global_262145.f_14641)
	{
		return Global_262145.f_14662;
	}
	else if (iParam0 >= Global_262145.f_14640)
	{
		return Global_262145.f_14661;
	}
	else if (iParam0 >= Global_262145.f_14639)
	{
		return Global_262145.f_14660;
	}
	else if (iParam0 >= Global_262145.f_14638)
	{
		return Global_262145.f_14659;
	}
	else if (iParam0 >= Global_262145.f_14637)
	{
		return Global_262145.f_14658;
	}
	else if (iParam0 >= Global_262145.f_14636)
	{
		return Global_262145.f_14657;
	}
	else if (iParam0 >= Global_262145.f_14635)
	{
		return Global_262145.f_14656;
	}
	return Global_262145.f_14655;
}

int func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_560(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_559(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_558(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_554(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_554(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_558(unk_0x63A6486593EC7EC3(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = func_555(func_556(iParam0));
		return func_407(iVar0, -1, 0);
	}
	return 0;
}

int func_555(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

int func_556(int iParam0)
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_557(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_558(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14854;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14852;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14856;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14850;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14848;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14858;
	}
	return 0;
}

int func_559(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1669253[iVar0] == iParam1 && Global_1669260[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_561()
{
	int iVar0;
	
	iVar0 = Global_2549320[func_19()];
	iVar0++;
	Global_2549320[func_19()] = iVar0;
	func_404(3654, iVar0, -1, 1);
}

void func_562()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549317[func_19()];
	iVar1 = Global_2549326[func_19()];
	iVar0++;
	iVar1++;
	Global_2549317[func_19()] = iVar0;
	Global_2549326[func_19()] = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_106 = iVar1;
	func_404(3652, iVar0, -1, 1);
	func_404(3653, iVar1, -1, 1);
}

void func_563()
{
	if (func_419())
	{
		Global_2447954.f_3066.f_134 = 0;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
	}
}

void func_564()
{
	if (func_419())
	{
		if (Global_2447954.f_3066.f_134 < 10)
		{
			Global_2447954.f_3066.f_134++;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

void func_565()
{
	if (func_419())
	{
		if (Global_2447954.f_3066.f_134 > 0)
		{
			Global_2447954.f_3066.f_134 = (Global_2447954.f_3066.f_134 - 1);
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_408 = Global_2447954.f_3066.f_134;
		}
	}
}

int func_566(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_28;
}

int func_567(int iParam0)
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
		case 229:
		case 230:
		case 233:
			if (func_434(1) && !func_236(1))
			{
				if (func_568(func_436()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_568(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11846) * Global_262145.f_11851));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11796) * Global_262145.f_11801));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11823) * Global_262145.f_11827));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11836) * Global_262145.f_11840));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11858) * Global_262145.f_11863));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12020) * Global_262145.f_12021));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12026) * Global_262145.f_12027));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12024) * Global_262145.f_12025));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12018) * Global_262145.f_12019));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12022) * Global_262145.f_12023));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12016) * Global_262145.f_12017));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14377;
		
		case 172:
			return Global_262145.f_14393;
		
		case 173:
			return Global_262145.f_14336;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17610;
		
		case 180:
			return Global_262145.f_17486;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17494;
		
		case 185:
			return Global_262145.f_17503;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17698;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17715;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17563;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17746;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17624;
		
		case 205:
			return Global_262145.f_17733;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17591;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17728;
		
		case 211:
			return Global_262145.f_17692;
		
		case 214:
			return Global_262145.f_18262;
		
		case 215:
			return Global_262145.f_18272;
		
		case 216:
			return Global_262145.f_18282;
		
		case 217:
			return Global_262145.f_18291;
		
		case 218:
			return Global_262145.f_18300;
		
		case 219:
			return Global_262145.f_18316;
		
		default:
	}
	return 0;
}

int func_570(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11847) * Global_262145.f_11852));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11797) * Global_262145.f_11802));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11824) * Global_262145.f_11828));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11837) * Global_262145.f_11841));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11859) * Global_262145.f_11864));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11896) * Global_262145.f_11899));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11942) * Global_262145.f_11945));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11932) * Global_262145.f_11935));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11887) * Global_262145.f_11890));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11907) * Global_262145.f_11912));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11872) * Global_262145.f_11875));
		
		case 170:
			return Global_262145.f_14319;
		
		case 171:
			return Global_262145.f_14378;
		
		case 172:
			return Global_262145.f_14394;
		
		case 173:
			return Global_262145.f_14337;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16414;
		
		case 168:
			return Global_262145.f_16413;
		
		case 179:
			return Global_262145.f_17611;
		
		case 180:
			return Global_262145.f_17487;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17495;
		
		case 185:
			return Global_262145.f_17504;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17699;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17716;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17564;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17747;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17625;
		
		case 205:
			return Global_262145.f_17734;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17592;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17729;
		
		case 211:
			return Global_262145.f_17693;
		
		case 214:
			return Global_262145.f_18263;
		
		case 215:
			return Global_262145.f_18273;
		
		case 216:
			return Global_262145.f_18283;
		
		case 217:
			return Global_262145.f_18292;
		
		case 218:
			return Global_262145.f_18301;
		
		case 219:
			return Global_262145.f_18317;
		
		case 178:
			if (func_419())
			{
				return Global_262145.f_18140;
			}
			else if (bParam1)
			{
				return Global_262145.f_18141;
			}
			break;
		
		case 188:
			if (func_419())
			{
				return Global_262145.f_18224;
			}
			else if (bParam1)
			{
				return Global_262145.f_18225;
			}
			break;
		
		case 225:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20345;
				}
				else
				{
					return Global_262145.f_20346;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_20347;
			}
			break;
		
		case 226:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20325;
				}
				else
				{
					return Global_262145.f_20326;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_20327;
			}
			break;
		
		case 227:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_20337;
				}
				else
				{
					return Global_262145.f_20338;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_20339;
			}
			break;
		
		case 229:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21500;
				}
				else
				{
					return Global_262145.f_21501;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_21502;
			}
			break;
		
		case 230:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_21596;
				}
				else
				{
					return Global_262145.f_21597;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_21598;
			}
			break;
		
		case 233:
			if (func_419() && !func_432())
			{
				if (func_568(unk_0x9EB17624F44A8DA4()))
				{
					return Global_262145.f_22057;
				}
				else
				{
					return Global_262145.f_22058;
				}
			}
			else if (func_432())
			{
				return Global_262145.f_22056;
			}
			break;
	}
	return 0;
}

void func_571(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_572(iParam0))
	{
		if (!func_419())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11740;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_303(iParam0))
	{
		*uParam1 = (Global_262145.f_17464 / 100f);
		*uParam2 = (Global_262145.f_17464 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11739;
		*uParam2 = Global_262145.f_11738;
	}
	if (func_303(iParam0))
	{
		if (func_177(unk_0x9EB17624F44A8DA4(), 1))
		{
			*uParam1 = (Global_262145.f_17463 / 100f);
			*uParam2 = (Global_262145.f_17463 / 100f);
		}
	}
	else if (func_177(unk_0x9EB17624F44A8DA4(), 1))
	{
		*uParam1 = Global_262145.f_11737;
		*uParam2 = Global_262145.f_11736;
	}
	iVar0 = func_239();
	if (iVar0 != func_63())
	{
		if (func_74(unk_0x9EB17624F44A8DA4(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_572(int iParam0)
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

int func_573()
{
	return (Local_98.f_115 * Global_262145.f_14352);
}

int func_574()
{
	return (Local_98.f_115 * Global_262145.f_14351);
}

void func_575(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_101(unk_0x9EB17624F44A8DA4());
	if (func_303(iVar0))
	{
		Global_1667885.f_2 = func_636();
		Global_1667885.f_3 = func_635();
		Global_1667885.f_50 = iParam4;
		Global_1667885.f_51 = iParam5;
		Global_1667885.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667885.f_20 = (Global_1667885.f_10 - Global_1667885.f_9);
		Global_1667885.f_12 = iParam1;
		Global_1667885.f_19 = func_629(iVar0, bParam0, func_634(bParam3));
		if (bParam0)
		{
			Global_1667885.f_11 = 1;
		}
		else
		{
			Global_1667885.f_11 = 0;
		}
		if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667885.f_8 = 1;
		}
		else
		{
			Global_1667885.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1667885.f_43 = 0;
			Global_1667885.f_45 = func_628(func_436(), iParam2);
			Global_1667885.f_47 = iParam7;
			Global_1667885.f_46 = iParam6;
			Global_1667885.f_52 = func_627(func_436(), iParam2);
		}
		func_625(iVar0);
	}
	else if (func_307(iVar0))
	{
		Global_1667938.f_2 = func_636();
		Global_1667938.f_3 = func_635();
		Global_1667938.f_10 = unk_0xE3CCAFB1555348DF();
		Global_1667938.f_19 = (Global_1667938.f_10 - Global_1667938.f_9);
		Global_1667938.f_12 = iParam1;
		if (bParam0)
		{
			Global_1667938.f_11 = 1;
		}
		else
		{
			Global_1667938.f_11 = 0;
		}
		if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
		{
			Global_1667938.f_8 = 1;
		}
		else
		{
			Global_1667938.f_8 = 0;
		}
		func_623(iVar0);
	}
	else if (func_371(iVar0))
	{
		Global_1668000.f_2 = func_636();
		Global_1668000.f_3 = func_635();
		Global_1668000.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668000.f_18 = (Global_1668000.f_9 - Global_1668000.f_8);
		Global_1668000.f_11 = iParam1;
		Global_1668000.f_7 = func_622();
		Global_1668000.f_42 = func_620(func_19(), 5);
		iVar1 = unk_0x9EB17624F44A8DA4();
		iVar2 = func_418(iVar1);
		Global_1668000.f_28 = iVar2;
		Global_1668000.f_29 = func_617((func_619(iVar1) || func_618(iVar1)));
		Global_1668000.f_30 = func_617(func_616(iVar1));
		Global_1668000.f_32 = func_617(func_615(iVar1));
		Global_1668000.f_33 = func_617(func_614(iVar1));
		Global_1668000.f_34 = func_617(func_613(iVar1));
		Global_1668000.f_35 = func_617(func_612(0, iVar1) == 1);
		Global_1668000.f_36 = func_617(func_611(iVar1));
		Global_1668000.f_37 = func_617(func_610(iVar1));
		Global_1668000.f_38 = func_617(func_609(iVar1));
		Global_1668000.f_39 = func_617(func_541(iVar1, iVar2, 0));
		Global_1668000.f_40 = func_617(func_541(iVar1, iVar2, 2));
		Global_1668000.f_41 = func_617(func_541(iVar1, iVar2, 1));
		if (func_608(iVar1))
		{
			Global_1668000.f_31 = 2;
		}
		else if (func_607(iVar1))
		{
			Global_1668000.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1668000.f_10 = 1;
		}
		else
		{
			Global_1668000.f_10 = 0;
		}
		if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_6 = 1;
		}
		else
		{
			Global_1668000.f_6 = 0;
		}
		Global_1668000.f_21 = -2;
		Global_1668000.f_22 = -2;
		func_605(iVar0);
	}
	else if (func_369(iVar0))
	{
		Global_1668043.f_2 = func_636();
		Global_1668043.f_3 = func_635();
		if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668043.f_6 = 1;
		}
		else
		{
			Global_1668043.f_6 = 0;
		}
		Global_1668043.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668043.f_10 = func_617(bParam0);
		Global_1668043.f_11 = iParam1;
		Global_1668043.f_17 = func_604(func_239());
		Global_1668043.f_18 = (Global_1668043.f_9 - Global_1668043.f_8);
		Global_1668043.f_20 = iParam8;
		Global_1668043.f_21 = -2;
		Global_1668043.f_22 = -2;
		Global_1668043.f_27 = func_603();
		Global_1668043.f_29 = func_407(6090, -1, 0);
		Global_1668043.f_30 = func_407(6086, -1, 0);
		Global_1668043.f_31 = func_407(6087, -1, 0);
		Global_1668043.f_32 = func_407(6089, -1, 0);
		Global_1668043.f_33 = func_407(6088, -1, 0);
		Global_1668043.f_34 = func_407(6091, -1, 0);
		Global_1668043.f_36 = func_617(func_236(1));
		Global_1668043.f_37 = func_600();
		func_585();
		func_583(iVar0);
	}
	else if (func_367(iVar0))
	{
		Global_1668096.f_2 = func_636();
		Global_1668096.f_3 = func_635();
		if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668096.f_6 = 1;
		}
		else
		{
			Global_1668096.f_6 = 0;
		}
		Global_1668096.f_9 = unk_0xE3CCAFB1555348DF();
		Global_1668096.f_10 = func_617(bParam0);
		Global_1668096.f_11 = iParam1;
		Global_1668096.f_18 = (Global_1668096.f_9 - Global_1668096.f_8);
		Global_1668096.f_20 = iParam8;
		Global_1668096.f_23 = Global_786547;
		Global_1668096.f_36 = Global_786547.f_1;
		Global_1668096.f_24 = func_407(6140, -1, 0);
		Global_1668096.f_25 = func_407(6145, -1, 0);
		Global_1668096.f_26 = func_407(6146, -1, 0);
		Global_1668096.f_27 = func_617((((func_582() || func_581()) || func_580()) || func_579(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_407(6147, -1, 0);
		Global_1668096.f_29 = func_617(func_578());
		Global_1668096.f_35 = -1;
		Global_1668096.f_38 = -1;
		Global_1668096.f_39 = Global_1668096.f_4;
		Global_1668096.f_40 = Global_1668096.f_5;
		Global_1668096.f_41 = func_636();
		Global_1668096.f_42 = func_617(func_236(1));
		Global_1668096.f_44 = Global_1668096.f_18;
		func_576(iVar0);
	}
	else
	{
		Global_1667867.f_6 = unk_0xE3CCAFB1555348DF();
		if (bParam0)
		{
			Global_1667867.f_7 = 1;
		}
		else
		{
			Global_1667867.f_7 = 0;
		}
		Global_1667867.f_8 = iParam1;
		if (Global_1667867.f_4 == 0)
		{
			if ((func_120(unk_0x9EB17624F44A8DA4()) || func_131(unk_0x9EB17624F44A8DA4())) || func_139(unk_0x9EB17624F44A8DA4()))
			{
				Global_1667867.f_4 = 1;
			}
		}
	}
}

void func_576(int iParam0)
{
	unk_0xFDD76EF6D7C1C5E7(&Global_1668096);
	func_577();
}

void func_577()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1668096 = { Var0 };
	Global_1668096.f_16 = 0;
}

bool func_578()
{
	return func_407(6139, -1, 0) != 0;
}

int func_579(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_580()
{
	return func_407(6147, -1, 0) == 3;
}

bool func_581()
{
	return func_407(6147, -1, 0) == 2;
}

bool func_582()
{
	return func_407(6147, -1, 0) == 1;
}

void func_583(int iParam0)
{
	unk_0x705964318EE23D2C(&Global_1668043);
	func_584();
}

void func_584()
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1668043 = { Var0 };
	Global_1668043.f_23 = 0;
	Global_1668043.f_24 = 0;
	Global_1668043.f_16 = 0;
}

void func_585()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_596(12));
		func_595(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320310[iVar1 /*141*/].f_66 != 0 && func_587(Global_1320310[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2512808.f_871 != iVar1)
				{
					if (func_586(Global_1320310[iVar1 /*141*/].f_66))
					{
						if (Global_1320310[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1320310[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1668043.f_38 = iVar3;
								break;
							
							case 1:
								Global_1668043.f_39 = iVar3;
								break;
							
							case 2:
								Global_1668043.f_40 = iVar3;
								break;
							
							case 3:
								Global_1668043.f_41 = iVar3;
								break;
							
							case 4:
								Global_1668043.f_42 = iVar3;
								break;
							
							case 5:
								Global_1668043.f_43 = iVar3;
								break;
							
							case 6:
								Global_1668043.f_44 = iVar3;
								break;
							
							case 7:
								Global_1668043.f_45 = iVar3;
								break;
							
							case 8:
								Global_1668043.f_46 = iVar3;
								break;
							
							case 9:
								Global_1668043.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	return 0;
}

int func_587(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_594())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_593() && !func_592()) && !func_591()) && !func_590()) && !func_594())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_591())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_589(iParam0))
		{
			return 0;
		}
	}
	if (!func_588(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_588(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_433())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_590()
{
	return 0;
}

int func_591()
{
	return 1;
}

int func_592()
{
	return 1;
}

int func_593()
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	var uVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x872F1C1F8587CCC7(&uVar0, 2);
				unk_0x872F1C1F8587CCC7(&uVar0, 4);
				unk_0x872F1C1F8587CCC7(&uVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_595(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9507)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1664862[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x4B64A8D052027742() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_596(int iParam0)
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
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_599(iParam0);
		return func_598(iVar0);
	}
	return (func_597(iParam0, -1) * iParam0);
}

int func_597(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_378(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_384(iParam1))
			{
				return 0;
			}
			else if (func_376(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
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
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_599(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_600()
{
	var uVar0;
	
	uVar0 = func_602();
	if (!func_419())
	{
		if (func_436() != func_63())
		{
			uVar0 = func_601(func_436()) + 1;
		}
	}
	return uVar0;
}

int func_601(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_19;
}

int func_602()
{
	return func_601(unk_0x9EB17624F44A8DA4()) + 1;
}

int func_603()
{
	return func_407(6096, -1, 0);
}

int func_604(int iParam0)
{
	if (func_177(iParam0, 1))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_410;
	}
	return -1;
}

void func_605(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xAEAF29A3BD6D6C8B(&Global_1668000);
	func_606();
}

void func_606()
{
	struct<43> Var0;
	
	Global_1668000 = { Var0 };
	Global_1668000.f_23 = 0;
	Global_1668000.f_24 = 0;
	Global_1668000.f_16 = 0;
}

bool func_607(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 12);
}

bool func_608(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 13);
}

int func_609(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 12) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 13)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_610(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_611(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (((((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_612(int iParam0, int iParam1)
{
	if (iParam1 == func_63())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[iParam1 /*680*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_613(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 6) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 7)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_614(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 8);
}

bool func_615(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 7);
}

bool func_616(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 9);
}

int func_617(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_618(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 11);
}

bool func_619(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 10);
}

int func_620(int iParam0, int iParam1)
{
	return func_407(func_621(iParam1), iParam0, 0);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_622()
{
	int iVar0;
	
	if (func_432())
	{
		return 4;
	}
	else if (func_419())
	{
		if (func_568(unk_0x9EB17624F44A8DA4()))
		{
			return 8;
		}
		return 6;
	}
	if (func_236(1))
	{
		iVar0 = func_604(unk_0x9EB17624F44A8DA4());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_434(1))
	{
		if (func_568(func_436()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_623(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xB3B5EB2045CAF8EA(&Global_1667938);
	func_624();
}

void func_624()
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
	Global_1667938 = { Var0 };
	Global_1667938.f_24 = 0;
	Global_1667938.f_25 = 0;
	Global_1667938.f_17 = 0;
}

void func_625(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F25D506765D3ED6(&Global_1667885);
	func_626();
}

void func_626()
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
	Global_1667885 = { Var0 };
	Global_1667885.f_29 = 0;
	Global_1667885.f_30 = 0;
	Global_1667885.f_17 = 0;
}

int func_627(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_541(iParam0, iParam1, 2);
	bVar1 = func_541(iParam0, iParam1, 1);
	bVar2 = func_541(iParam0, iParam1, 0);
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

int func_628(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_536(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_629(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_374(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 19;
	}
	else if (func_373(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_209(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17001;
			iVar1 = 20;
		}
	}
	else if (func_303(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17021;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17020;
		}
		else
		{
			iVar0 = Global_262145.f_17002;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF2CDA5A7C6ED93BE(func_633(func_436()), func_632(func_436()), func_636(), func_635(), iVar1, iVar0);
	}
	func_631(iVar0);
	func_630(iVar0);
	return iVar0;
}

void func_630(int iParam0)
{
	int iVar0;
	
	iVar0 = func_407(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_449 = iVar0;
	func_405(3951, iVar0, -1, 1, 0);
}

void func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	Global_1627537[iVar0 /*532*/].f_11.f_448 = (Global_1627537[iVar0 /*532*/].f_11.f_448 + iParam0);
	if (Global_1627537[iVar0 /*532*/].f_11.f_448 < -9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
	else if (Global_1627537[iVar0 /*532*/].f_11.f_448 > 9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
}

int func_632(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_633(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_634(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_120(unk_0x9EB17624F44A8DA4()) || func_139(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_635()
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_636()
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_637(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_63();
	iVar1 = func_63();
	iVar2 = func_63();
	return func_638(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_638(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_358(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0x872F1C1F8587CCC7(&(Var0.f_68), 2);
	return func_329(&Var0);
}

int func_639(int iParam0)
{
	int iVar0;
	
	iVar0 = func_181(iParam0);
	if (iVar0 != -1)
	{
		return func_179(iVar0);
	}
	return 1;
}

char* func_640(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		uVar0 = func_392(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		uVar0 = func_393(iParam0, 0);
		return uVar0;
	}
	if (((func_105(iParam0, 28) || func_105(unk_0x9EB17624F44A8DA4(), 28)) || func_396(iParam0)) && !func_395(iParam0))
	{
		return func_393(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_63())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_393(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_63())
	{
		uVar0 = func_392(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(uVar0))
		{
			return func_393(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_641()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_782() && !func_284())
	{
		return;
	}
	if (!func_359())
	{
		return;
	}
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	}
	iVar1 = func_130(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_98.f_847)))
	{
		iVar2 = (func_10() - func_655(&(Local_98.f_847), 0, 0));
		iVar3 = (func_654() - Local_98.f_115);
		func_652(iVar2);
		if (iVar2 > 30000)
		{
			func_642(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_642(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_642(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_642(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_650(0) == 0)
	{
		return;
	}
	func_649();
	func_646(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_476(sParam4))
	{
		sVar0 = sParam4;
	}
	func_643(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_643(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_645(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_644(7, iVar0);
		Global_1359035.f_4388[iVar0] = uParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = uParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = uParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_644(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_645(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_646(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
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
			if (func_645(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_644(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = iParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_648())
		{
			Global_1359035.f_1088 = 1;
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			iVar2 = 0;
			unk_0x5113D2C928A121B2(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_647())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_647()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x5113D2C928A121B2(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_648()
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

void func_649()
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
}

int func_650(bool bParam0)
{
	if (func_651())
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_879(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_651()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
}

void func_652(int iParam0)
{
	if (unk_0xC80D31E4B587871C(iLocal_1420, 8))
	{
		func_653();
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_1420, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x8810DC630928B398("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_1420, 15);
				unk_0x872F1C1F8587CCC7(&iLocal_1420, 9);
				unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
				unk_0x22456E02F195550C(0);
				unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_1420, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_1420, 11))
			{
				if (unk_0xAAB7D68F04F8C8BA("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_1420, 11);
				}
			}
			else
			{
				unk_0xC80D31E4B587871C(iLocal_1420, 11);
				if (!unk_0xC80D31E4B587871C(iLocal_1420, 14))
				{
					if (unk_0x8810DC630928B398("APT_COUNTDOWN_30S"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_1420, 14);
					}
				}
			}
			if (unk_0xC80D31E4B587871C(iLocal_1420, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xC80D31E4B587871C(iLocal_1420, 12))
					{
						unk_0x22456E02F195550C(1);
						unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
						unk_0x872F1C1F8587CCC7(&iLocal_1420, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x8810DC630928B398("APT_FADE_IN_RADIO"))
						{
							unk_0xF4D9AAA3F4BCC684("APT_COUNTDOWN_30S_KILL");
							unk_0x0EE72DB1CD8A3B86(&iLocal_1420, 9);
						}
					}
				}
			}
		}
	}
}

void func_653()
{
	if (unk_0xC80D31E4B587871C(iLocal_1420, 8))
	{
		if (unk_0xC80D31E4B587871C(iLocal_1420, 9))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_1420, 10))
			{
				if (unk_0xC80D31E4B587871C(iLocal_1420, 11))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_1420, 12))
					{
						unk_0x22456E02F195550C(1);
						unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
						unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xC80D31E4B587871C(iLocal_1420, 16))
				{
					if (unk_0x8810DC630928B398("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_1420, 16);
					}
				}
				if (unk_0xC80D31E4B587871C(iLocal_1420, 16))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_1420, 13))
					{
						if (unk_0x8810DC630928B398("APT_FADE_IN_RADIO"))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1420, 13);
						}
					}
					if (unk_0xC80D31E4B587871C(iLocal_1420, 13))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_1420, 10);
					}
				}
			}
		}
	}
}

int func_654()
{
	return 4;
}

int func_655(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_656()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0x9EB17624F44A8DA4();
	iVar18 = unk_0x622FF3AE4B1D07C3();
	if (func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar18 = func_285();
		iVar17 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	}
	iVar19 = func_130(iVar17);
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (!func_359())
		{
			if (func_673("HUNT_OBJ"))
			{
				func_715();
			}
			if (func_673("HUNT_OBJ1L"))
			{
				func_715();
			}
			if (func_673("HUNT_TOBJ"))
			{
				func_715();
			}
			if (func_673("HUNT_DOBJ"))
			{
				func_715();
			}
			if (func_673("HUNT_DOBJ1L"))
			{
				func_715();
			}
			return;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_970[iVar18 /*14*/].f_1, 6))
	{
		func_715();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_673("HUNT_OBJ"))
		{
			func_715();
		}
		if (func_673("HUNT_OBJ1L"))
		{
			func_715();
		}
		if (func_673("HUNT_TOBJ"))
		{
			func_715();
		}
		if (func_673("HUNT_DOBJ"))
		{
			func_715();
		}
		if (func_673("HUNT_DOBJ1L"))
		{
			func_715();
		}
		return;
	}
	bVar20 = func_672() == true;
	if (iVar18 == Local_98.f_118)
	{
		if (!bVar20)
		{
			if (!func_673("HUNT_OBJ"))
			{
				func_669("HUNT_OBJ", 0);
			}
		}
		else if (!func_673("HUNT_OBJ1L"))
		{
			func_669("HUNT_OBJ1L", 0);
		}
	}
	else if (func_783() == Local_98.f_118)
	{
		if (!bVar20)
		{
			if (!func_673("HUNT_OBJ"))
			{
				func_669("HUNT_OBJ", 0);
			}
		}
		else if (!func_673("HUNT_OBJ1L"))
		{
			func_669("HUNT_OBJ1L", 0);
		}
	}
	else if (func_284())
	{
		if (Local_98.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_673("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_640(unk_0xF6A72924028F588B(Local_98.f_119)), 64);
					iVar0 = func_639(unk_0xF6A72924028F588B(Local_98.f_119));
					func_657("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_673("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_640(unk_0xF6A72924028F588B(Local_98.f_119)), 64);
				iVar0 = func_639(unk_0xF6A72924028F588B(Local_98.f_119));
				func_657("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_657(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_658(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 16;
		Global_1312576.f_56 = iParam2;
	}
}

int func_658(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (func_668(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_662();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_661();
	func_660(bParam2);
	func_659();
	return 1;
}

void func_659()
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_660(bool bParam0)
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_661()
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_662()
{
	func_664();
	func_663(0);
}

void func_663(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_664()
{
	if (!func_667())
	{
	}
	if (func_666())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_665();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_665()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_666()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_667()
{
	if (!func_666())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_665();
	return unk_0xC20F7134D3568246();
}

bool func_668(char* sParam0, char* sParam1)
{
	if (!func_666())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(uParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(uParam1))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

void func_669(char* sParam0, bool bParam1)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_670(sParam0))
	{
		return;
	}
	func_662();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_661();
	func_660(bParam1);
	func_659();
}

bool func_670(char* sParam0)
{
	if (!func_666())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_671(uParam0);
	}
	if (unk_0xAB019B170BF1309C(uParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_671(char* sParam0)
{
	if (!func_666())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(uParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

int func_672()
{
	return (4 - Local_98.f_115);
}

int func_673(char* sParam0)
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (!func_666())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xFDD8E897FECD2912(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	return func_670(sParam0);
}

void func_674()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_782() && !func_284())
	{
		return;
	}
	if (!func_359())
	{
		return;
	}
	iVar1 = func_63();
	iVar2 = -1;
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar1 = unk_0x9EB17624F44A8DA4();
		iVar2 = unk_0x622FF3AE4B1D07C3();
	}
	else
	{
		iVar2 = func_285();
		iVar1 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_1419, 1))
	{
		iVar0 = func_130(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_98.f_118 || func_783() == Local_98.f_118)
			{
				if (func_698(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_328(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x622FF3AE4B1D07C3())
					{
						func_697(1);
						func_675(-1, 0, 0, -1, 0);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x622FF3AE4B1D07C3())
				{
					func_675(-1, 0, 0, -1, 0);
				}
				func_328(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0x872F1C1F8587CCC7(&iLocal_1419, 1);
	}
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_101(unk_0x9EB17624F44A8DA4());
	if (iParam2 || func_303(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1667885 = iVar0;
		if (func_374(iVar0))
		{
			Global_1667885.f_1 = 4;
		}
		else if (func_373(iVar0))
		{
			Global_1667885.f_1 = 5;
		}
		else if (func_209(iVar0, 0))
		{
			Global_1667885.f_1 = 2;
			if (func_401(iVar0))
			{
				Global_1667885.f_1 = 3;
			}
		}
		else
		{
			Global_1667885.f_1 = 1;
		}
		if (func_436() != func_63())
		{
			Global_1667885.f_4 = func_633(func_436());
			Global_1667885.f_5 = func_632(func_436());
		}
		if (func_239() != func_63())
		{
			func_435(func_239(), &(Global_1667885.f_6), &(Global_1667885.f_7));
		}
		Global_1667885.f_9 = unk_0xE3CCAFB1555348DF();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1667885.f_27 = 1;
			Global_1667885.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1667885.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1667885.f_40 = func_429(iParam1);
			Global_1667885.f_41 = func_696();
			Global_1667885.f_42 = func_544(unk_0x9EB17624F44A8DA4(), iParam1);
			Global_1667885.f_44 = func_628(unk_0x9EB17624F44A8DA4(), iParam1);
		}
	}
	else if (func_371(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1668000 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1668000 = iParam0 + 1;
		}
		else
		{
			Global_1668000 = func_695(unk_0x9EB17624F44A8DA4());
		}
		switch (iVar0)
		{
			case 225:
				if (func_694(unk_0x9EB17624F44A8DA4()) == 0)
				{
					Global_1668000.f_1 = 0;
				}
				else
				{
					Global_1668000.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1668000.f_1 = 2;
				break;
			
			case 227:
				Global_1668000.f_1 = 3;
				break;
		}
		Global_1668000.f_21 = 1;
		Global_1668000.f_22 = 1;
		if (func_436() != func_63())
		{
			Global_1668000.f_4 = func_633(func_436());
			Global_1668000.f_5 = func_632(func_436());
		}
		if (func_239() != func_63())
		{
			func_435(func_239(), &(Global_1668000.f_4), &(Global_1668000.f_5));
		}
		Global_1668000.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668000.f_20 = iParam0;
		}
	}
	else if (func_307(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1667938 = iVar0;
		Global_1667885.f_1 = 1;
		if (func_436() != func_63())
		{
			Global_1667938.f_4 = func_633(func_436());
			Global_1667938.f_5 = func_632(func_436());
		}
		if (func_239() != func_63())
		{
			func_435(func_239(), &(Global_1667938.f_6), &(Global_1667938.f_7));
		}
		Global_1667938.f_9 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1667938.f_21 = iParam0;
		}
	}
	else if (func_369(iVar0))
	{
		Global_1668043 = iVar0;
		Global_1668043.f_1 = iParam0;
		Global_1668043.f_21 = 1;
		Global_1668043.f_22 = 1;
		if (func_436() != func_63())
		{
			Global_1668043.f_4 = func_633(func_436());
			Global_1668043.f_5 = func_632(func_436());
		}
		if (func_239() != func_63())
		{
			func_435(func_239(), &(Global_1668043.f_4), &(Global_1668043.f_5));
		}
		Global_1668043.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668043.f_20 = iParam0;
		}
		Global_1668043.f_27 = func_620(func_19(), 5);
		Global_1668043.f_28 = func_617(func_522(unk_0x9EB17624F44A8DA4()));
		Global_1668043.f_29 = func_407(6090, -1, 0);
		Global_1668043.f_30 = func_407(6086, -1, 0);
		Global_1668043.f_31 = func_407(6087, -1, 0);
		Global_1668043.f_32 = func_407(6089, -1, 0);
		Global_1668043.f_33 = func_407(6088, -1, 0);
		Global_1668043.f_34 = func_407(6091, -1, 0);
		Global_1668043.f_7 = func_622();
		Global_1668043.f_51 = func_617(bParam4);
	}
	else if (func_367(iVar0))
	{
		Global_1668096 = iVar0;
		Global_1668096.f_1 = iParam0;
		Global_1668096.f_21 = 1;
		Global_1668096.f_22 = 1;
		if (func_436() != func_63())
		{
			Global_1668096.f_4 = func_633(func_436());
			Global_1668096.f_5 = func_632(func_436());
		}
		if (func_239() != func_63())
		{
			func_435(func_239(), &(Global_1668096.f_4), &(Global_1668096.f_5));
		}
		Global_1668096.f_8 = unk_0xE3CCAFB1555348DF();
		if (iParam0 != -1)
		{
			Global_1668096.f_20 = iParam0;
		}
		Global_1668096.f_24 = func_407(6140, -1, 0);
		Global_1668096.f_25 = func_407(6145, -1, 0);
		Global_1668096.f_26 = func_407(6146, -1, 0);
		Global_1668096.f_27 = func_617((((func_582() || func_581()) || func_580()) || func_579(unk_0x9EB17624F44A8DA4())));
		Global_1668096.f_28 = func_407(6147, -1, 0);
		Global_1668096.f_29 = func_617(func_578());
		Global_1668096.f_31 = 0;
		Global_1668096.f_30 = 0;
		Global_1668096.f_32 = 0;
		Global_1668096.f_33 = 0;
		Global_1668096.f_34 = 0;
		Global_1668096.f_16 = 0;
	}
	else
	{
		if (func_436() != func_63())
		{
			Global_1667867 = func_633(func_436());
			Global_1667867.f_1 = func_632(func_436());
		}
		Global_1667867.f_5 = unk_0xE3CCAFB1555348DF();
		Global_1667867.f_13 = func_693();
		Global_1667867.f_15 = 0;
		if (func_434(1))
		{
			if (func_239() == func_436())
			{
				Global_1667867.f_15 = 1;
			}
		}
		if (func_692())
		{
			Global_1668000.f_28 = 1;
		}
		if (((func_691() || func_690()) || func_689()) || func_688())
		{
			Global_1668000.f_30 = 1;
		}
		if (func_686(func_687(joaat("trailersmall2"))))
		{
			Global_1668000.f_32 = 1;
		}
		if (func_679(func_685(joaat("caddy"))))
		{
			Global_1668000.f_31 = 1;
		}
		if (func_619(unk_0x9EB17624F44A8DA4()) || func_618(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_29 = 1;
		}
		if (func_614(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_33 = 1;
			Global_1668000.f_34 = 1;
		}
		if (func_615(unk_0x9EB17624F44A8DA4()))
		{
			Global_1668000.f_36 = 1;
		}
		if (func_612(0, unk_0x9EB17624F44A8DA4()) == 1)
		{
			Global_1668000.f_35 = 1;
		}
		if (func_678(unk_0x9EB17624F44A8DA4(), 3, &uVar1))
		{
			Global_1668000.f_37 = 1;
		}
		if (func_678(unk_0x9EB17624F44A8DA4(), 7, &uVar1))
		{
			Global_1668000.f_38 = 1;
		}
		if (func_677(unk_0x9EB17624F44A8DA4()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_676(unk_0x9EB17624F44A8DA4(), iVar2);
				if (func_541(unk_0x9EB17624F44A8DA4(), iVar3, 0))
				{
					Global_1668000.f_39 = 1;
				}
				if (func_541(unk_0x9EB17624F44A8DA4(), iVar3, 2))
				{
					Global_1668000.f_40 = 1;
				}
				if (func_541(unk_0x9EB17624F44A8DA4(), iVar3, 1))
				{
					Global_1668000.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_676(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_536(Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_677(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_678(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_612(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_684(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_596(11));
		func_595(iVar1, &iVar0, 1);
		iVar2 = func_684(func_681(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_407(func_680(4, iVar0), -1, 0);
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

int func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
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
					return 3321;
				
				case 78:
					return 3329;
				
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
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
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
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
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
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
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
					return 3322;
				
				case 78:
					return 3330;
				
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
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
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
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
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
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
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
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
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
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case joaat("mpsv_lp0_31"):
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
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
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_681(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_596(iVar0) && iParam0 < func_682(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_682(int iParam0)
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
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_599(iParam0);
		return func_683(iVar0);
	}
	return (func_597(iParam0, -1) * iParam0 + 1);
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16308)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_599(iParam0);
		if (iVar1 == 0 && func_407(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1368219[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549282[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2549199[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_685(int iParam0)
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

int func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_595(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_407(func_680(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_688()
{
	return func_407(6146, -1, 0) != 0;
}

bool func_689()
{
	return func_407(5363, -1, 0) != 0;
}

bool func_690()
{
	return func_407(3811, -1, 0) != 0;
}

bool func_691()
{
	return func_407(3212, -1, 0) != 0;
}

bool func_692()
{
	return func_407(5362, -1, 0) != 0;
}

int func_693()
{
	int iVar0;
	
	iVar0 = func_436();
	if (iVar0 != func_63())
	{
		return Global_1627537[iVar0 /*532*/].f_11.f_93;
	}
	return 0;
}

int func_694(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_695(int iParam0)
{
	if (func_101(iParam0) == 225 || func_101(iParam0) == 226)
	{
		return func_694(iParam0);
	}
	return -1;
}

var func_696()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_543(unk_0x9EB17624F44A8DA4(), iVar0))
		{
			unk_0x872F1C1F8587CCC7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_697(bool bParam0)
{
	if (bParam0)
	{
		if (!func_105(unk_0x9EB17624F44A8DA4(), 9))
		{
			if (func_130(unk_0x9EB17624F44A8DA4()) != 0)
			{
				func_106(9);
			}
		}
	}
	else if (func_105(unk_0x9EB17624F44A8DA4(), 9))
	{
		func_104(9);
	}
}

int func_698(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_699(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_699(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_709();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_708() == 0)
	{
		func_706();
		return 0;
	}
	func_705(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_704(0);
		func_704(2);
		func_704(1);
	}
	else
	{
		func_709();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_704(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_704(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_704(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_704(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_709();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_387())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_703(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_700(1);
			func_703(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_700(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_702(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_158(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_701(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_701(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(uParam7))
	{
		func_158(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(iParam8))
	{
		func_158(iParam8);
	}
	if (!unk_0xAB019B170BF1309C(iParam9))
	{
		func_158(iParam9);
	}
	if (!unk_0xAB019B170BF1309C(iParam10))
	{
		func_158(iParam10);
	}
	if (!unk_0xAB019B170BF1309C(iParam11))
	{
		func_158(iParam11);
	}
	unk_0x271AA5469AF471B3();
}

bool func_702(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_703(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_704(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_705(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_706()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
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
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_707(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_707(struct<6> Param0, struct<6> Param6)
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

int func_708()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
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
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_707(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_709()
{
	if (func_702(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_710();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_710()
{
	func_711();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_711()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_714(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_713(unk_0xFC1458A37D98B502());
			if (func_712(iVar0) && (!func_702(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_712(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_712(int iParam0)
{
	return iParam0 < 3;
}

int func_713(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_714(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_714(int iParam0)
{
	if (func_712(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_715()
{
	if (!func_666())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_662();
}

void func_716()
{
	if (func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	switch (Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_9)
	{
		case 0:
			func_718();
			func_296();
			if (Local_98.f_117 == 2)
			{
				Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_9 = 2;
			}
			else if (Local_98.f_117 == 3)
			{
				Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_296();
			if (func_717())
			{
				func_653();
			}
			if (Local_98.f_117 == 3)
			{
				Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_796();
			break;
	}
}

bool func_717()
{
	return ((unk_0xC80D31E4B587871C(Local_98.f_1, 1) || unk_0xC80D31E4B587871C(Local_98.f_1, 3)) || unk_0xC80D31E4B587871C(Local_98.f_1, 5));
}

void func_718()
{
	func_738();
	func_737();
	func_674();
	func_656();
	func_727();
	func_726();
	func_721();
	func_720();
	func_641();
	func_719();
}

void func_719()
{
}

void func_720()
{
	if (func_717())
	{
		return;
	}
	if (!func_782())
	{
		return;
	}
	if (!Global_262145.f_14344)
	{
		return;
	}
	if (Local_98.f_115 == 0)
	{
		return;
	}
}

void func_721()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_782())
	{
		return;
	}
	if (func_717())
	{
		return;
	}
	fVar4 = func_140(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1426 != iVar0)
			{
				Var1 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 0) };
				func_90(10, 0, 0, 0, 0);
				func_722(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_1426 = iVar0;
				unk_0x872F1C1F8587CCC7(&iLocal_1419, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_324();
	}
}

void func_722(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	else
	{
		Global_2413426.f_6 = unk_0xBBA15366508D1BDE();
	}
	Var0.f_6 = Global_2413426.f_6;
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
	if (func_723(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
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
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413426 = { Var0 };
}

int func_723(int iParam0)
{
	if (((func_724(iParam0, 1) || func_128(iParam0)) || func_102(iParam0, 0)) || func_364(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_724(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_725(iParam0) != 0;
	}
	return func_264(iParam0, bParam1);
}

int func_725(int iParam0)
{
	if (func_879(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

void func_726()
{
	int iVar0;
	
	if (iLocal_1423 != Local_98.f_115)
	{
		if (func_782())
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					if (!unk_0x78E929955680CA05())
					{
						iVar0 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
						switch (Local_98.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_14341)
								{
									unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), Global_262145.f_14341, 0);
									unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_14342)
								{
									unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), Global_262145.f_14342, 0);
									unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_14343)
								{
									unk_0xC0EBC1452FCAB15C(Global_262145.f_14343);
									unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), Global_262145.f_14343, 0);
									unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
								}
								break;
						}
						iLocal_1423 = Local_98.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1423 = Local_98.f_115;
		}
	}
}

void func_727()
{
	int iVar0;
	
	if (!func_359())
	{
		if (func_736("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return;
	}
	iVar0 = func_130(unk_0x9EB17624F44A8DA4());
	if (iVar0 < 2)
	{
		if (func_736("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return;
	}
	if (!unk_0xC80D31E4B587871C(iLocal_1419, 2))
	{
		if (!func_735(86))
		{
			if (func_729(0, 1, 1, 1))
			{
				if (unk_0x622FF3AE4B1D07C3() == Local_98.f_118)
				{
					func_728("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_305(1);
					unk_0x872F1C1F8587CCC7(&iLocal_1419, 2);
				}
				else if (func_783() == Local_98.f_118)
				{
					func_728("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_305(1);
					unk_0x872F1C1F8587CCC7(&iLocal_1419, 2);
				}
				else if (func_284())
				{
					func_728("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_305(1);
					unk_0x872F1C1F8587CCC7(&iLocal_1419, 2);
				}
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_1419, 2))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_1419, 3))
		{
			if (func_729(0, 1, 1, 1))
			{
				if (!func_736("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x622FF3AE4B1D07C3() == Local_98.f_118 || func_783() == Local_98.f_118)
					{
						func_306("HUNT_HELPB", -1);
						func_305(1);
						unk_0x872F1C1F8587CCC7(&iLocal_1419, 3);
					}
				}
			}
		}
	}
}

void func_728(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam3);
}

int func_729(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xF491DD47B88AA84E())
	{
		return 0;
	}
	if (func_734())
	{
		return 0;
	}
	if (!unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_388())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_264(unk_0x9EB17624F44A8DA4(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_733(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (func_732())
	{
		return 0;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (Global_1574122)
	{
		return 0;
	}
	if (func_731())
	{
		return 0;
	}
	if (func_730())
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (Global_2521684)
	{
		return 0;
	}
	return 1;
}

bool func_730()
{
	return Global_2447174.f_579;
}

bool func_731()
{
	return Global_2447174.f_731;
}

bool func_732()
{
	return Global_2436181.f_2912.f_578;
}

int func_733(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_223 == 0)
	{
		return 0;
	}
	return 1;
}

int func_734()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_735(int iParam0)
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

bool func_736(char* sParam0, char* sParam1)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

void func_737()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_140(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_123(unk_0x9EB17624F44A8DA4()))
		{
			func_122();
		}
	}
}

void func_738()
{
	if (func_133())
	{
		if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1, 1))
		{
			func_108(0);
			unk_0x0EE72DB1CD8A3B86(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_130(unk_0x9EB17624F44A8DA4()) == 0)
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1, 1))
	{
		if (!func_782())
		{
			if (!func_132())
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_1, 6))
				{
					func_108(1);
					unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_739()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_63();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_2, iVar0))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_110, iVar0))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							if (func_783() == Local_98.f_118)
							{
								if (func_757(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_3, iVar0))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_112, iVar0))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
				{
					if (func_756(iVar0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_4, iVar0))
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_111, iVar0))
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_755(iVar0);
		if (func_359())
		{
			if (!unk_0xA6DECE14FC9A8C51(uLocal_1434[iVar0]))
			{
				if (!func_717())
				{
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1434[iVar0] = unk_0xCA43F0FC44D9B846(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1));
							if (func_783() == Local_98.f_118)
							{
								unk_0xF27F72CA15E148EE(uLocal_1434[iVar0], 12);
								unk_0x4B4040A0EC7DBA81(uLocal_1434[iVar0], 432);
								func_754(&(uLocal_1434[iVar0]), 6);
							}
							else
							{
								unk_0x4B4040A0EC7DBA81(uLocal_1434[iVar0], 480);
								func_754(&(uLocal_1434[iVar0]), 9);
							}
							unk_0x0A8FD2D5529E1737(uLocal_1434[iVar0], 1);
							unk_0xAA75C45BC4449A40(uLocal_1434[iVar0], 7000);
							unk_0xA5D25D3F884FF516(uLocal_1434[iVar0], 1.1f);
							unk_0x62BD54E491535B76(uLocal_1434[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_1434[iVar0]));
				}
				else if (func_717())
				{
					unk_0xE30CF11C0EE14316(&(uLocal_1434[iVar0]));
				}
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uLocal_1434[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_1434[iVar0]));
		}
		func_753(iVar0);
		func_752(iVar0);
		func_750(iVar0);
		switch (Local_98.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x8E1421E2A2A2FBD4())
				{
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_98.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xAAA8D20859E2D36D(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x96247F0EC873C446(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x8E1421E2A2A2FBD4())
				{
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_98.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xAAA8D20859E2D36D(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xC80D31E4B587871C(Local_98.f_108, iVar0))
										{
											unk_0x96247F0EC873C446(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0xF32FBF2453AC1753(Local_98.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xC80D31E4B587871C(Local_98.f_108, iVar0))
											{
												unk_0x0EE72DB1CD8A3B86(&(Local_98.f_108), iVar0);
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
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x16416C5B54FDBCBB(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x93F12E7D8D931858(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_746(iVar0);
										if (!unk_0x3AB6A1A9084FB0A4(uVar2))
										{
											unk_0xD68E88A8E0BE8697(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 0);
									unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x2217C45231E6A537(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x3FF3A0D63A2E2DB1(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_745(iVar0, &fVar5);
									if (iVar4 != func_63())
									{
										unk_0x8702B5F35BDDD0C1(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0x25D049AAC4603E65(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_98.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_748(Local_98.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x2EA90674750EA01E(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_98.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_748(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x2EA90674750EA01E(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_748(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_748(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x992E814DF611C58C(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x1ED974E122CB5C47(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_748(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x16416C5B54FDBCBB(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (func_782())
	{
		func_740();
	}
}

void func_740()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_741(uLocal_1680[iVar0], &(Local_1439[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_741(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		if (func_744())
		{
			Global_2436181 = unk_0x9EB17624F44A8DA4();
		}
		if (bParam3)
		{
			func_743(unk_0x47BA76CE3C825A08(uParam0), uParam1, 1, Global_2436181, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_743(unk_0x47BA76CE3C825A08(uParam0), uParam1, -1, Global_2436181, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(*uParam1))
	{
		func_742(uParam1);
	}
}

void func_742(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		unk_0xE30CF11C0EE14316(uParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(uParam0->f_7))
			{
				unk_0x36EE765E851207BF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_743(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(uParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, uParam4);
		unk_0xD73FCB9663FBC508(iParam0, uParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(uParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(sParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(sParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(sParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(sParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(sParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_744()
{
	return Global_1312831;
}

int func_745(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = func_63();
	fVar1 = 1E+08f;
	Var3 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar6)))
		{
			iVar7 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x25D049AAC4603E65(iVar7);
				if (iVar6 == Local_98.f_118 || Local_970[iVar6 /*14*/].f_10 == Local_98.f_118)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(iVar8, 1), Var3);
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
	if (iVar0 != func_63())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

var func_746(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_747(iParam0);
	if (iVar1 != func_63())
	{
		uVar0 = unk_0x25D049AAC4603E65(iVar1);
	}
	return uVar0;
}

int func_747(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	
	iVar0 = func_63();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar3)))
		{
			iVar7 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar3));
			uVar8 = unk_0x25D049AAC4603E65(iVar7);
			if (func_177(iVar7, 1))
			{
				if (!unk_0xC80D31E4B587871C(Local_970[iVar3 /*14*/].f_1, 1))
				{
					if (func_64(iVar7) == unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_118)))
					{
						if (!unk_0x3AB6A1A9084FB0A4(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(iVar8, 1), Var4);
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

int func_748(var uParam0)
{
	if (unk_0x0070DE1A1E73C71C(uParam0))
	{
		return 1;
	}
	if (func_749(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_749(var uParam0)
{
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return 0;
	}
	if (!unk_0x918CA1BFFAA03556(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_750(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_359())
	{
		return;
	}
	if (func_130(unk_0x9EB17624F44A8DA4()) < 1)
	{
		return;
	}
	if (!func_782() && !func_284())
	{
		return;
	}
	if (func_717())
	{
		return;
	}
	if (func_782())
	{
		unk_0x31758B9A51671C43(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0x31758B9A51671C43(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_98.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x1ED974E122CB5C47(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0xBDD6765E5846A7DE(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0xDFD115BB10FE46A9(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 0);
				func_751(uVar7, uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_751(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0xBDD6765E5846A7DE(2, unk_0xB3328BA8976B416C(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_752(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_98.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_98.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_783() != Local_98.f_118)
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	Var4 = { unk_0xB3328BA8976B416C(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_98.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_13), iParam0);
	}
}

void func_753(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_98.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_98.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_783() != Local_98.f_118)
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_98.f_2[iParam0 /*26*/].f_1))
	{
		unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	Var4 = { unk_0xB3328BA8976B416C(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_98.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_783() == Local_98.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
						return;
					}
					if (func_757(uVar7))
					{
						unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_754(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		uVar0 = func_321(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, uVar0);
	}
}

void func_755(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_98.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_98.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_98.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x88DDBE9908752BF0(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x90D5DFB054818BA7(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x7367FB97975F1E29(Var5, &fVar1, 0, 0))
							{
								if (unk_0xE97272C977DEADD3((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_98.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_756(int iParam0)
{
	if (unk_0x918CA1BFFAA03556(Local_98.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_98.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0xB6579D6FEB63269C(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0xB6579D6FEB63269C(unk_0xF32FBF2453AC1753(Local_98.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_757(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), uParam0))
	{
		return 1;
	}
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), uParam0))
	{
		return 1;
	}
	if (func_758())
	{
		if (unk_0xF004845B6324D7F1(unk_0x9EB17624F44A8DA4(), &uVar0))
		{
			if (unk_0x52C56492660097C7(uVar0))
			{
				uVar1 = unk_0x07F64790D10D1DB5(iVar0);
				if (unk_0x6ADD12BF4D6D2587(uVar1))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
					{
						if (unk_0x88DDBE9908752BF0(iVar1, 0))
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

bool func_758()
{
	return Global_1574306;
}

void func_759()
{
	int iVar0;
	int iVar1;
	
	if (Local_98.f_0 != 4)
	{
		iVar1 = unk_0xF6A72924028F588B(iLocal_1422);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if (unk_0xDE597476C8B96D1A(iVar1))
			{
				if (!func_717())
				{
					if (!func_782())
					{
						if (func_284())
						{
							if (func_177(iVar1, 1))
							{
								iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_118));
								if (func_74(iVar1, iVar0, 1))
								{
									if (!unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_8, iLocal_1422))
									{
										func_322(iVar1, 432, 1);
										func_317(iVar1, func_321(iLocal_1711), 1);
										unk_0x872F1C1F8587CCC7(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_8), iLocal_1422);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_8, iLocal_1422))
			{
				func_322(iVar1, 432, 0);
				func_317(iVar1, func_321(iLocal_1711), 0);
				unk_0x0EE72DB1CD8A3B86(&(Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_8), iLocal_1422);
			}
		}
	}
	iLocal_1422++;
	if (iLocal_1422 >= 32)
	{
		iLocal_1422 = 0;
	}
}

int func_760(bool bParam0)
{
	if (func_761(1))
	{
		return 1;
	}
	if (Global_2512808.f_4856.f_30)
	{
		Global_2512808.f_4856.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_239() == func_63() || !func_879(func_239(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_761(bool bParam0)
{
	bool bVar0;
	
	if (!func_434(1))
	{
		bVar0 = false;
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_63())
		{
			if (func_879(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 4 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 8) || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_762(func_101(unk_0x9EB17624F44A8DA4())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_490(31);
				if (func_303(func_101(unk_0x9EB17624F44A8DA4())))
				{
					func_490(81);
				}
				if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 != func_63() && unk_0x552F39AE86E07792(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
				{
					Global_1626121 = func_340(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57, -2, 0, 0);
					if (!func_238(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57))
					{
						func_490(88);
					}
				}
				else
				{
					Global_1626121 = 1;
				}
				Global_1626105 = { Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_762(int iParam0)
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
		case 229:
		case 230:
		case 233:
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

void func_763()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_98.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1680[iVar0] = Local_98.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_764()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x622FF3AE4B1D07C3() == Local_98.f_118 || func_783() == Local_98.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
			{
				unk_0xB0DD9292E54C7917(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_1), unk_0x9EB17624F44A8DA4(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0xB0DD9292E54C7917(unk_0x47BA76CE3C825A08(Local_98.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x9EB17624F44A8DA4(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_765()
{
	if (Local_98.f_118 > -1)
	{
		iLocal_1711 = func_639(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Local_98.f_118)));
	}
}

void func_766(float fParam0)
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_319())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

void func_767(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != iParam0)
	{
		func_781(-1);
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = iParam0;
		if (func_780() != -1)
		{
			func_779(-1);
		}
		if (func_778() != -1)
		{
			func_777(-1);
		}
		func_776(iParam2);
		func_774(iParam0);
		if (!func_112(iParam0))
		{
			fVar0 = func_111(iParam0);
			if (fVar0 != 1f)
			{
				func_766(fVar0);
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 1);
			}
		}
		if (!func_115(iParam0) || iParam3)
		{
			if (func_113(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xC0EBC1452FCAB15C(0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 0);
			}
			else if (unk_0xB89B7DB2727D69D6() < 5)
			{
				unk_0x94BD6F0436473406(1f);
				unk_0xC0EBC1452FCAB15C(5);
			}
		}
		if (func_132())
		{
			func_106(27);
		}
		if (bParam1)
		{
			if (!func_133())
			{
				func_108(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4)) || unk_0xC80D31E4B587871C(Global_2512808.f_4523, 0))
			{
				func_490(6);
			}
			func_773();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x1D29C781A978C4FB(3, 0);
			unk_0x1D29C781A978C4FB(5, 0);
		}
		if (func_128(unk_0x9EB17624F44A8DA4()) && func_120(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 8);
		}
		func_769();
		if (func_768(iParam0))
		{
			unk_0x1D29C781A978C4FB(3, 0);
			unk_0x1D29C781A978C4FB(5, 0);
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 6);
		}
	}
}

int func_768(int iParam0)
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

void func_769()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_772();
	iVar2 = func_64(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if (func_74(iVar1, iVar2, 1) || func_770(iVar1, unk_0x9EB17624F44A8DA4()))
			{
				unk_0x16BF46A5B08AE23D(unk_0x9EB17624F44A8DA4(), iVar1, uVar3);
				unk_0x16BF46A5B08AE23D(iVar1, unk_0x9EB17624F44A8DA4(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_770(int iParam0, int iParam1)
{
	if (func_177(iParam0, 1) && func_177(iParam1, 1))
	{
		return (func_771(iParam0) == func_64(iParam1) || func_771(iParam1) == func_64(iParam0));
	}
	return 0;
}

int func_771(int iParam0)
{
	if (func_177(iParam0, 1))
	{
		return Global_1627537[func_64(iParam0) /*532*/].f_11.f_443;
	}
	return func_63();
}

int func_772()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_436();
	if (iVar0 != func_63())
	{
		if (func_879(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xC80D31E4B587871C(Global_1627537[iVar1 /*532*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_773()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 4);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4523, 6))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 6);
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 0);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4523), 2);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_578 = 0;
	if (Global_2512808.f_4525 > 0)
	{
		unk_0xC0EBC1452FCAB15C(Global_2512808.f_4525);
	}
	Global_2512808.f_4524 = 0;
}

void func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_407(3774, -1, 0);
	iVar1 = func_775(iParam0);
	if (iVar1 != -1)
	{
		unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
		func_405(3774, iVar0, -1, 1, 0);
	}
}

int func_775(int iParam0)
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

void func_776(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (Global_1627537[iVar0 /*532*/].f_11.f_176 != iParam0)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_176 = iParam0;
	}
}

void func_777(int iParam0)
{
	if (Global_2512808.f_4856.f_158 != iParam0)
	{
		Global_2512808.f_4856.f_158 = iParam0;
	}
}

int func_778()
{
	return Global_2512808.f_4856.f_158;
}

void func_779(int iParam0)
{
	if (Global_2512808.f_4856.f_157 != iParam0)
	{
		Global_2512808.f_4856.f_157 = iParam0;
	}
}

int func_780()
{
	return Global_2512808.f_4856.f_157;
}

void func_781(int iParam0)
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_32 = iParam0;
}

int func_782()
{
	int iVar0;
	
	iVar0 = func_783();
	if (iVar0 > -1)
	{
		if (Local_98.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_783()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_63();
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = unk_0x622FF3AE4B1D07C3();
		iVar1 = unk_0x9EB17624F44A8DA4();
	}
	else
	{
		iVar0 = func_285();
		iVar1 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_567;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_970[iVar0 /*14*/].f_10 != -1)
	{
		return Local_970[iVar0 /*14*/].f_10;
	}
	if (func_119(iVar1))
	{
		Local_970[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_98.f_118)
		{
			func_697(1);
		}
	}
	else if (func_177(iVar1, 1))
	{
		iVar2 = func_64(iVar1);
		if (iVar2 != func_63())
		{
			if (unk_0xDE597476C8B96D1A(iVar2))
			{
				Local_970[iVar0 /*14*/].f_10 = unk_0x87678BB8392EFD41(iVar2);
			}
		}
	}
	return Local_970[iVar0 /*14*/].f_10;
}

int func_784()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x918CA1BFFAA03556(Local_98.f_2[iVar0 /*26*/].f_1))
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

int func_785()
{
	return Local_98.f_0;
}

int func_786(int iParam0)
{
	return Local_970[iParam0 /*14*/];
}

int func_787()
{
	var uVar0;
	
	func_792(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_791())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_790())
	{
		return 1;
	}
	if (func_789(157))
	{
		if (!func_788())
		{
			return 1;
		}
	}
	if (func_789(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_319() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_319()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_788()
{
	return Global_2447174.f_586;
}

int func_789(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_790()
{
	return Global_2456830;
}

bool func_791()
{
	return Global_2447174.f_581;
}

void func_792(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_793(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_793(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_879(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(iVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(iVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_794(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_794(int iParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_795()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_796()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_1419, 6))
		{
			if (unk_0x3A711520F83BAE98())
			{
				if (func_782() || func_284())
				{
					func_575(0, 4, 0, 0, -1, -1, -1, -1, -1);
					unk_0x872F1C1F8587CCC7(&iLocal_1419, 6);
				}
			}
		}
		uVar0 = Local_98.f_115;
		uVar1 = Local_98.f_121;
		iVar2 = -1;
		if (unk_0x3A711520F83BAE98())
		{
			iVar2 = Local_970[unk_0x622FF3AE4B1D07C3() /*14*/].f_11;
		}
		func_843(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x3A711520F83BAE98())
		{
			if (unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()) == iLocal_1424)
			{
				unk_0xCE93FCB8A8D8DF0B(unk_0xFC1458A37D98B502(), iLocal_1425);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_1419, 18))
	{
		func_327(1);
		unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 18);
	}
	func_842();
	if (Local_98.f_119 != -1)
	{
		if (unk_0xC80D31E4B587871C(iLocal_1419, 5))
		{
			if (unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(Local_98.f_119)))
			{
			}
		}
	}
	if (func_79(0))
	{
		func_78(0);
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xC80D31E4B587871C(Local_98.f_871, iVar3))
				{
					unk_0xCA107A9AAF17E75F(Local_98.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_1419, 17))
	{
		unk_0xC0EBC1452FCAB15C(iLocal_1713);
		unk_0x0EE72DB1CD8A3B86(&iLocal_1419, 17);
	}
	func_324();
	unk_0x872F1C1F8587CCC7(&iLocal_1420, 8);
	func_653();
	unk_0x3D2F639D46A69899(1);
	func_697(0);
	func_798(1, 0);
	unk_0xC0EBC1452FCAB15C(5);
	func_316();
	func_797();
}

void func_797()
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_798(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347666.f_1.f_108 != 0)
	{
		Global_1347666.f_1.f_108 = 0;
	}
	Global_1347666.f_1.f_109 = -1;
	Global_1347666.f_1.f_110 = -1;
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 167 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 168)
	{
		func_840();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 4);
	}
	if ((func_432() && iParam1 != 0) && Global_262145.f_16305)
	{
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 190 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 192)
		{
			func_822(unk_0x9EB17624F44A8DA4(), iParam1, 1, 0);
		}
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 164 || Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 208)
	{
		unk_0x1D29C781A978C4FB(3, 1);
		unk_0x1D29C781A978C4FB(5, 1);
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 = -1;
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_128(unk_0x9EB17624F44A8DA4()))
		{
			func_108(0);
		}
	}
	else if (func_820(unk_0x9EB17624F44A8DA4()) != -1)
	{
		func_781(-1);
	}
	func_819(func_63());
	if (func_79(16))
	{
		func_78(16);
	}
	func_816(0);
	func_776(-1);
	func_815();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_814(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_812(iVar1);
		iVar1++;
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 0))
	{
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 0);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 5);
	}
	iVar2 = func_309();
	if ((func_208(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_811(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_374(iVar2))
	{
		func_807(-1, 1);
	}
	else if (((((func_308(iVar2) || func_806(iVar2)) || func_805(iVar2)) || func_371(iVar2)) || func_369(iVar2)) || func_367(iVar2))
	{
	}
	else
	{
		func_807(-1, 1);
	}
	func_104(19);
	func_104(20);
	func_104(21);
	func_104(22);
	func_104(27);
	func_78(3);
	func_78(4);
	func_78(7);
	func_804();
	if (func_120(unk_0x9EB17624F44A8DA4()))
	{
		func_697(0);
	}
	func_104(29);
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_63();
	if (Global_2512808.f_4856.f_30 != 0)
	{
		Global_2512808.f_4856.f_30 = 0;
	}
	if (bParam0)
	{
		func_80();
	}
	if (!func_128(unk_0x9EB17624F44A8DA4()))
	{
		func_103();
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 6))
	{
		unk_0x1D29C781A978C4FB(3, 1);
		unk_0x1D29C781A978C4FB(5, 1);
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 6);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 7);
	}
	if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 8))
	{
		func_803("IMPEXP_SELFDES", 0);
		func_801("IMPEXP_SELFDES");
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 8);
	}
	func_799(iVar2, 0);
}

void func_799(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
		{
			unk_0xE859EF37EA7362D3(func_800(iParam0));
			unk_0x872F1C1F8587CCC7(&(Global_1667858.f_3), 9);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1667858.f_3, 9))
	{
		unk_0xE02E32C69260FBB7(func_800(iParam0));
		unk_0x0EE72DB1CD8A3B86(&(Global_1667858.f_3), 9);
	}
}

char* func_800(int iParam0)
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

void func_801(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_709();
					Global_104555.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_802(iVar0))
					{
					}
					else
					{
						Global_104555.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104555.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_802(int iParam0)
{
	if ((Global_104555.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104555.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104555.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_803(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x8C1C362CA8299475(&(Global_104555.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x74C475EB8E73D398(&(Global_104555.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104555.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104555.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104555.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104555.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104555.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104555.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104555.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104555.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104555.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104555.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_804()
{
	if (func_123(unk_0x9EB17624F44A8DA4()))
	{
		func_104(25);
	}
}

int func_805(int iParam0)
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

int func_806(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_807(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_309();
	}
	if (iParam0 > 0)
	{
		if (func_436() != func_63())
		{
			if (func_810(unk_0x9EB17624F44A8DA4()) == unk_0x9EB17624F44A8DA4())
			{
				Global_2492493.f_93[func_809(iParam0)] = 1;
			}
		}
		iVar0 = func_809(159);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(157);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(148);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(164);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(142);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(152);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(166);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(170);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(173);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(179);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(200);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(201);
		if (func_808(iVar0, Global_262145.f_11946, bParam1))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(182);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(183);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(185);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(186);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(180);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(195);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(197);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(198);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(207);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(208);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(209);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(214);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(215);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(216);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(217);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(218);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(219);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(220);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(221);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_808(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_105(unk_0x9EB17624F44A8DA4(), 19) && !func_105(unk_0x9EB17624F44A8DA4(), 20)) && !func_105(unk_0x9EB17624F44A8DA4(), 9))
		{
			return 0;
		}
	}
	if (Global_2492493.f_93[iParam0] == 1 && func_8(&(Global_2492493[iParam0 /*2*/])))
	{
		if (func_655(&(Global_2492493[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492493.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_809(int iParam0)
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

int func_810(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_35;
}

void func_811(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_309();
	}
	if (iParam0 > 0)
	{
		if (func_436() != func_63())
		{
			Global_2492493.f_93[func_809(iParam0)] = 1;
		}
		iVar0 = func_809(155);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(163);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(160);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(153);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(162);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(154);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(171);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(172);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(199);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(194);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(193);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(210);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(205);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(189);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_809(211);
		if (func_808(iVar0, Global_262145.f_11947, 0))
		{
			func_151(&(Global_2492493[iVar0 /*2*/]));
			func_7(&(Global_2492493[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_812(int iParam0)
{
	if (!func_28(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/], func_813(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_303[iParam0 /*3*/] = { func_813() };
	}
	if (!func_28(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/], func_813(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_290[iParam0 /*3*/] = { func_813() };
	}
}

Vector3 func_813()
{
	struct<3> Var0;
	
	return Var0;
}

void func_814(int iParam0)
{
	if (!func_28(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/], func_813(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_145[iParam0 /*3*/] = { func_813() };
	}
	if (!func_28(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/], func_813(), 0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_120[iParam0 /*3*/] = { func_813() };
	}
}

void func_815()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573842 = { Var0 };
	Global_1573842.f_13 = func_63();
	if (unk_0xC80D31E4B587871C(Global_1573340, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1573340, 3);
	}
}

void func_816(bool bParam0)
{
	if (bParam0)
	{
		if (!func_390(unk_0x9EB17624F44A8DA4(), 14))
		{
			func_818(14);
		}
	}
	else if (func_390(unk_0x9EB17624F44A8DA4(), 14))
	{
		func_817(14);
	}
}

void func_817(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_818(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

void func_819(int iParam0)
{
	if (func_119(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x9EB17624F44A8DA4() != iParam0)
		{
			if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 != iParam0)
			{
				Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_443 = iParam0;
				if (iParam0 != func_63())
				{
				}
			}
		}
	}
}

int func_820(int iParam0)
{
	if (func_821(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_32;
	}
	return -1;
}

int func_821(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_32 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_822(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_543(iParam0, iParam1) && func_839(iParam0, iParam1))
	{
		iVar0 = func_542(iParam0, iParam1);
		func_826(iVar0, bParam2, bParam3);
		func_823(iVar0, 1);
	}
}

void func_823(int iParam0, int iParam1)
{
	if (!func_825(iParam0))
	{
		return;
	}
	func_529(func_824(iParam0), iParam1, -1, 1);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_6 = iParam1;
}

int func_824(int iParam0)
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

bool func_825(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_826(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_676(unk_0x9EB17624F44A8DA4(), iParam0);
	if (!bParam1)
	{
		func_838(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492401[iParam0];
		iVar0 = func_837(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1669398 = -1;
		}
		func_836(iParam0, 0, bParam2);
	}
	else if (func_834(iParam0, bParam2))
	{
		iVar0 = func_833(iVar2, 0);
		iVar3 = func_628(unk_0x9EB17624F44A8DA4(), iVar2);
		iVar4 = func_832(iVar2, bParam2);
		iVar5 = func_833(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_831(iVar2) && func_830(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_838(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_829(unk_0x9EB17624F44A8DA4(), iVar2) > 0)
		{
			func_828(iParam0, (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_832(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_833(iVar2, bParam2) / func_829(unk_0x9EB17624F44A8DA4(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_831(iVar2) && func_830(unk_0x9EB17624F44A8DA4(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_827(unk_0x9EB17624F44A8DA4(), iVar2, iVar0, bParam2);
}

void func_827(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (func_536(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595693[iParam0 /*680*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_828(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_829(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_536(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_830(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_536(iParam1) && func_831(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_831(int iParam0)
{
	return func_429(iParam0) == 5;
}

int func_832(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_429(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16276;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16281;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16275;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16280;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16274;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16279;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16272;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16277;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16273;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16278;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20371;
				if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20372;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20355;
				if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20356;
				}
			}
			break;
	}
	return uVar0;
}

int func_833(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_429(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16257;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16266);
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16271);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16258;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16265);
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16270);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16259;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16264);
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16269);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16260;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16262);
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16267);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16261;
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16263);
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16268);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20368;
			}
			else
			{
				iVar0 = Global_262145.f_20352;
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20369);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20353);
				}
			}
			if (func_541(unk_0x9EB17624F44A8DA4(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20370);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20354);
				}
			}
			if (func_830(unk_0x9EB17624F44A8DA4(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_834(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_530(15384, -1, -1);
	}
	return func_530(func_835(iParam0), -1, -1);
}

int func_835(int iParam0)
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

void func_836(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_529(15384, iParam1, -1, 1);
		return;
	}
	func_529(func_835(iParam0), iParam1, -1, 1);
}

int func_837(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492401[iParam0];
	iVar1 = func_676(unk_0x9EB17624F44A8DA4(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492408;
	}
	if (func_831(iVar1))
	{
		if (func_830(unk_0x9EB17624F44A8DA4(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_838(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2492408 = iParam1;
		return;
	}
	Global_2492401[iParam0] = iParam1;
}

int func_839(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_543(iParam0, iParam1))
	{
		iVar0 = func_542(iParam0, iParam1);
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_840()
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 28);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 29);
	func_841(24);
}

void func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_842()
{
	unk_0x9EA1BA1DD45771B3(iLocal_1424);
}

void func_843(var uParam0, var uParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x436287B7DB306165();
	Var1.f_0 = Global_1667867;
	Var1.f_1 = Global_1667867.f_1;
	Var1.f_2 = Global_1667867.f_2;
	Var1.f_3 = Global_1667867.f_3;
	Var1.f_4 = Global_1667867.f_4;
	Var1.f_5 = Global_1667867.f_5;
	Var1.f_6 = Global_1667867.f_6;
	Var1.f_7 = Global_1667867.f_7;
	Var1.f_8 = Global_1667867.f_8;
	Var1.f_9 = Global_1667867.f_9;
	Var1.f_10 = Global_1667867.f_10;
	Var1.f_11 = Global_1667867.f_11;
	Var1.f_12 = Global_1667867.f_12;
	Var1.f_13 = Global_1667867.f_14;
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x74C475EB8E73D398(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1667867.f_15;
			Var15.f_15 = Global_1667867.f_16;
			Var15.f_16 = Global_1667867.f_17;
			unk_0x74D82435B879FAD5(&Var15);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1667867.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xD70D34CCB1D634E4(&Var32);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1667867.f_15;
			Var49.f_15 = uParam0;
			unk_0xE9F89A00217C685C(&Var49);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1667867.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0xE2427E99E7433EE3(&Var65);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1667867.f_15;
			Var82.f_15 = uParam0;
			unk_0xD708DF69951B6F82(&Var82);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1667867.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0x9DEEAC2E0047DF06(&Var98);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1667867.f_15;
			unk_0xAB69F4EDF0D15E45(&Var116);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1667867.f_15;
			unk_0x443B083A340D5723(&Var134);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1667867.f_15;
			unk_0xD66B6A28511DC697(&Var153);
		}
	}
	func_844();
}

void func_844()
{
	struct<18> Var0;
	
	Global_1667867 = { Var0 };
}

void func_845(struct<21> Param0)
{
	func_877(func_878(Param0.f_0), Param0);
	unk_0xBC60D873F181A18E(16);
	unk_0x7BC094E5B24A760D(8);
	func_876(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_98, 872);
	unk_0xE7BC983D1386C9EE(&Local_970, 449);
	if (!func_875())
	{
		func_796();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x941BE77305BB5695(0);
		if (unk_0x8E1421E2A2A2FBD4())
		{
		}
		func_872();
		func_846(0, 0);
		Local_970[unk_0x622FF3AE4B1D07C3() /*14*/] = 0;
	}
	else
	{
		func_796();
	}
}

void func_846(int iParam0, int iParam1)
{
	func_871();
	func_849(1);
	if ((iParam0 != 0 && unk_0x552F39AE86E07792(iParam1)) && func_848(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x872F1C1F8587CCC7(&Global_1667853, 0);
				break;
			}
	}
	if (!func_419() && !func_177(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (func_136())
		{
			func_107(3);
		}
	}
	func_107(4);
	if (func_434(0))
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_57 = func_436();
	}
	if (func_303(iParam0))
	{
		func_626();
		Global_1667885.f_18 = func_604(func_239());
	}
	else if (func_307(func_820(unk_0x9EB17624F44A8DA4())))
	{
		func_624();
		Global_1667938.f_18 = func_604(func_239());
	}
	func_847();
}

void func_847()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347666.f_532[iVar0 /*42*/].f_1 = func_63();
		Global_1347666.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_848(int iParam0, bool bParam1)
{
	return func_74(unk_0x9EB17624F44A8DA4(), iParam0, bParam1);
}

void func_849(bool bParam0)
{
	int iVar0;
	
	func_841(33);
	func_841(34);
	func_841(35);
	func_841(36);
	func_841(37);
	func_841(38);
	func_841(39);
	func_841(40);
	func_841(43);
	func_841(41);
	func_841(54);
	func_841(42);
	func_841(47);
	func_870(23);
	func_870(24);
	func_841(92);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 2);
	func_869();
	func_864();
	func_859();
	func_851();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_850(3))
	{
		func_870(3);
	}
	else if (func_850(4))
	{
		func_870(4);
	}
	else if (func_850(5))
	{
		func_870(5);
	}
	else if (func_850(6))
	{
		func_870(6);
	}
	else if (func_850(7))
	{
		func_870(7);
	}
	else if (((((((((((((((((func_850(0) || func_850(1)) || func_850(2)) || func_850(8)) || func_850(9)) || func_850(10)) || func_850(11)) || func_850(12)) || func_850(13)) || func_850(14)) || func_850(15)) || func_850(16)) || func_850(17)) || func_850(18)) || func_850(19)) || func_850(20)) || func_850(21)) || func_850(22))
	{
		func_870(8);
		func_870(0);
		func_870(1);
		func_870(2);
		func_870(9);
		func_870(10);
		func_870(11);
		func_870(12);
		func_870(13);
		func_870(14);
		func_870(15);
		func_870(16);
		func_870(17);
		func_870(18);
		func_870(19);
		func_870(20);
		func_870(21);
		func_870(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512808.f_4856.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_850(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_14[iVar0], iVar1);
}

void func_851()
{
	if (func_858())
	{
		func_857(0);
		func_857(1);
		func_857(2);
		func_857(3);
		func_857(4);
		func_857(5);
		if (func_856(32))
		{
			if (func_853(func_854(), 3))
			{
				func_852(func_854(), 3);
			}
			func_857(32);
		}
	}
}

void func_852(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_853(int iParam0, int iParam1)
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_854()
{
	if (func_855())
	{
		Global_104555.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_855()
{
	int iVar0;
	
	iVar0 = func_64(unk_0x9EB17624F44A8DA4());
	if (((iVar0 != unk_0x9EB17624F44A8DA4() && iVar0 != func_63()) && unk_0x552F39AE86E07792(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_23[iVar0], iVar1);
}

void func_857(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_23[iVar0]), iVar1);
}

int func_858()
{
	if ((((func_856(1) || func_856(0)) || func_856(2)) || func_856(4)) || func_856(5))
	{
		return 1;
	}
	return 0;
}

void func_859()
{
	if (func_863())
	{
		func_862(0);
		func_862(1);
		func_862(2);
		func_862(3);
		func_862(4);
		func_862(5);
		func_862(6);
		func_862(7);
		if (func_861(8))
		{
			func_862(8);
		}
		if (func_861(15))
		{
			if (func_853(func_860(), 3))
			{
				func_852(func_860(), 3);
			}
			func_862(15);
		}
	}
}

int func_860()
{
	if (func_855())
	{
		Global_104555.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_861(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_21[iVar0], iVar1);
}

void func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_21[iVar0]), iVar1);
}

int func_863()
{
	if ((((((((func_861(0) || func_861(1)) || func_861(2)) || func_861(3)) || func_861(4)) || func_861(5)) || func_861(6)) || func_861(7)) || func_861(8))
	{
		return 1;
	}
	return 0;
}

void func_864()
{
	if (func_868())
	{
		func_867(0);
		func_867(1);
		func_867(2);
		func_867(3);
		func_867(4);
		func_867(5);
		func_867(6);
		func_867(7);
		func_867(8);
		func_867(9);
		func_867(10);
		func_867(11);
		func_867(12);
		if (func_866(13))
		{
			if (func_853(func_865(), 3))
			{
				func_852(func_865(), 3);
			}
			func_867(13);
		}
	}
}

int func_865()
{
	if (func_855())
	{
		Global_104555.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_866(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_19[iVar0], iVar1);
}

void func_867(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_19[iVar0]), iVar1);
}

int func_868()
{
	if ((((((((((((func_866(0) || func_866(1)) || func_866(2)) || func_866(3)) || func_866(4)) || func_866(5)) || func_866(6)) || func_866(7)) || func_866(8)) || func_866(9)) || func_866(10)) || func_866(11)) || func_866(12))
	{
		return 1;
	}
	return 0;
}

void func_869()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512808.f_4856.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_870(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_14[iVar0]), iVar1);
}

void func_871()
{
	struct<14> Var0;
	
	Global_1667867 = { Var0 };
	Global_1667867.f_14 = 0;
	Global_1667867.f_15 = 0;
}

void func_872()
{
	int iVar0;
	int iVar1;
	
	unk_0x4DE114E3C7F8B7C2("relHeadHunterPlayer", &iLocal_1424);
	iVar0 = unk_0x8801269555D2E37F(unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0xF96119FCCD4D1889(5, Global_1574725[iVar1], iLocal_1424);
		unk_0xF96119FCCD4D1889(5, iLocal_1424, Global_1574725[iVar1]);
		unk_0xF96119FCCD4D1889(1, Global_1574725[iVar1], Global_1574768);
		unk_0xF96119FCCD4D1889(1, Global_1574768, Global_1574725[iVar1]);
		unk_0xF96119FCCD4D1889(iVar0, iLocal_1424, joaat("COP"));
		unk_0xF96119FCCD4D1889(iVar0, joaat("COP"), iLocal_1424);
		unk_0xF96119FCCD4D1889(1, iLocal_1424, Global_1574770[5]);
		unk_0xF96119FCCD4D1889(1, Global_1574770[5], iLocal_1424);
		unk_0xF96119FCCD4D1889(1, iLocal_1424, Global_1574758);
		unk_0xF96119FCCD4D1889(1, Global_1574758, iLocal_1424);
		iVar1++;
	}
	unk_0xF96119FCCD4D1889(5, iLocal_1424, Global_1574768);
	unk_0xF96119FCCD4D1889(5, Global_1574768, iLocal_1424);
	unk_0xF96119FCCD4D1889(1, 2017343592, Global_1574768);
	unk_0xF96119FCCD4D1889(5, 2017343592, iLocal_1424);
	func_874(1, &Global_1574768);
	func_873(&Global_1574768);
	func_873(&iLocal_1424);
}

void func_873(int iParam0)
{
	unk_0xF96119FCCD4D1889(1, -1865950624, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, -1865950624);
	unk_0xF96119FCCD4D1889(1, 296331235, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, 296331235);
	unk_0xF96119FCCD4D1889(1, 1166638144, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, 1166638144);
	unk_0xF96119FCCD4D1889(1, 2037579709, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, 2037579709);
	unk_0xF96119FCCD4D1889(1, 2017343592, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, 2017343592);
	unk_0xF96119FCCD4D1889(1, -1821475077, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, -1821475077);
	unk_0xF96119FCCD4D1889(1, 1782292358, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, 1782292358);
	unk_0xF96119FCCD4D1889(1, -1033021910, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, -1033021910);
	unk_0xF96119FCCD4D1889(1, -1285976420, *iParam0);
	unk_0xF96119FCCD4D1889(1, *iParam0, -1285976420);
}

void func_874(int iParam0, var uParam1)
{
	unk_0xF96119FCCD4D1889(iParam0, joaat("COP"), *uParam1);
	unk_0xF96119FCCD4D1889(iParam0, *uParam1, joaat("COP"));
	unk_0xF96119FCCD4D1889(iParam0, joaat("army"), *uParam1);
	unk_0xF96119FCCD4D1889(iParam0, *uParam1, joaat("army"));
	unk_0xF96119FCCD4D1889(iParam0, -183807561, *uParam1);
	unk_0xF96119FCCD4D1889(iParam0, *uParam1, -183807561);
}

int func_875()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_791())
		{
			return 0;
		}
		if (func_789(155))
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

int func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_797();
			}
			else
			{
				return 0;
			}
		}
		if (!func_744())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_797();
					}
					else
					{
						return 0;
					}
				}
				if (func_791())
				{
					if (!bParam2)
					{
						func_797();
					}
					else
					{
						return 0;
					}
				}
				if (func_789(155))
				{
					if (!bParam2)
					{
						func_797();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_797();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_797();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_797();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_877(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_797();
	}
	unk_0xAEA89A7E72415961(uParam0, 0, Param1.f_16);
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_879(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

