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
	struct<872> Local_99 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_971[32];
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435[4] = { 0, 0, 0, 0 };
	struct<8> Local_1440[30];
	var uLocal_1681[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1712 = 0;
	var uLocal_1713 = 0;
	int iLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
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
	iLocal_1427 = -1;
	if (unk_0x1995B52453EF6537() && func_729(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
	{
		func_712(ScriptParam_0);
	}
	else
	{
		func_665();
	}
	while (true)
	{
		func_664();
		if (func_656())
		{
			func_665();
		}
		Global_1759248.f_2 = Local_99.f_863;
		Global_1759248.f_3 = Local_99.f_864;
		switch (func_655(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_654() == 1)
				{
					if (func_653())
					{
						func_652();
						if (func_651())
						{
							func_636(166, 1, -1, 1);
							unk_0x028AA922F2B17B2A(3);
							func_635(0f);
							iLocal_1426 = unk_0x627440686F6E9BBB(unk_0xD5A676B97920D126());
							unk_0x417BCC1ECC12E9A2(unk_0xD5A676B97920D126(), iLocal_1425);
						}
						else
						{
							func_636(166, 0, -1, 1);
						}
						func_634();
						func_633();
						func_632();
						Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 1;
					}
				}
				else if (func_654() == 4)
				{
					Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_629(1))
				{
					Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 2;
				}
				if (func_654() == 1)
				{
					func_628();
					func_608();
					func_585();
					func_287();
					func_278();
					if (func_651() || func_276())
					{
						func_135(&(Global_1342709.f_527), &Global_1342709, 24, &(Global_1342709.f_1), &(Global_1342709.f_110), -1, 0);
					}
					func_73();
				}
				else if (func_654() == 4)
				{
					Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_99.f_845));
				if (func_67(&(Local_99.f_845)))
				{
					Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 4;
			
			case 4:
				func_665();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_654())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0x87B63DFBDD3C9326(&(Local_99.f_863), &(Local_99.f_864));
						Local_99.f_0 = 1;
						Local_99.f_118 = unk_0x1E7FB1CA38C403F6();
						Local_99.f_119 = unk_0xFB6B3EEFAB2DD12C();
						func_636(166, 1, -1, 1);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
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
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 2))
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
	switch (Local_99.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xF44A5E894FE76438(Local_99.f_1, 1))
			{
				Local_99.f_117 = 2;
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 3))
			{
				Local_99.f_117 = 2;
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
	if (!unk_0xF44A5E894FE76438(Local_99.f_1, 6))
	{
		if (!func_8(&(Local_99.f_849)))
		{
			func_7(&(Local_99.f_849), 0, 0);
		}
		else if (func_6(&(Local_99.f_849), 500, 0))
		{
			unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 6);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_99.f_847)))
	{
		func_7(&(Local_99.f_847), 0, 0);
	}
	else if (func_6(&(Local_99.f_847), func_10(), 0))
	{
		unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_13013;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x04DE35D10A718EEF())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_99.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_99.f_2[iVar0 /*26*/] == 1)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xF44A5E894FE76438(Local_99.f_109, iVar0))
										{
											unk_0xB8A73E7DA87B2968(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xF44A5E894FE76438(Local_99.f_110, iVar0))
										{
											unk_0xB8A73E7DA87B2968(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xF44A5E894FE76438(Local_99.f_111, iVar0))
										{
											unk_0xB8A73E7DA87B2968(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xF44A5E894FE76438(Local_99.f_112, iVar0))
										{
											Local_99.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_99.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x81C4995860081BC3(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1)))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xF44A5E894FE76438(Local_99.f_112, iVar0))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x6A0583ECFCCECC9B(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xF44A5E894FE76438(Local_99.f_110, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xF44A5E894FE76438(Local_99.f_111, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/].f_24)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/].f_25)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 6;
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
				switch (Local_99.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/] == 0)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_99.f_2[iVar0 /*26*/] == 2)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_99.f_2[iVar0 /*26*/].f_17 == 3 || Local_99.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_24)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_17 == 3 || Local_99.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x6A0583ECFCCECC9B(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
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
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return !func_13(unk_0xE95C934718B1A4FF(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(uParam0, 0))
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

int func_14(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xB8A73E7DA87B2968(&(Local_99.f_116), iVar0);
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			iVar1 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0x7DB7C94CC67E6154(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312731;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	if (Local_99.f_0 != 4)
	{
		iLocal_1422 = 0;
		while (iLocal_1422 < unk_0x11B9E7FF50B2F4CC())
		{
			if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iLocal_1422)))
			{
				iVar3 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iLocal_1422));
				if (!func_17(iVar3, 0))
				{
					if (func_729(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1422);
					func_23(iLocal_1422);
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xF44A5E894FE76438(Local_99.f_1, 1) || unk_0xF44A5E894FE76438(Local_99.f_1, 3)) || unk_0xF44A5E894FE76438(Local_99.f_1, 5))
							{
								if (!unk_0xF44A5E894FE76438(Local_971[iLocal_1422 /*14*/].f_1, 4))
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
			else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 5))
			{
				if (Local_99.f_118 > -1)
				{
					if (iLocal_1422 == Local_99.f_118)
					{
						unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 5);
					}
				}
			}
			iLocal_1422++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xF44A5E894FE76438(Local_99.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_99.f_115 != iVar0)
		{
			Local_99.f_115 = iVar0;
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 1);
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 2);
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
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_113, iVar0))
			{
				if (!func_8(&(Local_99.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_99.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_99.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_99.f_113), iVar0);
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
		if (!unk_0xF44A5E894FE76438(Local_99.f_109, iVar0))
		{
			if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_109), iVar0);
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_110, iVar0))
		{
			if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_110), iVar0);
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_112, iVar0))
		{
			if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_112), iVar0);
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_111, iVar0))
		{
			if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_111), iVar0);
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_99.f_113, iVar0))
		{
			if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_113), iVar0);
			}
			else if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_113), iVar0);
			}
		}
		if (Local_99.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_99.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_12, iVar0))
				{
					Local_99.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_99.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xF44A5E894FE76438(Local_971[iParam0 /*14*/].f_13, iVar0))
				{
					Local_99.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xF44A5E894FE76438(Local_99.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							unk_0x7DB7C94CC67E6154(unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2), unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iParam0)), 1);
							unk_0xB8A73E7DA87B2968(&(Local_99.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(Local_99.f_114), iParam0);
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
	
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_99.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
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
	
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_99.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_99.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_99.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x66A05E630CEC173C(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x500FFA49AC5ABB1D(Var3, 10f, 1, 0, 0, 1);
							unk_0xB8A73E7DA87B2968(&(Local_99.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0x28874DB1CA2EB0D2(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x0C4CBD605A865339(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1425);
							unk_0x4790D4CCED5150A0(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0x80E3357FDEF45C21(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
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

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_99.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_99.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
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
	
	iVar1 = Local_99.f_2[iParam0 /*26*/];
	iVar2 = Local_99.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_99.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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
	
	if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_99.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x4EA5429144EA2576(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574690);
											unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
											unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
					if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x4EA5429144EA2576(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_99.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_99.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_99.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574690);
										unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
										unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0xCEFA2AEA28935397(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x67439B36E65B7EB9(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0x37B0D239F4029CF2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xBC0082E17CEB6616(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x5C0EF8ACF10EF629(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0x3C7ED9A58011F595(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0xCC1ADAE00A66FF6C(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0x97B7B71C9B94E019(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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
	return unk_0xF2DB717A73826179(Global_262145.f_13021);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_13020;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	iVar0 = unk_0x8C855D8124E955CE(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x3EE3A80A2D8115F8(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam9);
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

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
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
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_99.f_2[iParam0 /*26*/] == 0 || Local_99.f_2[iParam0 /*26*/] == 2);
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
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
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
	
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_99.f_2[iParam0 /*26*/].f_11;
				if (unk_0x66A05E630CEC173C(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_99.f_2[iParam0 /*26*/].f_2), iVar0, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0))
							{
								unk_0x0C4CBD605A865339(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x28874DB1CA2EB0D2(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x09AB636BA0F9BE90(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_2), 1, iLocal_1425);
								unk_0x5919F7382C7F12DB(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x4790D4CCED5150A0(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0x6D20A3AA82585D8C(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xD7F5C6888DC98485(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xE8EDD220AC349D0D(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x80E3357FDEF45C21(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x6740CDC3F968E866(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x4EA5429144EA2576(1))
					{
						iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574690);
								unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB8A73E7DA87B2968(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x4EA5429144EA2576(1))
				{
					iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574690);
								unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB8A73E7DA87B2968(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x4EA5429144EA2576(1))
				{
					iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_99.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_99.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_99.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_99.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_99.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_99.f_2[iParam0 /*26*/].f_13, Local_99.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x58A5671D02E335D1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574690);
								unk_0xA1851893C19F6403(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0xB1B255D6E393D8E1(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCEFA2AEA28935397(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x67439B36E65B7EB9(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0x37B0D239F4029CF2(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0xBC0082E17CEB6616(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x5C0EF8ACF10EF629(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0x3C7ED9A58011F595(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0xCC1ADAE00A66FF6C(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0x6D20A3AA82585D8C(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xB8A73E7DA87B2968(&(Local_99.f_107), iParam0);
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
	return unk_0xF2DB717A73826179(Global_262145.f_13019);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_13018;
}

float func_50(int iParam0)
{
	if (func_28(Local_99.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
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
			if (!unk_0xF44A5E894FE76438(Local_99.f_871, iVar1))
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
		Local_99.f_865[iVar0] = unk_0x2B2CCF3F6B9ED3A3(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xB8A73E7DA87B2968(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_99.f_865[iVar0] = unk_0x2B2CCF3F6B9ED3A3(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xB8A73E7DA87B2968(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_99.f_865[iVar0] = unk_0x2B2CCF3F6B9ED3A3(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xB8A73E7DA87B2968(&(Local_99.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x7BC26452241AC7C9(0, Local_99.f_122);
			if (!func_28(Local_99.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_123[iVar0 /*36*/] };
					*uParam2 = Local_99.f_123[iVar0 /*36*/].f_3;
					Local_99.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x7BC26452241AC7C9(0, Local_99.f_122);
			if (!func_28(Local_99.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_123[iVar0 /*36*/] };
					*uParam2 = Local_99.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_99.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x7BC26452241AC7C9(0, 10);
			if (!func_28(Local_99.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_99.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_99.f_484[iVar0 /*36*/] };
					*uParam2 = Local_99.f_484[iVar0 /*36*/].f_3;
					Local_99.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
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
	Global_2404994.f_2++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_56(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_729(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
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
								if (unk_0x8E92CDAEB8357ABD(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x8E92CDAEB8357ABD(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_55(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_729(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_56(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_62(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_59(unk_0xFB6B3EEFAB2DD12C(), iParam0))
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
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_62(iParam0) };
		Global_2482018 = { func_62(iParam1) };
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

void func_64()
{
	Local_99.f_2[0 /*26*/] = 2;
	Local_99.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_99.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[1 /*26*/] = 2;
	Local_99.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_99.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[2 /*26*/] = 0;
	Local_99.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_99.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_99.f_2[3 /*26*/] = 0;
	Local_99.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_99.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_99.f_122 == 0)
	{
		if (Local_99.f_121 == 0)
		{
			Local_99.f_122 = 10;
		}
		else
		{
			Local_99.f_122 = 9;
		}
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 4))
	{
		return;
	}
	switch (Local_99.f_121)
	{
		case 0:
			Local_99.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_99.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_99.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_99.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_99.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_99.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_99.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_99.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_99.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_99.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_99.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_99.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_99.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_99.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_99.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_99.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_99.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_99.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_99.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_99.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_99.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_99.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_99.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_99.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_99.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_99.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_99.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_99.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_99.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_99.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_99.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_99.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_99.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_99.f_123[6 /*36*/].f_14[2] = 180f;
			Local_99.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_99.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_99.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_99.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_99.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_99.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_99.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_99.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_99.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_99.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_99.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_99.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_99.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_99.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_99.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_99.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_99.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_99.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_99.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_99.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_99.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_99.f_484[0 /*36*/].f_3 = 179.583f;
			Local_99.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_99.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_99.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_99.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_99.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_99.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_99.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_99.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_99.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_99.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_99.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_99.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_99.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_99.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_99.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_99.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_99.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_99.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_99.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_99.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_99.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_99.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_99.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_99.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_99.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_99.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_99.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_99.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_99.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_99.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_99.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_99.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_99.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_99.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_99.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_99.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_99.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_99.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_99.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_99.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_99.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_99.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_99.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_99.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_99.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_99.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_99.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_99.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_99.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_99.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_99.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_99.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_99.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_99.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_99.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_99.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_99.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_99.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_99.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_99.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_99.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_99.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_99.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_99.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_99.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_99.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_99.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_99.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_99.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_99.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_99.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_99.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_99.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_99.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_99.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_99.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_99.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_99.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_99.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_99.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_99.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_99.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_99.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_99.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 4);
}

var func_66()
{
	if (Local_99.f_121 != -1)
	{
		return Local_99.f_121;
	}
	if (Local_99.f_121 == -1)
	{
		if (unk_0xE452B0FA06EF2B33(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0)) == joaat("City"))
		{
			Local_99.f_121 = 0;
		}
		else
		{
			Local_99.f_121 = 1;
		}
	}
	return Local_99.f_121;
}

int func_67(var uParam0)
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

void func_68(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
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
	
	if (Local_99.f_119 != -1)
	{
		iVar0 = unk_0x7A4693BB354F3CD3(Local_99.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0x42AFB71D42AF78EA(5, Global_1574648[iVar1], Global_1574690);
						unk_0x42AFB71D42AF78EA(5, Global_1574690, Global_1574648[iVar1]);
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
		if (Global_1618089[iParam0 /*390*/].f_11 != func_60())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
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
			if (Global_1618089[iParam0 /*390*/].f_11 != func_60())
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

void func_73()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_651())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_134(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_133(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!func_127())
			{
				func_123(0);
				unk_0x8F5ECEB25B6D76B3(0);
				unk_0xB8A73E7DA87B2968(&uLocal_1420, 18);
			}
		}
	}
	if (Local_99.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_74(166, Var0, &uLocal_1713, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_122(unk_0xFB6B3EEFAB2DD12C()) && !func_121(unk_0xFB6B3EEFAB2DD12C())) && !unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 8)) && (func_120(unk_0xFB6B3EEFAB2DD12C()) || func_119(unk_0xFB6B3EEFAB2DD12C())))
	{
		return;
	}
	Global_1759239 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param1);
	func_115(iParam0, fVar0);
	if (unk_0x6AAF285DC78E0304() && unk_0xDEC2120B859399ED() == 15)
	{
		if (func_114(unk_0xFB6B3EEFAB2DD12C()) || func_112(unk_0xFB6B3EEFAB2DD12C()))
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
		if (!func_111(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			func_110(Param1, 1, 0);
		}
		if (!*uParam4 && func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			*uParam4 = 1;
			if (func_109(iParam0))
			{
				unk_0xFA5E84DCAE200259(func_108(iParam0));
				if (func_107(iParam0, -1))
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
			if (func_106(iParam0))
			{
				fVar1 = func_105(iParam0);
				if (fVar1 != 1f)
				{
					func_635(fVar1);
					unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_104(iParam0) && func_114(unk_0xFB6B3EEFAB2DD12C()))
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
			if (func_99(unk_0xFB6B3EEFAB2DD12C(), 19))
			{
				func_98(19);
			}
		}
		if (*uParam4 && func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			*uParam4 = 0;
			if (func_109(iParam0))
			{
				if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 0))
				{
					unk_0xFA5E84DCAE200259(1f);
					unk_0x028AA922F2B17B2A(5);
					unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				func_97();
				unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 1);
			}
			if (iParam7 && !func_122(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (func_95(unk_0xFB6B3EEFAB2DD12C()) != 152)
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
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_25), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_25, iParam0);
}

void func_77()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_24), &Global_2408525, 2);
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_26), &Global_2408527, 17);
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
	Global_2404994.f_22 = iParam0;
	Global_2404994.f_23 = iParam1;
}

void func_80(bool bParam0, bool bParam1)
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
		func_92();
	}
	func_83(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_82(0);
	func_81();
}

void func_81()
{
	struct<4> Var0;
	
	if (Global_2404994.f_477.f_1 == unk_0x3ED6DDB11A7AD67F())
	{
		Global_2404994.f_477 = { Var0 };
	}
}

void func_82(bool bParam0)
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

void func_83(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_91())
		{
			func_90();
		}
		Global_2404994.f_651.f_504 = iParam1;
		Global_2404994.f_651.f_505 = iParam2;
		Global_2404994.f_651.f_506 = iParam10;
		func_88();
		func_87(8, 0, 0);
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
		func_87(0, 0, 0);
		Global_2404994.f_1684 = 0;
		Global_2404994.f_1683 = 0;
	}
}

void func_85()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_651), &(Global_2404994.f_1167), 516);
	Global_2404994.f_477 = { Global_2404994.f_481 };
	if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515)
	{
		Global_2404994.f_1683 = 0;
	}
}

int func_86()
{
	if ((Global_2404994.f_1683 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_1167.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_1167.f_515))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2)
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

void func_88()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	func_89();
	Global_2404994.f_651 = 0;
}

void func_89()
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

void func_90()
{
	if (func_86())
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

int func_91()
{
	if ((Global_2404994.f_1684 && !unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_651.f_515) && unk_0x597C1E51157E5516(Global_2404994.f_651.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	unk_0xEDE622BDBEBDEE43(&(Global_2404994.f_355), &Global_2408856, 121);
}

void func_93()
{
	func_94();
	Global_2404994.f_1815 = 0;
}

void func_94()
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

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_97()
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

void func_98(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

void func_100(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

void func_101(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_25), iParam0);
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
	if ((((Global_979732 != -1 && Global_979732 != 33) && Global_979732 != 35) && Global_979732 != 37) && Global_979732 != 21)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_110(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
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
		if (Global_1618089[iParam0 /*390*/].f_11 != func_60())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
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
	if (!func_117(unk_0xFB6B3EEFAB2DD12C()))
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

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!func_133(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (iParam0 || func_124(unk_0xFB6B3EEFAB2DD12C()) != 0)
		{
			func_100(20);
			if (func_122(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (!unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1, 8))
				{
					unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 8);
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
	bVar1 = ((func_122(iParam0) && !func_121(iParam0)) && !unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8));
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
	if (Global_2494149.f_4710.f_29 != iVar0)
	{
		Global_2494149.f_4710.f_29 = iVar0;
	}
	return iVar0;
}

bool func_125(int iParam0)
{
	return func_99(iParam0, 19);
}

bool func_126()
{
	return Global_1312412;
}

int func_127()
{
	if ((func_99(unk_0xFB6B3EEFAB2DD12C(), 21) || func_99(unk_0xFB6B3EEFAB2DD12C(), 22)) || func_130())
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
	if (func_96(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if ((func_126() && !func_129()) || func_111(unk_0xFB6B3EEFAB2DD12C(), 21))
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
	return Global_1312412.f_1;
}

bool func_130()
{
	return func_131(286, -1);
}

int func_131(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
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
	Var3 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_99.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar2 /*26*/].f_1), 1) };
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
	if (func_273() || iParam2 == 24)
	{
		if (func_218(uParam1, iParam2, uParam3, Global_1574103, 0, func_271()))
		{
			func_217(1);
			if ((!func_215() && !func_213()) || unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
			{
				if (func_212())
				{
					func_209();
				}
				else
				{
					unk_0x8C8A1913314B5A90(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_208(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574251 != 1)
						{
							func_207(uParam1);
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
								if (func_729(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0x1E8AEE4F02F8E526(iVar35, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar35 /*358*/].f_239 != -1) || func_206(iVar35))
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
						if (!func_202(unk_0xFB6B3EEFAB2DD12C(), 0) && func_95(unk_0xFB6B3EEFAB2DD12C()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_200())
							{
								if (func_729(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
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
							if ((func_199(iVar35) && func_194(iVar35, iParam2)) && func_729(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
								Var38 = { func_189(iVar35) };
								if (iVar35 == unk_0xFB6B3EEFAB2DD12C())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x7746E8ACE891BFA4(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_183(iVar35);
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
								unk_0xB8A73E7DA87B2968(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							if (func_729(iVar35, 0, 1) && !unk_0xF44A5E894FE76438(iVar49, iVar35))
							{
								iVar35 = unk_0x7A4693BB354F3CD3(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_199(iVar35))
							{
								if (func_729(unk_0x7A4693BB354F3CD3(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1589933[iVar44 /*601*/].f_202.f_6;
									Var38 = { func_189(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_183(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x48C5A96AE7C462A4(iVar37);
									}
									Global_1574103++;
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
									func_149(iVar35, unk_0x7746E8ACE891BFA4(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							func_146(uParam3, uParam1);
						}
						func_145(&(uParam3->f_21));
						func_144();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 7))
						{
							func_143(uParam3, uParam1);
							func_142(uParam1, 0, 1);
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 7);
						}
						func_143(uParam3, uParam1);
						if (!unk_0xF44A5E894FE76438(uParam3->f_33, 11))
						{
							unk_0xB8A73E7DA87B2968(&(uParam3->f_33), 11);
						}
						if (func_138(uParam3))
						{
							Global_1574251 = 1;
						}
						func_136(uParam3);
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
			func_144();
			func_208(0);
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

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7A4693BB354F3CD3(uParam0->f_37);
	if (iVar15 != func_60() && func_729(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_141(uParam0, uParam0->f_37);
		if (func_140(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (unk_0x09E1B750055BAC3E(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x0661F477B16B2070(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x09E1B750055BAC3E(&Var2))
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
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!unk_0x0661F477B16B2070(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x0661F477B16B2070(&Var2))
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
	return unk_0x5A7D76211B9373CD(&uParam0, 13);
}

var func_141(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_142(var uParam0, int iParam1, int iParam2)
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

void func_143(var uParam0, var uParam1)
{
	if (!unk_0xF44A5E894FE76438(uParam0->f_33, 10))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam1, "SET_HIGHLIGHT");
		unk_0x1B215CC37BF52E79(uParam0->f_35);
		unk_0xBBAAC5B2437ACF2A();
		unk_0xB8A73E7DA87B2968(&(uParam0->f_33), 10);
	}
}

void func_144()
{
	if (Global_1574251 != 0)
	{
		Global_1574251 = 0;
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
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if (iVar2 != func_60())
		{
			if (func_729(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_148(uParam0->f_38[iVar0 /*2*/], 0);
					func_147(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589933[iVar0 /*601*/].f_202.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3)
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
				func_166("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(iParam10);
			}
			func_166(sParam1);
			unk_0x1B215CC37BF52E79(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0x1B215CC37BF52E79(65);
			}
			unk_0x1B215CC37BF52E79(-1);
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
			unk_0x36BBBC81A4DEE44C(sParam9);
			unk_0x36BBBC81A4DEE44C(sParam9);
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
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

bool func_150(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 6);
}

bool func_151(var uParam0)
{
	return unk_0xF44A5E894FE76438(uParam0->f_33, 5);
}

void func_152(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
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
		unk_0x1B215CC37BF52E79(121);
	}
	else if (func_159(iParam1))
	{
		unk_0x1B215CC37BF52E79(122);
	}
	else
	{
		if (func_155())
		{
			uParam0->f_36 = 0;
		}
		unk_0x2C310F11D2096992(uParam0->f_36);
	}
}

int func_155()
{
	if (unk_0x8676DE83D4396C39())
	{
		if (func_157() || func_156())
		{
			return 1;
		}
	}
	return 0;
}

bool func_156()
{
	return Global_2443089.f_12;
}

bool func_157()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_156();
	}
	return func_158(Global_1632166.f_86360);
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
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0)
{
	if ((func_729(iParam0, 0, 1) && func_163()) && func_160(iParam0, 1))
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
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_60() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 != func_60())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_60())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	if (func_122(unk_0xFB6B3EEFAB2DD12C()) || func_164())
	{
		return 0;
	}
	return 1;
}

int func_164()
{
	switch (func_95(unk_0xFB6B3EEFAB2DD12C()))
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
		if (func_729(iParam0, 0, 1))
		{
			return func_113(iParam0);
		}
	}
	if ((func_729(iParam0, 0, 1) && func_163()) && func_162(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
}

int func_167()
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

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574105)
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
					func_166("");
				}
				else
				{
					unk_0x1B215CC37BF52E79(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xC55B9553B3EDADE9(sParam16))
				{
					func_152(sParam16);
				}
				else
				{
					func_166(&(uParam2->f_1));
				}
				unk_0x1B215CC37BF52E79(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_166("");
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
				if (func_200())
				{
					func_166("");
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
						func_152(&(uParam2->f_104));
					}
					else
					{
						func_166("");
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
				if (iParam12 == 1 || unk_0xC55B9553B3EDADE9(sParam8))
				{
					func_166("");
					func_166("");
				}
				else
				{
					unk_0x36BBBC81A4DEE44C(sParam8);
					unk_0x36BBBC81A4DEE44C(sParam8);
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
				unk_0xBBAAC5B2437ACF2A();
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
	return Global_1618089[iParam0 /*390*/].f_11 != func_60();
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
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_175(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_171(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_61(iParam0)];
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
			if (unk_0xD065018956F1AA2B())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_181(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xD065018956F1AA2B())
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
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_729(iParam0, 0, 1))
	{
		return;
	}
	if (func_186(iParam0) != -1)
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
	if (func_185(iParam0))
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

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	int iVar0;
	
	if (!func_729(iParam0, 0, 1))
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
	func_188(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

struct<4> func_189(int iParam0)
{
	struct<4> Var0;
	
	if (func_729(iParam0, 0, 1))
	{
		Global_2482005 = { func_62(iParam0) };
		if (unk_0xF1A016B51831B87B())
		{
			if (func_140(Global_2482005))
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
		if (func_193(&Global_2482005))
		{
			Global_2481935 = { func_191(iParam0) };
			func_190(&Global_2481935, &Var0);
		}
	}
	return Var0;
}

void func_190(var uParam0, var uParam1)
{
	unk_0x80BC8B50E2E17138(uParam0, 35, uParam1);
}

struct<35> func_191(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_192(iParam0))
	{
		return Global_1315261[unk_0xFB6B3EEFAB2DD12C() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0xF6955213DB8BD7D3(&Var13, 35, &Var0);
	return Var13;
}

int func_192(int iParam0)
{
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
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

int func_194(int iParam0, int iParam1)
{
	if (iParam1 == 23)
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
	if ((!func_195(iParam0) && Global_2421621[iParam0 /*358*/].f_239 == -1) && !func_206(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (func_729(iParam0, 0, 1))
	{
		if (func_729(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
		{
			if (unk_0x1E8AEE4F02F8E526(iParam0, unk_0xFB6B3EEFAB2DD12C()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 22);
}

bool func_197(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 8);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 10) || unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 9));
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
		if (unk_0xF44A5E894FE76438(Global_1589933[iVar0 /*601*/].f_138, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_200()
{
	switch (func_95(unk_0xFB6B3EEFAB2DD12C()))
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
	switch (func_201(unk_0xFB6B3EEFAB2DD12C()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_95(unk_0xFB6B3EEFAB2DD12C()))
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
		return Global_1618089[iVar0 /*390*/];
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 && func_203(Global_1618089[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_203(Global_1618089[iParam0 /*390*/].f_11.f_31))
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
		if (func_729(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0x1E8AEE4F02F8E526(iVar1, unk_0xFB6B3EEFAB2DD12C()) || Global_2421621[iVar1 /*358*/].f_239 != -1) || func_206(iVar1))
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
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

void func_207(var uParam0)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1B215CC37BF52E79(0);
		unk_0xBBAAC5B2437ACF2A();
	}
}

void func_208(bool bParam0)
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

void func_209()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1))
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
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_211()
{
	return Global_2433082.f_2199[0 /*76*/].f_1 != 0;
}

int func_212()
{
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0) && func_211())
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (func_211())
	{
		if (func_214(Global_2433082.f_2199[0 /*76*/].f_1))
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

int func_215()
{
	if (func_211())
	{
		if (func_216(Global_2433082.f_2199[0 /*76*/].f_1))
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

void func_217(int iParam0)
{
	Global_1352859.f_1 = Global_1352859;
	Global_1352859 = iParam0;
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
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_269();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_268())
		{
			if (func_267() > 0 && Global_1574105)
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
		if (!func_250())
		{
			func_249(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
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
		if (unk_0xA14FC57CB26C2B67())
		{
			unk_0xA295ADD103FF4641();
		}
		unk_0x7FE30C99EA3439F7(10);
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
					func_247();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xA770EE27D9D0EB36();
					}
					unk_0x7FE30C99EA3439F7(18);
				}
				unk_0x2B153364D0958759(fVar7);
				if (func_248(bVar6, uParam0, 0))
				{
					func_207(uParam0);
					uVar4 = func_245(iParam1, &(Global_1632166.f_86367), bParam4);
					Var0 = { func_243(iParam1) };
					if (bParam4)
					{
						func_240(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_233(uParam0, func_237(uParam2), func_234(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_224(uParam0, func_226(), func_225(), -1);
					}
					else if (func_155())
					{
						uParam2->f_34 = Global_1574104;
						func_240(uParam0, uVar4, &Var0, 1, -1, Global_1574104, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574104;
						func_240(uParam0, uVar4, "", 0, -1, Global_1574104, 1);
					}
					else
					{
						iVar8 = func_219(iParam1);
						func_240(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xB8A73E7DA87B2968(&(uParam2->f_33), 0);
				}
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
			if (func_222(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 20;
			}
			if (func_221(unk_0xFB6B3EEFAB2DD12C()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_220(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_220(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 4;
}

bool func_221(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_222(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_223()
{
	return Global_1632166.f_1 == 0;
}

void func_224(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(sParam2))
		{
			func_152(sParam1);
		}
		else
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT");
			unk_0xB1953EBEF4D6BD85(sParam1);
			unk_0xB1953EBEF4D6BD85(sParam2);
			unk_0xCB329F559FA7DCD0();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_225()
{
	switch (func_95(unk_0xFB6B3EEFAB2DD12C()))
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

char* func_226()
{
	switch (func_95(unk_0xFB6B3EEFAB2DD12C()))
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
			if (func_227(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_172))
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
	return func_160(unk_0xFB6B3EEFAB2DD12C(), bParam0);
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
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34;
}

bool func_232()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148;
}

void func_233(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (unk_0xC55B9553B3EDADE9(uParam2))
		{
			func_152(uParam1);
		}
		else if (func_201(unk_0xFB6B3EEFAB2DD12C()) == 133)
		{
			unk_0x0BBDB952BE56A9DF("FM_AE_BRACKT_C");
			unk_0xB1953EBEF4D6BD85(uParam1);
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
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam3);
		}
		unk_0xBBAAC5B2437ACF2A();
	}
}

char* func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0xFB6B3EEFAB2DD12C());
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
	if (func_201(unk_0xFB6B3EEFAB2DD12C()) == 133)
	{
		return Global_2494149.f_4692;
	}
	return -1;
}

bool func_236()
{
	return Global_1589821;
}

char* func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0xFB6B3EEFAB2DD12C());
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
	return Global_2494149.f_4695;
}

int func_239()
{
	if (func_201(unk_0xFB6B3EEFAB2DD12C()) == 132)
	{
		return Global_2494149.f_4690;
	}
	return -1;
}

void func_240(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x52622CA85B1C304B(*uParam0))
	{
		unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_166(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0BBDB952BE56A9DF(uParam1);
			unk_0xF99222307D7150A9(iParam5);
			unk_0xCB329F559FA7DCD0();
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
			unk_0x0BBDB952BE56A9DF("LBD_DPD_CNT");
			unk_0xF99222307D7150A9(iVar0);
			unk_0xF99222307D7150A9(iVar1);
			unk_0xCB329F559FA7DCD0();
		}
		else
		{
			func_152(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1B215CC37BF52E79(iParam4);
			if (func_241(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x1B215CC37BF52E79(166);
			}
		}
		unk_0xBBAAC5B2437ACF2A();
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
	return Global_1574105;
}

struct<4> func_243(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_244(unk_0xFB6B3EEFAB2DD12C()) || func_220(unk_0xFB6B3EEFAB2DD12C()))
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
	if (func_155() && unk_0x8676DE83D4396C39())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1632166.f_27, 16);
	}
	return Var0;
}

bool func_244(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 5;
}

char* func_245(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17 && (!func_155() || unk_0xC55B9553B3EDADE9(uParam1)))
	{
		uVar0 = func_246();
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

char* func_246()
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

void func_247()
{
	Global_36680 = 1;
}

bool func_248(bool bParam0, var uParam1, bool bParam2)
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

void func_249(var uParam0, var uParam1, bool bParam2)
{
	unk_0x4EA098C870B73AB7(&(uParam1->f_33), 7);
	Global_1574103 = 0;
	func_144();
	Global_1574102 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_145(&(uParam1->f_19));
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
	if (Global_2494149.f_4407)
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	else if (!func_256(unk_0xFB6B3EEFAB2DD12C(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_255(1) || func_253(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (func_251(unk_0xFB6B3EEFAB2DD12C()))
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
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
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

bool func_252()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_253(bool bParam0)
{
	if (unk_0x9912A7A9E14E5DE4())
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (func_254(unk_0xD5A676B97920D126()))
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

int func_254(int iParam0)
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

bool func_259()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

bool func_260(int iParam0, int iParam1)
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
	return Global_1312462.f_18;
}

int func_263()
{
	if (func_264())
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

bool func_264()
{
	return Global_1312434;
}

bool func_265()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 5;
}

bool func_266()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_267()
{
	return Global_1352862.f_68;
}

int func_268()
{
	if (Global_1574104 > 16)
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
	fVar1 = (1f - (1f - unk_0x67BF72803FFBF57D()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_270(int iParam0)
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

int func_271()
{
	if (func_272(unk_0xFB6B3EEFAB2DD12C()))
	{
		return Global_1318164;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x19239326F582A90C(iParam0);
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
	if (func_197(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_236())
	{
		return 1;
	}
	if (func_122(unk_0xFB6B3EEFAB2DD12C()))
	{
		switch (func_201(unk_0xFB6B3EEFAB2DD12C()))
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
				if (!func_274(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_274(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_274(unk_0xFB6B3EEFAB2DD12C()))
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
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_1, 4);
}

int func_275(int iParam0)
{
	if ((iParam0 == 24 && func_122(unk_0xFB6B3EEFAB2DD12C())) && !func_133(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_96(unk_0xFB6B3EEFAB2DD12C(), 0) && func_133(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
		if (func_124(unk_0xFB6B3EEFAB2DD12C()) == 3)
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
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar0 = unk_0x1E7FB1CA38C403F6();
	}
	else
	{
		iVar0 = func_277();
	}
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Local_971[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	if (unk_0x1E0256D6F1052B31(iVar1))
	{
		if (unk_0xBF474853319C6A20(iVar1))
		{
			iVar2 = unk_0xCA5CB25B27CC9477(iVar1);
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
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
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
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_113, iVar29))
			{
				if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_6, iVar29))
				{
					if (unk_0x7887B64A08364778(Var0.f_0))
					{
						if (unk_0x8041FE602D4689B1(Var0.f_0))
						{
							if (!unk_0xF44A5E894FE76438(Local_99.f_109, iVar29))
							{
								if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_5, iVar29))
								{
									if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0x7887B64A08364778(unk_0xE95C934718B1A4FF(Local_99.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0x9A1EB82BF4C4844D(Var0.f_0) == unk_0xE95C934718B1A4FF(Local_99.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0x7887B64A08364778(Var0.f_1))
												{
													if (unk_0x6DA4D1391A7B813F(Var0.f_1))
													{
														if (unk_0x36B702E1B6552B8A(Var0.f_1) == unk_0xD5A676B97920D126())
														{
															if (func_652() == Local_99.f_118)
															{
																unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_5), iVar29);
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
						else if (unk_0x6DA4D1391A7B813F(Var0.f_0))
						{
							iVar11 = unk_0x36B702E1B6552B8A(Var0.f_0);
							if (iVar11 == unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0x7887B64A08364778(Var0.f_1))
								{
									if (unk_0x6DA4D1391A7B813F(Var0.f_1))
									{
										iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
										if (unk_0xBEC34BF6B72C417A(iVar10))
										{
											iVar13 = unk_0x61263E0F7C8C9996(iVar10);
											if (unk_0xBF474853319C6A20(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0xFB6B3EEFAB2DD12C())
													{
														Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_11++;
														unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_6), iVar29);
														Var15.f_2 = 144;
														Var15.f_10 = unk_0xFB6B3EEFAB2DD12C();
														func_285(Var15, func_286(0));
														func_280("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0x61263E0F7C8C9996(iVar10);
													unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_7), iVar29);
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
		if (!func_99(unk_0xFB6B3EEFAB2DD12C(), 20))
		{
			if (unk_0x7887B64A08364778(Var0.f_0))
			{
				if (unk_0x6DA4D1391A7B813F(Var0.f_0))
				{
					iVar11 = unk_0x36B702E1B6552B8A(Var0.f_0);
					if (unk_0xBEC34BF6B72C417A(iVar11))
					{
						iVar12 = unk_0x61263E0F7C8C9996(iVar11);
						if (unk_0x7887B64A08364778(Var0.f_1))
						{
							if (unk_0x6DA4D1391A7B813F(Var0.f_1))
							{
								iVar10 = unk_0x36B702E1B6552B8A(Var0.f_1);
								if (unk_0xBEC34BF6B72C417A(iVar10))
								{
									iVar13 = unk_0x61263E0F7C8C9996(iVar10);
									if (iVar13 == unk_0xFB6B3EEFAB2DD12C())
									{
										if (unk_0xBF474853319C6A20(iVar12))
										{
											if (func_171(iVar12, 1))
											{
												if (Local_99.f_118 > -1)
												{
													iVar14 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Local_99.f_118));
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
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_281(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_281(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_284() || !unk_0x8676DE83D4396C39()) || !func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_282(iParam2);
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

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_283(iVar0);
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

void func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_284()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

void func_285(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_286(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_729(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
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
	
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if (unk_0xF44A5E894FE76438(uLocal_1420, 14))
		{
			unk_0x4EA098C870B73AB7(&iLocal_1420, 14);
		}
		return;
	}
	iVar0 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	if (!unk_0xF44A5E894FE76438(iLocal_1420, 14))
	{
		if (Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1 != 0)
		{
			Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1 = 0;
		}
		unk_0xB8A73E7DA87B2968(&iLocal_1420, 14);
	}
	if (!unk_0xF44A5E894FE76438(iLocal_1420, 15))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_1420, 15);
		func_584();
	}
	if (unk_0x1E0256D6F1052B31(iVar0))
	{
		if (unk_0xBF474853319C6A20(iVar0))
		{
			uVar1 = unk_0xCA5CB25B27CC9477(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_971[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_562();
					func_544();
					func_529();
					break;
				
				case 2:
					func_288();
					break;
				
				case 3:
					func_665();
					break;
				}
			}
	}
}

void func_288()
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar17;
	int iVar18;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar14 = unk_0x1E7FB1CA38C403F6();
	iVar15 = unk_0xFB6B3EEFAB2DD12C();
	if (func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar14 = func_277();
		iVar15 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	}
	if (!unk_0xF44A5E894FE76438(Local_971[iVar14 /*14*/].f_1, 4))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_1420, 9))
		{
			if (unk_0xF44A5E894FE76438(Local_99.f_1, 1))
			{
				if (iVar14 == Local_99.f_118 || func_652() == Local_99.f_118)
				{
					if (func_124(iVar15) >= 2)
					{
						sVar16 = func_528(iVar15);
						iVar17 = func_527(iVar15);
						func_525(86, "GB_WINNER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
					}
					if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
					{
						if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
						{
							func_510(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
						}
						Var0.f_0 = func_509();
						Var0.f_1 = func_508();
						func_374(166, 1, &Var0, 0);
						unk_0x8761D8D070DDBD9A(iVar15);
						iLocal_1714 = unk_0xBF3F652B1833E78E();
						unk_0x028AA922F2B17B2A(0);
						unk_0xB8A73E7DA87B2968(&iLocal_1420, 17);
						func_7(&uLocal_1715, 0, 0);
					}
				}
				else if (func_276())
				{
					if (func_171(iVar15, 1))
					{
						if (func_124(iVar15) >= 2)
						{
							sVar16 = func_528(unk_0x7A4693BB354F3CD3(Local_99.f_119));
							iVar17 = func_527(unk_0x7A4693BB354F3CD3(Local_99.f_119));
							func_525(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
							{
								func_510(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
							}
							if (func_117(iVar15))
							{
								Var0.f_0 = func_373();
								Var0.f_1 = func_372();
							}
							func_374(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_124(iVar15) >= 2)
						{
							sVar16 = func_528(unk_0x7A4693BB354F3CD3(Local_99.f_119));
							iVar17 = func_527(unk_0x7A4693BB354F3CD3(Local_99.f_119));
							func_525(87, "GB_WORK_OVER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
						{
							if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
							{
								func_510(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
							}
							if (func_117(iVar15))
							{
								Var0.f_0 = func_373();
								Var0.f_1 = func_372();
							}
							func_374(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_1420, 9);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 3))
			{
				iVar18 = (4 - Local_99.f_115);
				if (iVar14 == Local_99.f_118 || func_652() == Local_99.f_118)
				{
					if (func_124(iVar15) >= 2)
					{
						sVar16 = func_366();
						iVar17 = func_527(iVar15);
						func_525(87, "GB_WORK_OVER", "BIGM_HUNFD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
					}
					if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
					{
						if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
						{
							func_510(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
						}
						Var0.f_0 = func_509();
						Var0.f_1 = func_508();
						func_374(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_124(iVar15) >= 2)
					{
						sVar16 = func_528(unk_0x7A4693BB354F3CD3(Local_99.f_119));
						iVar17 = func_527(unk_0x7A4693BB354F3CD3(Local_99.f_119));
						if (iVar18 == 1)
						{
							func_525(86, "GB_WINNER", "BIGM_HUN1S", sVar16, iVar17, 0, iVar18, -1, -1, 2, -1);
						}
						else if (iVar18 > 1)
						{
							func_525(86, "GB_WINNER", "BIGM_HUNRS", sVar16, iVar17, 0, iVar18, -1, -1, 2, -1);
						}
					}
					if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
					{
						if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
						{
							func_510(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
						}
						if (func_117(iVar15))
						{
							Var0.f_0 = func_373();
							Var0.f_1 = func_372();
						}
						func_374(166, 1, &Var0, 0);
						unk_0x8761D8D070DDBD9A(unk_0xFB6B3EEFAB2DD12C());
					}
				}
				unk_0xB8A73E7DA87B2968(&iLocal_1420, 9);
			}
			else if (unk_0xF44A5E894FE76438(Local_99.f_1, 5))
			{
				if (func_342())
				{
					if (func_651())
					{
						if (func_124(iVar15) >= 2)
						{
						}
					}
					else if (func_124(iVar15) >= 2)
					{
						func_320(87, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar15 == unk_0xFB6B3EEFAB2DD12C())
				{
					if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
					{
						func_510(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
					}
					func_374(166, 0, &Var0, 0);
				}
				unk_0xB8A73E7DA87B2968(&iLocal_1420, 9);
			}
		}
		if (unk_0xF44A5E894FE76438(iLocal_1420, 9))
		{
			func_584();
			if (!unk_0xF44A5E894FE76438(uLocal_1421, 8))
			{
				func_307();
				func_70();
				unk_0xB8A73E7DA87B2968(&iLocal_1421, 8);
			}
			if (!unk_0xF44A5E894FE76438(iLocal_1420, 10))
			{
			}
			if (func_289(&uLocal_1428, 0, 0))
			{
				if (iVar14 == unk_0x1E7FB1CA38C403F6())
				{
					unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xF44A5E894FE76438(iLocal_1420, 17))
			{
				if (func_6(&uLocal_1715, 10000, 0))
				{
					unk_0x028AA922F2B17B2A(iLocal_1714);
					unk_0x4EA098C870B73AB7(&iLocal_1420, 17);
				}
			}
		}
	}
}

int func_289(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_100(29);
	if ((*uParam0 > 0 && !func_211()) && func_124(unk_0xFB6B3EEFAB2DD12C()) != 0)
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
				unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 2);
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 0);
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
					unk_0x04890EB0282525A5(1);
				}
				func_302(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 1);
				unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 2);
				func_302(uParam0, 4);
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

bool func_290(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

char* func_291(int iParam0)
{
	if (((func_294(unk_0xFB6B3EEFAB2DD12C()) || func_293(unk_0xFB6B3EEFAB2DD12C())) || func_229()) || iParam0)
	{
		if (func_293(unk_0xFB6B3EEFAB2DD12C()))
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
	return Global_1630570;
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
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148 && func_162(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_34, 1))
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
	if (unk_0xF44A5E894FE76438(Global_2494149.f_4446, 0))
	{
		if ((((((((((!unk_0x656CD02142B72C18() && !unk_0xF44A5E894FE76438(Global_2494149.f_743, 2)) && func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1)) && !Global_68127) && !Global_52999) && !unk_0x7E3640C27B17457C()) && !func_99(unk_0xFB6B3EEFAB2DD12C(), 22)) && func_124(unk_0xFB6B3EEFAB2DD12C()) != 0) && !func_300(func_301())) && !func_294(unk_0xFB6B3EEFAB2DD12C())) && !func_299(func_95(unk_0xFB6B3EEFAB2DD12C())))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4446), 1);
			func_298(func_291(iParam0), -1);
			func_297(1);
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_4446), 0);
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
		unk_0xA93E75A5493862BD(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_298(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam1);
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
	
	uVar0 = unk_0x0FBCE11007AF301F();
	if (unk_0xCC257DA11A122B5F(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xCC257DA11A122B5F(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_303()
{
	Global_2454003 = 1;
}

int func_304()
{
	if (((((((func_95(unk_0xFB6B3EEFAB2DD12C()) == 170 || func_95(unk_0xFB6B3EEFAB2DD12C()) == 219) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 221) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 220) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 216) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 215) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 214) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 218)
	{
		return 1;
	}
	if (func_305(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_729(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
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

void func_307()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x6901135DDCC4904D(uLocal_1435[iVar0]))
		{
			unk_0x8A3D7569826A325D(&(uLocal_1435[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xF44A5E894FE76438(iLocal_1420, 18))
	{
		func_319(1);
		unk_0x4EA098C870B73AB7(&iLocal_1420, 18);
	}
	func_316();
	func_308();
}

void func_308()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF44A5E894FE76438(iLocal_1420, 7))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_1420, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			if (unk_0x1E0256D6F1052B31(iVar1))
			{
				if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_8, iVar0))
					{
						func_314(iVar1, 432, 0);
						func_309(iVar1, func_313(iLocal_1712), 0);
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
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_310(iParam0))
	{
		if (bParam2)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = unk_0x3ED6DDB11A7AD67F();
			Global_2414704.f_440[iVar0] = uParam1;
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = -1;
		}
	}
}

int func_310(int iParam0)
{
	if (!unk_0x597C1E51157E5516(Global_2414704.f_605[iParam0]) || Global_2414704.f_605[iParam0] == unk_0x3ED6DDB11A7AD67F())
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
	return Global_25185;
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
	unk_0xC163336F8C5EA891(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
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
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_311())
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
				func_315();
			}
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_407[iVar0] = uVar1;
			Global_2414704.f_572[iParam0] = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			if (unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_315();
			}
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_572[iParam0] = -1;
		}
	}
}

void func_315()
{
	Global_2414704.f_995 = 1;
}

void func_316()
{
	if (unk_0xF44A5E894FE76438(iLocal_1420, 16))
	{
		func_81();
		func_317();
		unk_0x4EA098C870B73AB7(&iLocal_1420, 16);
	}
}

void func_317()
{
	if (Global_2412527.f_6 == unk_0x3ED6DDB11A7AD67F())
	{
		func_318();
	}
}

void func_318()
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

void func_319(bool bParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (!func_126())
		{
			if (func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 0);
			}
			unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 1f);
			unk_0x78474BABFD9E36D2(0);
			unk_0x8F5ECEB25B6D76B3(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0xD06F9BE40EFDA8FC(0, 0);
				}
			}
		}
		else
		{
			if (func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 0);
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 1);
				unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0xD06F9BE40EFDA8FC(1, 0);
				}
			}
			unk_0x78474BABFD9E36D2(1);
			unk_0x8F5ECEB25B6D76B3(0);
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
	func_341(iParam0, &Var0, -1, sParam2, sParam1);
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
		if (Global_2433082.f_2505)
		{
			return 0;
		}
	}
	func_324(uParam0, uParam0->f_16);
	func_323(uParam0);
	if (func_322(uParam0->f_1))
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
				if (func_214(Global_2433082.f_2199[iVar0 /*76*/].f_1))
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

int func_322(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 103) || iParam0 == 99) || iParam0 == 102)
	{
		return 1;
	}
	return 0;
}

void func_323(var uParam0)
{
	if (func_216(uParam0->f_1))
	{
		uParam0->f_70 = func_176();
	}
}

void func_324(var uParam0, int iParam1)
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
			uParam0->f_71 = func_325(iParam1, -2, 0, 0);
		}
	}
}

int func_325(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_251(unk_0xFB6B3EEFAB2DD12C()) || (func_340() && func_339()))
	{
		uVar1 = func_338();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(iVar1))
			{
				if (unk_0x61263E0F7C8C9996(iVar1) != -1)
				{
					if (func_729(unk_0x61263E0F7C8C9996(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_336(iParam1, iParam0, 0);
							}
							else
							{
								return func_333(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_333(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_336(iParam1, iParam0, 0);
				}
				else
				{
					return func_326(0, -1, 0);
				}
			}
			else
			{
				return func_326(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_336(iParam1, iParam0, 0);
		}
		else
		{
			return func_333(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_333(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_326(bool bParam0, int iParam1, bool bParam2)
{
	return func_327(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_327(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_332(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_331(1);
				}
				else
				{
					return func_331(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_328(iVar0, iParam2, 1);
			}
			else
			{
				return func_328(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_331(1);
	}
	return func_331(0);
}

int func_328(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_330(iParam0, iParam1);
	if (func_329(Global_1632166.f_86360))
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

int func_329(int iParam0)
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

int func_330(int iParam0, int iParam1)
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
			if (!func_332(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_331(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_332(int iParam0, int iParam1, int iParam2)
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

int func_333(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_156())
			{
				iVar3 = func_175(iParam0);
				if (!iVar3 == -1)
				{
					return func_173(iVar3);
				}
			}
			if ((func_335(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_332(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_331(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_334(1);
			}
			else
			{
				return func_327(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_331(1);
			}
			else
			{
				return func_327(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
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

int func_334(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_335(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_336(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_156())
	{
		iVar1 = func_175(iParam1);
		if (!iVar1 == -1)
		{
			return func_173(iVar1);
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
		iVar0 = func_327(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_337(iParam0);
	}
	return iVar0;
}

int func_337(int iParam0)
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

var func_338()
{
	return Global_2359301.f_2;
}

bool func_339()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_340()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

void func_341(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_342()
{
	int iVar0;
	
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if (!func_343(1))
		{
			if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1, 6))
			{
				unk_0x4EA098C870B73AB7(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_127())
		{
			if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1, 6))
			{
				unk_0x4EA098C870B73AB7(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1, 6))
		{
			unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_277();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xF44A5E894FE76438(Local_971[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_343(bool bParam0)
{
	if (func_111(unk_0xFB6B3EEFAB2DD12C(), 21))
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
	if (func_365(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_364())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (func_363())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0x8676DE83D4396C39())
	{
		return 0;
	}
	if (func_257(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (func_111(unk_0xFB6B3EEFAB2DD12C(), 0) || func_111(unk_0xFB6B3EEFAB2DD12C(), 3))
	{
		return 0;
	}
	if ((func_111(unk_0xFB6B3EEFAB2DD12C(), 12) || func_111(unk_0xFB6B3EEFAB2DD12C(), 14)) || func_111(unk_0xFB6B3EEFAB2DD12C(), 13))
	{
		return 0;
	}
	if (func_362(unk_0xFB6B3EEFAB2DD12C(), 0, 0, 0, 0))
	{
		if (!func_349())
		{
			return 0;
		}
	}
	if (func_348())
	{
		return 0;
	}
	if (Global_1747153)
	{
		return 0;
	}
	if (func_347(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if (func_345(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 4))
	{
		return 0;
	}
	if (func_344(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_344(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421621[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)
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

int func_346()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	if (!func_729(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_35;
}

bool func_348()
{
	return Global_91538.f_304 > 0;
}

int func_349()
{
	int iVar0;
	
	iVar0 = func_95(unk_0xFB6B3EEFAB2DD12C());
	if (((func_361(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) || func_360(unk_0xFB6B3EEFAB2DD12C())) || func_359(unk_0xFB6B3EEFAB2DD12C())) || func_354(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_352(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_351(iVar0) || func_350(iVar0))
		{
			return 1;
		}
	}
	if (func_305(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_350(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)
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

int func_351(int iParam0)
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

int func_352(int iParam0)
{
	if (func_353(Global_1589933[iParam0 /*601*/].f_257.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0, int iParam1)
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

int func_354(int iParam0)
{
	if (func_355(Global_1589933[iParam0 /*601*/].f_257.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_356(unk_0xFB6B3EEFAB2DD12C(), 0);
	}
	if (bParam1)
	{
		if (func_356(unk_0xFB6B3EEFAB2DD12C(), 0))
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

bool func_356(int iParam0, bool bParam1)
{
	if (Global_1589801 != func_60())
	{
		if (!func_358(Global_1589801))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xFB6B3EEFAB2DD12C() != Global_1589801)
			{
				if (unk_0xF44A5E894FE76438(Global_2421621[Global_1589801 /*358*/].f_198, 24) || func_357(Global_1589801))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 24);
}

bool func_357(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 9);
}

int func_358(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_210, 2);
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_729(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_729(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
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

int func_362(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_360(iParam0))
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
		if (func_359(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_363()
{
	return Global_1315229;
}

bool func_364()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
}

int func_365(int iParam0)
{
	if (func_256(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

char* func_366()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_371(iVar0)) && !func_370(iVar0))
			{
				return func_368(iVar0, 0);
			}
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_368(iVar0, 0);
			}
		}
		uVar1 = func_367(&(Global_1618089[iVar0 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(uVar1))
		{
			return func_368(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_367(var uParam0)
{
	return uParam0;
}

var func_368(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_160(iParam0, 1))
		{
			return func_369();
		}
	}
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACC");
}

var func_369()
{
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACCM");
}

int func_370(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0xF1A016B51831B87B() && unk_0xD59699C2E1196EDA(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
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

int func_372()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13517);
}

int func_373()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13516);
}

void func_374(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_506(iParam0, &fVar2, &fVar3);
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
			if (func_505())
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
			if (func_505())
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
			iVar1 = (iVar1 + func_504(iParam0));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_503(iParam0));
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
	if (((func_95(unk_0xFB6B3EEFAB2DD12C()) == 167 || func_95(unk_0xFB6B3EEFAB2DD12C()) == 168) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 178) || func_95(unk_0xFB6B3EEFAB2DD12C()) == 188)
	{
		if (bParam1)
		{
			if (func_502(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				func_501();
			}
			else
			{
				func_500();
			}
		}
		else
		{
			func_499();
		}
	}
	func_470(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_459(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_231();
	if (iVar6 != func_60() && iParam0 != 148)
	{
		if (func_171(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			if (!func_71(unk_0xFB6B3EEFAB2DD12C(), iVar6, 1))
			{
				func_449(&iVar0, 1);
			}
		}
	}
	func_446(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1759248.f_10 = iVar1;
		func_445();
		func_403(0, unk_0xD5A676B97920D126(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1759248.f_9 = iVar0;
		iVar11 = func_402();
		if (iVar11 != func_60())
		{
			func_401(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_400(1);
		if (iParam0 == 168)
		{
			if (!func_399())
			{
				unk_0xB861D5E5ADC49AE9(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_398())
			{
				if (!func_399())
				{
					unk_0xB861D5E5ADC49AE9(iVar0, uVar5);
				}
			}
			else if (func_399())
			{
				func_389(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2590199[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2590199[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2590199[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0xB861D5E5ADC49AE9(iVar0, uVar5);
			}
		}
		else if (func_399())
		{
			func_389(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2590199[iVar14 /*76*/].f_8.f_54 = uVar9;
			Global_2590199[iVar14 /*76*/].f_8.f_55 = uVar10;
			Global_2590199[iVar14 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x6868A7ACB25836B8(uVar9, uVar10, iVar0, bVar12);
		}
		func_388(iParam0, iVar0);
		if (func_387(iParam0))
		{
			if (func_386(iParam0) > -1)
			{
				func_385(func_386(iParam0), iVar0);
			}
		}
		Global_2454660 = iVar0;
		func_384(&Global_2452937, 0, 0);
	}
	if (func_114(unk_0xFB6B3EEFAB2DD12C()) || func_133(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_375(iParam0);
	}
	if (func_295(iParam0))
	{
		Global_1759266.f_13 = iVar0;
		Global_1759266.f_14 = iVar1;
	}
	if (func_299(iParam0))
	{
		Global_1759319.f_13 = iVar0;
		Global_1759319.f_14 = iVar1;
	}
}

void func_375(int iParam0)
{
	if (func_383(unk_0xFB6B3EEFAB2DD12C()) && func_398())
	{
		if (func_351(iParam0))
		{
			func_378(6016, -1);
		}
		else if (func_377(iParam0))
		{
			func_378(6018, -1);
		}
		else if (func_204(iParam0, 1))
		{
			func_378(6019, -1);
		}
		else if (func_376(iParam0))
		{
			func_378(6020, -1);
		}
	}
}

int func_376(int iParam0)
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

int func_377(int iParam0)
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

void func_378(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_382(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_381(iParam0))
	{
		func_380(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_379(iParam0, iVar0, iParam1, 1);
	}
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_132(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_132(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_132(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_132(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_132(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_132(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_132(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_132(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_132(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_132(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_132(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_132(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_132(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_132(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_132(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_381(int iParam0)
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

int func_382(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_383(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_97, 14);
}

void func_384(var uParam0, bool bParam1, bool bParam2)
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

void func_385(int iParam0, int iParam1)
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

int func_386(int iParam0)
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

int func_387(int iParam0)
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

void func_388(int iParam0, int iParam1)
{
	if (func_383(unk_0xFB6B3EEFAB2DD12C()) && func_398())
	{
		if (func_351(iParam0) && iParam1 > 0)
		{
			func_380(6017, (func_382(6017, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_389(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_399())
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
				func_390(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_390(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_399())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_19()) || unk_0x65C1BCEE262A67BB())
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
			*uParam0 = func_397(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_396(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_391(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_391(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_392(iParam0);
	}
}

void func_392(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_399())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_395(iParam0))
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
		func_393(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_393(var uParam0)
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
	func_394(&(uParam0->f_8.f_3));
	func_394(&(uParam0->f_8.f_16));
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

void func_394(var uParam0)
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

int func_395(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_396(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_397(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_399())
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

bool func_398()
{
	return func_230(unk_0xFB6B3EEFAB2DD12C());
}

int func_399()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

bool func_400(bool bParam0)
{
	return func_171(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

void func_401(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1618089[iParam0 /*390*/].f_11.f_7[0];
	*uParam2 = Global_1618089[iParam0 /*390*/].f_11.f_7[1];
}

int func_402()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

int func_403(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_404(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_404(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_414(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_410(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_405(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_405(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_408(iParam0, 1) };
	if (iParam0 == func_407(unk_0xD5A676B97920D126()))
	{
		func_406(1);
	}
	func_410(Var0, iParam1, 0, sParam2, iParam3);
}

void func_406(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_407(var uParam0)
{
	return uParam0;
}

Vector3 func_408(int iParam0, bool bParam1)
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
	if (iParam0 == func_409(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
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

int func_409(var uParam0)
{
	return uParam0;
}

void func_410(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_413(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_412();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_411();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam6);
		}
	}
}

int func_411()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_412()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_413(struct<3> Param0, var uParam3, var uParam4)
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

var func_414(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_415(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_415(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_444(unk_0xFB6B3EEFAB2DD12C()) || func_443(unk_0xFB6B3EEFAB2DD12C()))
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
	if (func_442(uParam2))
	{
	}
	if (func_441())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_439(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_438(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_436(0, &iVar1);
					break;
				
				case 3:
					func_436(1, &iVar1);
					break;
				
				case 1:
					func_434(&iVar1);
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
			func_433(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_425((func_432(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_433(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_420(iVar1);
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
				func_416((func_418(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_416((func_418(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_416(int iParam0)
{
	if (func_441())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_417(joaat("mpply_globalxp"), iParam0);
	}
}

void func_417(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_418(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_729(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_419(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_419(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_419(int iParam0)
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

void func_420(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_423(func_424(&Var0));
			if (iVar13 == 0)
			{
				func_422(&Global_1362334, iParam0);
				func_421(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_422(&Global_1362335, iParam0);
				func_421(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_422(&Global_1362336, iParam0);
				func_421(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_422(&Global_1362337, iParam0);
				func_421(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_422(&Global_1362338, iParam0);
				func_421(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_421(int iParam0, int iParam1)
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

void func_422(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_423(int iParam0)
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

int func_424(var uParam0)
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

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (func_441())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_132(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_132(-1)])
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
		if (func_431(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_429(iParam0, 1);
		}
		func_379(634, iParam0, -1, 1);
		func_380(635, func_429(iParam0, 1), -1, 1, 0);
		Global_1362449[func_132(-1)] = iParam0;
		func_426(7, 0);
	}
}

void func_426(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_428(iParam0, iParam1))
	{
		iVar0 = func_427();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_427()
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

int func_428(int iParam0, var uParam1)
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

int func_429(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_430(iParam0, 0);
}

int func_430(int iParam0, int iParam1)
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

int func_431(int iParam0)
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

int func_432(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_132(-1)];
			}
			else if (func_431(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_132(-1)];
	}
	return 0;
}

void func_433(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_382(iParam0, func_132(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_381(iParam0))
	{
		func_380(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_379(iParam0, iVar0, iParam2, 1);
	}
}

void func_434(int iParam0)
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
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_332(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_63(unk_0xFB6B3EEFAB2DD12C(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_435(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_435(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_435(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_436(bool bParam0, int iParam1)
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
				if (func_729(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_63(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
			if (func_729(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_437(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_435(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_435(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_437(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_438(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_435(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_439(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_432(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_432(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_440(8000, 0, 0) > 0)
	{
		if (func_440(8000, 0, 0) < (iParam0 + func_432(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_440(8000, 0, 0) - func_432(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_440(int iParam0, bool bParam1, int iParam2)
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

int func_441()
{
	return 1;
}

int func_442(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_443(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_444(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

void func_445()
{
	Global_2454002 = 1;
}

void func_446(int iParam0, var uParam1, var uParam2)
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
	iVar0 = func_448(iParam0);
	iVar1 = func_447(iParam0);
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
	else if (func_351(iParam0))
	{
		if (iVar2 > Global_262145.f_16476)
		{
			iVar2 = Global_262145.f_16476;
		}
	}
	else if (func_204(iParam0, 0) || func_377(iParam0))
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

int func_447(int iParam0)
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

int func_448(int iParam0)
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
			if (!func_505())
			{
				return Global_262145.f_16010;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_505())
			{
				return Global_262145.f_16101;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_505())
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

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_505())
		{
			if (func_400(0))
			{
				if (!func_228(0))
				{
					if (unk_0x1E0256D6F1052B31(func_402()))
					{
						if (func_458() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_458());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_456(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_453("GB_BCUT_TICK1", func_402(), iVar0, 0, 0, 1, 1);
						}
						func_452(20);
						func_450(func_402(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_450(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_729(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_451(iParam0));
	}
}

var func_451(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

void func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_453(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0xF5640E619D8FCD5B(func_325(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_454(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_281(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_454(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_455(&cVar0);
}

var func_455(char[4] cParam0)
{
	return cParam0;
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_457(1);
	}
	else
	{
		iVar1 = func_457(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_457(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_458()
{
	return Global_262145.f_10888;
}

void func_459(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_398())
			{
				Var0 = { func_469() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_468(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_468(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_462(unk_0xFB6B3EEFAB2DD12C(), Var0.f_0, *uParam3);
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
				iVar11 = func_461(&uVar10);
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
					func_452(86);
				}
				Global_2494149.f_4710.f_190 = *iParam2;
			}
			else if (func_228(0))
			{
				Var15 = { func_460(func_402()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_468(func_402(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_468(func_402(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_462(func_402(), Var15.f_0, *uParam3);
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

struct<2> func_460(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_184;
}

int func_461(var uParam0)
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
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0xFB6B3EEFAB2DD12C(), 1))
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

int func_462(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_467(iParam1);
	if (func_466(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14955;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14960);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14965);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14954;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14959);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14964);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14953;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14958);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14963);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14951;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14956);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14961);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14952;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14957);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14962);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_463(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1))
	{
		iVar0 = func_464(iParam0, iParam1);
		return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_466(iParam1) && iParam0 != func_60())
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

int func_465(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_466(iParam1) && iParam0 != func_60())
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

int func_466(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_467(int iParam0)
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

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_466(iParam1))
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

struct<2> func_469()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_184;
}

void func_470(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_113(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (bParam1)
			{
				func_498();
			}
			func_497();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_113(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_489(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_488(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_461(&uVar2);
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
						func_452(44);
					}
				}
				func_482(*iParam3);
				func_481();
				Global_2494149.f_4710.f_190 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x11B9E7FF50B2F4CC())
				{
					iVar8 = iVar7;
					if (unk_0x28E01BEA13B73DF2(iVar8))
					{
						iVar9 = unk_0x28B48C55342F6368(iVar8);
						if (func_480(iVar9))
						{
							func_472(iVar9, 1, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_113(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_471();
		}
	}
}

void func_471()
{
	int iVar0;
	
	iVar0 = Global_2524336[func_19()];
	iVar0++;
	func_379(3649, iVar0, -1, 1);
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_474(iParam0);
	func_473(iParam0, uVar0, iParam1, iParam2);
}

void func_473(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 471;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	if (iParam0 != func_60())
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_451(iParam0));
		}
	}
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_479();
	iVar0 = func_477(iParam0, iVar0);
	iVar1 = Global_1618089[func_402() /*390*/].f_11.f_288;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12954));
	if (iVar0 < func_476())
	{
		iVar0 = func_476();
	}
	if (iVar0 > func_475())
	{
		iVar0 = func_475();
	}
	return iVar0;
}

int func_475()
{
	return Global_262145.f_12955;
}

int func_476()
{
	return Global_262145.f_14130;
}

int func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_502(iParam0) * func_478());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_478()
{
	return Global_262145.f_14129;
}

var func_479()
{
	return Global_262145.f_10880;
}

int func_480(int iParam0)
{
	if (unk_0x1E0256D6F1052B31(iParam0))
	{
		if (iParam0 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (func_71(iParam0, unk_0xFB6B3EEFAB2DD12C(), 0))
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

void func_481()
{
	int iVar0;
	
	iVar0 = Global_2524342[func_19()];
	iVar0++;
	func_379(3648, iVar0, -1, 1);
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2524345[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_379(3650, iVar0, -1, 1);
	if (func_485(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_484(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_483(7666, iVar2, -1, 1);
	}
}

var func_483(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_484(int iParam0)
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

int func_485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_487(iParam0, iParam1);
	uVar2 = func_486(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD406E3B002060510(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_486(int iParam0)
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

int func_487(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

var func_488(int iParam0)
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

int func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_496(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_495(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_494(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_490(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_490(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_494(unk_0x7BC26452241AC7C9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_490(int iParam0)
{
	int iVar0;
	
	if (func_493(iParam0))
	{
		iVar0 = func_491(func_492(iParam0));
		return func_382(iVar0, -1, 0);
	}
	return 0;
}

int func_491(int iParam0)
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

int func_492(int iParam0)
{
	int iVar0;
	
	if (func_493(iParam0))
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

int func_493(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_494(int iParam0)
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

int func_495(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_493(iParam0))
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

int func_496(int iParam0)
{
	int iVar0;
	
	if (func_493(iParam0))
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

void func_497()
{
	int iVar0;
	
	iVar0 = Global_2524333[func_19()];
	iVar0++;
	Global_2524333[func_19()] = iVar0;
	func_379(3647, iVar0, -1, 1);
}

void func_498()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2524330[func_19()];
	iVar1 = Global_2524339[func_19()];
	iVar0++;
	iVar1++;
	Global_2524330[func_19()] = iVar0;
	Global_2524339[func_19()] = iVar1;
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_102 = iVar1;
	func_379(3645, iVar0, -1, 1);
	func_379(3646, iVar1, -1, 1);
}

void func_499()
{
	if (func_505())
	{
		Global_2443860.f_3065.f_134 = 0;
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
	}
}

void func_500()
{
	if (func_505())
	{
		if (Global_2443860.f_3065.f_134 < 10)
		{
			Global_2443860.f_3065.f_134++;
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
		}
	}
}

void func_501()
{
	if (func_505())
	{
		if (Global_2443860.f_3065.f_134 > 0)
		{
			Global_2443860.f_3065.f_134 = (Global_2443860.f_3065.f_134 - 1);
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_288 = Global_2443860.f_3065.f_134;
		}
	}
}

int func_502(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_27;
}

int func_503(int iParam0)
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

int func_504(int iParam0)
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

bool func_505()
{
	return func_113(unk_0xFB6B3EEFAB2DD12C());
}

void func_506(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_507(iParam0))
	{
		if (!func_505())
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
	if (func_295(iParam0))
	{
		*uParam1 = (Global_262145.f_16133 / 100f);
		*uParam2 = (Global_262145.f_16133 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10898;
		*uParam2 = Global_262145.f_10897;
	}
	if (func_295(iParam0))
	{
		if (func_171(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			*uParam1 = (Global_262145.f_16132 / 100f);
			*uParam2 = (Global_262145.f_16132 / 100f);
		}
	}
	else if (func_171(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		*uParam1 = Global_262145.f_10896;
		*uParam2 = Global_262145.f_10895;
	}
	iVar0 = func_231();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0xFB6B3EEFAB2DD12C(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_507(int iParam0)
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

int func_508()
{
	return (Local_99.f_115 * Global_262145.f_13025);
}

int func_509()
{
	return (Local_99.f_115 * Global_262145.f_13024);
}

void func_510(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_95(unk_0xFB6B3EEFAB2DD12C());
	if (func_295(iVar0))
	{
		Global_1759266.f_2 = func_524();
		Global_1759266.f_3 = func_523();
		Global_1759266.f_50 = iParam4;
		Global_1759266.f_51 = iParam5;
		Global_1759266.f_10 = unk_0x632066A9E8CB2C4D();
		Global_1759266.f_20 = (Global_1759266.f_10 - Global_1759266.f_9);
		Global_1759266.f_12 = iParam1;
		Global_1759266.f_19 = func_517(iVar0, bParam0, func_522(bParam3));
		if (bParam0)
		{
			Global_1759266.f_11 = 1;
		}
		else
		{
			Global_1759266.f_11 = 0;
		}
		if ((func_114(unk_0xFB6B3EEFAB2DD12C()) || func_125(unk_0xFB6B3EEFAB2DD12C())) || func_133(unk_0xFB6B3EEFAB2DD12C()))
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
			Global_1759266.f_45 = func_516(func_402(), iParam2);
			Global_1759266.f_47 = iParam7;
			Global_1759266.f_46 = iParam6;
			Global_1759266.f_52 = func_515(func_402(), iParam2);
		}
		func_513(iVar0);
	}
	else if (func_299(iVar0))
	{
		Global_1759319.f_2 = func_524();
		Global_1759319.f_3 = func_523();
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
		if ((func_114(unk_0xFB6B3EEFAB2DD12C()) || func_125(unk_0xFB6B3EEFAB2DD12C())) || func_133(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1759319.f_8 = 1;
		}
		else
		{
			Global_1759319.f_8 = 0;
		}
		func_511(iVar0);
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
			if ((func_114(unk_0xFB6B3EEFAB2DD12C()) || func_125(unk_0xFB6B3EEFAB2DD12C())) || func_133(unk_0xFB6B3EEFAB2DD12C()))
			{
				Global_1759248.f_4 = 1;
			}
		}
	}
}

void func_511(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1759319);
	func_512();
}

void func_512()
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

void func_513(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xC6BC6CCC042DA754(&Global_1759266);
	func_514();
}

void func_514()
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

int func_515(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_463(iParam0, iParam1, 2);
	bVar1 = func_463(iParam0, iParam1, 1);
	bVar2 = func_463(iParam0, iParam1, 0);
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

int func_516(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_466(iParam1))
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

int func_517(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_351(iParam0))
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
	else if (func_350(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_204(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15670;
			iVar1 = 20;
		}
	}
	else if (func_295(iParam0))
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
		unk_0x45642B16386FB81D(func_521(func_402()), func_520(func_402()), func_524(), func_523(), iVar1, iVar0);
	}
	func_519(iVar0);
	func_518(iVar0);
	return iVar0;
}

void func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = func_382(3940, -1, 0);
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
	func_380(3940, iVar0, -1, 1, 0);
}

void func_519(int iParam0)
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

int func_520(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[1];
}

int func_521(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[0];
}

int func_522(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_114(unk_0xFB6B3EEFAB2DD12C()) || func_133(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_523()
{
	if (Global_1759248.f_3 != 0)
	{
		return Global_1759248.f_3;
	}
	return -1;
}

int func_524()
{
	if (Global_1759248.f_2 != 0)
	{
		return Global_1759248.f_2;
	}
	return -1;
}

int func_525(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_60();
	iVar1 = func_60();
	iVar2 = func_60();
	return func_526(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_526(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_341(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_321(&Var0);
}

int func_527(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	if (iVar0 != -1)
	{
		return func_173(iVar0);
	}
	return 1;
}

char* func_528(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		uVar0 = func_367(&(Global_1618089[iParam0 /*390*/].f_11.f_97));
		return uVar0;
	}
	if (Global_1618089[iParam0 /*390*/].f_11.f_113 != Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_113)
	{
		uVar0 = func_368(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0xFB6B3EEFAB2DD12C(), 28)) || func_371(iParam0)) && !func_370(iParam0))
	{
		return func_368(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
		{
			if (!unk_0xF1A016B51831B87B() && !unk_0x9F33BB03A41E0DCC(0, -1, 1))
			{
				return func_368(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_367(&(Global_1618089[iVar1 /*390*/].f_11.f_97));
		if (unk_0xC55B9553B3EDADE9(uVar0))
		{
			return func_368(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_529()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_651() && !func_276())
	{
		return;
	}
	if (!func_342())
	{
		return;
	}
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	if (func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar0 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	}
	iVar1 = func_124(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_99.f_847)))
	{
		iVar2 = (func_10() - func_543(&(Local_99.f_847), 0, 0));
		iVar3 = (func_542() - Local_99.f_115);
		func_540(iVar2);
		if (iVar2 > 30000)
		{
			func_530(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_530(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_530(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_530(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_538(0) == 0)
	{
		return;
	}
	func_537();
	func_534(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_442(sParam4))
	{
		sVar0 = sParam4;
	}
	func_531(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_531(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_533(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_532(7, iVar0);
		Global_1354290.f_4131[iVar0] = uParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = uParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = uParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_532(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_533(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

void func_534(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_533(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_532(6, iVar0);
		Global_1354290.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_3579.f_183[iVar0] = iParam3;
		Global_1354290.f_3579.f_172[iVar0] = iParam2;
		Global_1354290.f_3579.f_260[iVar0] = iParam4;
		Global_1354290.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354290.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354290.f_3579.f_443[iVar0] = iParam7;
		Global_1354290.f_3579.f_454[iVar0] = iParam8;
		Global_1354290.f_3579.f_497[iVar0] = iParam9;
		Global_1354290.f_3579.f_508[iVar0] = iParam10;
		Global_1354290.f_3579.f_205[iVar0] = iParam11;
		Global_1354290.f_3579.f_216[iVar0] = iParam12;
		Global_1354290.f_3579.f_227[iVar0] = iParam13;
		Global_1354290.f_3579.f_238[iVar0] = iParam14;
		Global_1354290.f_3579.f_249[iVar0] = iParam15;
		Global_1354290.f_3579.f_519[iVar0] = iParam16;
		Global_1354290.f_3579.f_530[iVar0] = iParam17;
		Global_1354290.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_536())
		{
			Global_1354290.f_941 = 1;
		}
		if (unk_0x2D337DD29A7ABD30())
		{
			iVar2 = 0;
			unk_0xBC8A4E0C71749580(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354290.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354290.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354290.f_941 = 1;
			}
			if (func_535())
			{
				Global_1354290.f_945 = 1;
			}
		}
	}
}

int func_535()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0xBC8A4E0C71749580(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_536()
{
	if ((unk_0x37F0B37A9EF3F53B() == 8 || unk_0x37F0B37A9EF3F53B() == 9) || unk_0x37F0B37A9EF3F53B() == 10)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	Global_2454006 = 1;
}

int func_538(bool bParam0)
{
	if (func_539())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_729(unk_0xFB6B3EEFAB2DD12C(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_539()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 12);
}

void func_540(int iParam0)
{
	if (unk_0xF44A5E894FE76438(iLocal_1421, 8))
	{
		func_541();
		return;
	}
	if (!unk_0xF44A5E894FE76438(iLocal_1421, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xC86A1E7DAC7A9357("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_1421, 15);
				unk_0xB8A73E7DA87B2968(&iLocal_1421, 9);
				unk_0xFA320609400AECAE("AllowScoreAndRadio", 1);
				unk_0xE64FA07C00C340C6(0);
				unk_0xFA320609400AECAE("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_1421, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xF44A5E894FE76438(iLocal_1421, 11))
			{
				if (unk_0xFB2A602DE19D1E98("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_1421, 11);
				}
			}
			else
			{
				unk_0xF44A5E894FE76438(iLocal_1421, 11);
				if (!unk_0xF44A5E894FE76438(iLocal_1421, 14))
				{
					if (unk_0xC86A1E7DAC7A9357("APT_COUNTDOWN_30S"))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_1421, 14);
					}
				}
			}
			if (unk_0xF44A5E894FE76438(iLocal_1421, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xF44A5E894FE76438(iLocal_1421, 12))
					{
						unk_0xE64FA07C00C340C6(1);
						unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
						unk_0xB8A73E7DA87B2968(&iLocal_1421, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xC86A1E7DAC7A9357("APT_FADE_IN_RADIO"))
						{
							unk_0xCE9DEE48C6D0851C("APT_COUNTDOWN_30S_KILL");
							unk_0x4EA098C870B73AB7(&iLocal_1421, 9);
						}
					}
				}
			}
		}
	}
}

void func_541()
{
	if (unk_0xF44A5E894FE76438(iLocal_1421, 8))
	{
		if (unk_0xF44A5E894FE76438(iLocal_1421, 9))
		{
			if (!unk_0xF44A5E894FE76438(iLocal_1421, 10))
			{
				if (unk_0xF44A5E894FE76438(iLocal_1421, 11))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_1421, 12))
					{
						unk_0xE64FA07C00C340C6(1);
						unk_0xFA320609400AECAE("AllowScoreAndRadio", 0);
						unk_0xFA320609400AECAE("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xF44A5E894FE76438(iLocal_1421, 16))
				{
					if (unk_0xC86A1E7DAC7A9357("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_1421, 16);
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_1421, 16))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_1421, 13))
					{
						if (unk_0xC86A1E7DAC7A9357("APT_FADE_IN_RADIO"))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1421, 13);
						}
					}
					if (unk_0xF44A5E894FE76438(iLocal_1421, 13))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_1421, 10);
					}
				}
			}
		}
	}
}

int func_542()
{
	return 4;
}

int func_543(var uParam0, bool bParam1, bool bParam2)
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

void func_544()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0xFB6B3EEFAB2DD12C();
	iVar18 = unk_0x1E7FB1CA38C403F6();
	if (func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar18 = func_277();
		iVar17 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	}
	iVar19 = func_124(iVar17);
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if (!func_342())
		{
			if (func_561("HUNT_OBJ"))
			{
				func_584();
			}
			if (func_561("HUNT_OBJ1L"))
			{
				func_584();
			}
			if (func_561("HUNT_TOBJ"))
			{
				func_584();
			}
			if (func_561("HUNT_DOBJ"))
			{
				func_584();
			}
			if (func_561("HUNT_DOBJ1L"))
			{
				func_584();
			}
			return;
		}
	}
	else if (!unk_0xF44A5E894FE76438(Local_971[iVar18 /*14*/].f_1, 6))
	{
		func_584();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_561("HUNT_OBJ"))
		{
			func_584();
		}
		if (func_561("HUNT_OBJ1L"))
		{
			func_584();
		}
		if (func_561("HUNT_TOBJ"))
		{
			func_584();
		}
		if (func_561("HUNT_DOBJ"))
		{
			func_584();
		}
		if (func_561("HUNT_DOBJ1L"))
		{
			func_584();
		}
		return;
	}
	bVar20 = func_560() == true;
	if (iVar18 == Local_99.f_118)
	{
		if (!bVar20)
		{
			if (!func_561("HUNT_OBJ"))
			{
				func_557("HUNT_OBJ", 0);
			}
		}
		else if (!func_561("HUNT_OBJ1L"))
		{
			func_557("HUNT_OBJ1L", 0);
		}
	}
	else if (func_652() == Local_99.f_118)
	{
		if (!bVar20)
		{
			if (!func_561("HUNT_OBJ"))
			{
				func_557("HUNT_OBJ", 0);
			}
		}
		else if (!func_561("HUNT_OBJ1L"))
		{
			func_557("HUNT_OBJ1L", 0);
		}
	}
	else if (func_276())
	{
		if (Local_99.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_561("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_528(unk_0x7A4693BB354F3CD3(Local_99.f_119)), 64);
					iVar0 = func_527(unk_0x7A4693BB354F3CD3(Local_99.f_119));
					func_545("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_561("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_528(unk_0x7A4693BB354F3CD3(Local_99.f_119)), 64);
				iVar0 = func_527(unk_0x7A4693BB354F3CD3(Local_99.f_119));
				func_545("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_545(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_546(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 16;
		Global_1312571.f_56 = iParam2;
	}
}

int func_546(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_556(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_550();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = uParam3;
	Global_1312571.f_56 = uParam3;
	func_549();
	func_548(bParam2);
	func_547();
	return 1;
}

void func_547()
{
	unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 1);
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x4EA098C870B73AB7(&(Global_1312571.f_59), 0);
}

void func_549()
{
	Global_1312571.f_10 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 86400000);
	Global_1312571.f_11 = unk_0x7414B386C0020BEC();
}

void func_550()
{
	func_552();
	func_551(0);
}

void func_551(bool bParam0)
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

void func_552()
{
	if (!func_555())
	{
	}
	if (func_554())
	{
		unk_0x9F87DFE2C82D23E7(&(Global_1312571.f_12));
		func_553();
		unk_0x231B7D69E0C82ABD();
	}
}

void func_553()
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

int func_554()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_555()
{
	if (!func_554())
	{
		return 0;
	}
	unk_0xC450F7ACA7F40F98(&(Global_1312571.f_12));
	func_553();
	return unk_0x1B1A26465DF20C87();
}

bool func_556(char* sParam0, char* sParam1)
{
	if (!func_554())
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

void func_557(char* sParam0, bool bParam1)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam0) > 23)
	{
		return;
	}
	if (func_558(sParam0))
	{
		return;
	}
	func_550();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x0FBCE11007AF301F(), 32);
	Global_1312571.f_9 = unk_0x6D9FF4C899CD785F(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_549();
	func_548(bParam1);
	func_547();
}

bool func_558(char* sParam0)
{
	if (!func_554())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_559(uParam0);
	}
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_12));
}

bool func_559(char* sParam0)
{
	if (!func_554())
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(uParam0))
	{
		return 0;
	}
	return unk_0x6D9FF4C899CD785F(sParam0) == unk_0x6D9FF4C899CD785F(&(Global_1312571.f_16));
}

int func_560()
{
	return (4 - Local_99.f_115);
}

int func_561(char* sParam0)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return 0;
	}
	if (!func_554())
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
	return func_558(sParam0);
}

void func_562()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_651() && !func_276())
	{
		return;
	}
	if (!func_342())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar1 = unk_0xFB6B3EEFAB2DD12C();
		iVar2 = unk_0x1E7FB1CA38C403F6();
	}
	else
	{
		iVar2 = func_277();
		iVar1 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(iLocal_1420, 1))
	{
		iVar0 = func_124(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_99.f_118 || func_652() == Local_99.f_118)
			{
				if (func_567(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_320(85, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x1E7FB1CA38C403F6())
					{
						func_566(1);
						func_563(-1, 0, 0, -1);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x1E7FB1CA38C403F6())
				{
					func_563(-1, 0, 0, -1);
				}
				func_320(85, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0xB8A73E7DA87B2968(&iLocal_1420, 1);
	}
}

void func_563(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_95(unk_0xFB6B3EEFAB2DD12C());
	if (iParam2 || func_295(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1759266 = iVar0;
		if (func_351(iVar0))
		{
			Global_1759266.f_1 = 4;
		}
		else if (func_350(iVar0))
		{
			Global_1759266.f_1 = 5;
		}
		else if (func_204(iVar0, 0))
		{
			Global_1759266.f_1 = 2;
			if (func_376(iVar0))
			{
				Global_1759266.f_1 = 3;
			}
		}
		else
		{
			Global_1759266.f_1 = 1;
		}
		if (func_402() != func_60())
		{
			Global_1759266.f_4 = func_521(func_402());
			Global_1759266.f_5 = func_520(func_402());
		}
		if (func_231() != func_60())
		{
			func_401(func_231(), &(Global_1759266.f_6), &(Global_1759266.f_7));
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
			Global_1759266.f_40 = func_467(iParam1);
			Global_1759266.f_41 = func_565();
			Global_1759266.f_42 = func_468(unk_0xFB6B3EEFAB2DD12C(), iParam1);
			Global_1759266.f_44 = func_516(unk_0xFB6B3EEFAB2DD12C(), iParam1);
		}
	}
	else if (func_299(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1759319 = iVar0;
		Global_1759266.f_1 = 1;
		if (func_402() != func_60())
		{
			Global_1759319.f_4 = func_521(func_402());
			Global_1759319.f_5 = func_520(func_402());
		}
		if (func_231() != func_60())
		{
			func_401(func_231(), &(Global_1759319.f_6), &(Global_1759319.f_7));
		}
		Global_1759319.f_9 = unk_0x632066A9E8CB2C4D();
		if (iParam0 != -1)
		{
			Global_1759319.f_21 = iParam0;
		}
	}
	else
	{
		if (func_402() != func_60())
		{
			Global_1759248 = func_521(func_402());
			Global_1759248.f_1 = func_520(func_402());
		}
		Global_1759248.f_5 = unk_0x632066A9E8CB2C4D();
		Global_1759248.f_13 = func_564();
		Global_1759248.f_15 = 0;
		if (func_400(1))
		{
			if (func_231() == func_402())
			{
				Global_1759248.f_15 = 1;
			}
		}
	}
}

int func_564()
{
	int iVar0;
	
	iVar0 = func_402();
	if (iVar0 != func_60())
	{
		return Global_1618089[iVar0 /*390*/].f_11.f_91;
	}
	return 0;
}

var func_565()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_465(unk_0xFB6B3EEFAB2DD12C(), iVar0))
		{
			unk_0xB8A73E7DA87B2968(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_566(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0xFB6B3EEFAB2DD12C(), 9))
		{
			if (func_124(unk_0xFB6B3EEFAB2DD12C()) != 0)
			{
				func_100(9);
			}
		}
	}
	else if (func_99(unk_0xFB6B3EEFAB2DD12C(), 9))
	{
		func_98(9);
	}
}

int func_567(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_568(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_568(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_578();
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
	if (func_577() == 0)
	{
		func_575();
		return 0;
	}
	func_574(Global_16812);
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
		func_573(0);
		func_573(2);
		func_573(1);
	}
	else
	{
		func_578();
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
					func_573(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_573(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_573(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_573(3);
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
		func_578();
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
			if (!func_363())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_572(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_569(1);
			func_572(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_569(int iParam0)
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
		if (func_571(14))
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
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
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_570(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_570(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xC55B9553B3EDADE9(uParam7))
	{
		func_152(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam8))
	{
		func_152(iParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam9))
	{
		func_152(iParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam10))
	{
		func_152(iParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam11))
	{
		func_152(iParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_571(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_572(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_573(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_574(int iParam0)
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

void func_575()
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
		if (!func_576(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_576(struct<6> Param0, struct<6> Param6)
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

int func_577()
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
			if (!func_576(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
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

void func_578()
{
	if (func_571(14))
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
		Global_14443 = func_579();
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

var func_579()
{
	func_580();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_580()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_583(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_582(unk_0xD5A676B97920D126());
			if (func_581(iVar0) && (!func_571(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_581(Global_101652.f_2079.f_539.f_3549))
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

bool func_581(int iParam0)
{
	return iParam0 < 3;
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_583(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_583(int iParam0)
{
	if (func_581(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_584()
{
	if (!func_554())
	{
		return;
	}
	if (!unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == Global_1312571.f_9)
	{
		return;
	}
	func_550();
}

void func_585()
{
	if (func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	switch (Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_9)
	{
		case 0:
			func_587();
			func_288();
			if (Local_99.f_117 == 2)
			{
				Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_9 = 2;
			}
			else if (Local_99.f_117 == 3)
			{
				Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_288();
			if (func_586())
			{
				func_541();
			}
			if (Local_99.f_117 == 3)
			{
				Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_665();
			break;
	}
}

bool func_586()
{
	return ((unk_0xF44A5E894FE76438(Local_99.f_1, 1) || unk_0xF44A5E894FE76438(Local_99.f_1, 3)) || unk_0xF44A5E894FE76438(Local_99.f_1, 5));
}

void func_587()
{
	func_607();
	func_606();
	func_562();
	func_544();
	func_596();
	func_595();
	func_590();
	func_589();
	func_529();
	func_588();
}

void func_588()
{
}

void func_589()
{
	if (func_586())
	{
		return;
	}
	if (!func_651())
	{
		return;
	}
	if (!Global_262145.f_13017)
	{
		return;
	}
	if (Local_99.f_115 == 0)
	{
		return;
	}
}

void func_590()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_651())
	{
		return;
	}
	if (func_586())
	{
		return;
	}
	fVar4 = func_134(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1427 != iVar0)
			{
				Var1 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 0) };
				func_87(10, 0, 0);
				func_591(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1427 = iVar0;
				unk_0xB8A73E7DA87B2968(&iLocal_1420, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_316();
	}
}

void func_591(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
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
	if (func_592(unk_0xFB6B3EEFAB2DD12C()))
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

int func_592(int iParam0)
{
	if ((func_593(iParam0, 1) || func_122(iParam0)) || func_96(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_593(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_594(iParam0) != 0;
	}
	return func_256(iParam0, bParam1);
}

int func_594(int iParam0)
{
	if (func_729(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

void func_595()
{
	int iVar0;
	
	if (iLocal_1424 != Local_99.f_115)
	{
		if (func_651())
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (!unk_0xA488C8C46BFD5A39())
					{
						iVar0 = unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C());
						switch (Local_99.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_13014)
								{
									unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), Global_262145.f_13014, 0);
									unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_13015)
								{
									unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), Global_262145.f_13015, 0);
									unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_13016)
								{
									unk_0x028AA922F2B17B2A(Global_262145.f_13016);
									unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), Global_262145.f_13016, 0);
									unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
								}
								break;
						}
						iLocal_1424 = Local_99.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1424 = Local_99.f_115;
		}
	}
}

void func_596()
{
	int iVar0;
	
	if (!func_342())
	{
		if (func_605("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return;
	}
	iVar0 = func_124(unk_0xFB6B3EEFAB2DD12C());
	if (iVar0 < 2)
	{
		if (func_605("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return;
	}
	if (!unk_0xF44A5E894FE76438(iLocal_1420, 2))
	{
		if (!func_604(85))
		{
			if (func_598(0, 1, 1, 1))
			{
				if (unk_0x1E7FB1CA38C403F6() == Local_99.f_118)
				{
					func_597("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xB8A73E7DA87B2968(&iLocal_1420, 2);
				}
				else if (func_652() == Local_99.f_118)
				{
					func_597("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xB8A73E7DA87B2968(&iLocal_1420, 2);
				}
				else if (func_276())
				{
					func_597("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_297(1);
					unk_0xB8A73E7DA87B2968(&iLocal_1420, 2);
				}
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_1420, 2))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_1420, 3))
		{
			if (func_598(0, 1, 1, 1))
			{
				if (!func_605("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x1E7FB1CA38C403F6() == Local_99.f_118 || func_652() == Local_99.f_118)
					{
						func_298("HUNT_HELPB", -1);
						func_297(1);
						unk_0xB8A73E7DA87B2968(&iLocal_1420, 3);
					}
				}
			}
		}
	}
}

void func_597(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xA97D81951B964419(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF5640E619D8FCD5B(iParam2);
	}
	unk_0xB1953EBEF4D6BD85(sParam1);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam3);
}

int func_598(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xA14FC57CB26C2B67())
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (!unk_0x8AFBC859AA63D3D7())
	{
		return 0;
	}
	if (func_266())
	{
		return 0;
	}
	if (func_364())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_256(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_602(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (func_601())
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
	if (func_600())
	{
		return 0;
	}
	if (func_599())
	{
		return 0;
	}
	if (func_259())
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

bool func_599()
{
	return Global_2443089.f_570;
}

bool func_600()
{
	return Global_2443089.f_722;
}

bool func_601()
{
	return Global_2433082.f_2506.f_577;
}

int func_602(int iParam0)
{
	if (Global_2421621[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_603()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

bool func_604(int iParam0)
{
	return Global_2433082.f_2199[0 /*76*/].f_1 == iParam0;
}

bool func_605(char* sParam0, char* sParam1)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	unk_0xB1953EBEF4D6BD85(sParam1);
	return unk_0x39EEBD00DF395566(0);
}

void func_606()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_134(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_117(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_116();
		}
	}
}

void func_607()
{
	if (func_127())
	{
		if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1, 1))
		{
			func_102(0);
			unk_0x4EA098C870B73AB7(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_124(unk_0xFB6B3EEFAB2DD12C()) == 0)
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1, 1))
	{
		if (!func_651())
		{
			if (!func_126())
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_1, 6))
				{
					func_102(1);
					unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_608()
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
		if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_2, iVar0))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_110, iVar0))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							if (func_652() == Local_99.f_118)
							{
								if (func_626(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_3, iVar0))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_112, iVar0))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
				{
					if (func_625(iVar0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_4, iVar0))
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_111, iVar0))
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x1DEB1994A3C25E35(unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_624(iVar0);
		if (func_342())
		{
			if (!unk_0x6901135DDCC4904D(uLocal_1435[iVar0]))
			{
				if (!func_586())
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1435[iVar0] = unk_0x890C68C377CE0CA4(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1));
							if (func_652() == Local_99.f_118)
							{
								unk_0x0D792BA553E57B27(uLocal_1435[iVar0], 12);
								unk_0xD6507DB77BCBD904(uLocal_1435[iVar0], 432);
								func_623(&(uLocal_1435[iVar0]), 6);
							}
							else
							{
								unk_0xD6507DB77BCBD904(uLocal_1435[iVar0], 480);
								func_623(&(uLocal_1435[iVar0]), 9);
							}
							unk_0x5AF5569613C76AC3(uLocal_1435[iVar0], 1);
							unk_0x49A7A4E5E2FD02DC(uLocal_1435[iVar0], 7000);
							unk_0xF563C3AC64885E69(uLocal_1435[iVar0], 1.1f);
							unk_0x2EDAF851B28036F0(uLocal_1435[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x8A3D7569826A325D(&(uLocal_1435[iVar0]));
				}
				else if (func_586())
				{
					unk_0x8A3D7569826A325D(&(uLocal_1435[iVar0]));
				}
			}
		}
		else if (unk_0x6901135DDCC4904D(uLocal_1435[iVar0]))
		{
			unk_0x8A3D7569826A325D(&(uLocal_1435[iVar0]));
		}
		func_622(iVar0);
		func_621(iVar0);
		func_619(iVar0);
		switch (Local_99.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x04DE35D10A718EEF())
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0xB192238F4F854097(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x04DE35D10A718EEF())
				{
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xE4133A0C3C6C74A7(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xF44A5E894FE76438(Local_99.f_108, iVar0))
										{
											unk_0xB192238F4F854097(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xE95C934718B1A4FF(Local_99.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xF44A5E894FE76438(Local_99.f_108, iVar0))
											{
												unk_0x4EA098C870B73AB7(&(Local_99.f_108), iVar0);
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
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xE9148EE8AA200B60(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										unk_0xEBF1276539CCAA92(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_615(iVar0);
										if (!unk_0x00B5B0B68211D89B(uVar2))
										{
											unk_0xBB8F1D58B7578137(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x12A60388636C9B1C(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 0);
									unk_0xD38E07142A13F3FA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x12A60388636C9B1C(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x59F5284CDDD1B57D(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_614(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0x2ACD51F7A215F30D(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0x4572B13EE70C8F52(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x8D0CDF4F245C8BE9(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_99.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x8D0CDF4F245C8BE9(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xD38E07142A13F3FA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xD38E07142A13F3FA(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x81C4995860081BC3(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0x50CED8EEAE806923(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0xE9148EE8AA200B60(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (func_651())
	{
		func_609();
	}
}

void func_609()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_610(uLocal_1681[iVar0], &(Local_1440[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_610(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (func_613())
		{
			Global_2433082 = unk_0xFB6B3EEFAB2DD12C();
		}
		if (bParam3)
		{
			func_612(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, 1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_612(unk_0x9E9133ACB2BCC1D5(uParam0), uParam1, -1, Global_2433082, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x6901135DDCC4904D(*uParam1))
	{
		func_611(uParam1);
	}
}

void func_611(var uParam0)
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

int func_612(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
					unk_0xB1953EBEF4D6BD85(uParam7);
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

bool func_613()
{
	return Global_1315206;
}

int func_614(int iParam0, var uParam1)
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
	Var3 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar6)))
		{
			iVar7 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x4572B13EE70C8F52(iVar7);
				if (iVar6 == Local_99.f_118 || Local_971[iVar6 /*14*/].f_10 == Local_99.f_118)
				{
					if (!unk_0x00B5B0B68211D89B(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iVar8, 1), Var3);
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

var func_615(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_616(iParam0);
	if (iVar1 != func_60())
	{
		uVar0 = unk_0x4572B13EE70C8F52(iVar1);
	}
	return uVar0;
}

int func_616(int iParam0)
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
	Var4 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar3)))
		{
			iVar7 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar3));
			uVar8 = unk_0x4572B13EE70C8F52(iVar7);
			if (func_171(iVar7, 1))
			{
				if (!unk_0xF44A5E894FE76438(Local_971[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Local_99.f_118)))
					{
						if (!unk_0x00B5B0B68211D89B(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iVar8, 1), Var4);
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

int func_617(var uParam0)
{
	if (unk_0x7577EA45D81AA1C8(uParam0))
	{
		return 1;
	}
	if (func_618(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_618(var uParam0)
{
	if (!unk_0x04DE35D10A718EEF())
	{
		return 0;
	}
	if (!unk_0x1B982A8B37108B3C(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_619(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_342())
	{
		return;
	}
	if (func_124(unk_0xFB6B3EEFAB2DD12C()) < 1)
	{
		return;
	}
	if (!func_651() && !func_276())
	{
		return;
	}
	if (func_586())
	{
		return;
	}
	if (func_651())
	{
		unk_0xC163336F8C5EA891(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xC163336F8C5EA891(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x81C4995860081BC3(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0xF07E528D7DEDB148(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0x0DBD8FE531FD620D(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 0);
				func_620(uVar7, uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_620(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xF07E528D7DEDB148(2, unk_0xC086F8D75730FA3A(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_621(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_99.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_652() != Local_99.f_118)
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	Var4 = { unk_0xC086F8D75730FA3A(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_13), iParam0);
	}
}

void func_622(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_99.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_99.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_652() != Local_99.f_118)
	{
		return;
	}
	if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	Var4 = { unk_0xC086F8D75730FA3A(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_652() == Local_99.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
						return;
					}
					if (func_626(uVar7))
					{
						unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_623(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		uVar0 = func_313(iParam1);
		unk_0x4F095059F1C175D5(*uParam0, uVar0);
	}
}

void func_624(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_99.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0x50CED8EEAE806923(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x78D3CDB884C74FEB(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x87AA1B4BA52B1360(Var5, &fVar1, 0))
							{
								if (unk_0xC3D3EC28F0EB3C6D((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iParam0 /*26*/].f_1), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_625(int iParam0)
{
	if (unk_0x1B982A8B37108B3C(Local_99.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_99.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_626(var uParam0)
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
	if (func_627())
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

bool func_627()
{
	return Global_1574249;
}

void func_628()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_0 != 4)
	{
		iVar1 = unk_0x7A4693BB354F3CD3(iLocal_1423);
		if (unk_0x1E0256D6F1052B31(iVar1))
		{
			if (unk_0xBF474853319C6A20(iVar1))
			{
				if (!func_586())
				{
					if (!func_651())
					{
						if (func_276())
						{
							if (func_171(iVar1, 1))
							{
								iVar0 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Local_99.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_8, iLocal_1423))
									{
										func_314(iVar1, 432, 1);
										func_309(iVar1, func_313(iLocal_1712), 1);
										unk_0xB8A73E7DA87B2968(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_8), iLocal_1423);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_8, iLocal_1423))
			{
				func_314(iVar1, 432, 0);
				func_309(iVar1, func_313(iLocal_1712), 0);
				unk_0x4EA098C870B73AB7(&(Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_8), iLocal_1423);
			}
		}
	}
	iLocal_1423++;
	if (iLocal_1423 >= 32)
	{
		iLocal_1423 = 0;
	}
}

int func_629(bool bParam0)
{
	if (func_630(1))
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
		if (func_231() == func_60() || !func_729(func_231(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_630(bool bParam0)
{
	bool bVar0;
	
	if (!func_400(1))
	{
		bVar0 = false;
		if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 != func_60())
		{
			if (func_729(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55, 0, 1))
			{
				if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_23 == 4 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_631(func_95(unk_0xFB6B3EEFAB2DD12C())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_452(31);
				if (func_295(func_95(unk_0xFB6B3EEFAB2DD12C())))
				{
					func_452(81);
				}
				if (unk_0x1E0256D6F1052B31(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55))
				{
					Global_1616673 = func_325(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55, -2, 0, 0);
					if (!func_230(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55))
					{
						func_452(88);
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

int func_631(int iParam0)
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

void func_632()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1681[iVar0] = Local_99.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_633()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x1E7FB1CA38C403F6() == Local_99.f_118 || func_652() == Local_99.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				unk_0x1CE77FB04D5BBA36(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xFB6B3EEFAB2DD12C(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0x1CE77FB04D5BBA36(unk_0x9E9133ACB2BCC1D5(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0xFB6B3EEFAB2DD12C(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_634()
{
	if (Local_99.f_118 > -1)
	{
		iLocal_1712 = func_527(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(Local_99.f_118)));
	}
}

void func_635(float fParam0)
{
	float fVar0;
	
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_311())
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

void func_636(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 != iParam0)
	{
		func_650(-1);
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 = iParam0;
		if (func_649() != -1)
		{
			func_648(-1);
		}
		if (func_647() != -1)
		{
			func_646(-1);
		}
		func_645(iParam2);
		func_643(iParam0);
		if (!func_106(iParam0))
		{
			fVar0 = func_105(iParam0);
			if (fVar0 != 1f)
			{
				func_635(fVar0);
				unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 1);
			}
		}
		if (!func_109(iParam0) || iParam3)
		{
			if (func_107(iParam0, iParam2) && iParam3 == 1)
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
			if ((unk_0xF44A5E894FE76438(Global_2494149.f_4418, 1) || unk_0xF44A5E894FE76438(Global_2494149.f_4418, 4)) || unk_0xF44A5E894FE76438(Global_2494149.f_4418, 0))
			{
				func_452(6);
			}
			func_642();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x0AF219B759EA8670(3, 0);
			unk_0x0AF219B759EA8670(5, 0);
		}
		if (func_122(unk_0xFB6B3EEFAB2DD12C()) && func_114(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_1), 8);
		}
		func_638();
		if (func_637(iParam0))
		{
			unk_0x0AF219B759EA8670(3, 0);
			unk_0x0AF219B759EA8670(5, 0);
			unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 6);
		}
	}
}

int func_637(int iParam0)
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

void func_638()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_641();
	iVar2 = func_61(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
		if (unk_0x1E0256D6F1052B31(iVar1))
		{
			if (func_71(iVar1, iVar2, 1) || func_639(iVar1, unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0xE243F669198CD35E(unk_0xFB6B3EEFAB2DD12C(), iVar1, uVar3);
				unk_0xE243F669198CD35E(iVar1, unk_0xFB6B3EEFAB2DD12C(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_639(int iParam0, int iParam1)
{
	if (func_171(iParam0, 1) && func_171(iParam1, 1))
	{
		return (func_640(iParam0) == func_61(iParam1) || func_640(iParam1) == func_61(iParam0));
	}
	return 0;
}

int func_640(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1618089[func_61(iParam0) /*390*/].f_11.f_323;
	}
	return func_60();
}

int func_641()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	if (iVar0 != func_60())
	{
		if (func_729(iVar0, 0, 1))
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

void func_642()
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

void func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_382(3763, -1, 0);
	iVar1 = func_644(iParam0);
	if (iVar1 != -1)
	{
		unk_0xB8A73E7DA87B2968(&iVar0, iVar1);
		func_380(3763, iVar0, -1, 1, 0);
	}
}

int func_644(int iParam0)
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

void func_645(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	if (Global_1618089[iVar0 /*390*/].f_11.f_172 != iParam0)
	{
		Global_1618089[iVar0 /*390*/].f_11.f_172 = iParam0;
	}
}

void func_646(int iParam0)
{
	if (Global_2494149.f_4710.f_149 != iParam0)
	{
		Global_2494149.f_4710.f_149 = iParam0;
	}
}

int func_647()
{
	return Global_2494149.f_4710.f_149;
}

void func_648(int iParam0)
{
	if (Global_2494149.f_4710.f_148 != iParam0)
	{
		Global_2494149.f_4710.f_148 = iParam0;
	}
}

int func_649()
{
	return Global_2494149.f_4710.f_148;
}

void func_650(int iParam0)
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_31 = iParam0;
}

int func_651()
{
	int iVar0;
	
	iVar0 = func_652();
	if (iVar0 > -1)
	{
		if (Local_99.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_652()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		iVar0 = unk_0x1E7FB1CA38C403F6();
		iVar1 = unk_0xFB6B3EEFAB2DD12C();
	}
	else
	{
		iVar0 = func_277();
		iVar1 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_500;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_971[iVar0 /*14*/].f_10 != -1)
	{
		return Local_971[iVar0 /*14*/].f_10;
	}
	if (func_113(iVar1))
	{
		Local_971[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_99.f_118)
		{
			func_566(1);
		}
	}
	else if (func_171(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (unk_0xBF474853319C6A20(iVar2))
			{
				Local_971[iVar0 /*14*/].f_10 = unk_0xCA5CB25B27CC9477(iVar2);
			}
		}
	}
	return Local_971[iVar0 /*14*/].f_10;
}

int func_653()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x1B982A8B37108B3C(Local_99.f_2[iVar0 /*26*/].f_1))
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

int func_654()
{
	return Local_99.f_0;
}

int func_655(int iParam0)
{
	return Local_971[iParam0 /*14*/];
}

int func_656()
{
	bool bVar0;
	var uVar1;
	
	func_661(&bVar0, &uVar1);
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
	if (func_660())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_659())
	{
		return 1;
	}
	if (func_658(157))
	{
		if (!func_657())
		{
			return 1;
		}
	}
	if (func_658(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_311() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_311()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_657()
{
	return Global_2443089.f_577;
}

int func_658(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_659()
{
	return Global_2452479;
}

bool func_660()
{
	return Global_2443089.f_572;
}

void func_661(var uParam0, var uParam1)
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
					func_662(iVar0);
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

void func_662(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_729(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_663(uVar4, &bVar5))
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

int func_663(int iParam0, var uParam1)
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

void func_664()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_665()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		if (!unk_0xF44A5E894FE76438(iLocal_1420, 6))
		{
			if (unk_0x1995B52453EF6537())
			{
				if (func_651() || func_276())
				{
					func_510(0, 4, 0, 0, -1, -1, -1, -1);
					unk_0xB8A73E7DA87B2968(&iLocal_1420, 6);
				}
			}
		}
		uVar0 = Local_99.f_115;
		uVar1 = Local_99.f_121;
		iVar2 = -1;
		if (unk_0x1995B52453EF6537())
		{
			iVar2 = Local_971[unk_0x1E7FB1CA38C403F6() /*14*/].f_11;
		}
		func_710(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x1995B52453EF6537())
		{
			if (unk_0x627440686F6E9BBB(unk_0xD5A676B97920D126()) == iLocal_1425)
			{
				unk_0x417BCC1ECC12E9A2(unk_0xD5A676B97920D126(), iLocal_1426);
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_1420, 18))
	{
		func_319(1);
		unk_0x4EA098C870B73AB7(&iLocal_1420, 18);
	}
	func_709();
	if (Local_99.f_119 != -1)
	{
		if (unk_0xF44A5E894FE76438(iLocal_1420, 5))
		{
			if (unk_0x1E0256D6F1052B31(unk_0x7A4693BB354F3CD3(Local_99.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0x04DE35D10A718EEF())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xF44A5E894FE76438(Local_99.f_871, iVar3))
				{
					unk_0x1AAA727AD9762D22(Local_99.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xF44A5E894FE76438(iLocal_1420, 17))
	{
		unk_0x028AA922F2B17B2A(iLocal_1714);
		unk_0x4EA098C870B73AB7(&iLocal_1420, 17);
	}
	func_316();
	unk_0xB8A73E7DA87B2968(&iLocal_1421, 8);
	func_541();
	unk_0xE7838AA03E82E887(1);
	func_566(0);
	func_667(1, 0);
	unk_0x028AA922F2B17B2A(5);
	func_308();
	func_666();
}

void func_666()
{
	unk_0x01DFCA3621B68C4A();
}

void func_667(bool bParam0, int iParam1)
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
		func_707();
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 4);
	}
	if ((func_398() && iParam1 != 0) && Global_262145.f_14974)
	{
		if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 190 || Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_32 == 192)
		{
			func_692(unk_0xFB6B3EEFAB2DD12C(), iParam1);
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
		if (!unk_0xF44A5E894FE76438(Global_1574332.f_1, 14) && !func_122(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_102(0);
		}
	}
	else if (func_690(unk_0xFB6B3EEFAB2DD12C()) != -1)
	{
		func_650(-1);
	}
	func_689(func_60());
	if (func_76(16))
	{
		func_75(16);
	}
	func_685(0);
	func_645(-1);
	func_684();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_683(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_681(iVar1);
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
	iVar2 = func_301();
	if ((func_203(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_680(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_351(iVar2))
	{
		func_676(-1, 1);
	}
	else if ((func_300(iVar2) || func_675(iVar2)) || func_674(iVar2))
	{
	}
	else
	{
		func_676(-1, 1);
	}
	func_98(19);
	func_98(20);
	func_98(21);
	func_98(22);
	func_98(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_673();
	if (func_114(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_566(0);
	}
	func_98(29);
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 = func_60();
	if (Global_2494149.f_4710.f_21 != 0)
	{
		Global_2494149.f_4710.f_21 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_122(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_97();
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
		func_672("IMPEXP_SELFDES", 0);
		func_670("IMPEXP_SELFDES");
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 8);
	}
	func_668(iVar2, 0);
}

void func_668(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_1759239.f_3, 9))
		{
			unk_0xE3E53903AE9B5BD5(func_669(iParam0));
			unk_0xB8A73E7DA87B2968(&(Global_1759239.f_3), 9);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_1759239.f_3, 9))
	{
		unk_0xB3C38A4B84C152BF(func_669(iParam0));
		unk_0x4EA098C870B73AB7(&(Global_1759239.f_3), 9);
	}
}

char* func_669(int iParam0)
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

void func_670(char* sParam0)
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
					func_578();
					Global_101652.f_13084[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_671(iVar0))
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

int func_671(int iParam0)
{
	if ((Global_101652.f_13084[iParam0 /*104*/].f_99[0] == 1 || Global_101652.f_13084[iParam0 /*104*/].f_99[1] == 1) || Global_101652.f_13084[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_672(char* sParam0, int iParam1)
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

void func_673()
{
	if (func_117(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_98(25);
	}
}

int func_674(int iParam0)
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

int func_675(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_676(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_60())
		{
			if (func_679(unk_0xFB6B3EEFAB2DD12C()) == unk_0xFB6B3EEFAB2DD12C())
			{
				Global_2482207.f_93[func_678(iParam0)] = 1;
			}
		}
		iVar0 = func_678(159);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(157);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(148);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(164);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(142);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(152);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(166);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(170);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(173);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(179);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(200);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(201);
		if (func_677(iVar0, Global_262145.f_11105, bParam1))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(182);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(183);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(185);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(186);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(180);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(195);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(197);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(198);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(207);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(208);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(209);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(214);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(215);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(216);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(217);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(218);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(219);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(220);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(221);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_677(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0xFB6B3EEFAB2DD12C(), 19) && !func_99(unk_0xFB6B3EEFAB2DD12C(), 20)) && !func_99(unk_0xFB6B3EEFAB2DD12C(), 9))
		{
			return 0;
		}
	}
	if (Global_2482207.f_93[iParam0] == 1 && func_8(&(Global_2482207[iParam0 /*2*/])))
	{
		if (func_543(&(Global_2482207[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2482207.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_678(int iParam0)
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

int func_679(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_34;
}

void func_680(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_60())
		{
			Global_2482207.f_93[func_678(iParam0)] = 1;
		}
		iVar0 = func_678(155);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(163);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(160);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(153);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(162);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(154);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(171);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(172);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(199);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(194);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(193);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(210);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(205);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(189);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(211);
		if (func_677(iVar0, Global_262145.f_11106, 0))
		{
			func_145(&(Global_2482207[iVar0 /*2*/]));
			func_7(&(Global_2482207[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_681(int iParam0)
{
	if (!func_28(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_228[iParam0 /*3*/], func_682(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_228[iParam0 /*3*/] = { func_682() };
	}
	if (!func_28(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_215[iParam0 /*3*/], func_682(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_215[iParam0 /*3*/] = { func_682() };
	}
}

Vector3 func_682()
{
	struct<3> Var0;
	
	return Var0;
}

void func_683(int iParam0)
{
	if (!func_28(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_143[iParam0 /*3*/], func_682(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_143[iParam0 /*3*/] = { func_682() };
	}
	if (!func_28(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_118[iParam0 /*3*/], func_682(), 0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_118[iParam0 /*3*/] = { func_682() };
	}
}

void func_684()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573825 = { Var0 };
	Global_1573825.f_13 = func_60();
	if (unk_0xF44A5E894FE76438(Global_1573332, 3))
	{
		unk_0x4EA098C870B73AB7(&Global_1573332, 3);
	}
}

void func_685(bool bParam0)
{
	if (bParam0)
	{
		if (!func_688(unk_0xFB6B3EEFAB2DD12C(), 14))
		{
			func_687(14);
		}
	}
	else if (func_688(unk_0xFB6B3EEFAB2DD12C(), 14))
	{
		func_686(14);
	}
}

void func_686(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

void func_687(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_5), iParam0);
}

bool func_688(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_5, iParam1);
}

void func_689(int iParam0)
{
	if (func_113(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xFB6B3EEFAB2DD12C() != iParam0)
		{
			if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_323 != iParam0)
			{
				Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_323 = iParam0;
				if (iParam0 != func_60())
				{
				}
			}
		}
	}
}

int func_690(int iParam0)
{
	if (func_691(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_31;
	}
	return -1;
}

int func_691(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_31 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_692(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1) && func_706(iParam0, iParam1))
	{
		iVar0 = func_464(iParam0, iParam1);
		func_696(iVar0);
		func_693(iVar0, 1);
	}
}

void func_693(int iParam0, int iParam1)
{
	func_694(func_695(iParam0), iParam1, -1, 1);
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_6 = iParam1;
}

int func_694(int iParam0, var uParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

int func_695(int iParam0)
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

void func_696(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_705(unk_0xFB6B3EEFAB2DD12C(), iParam0);
	Global_2482195[iParam0] = 0;
	if (func_701(func_704(iParam0), -1, -1))
	{
		iVar0 = func_700(iVar1);
		iVar2 = func_516(unk_0xFB6B3EEFAB2DD12C(), iVar1);
		iVar3 = func_699(iVar1);
		iVar4 = func_700(iVar1);
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
		if (func_698(unk_0xFB6B3EEFAB2DD12C(), iVar1) > 0)
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_2 = (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_152[iParam0 /*11*/].f_2 - (func_699(iVar1) / 2));
		}
		iVar0 = (func_700(iVar1) / func_698(unk_0xFB6B3EEFAB2DD12C(), iVar1) + 1);
	}
	func_697(unk_0xFB6B3EEFAB2DD12C(), iVar1, iVar0);
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (func_466(iParam1))
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

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_466(iParam1))
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

int func_699(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_467(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14945;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14950;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14944;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14949;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14943;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14948;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14941;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14946;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14942;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14947;
			}
			break;
	}
	return uVar0;
}

int func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_467(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14926;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14935);
			}
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14940);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14927;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14934);
			}
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14939);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14928;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14933);
			}
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14938);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14929;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14931);
			}
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14936);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14930;
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14932);
			}
			if (func_463(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14937);
			}
			break;
	}
	return iVar0;
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_703(iParam0, iParam1);
	uVar2 = func_702(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x37F2E15EA03CDFFC(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_702(int iParam0)
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

int func_703(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_704(int iParam0)
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

int func_705(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_466(Global_1589933[iParam0 /*601*/].f_257.f_152[iParam1 /*11*/]))
	{
		uVar0 = Global_1589933[iParam0 /*601*/].f_257.f_152[iParam1 /*11*/];
	}
	return uVar0;
}

int func_706(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1))
	{
		iVar0 = func_464(iParam0, iParam1);
		if (Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_4 > 0 && Global_1589933[iParam0 /*601*/].f_257.f_152[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_707()
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 28);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 29);
	func_708(24);
}

void func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

void func_709()
{
	unk_0xA402A00DD48EB3E9(iLocal_1425);
}

void func_710(var uParam0, var uParam1, int iParam2, int iParam3)
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
			Var32.f_16 = uParam1;
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
			Var65.f_16 = uParam1;
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
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0x97AF68C094EABE13(&Var98);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1759248.f_15;
			unk_0x4FEE7960E29BA52C(&Var116);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1759248.f_15;
			unk_0xBFA2E4D3DCE3E1A0(&Var134);
		}
		else if (unk_0xCC257DA11A122B5F(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1759248.f_15;
			unk_0x376425006B2FE4F4(&Var153);
		}
	}
	func_711();
}

void func_711()
{
	struct<18> Var0;
	
	Global_1759248 = { Var0 };
}

void func_712(struct<20> Param0)
{
	func_727(func_728(Param0.f_0), Param0);
	unk_0xAC4AA684E16779D5(16);
	unk_0xF5116E26EBA83CA9(8);
	func_726(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_99, 872);
	unk_0x47DDB3A546F48091(&Local_971, 449);
	if (!func_725())
	{
		func_665();
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0x7E85CEE862B85A74(0);
		if (unk_0x04DE35D10A718EEF())
		{
		}
		func_722();
		func_713(0, 0);
		Local_971[unk_0x1E7FB1CA38C403F6() /*14*/] = 0;
	}
	else
	{
		func_665();
	}
}

void func_713(int iParam0, int iParam1)
{
	func_721();
	func_717(1);
	if ((iParam0 != 0 && unk_0x1E0256D6F1052B31(iParam1)) && func_716(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xB8A73E7DA87B2968(&Global_1759234, 0);
				break;
			}
	}
	if (!func_505() && !func_171(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (func_130())
		{
			func_101(3);
		}
		func_101(4);
	}
	if (func_400(0))
	{
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_55 = func_402();
	}
	if (func_295(iParam0))
	{
		func_514();
		Global_1759266.f_18 = func_715(func_231());
	}
	else if (func_299(func_690(unk_0xFB6B3EEFAB2DD12C())))
	{
		func_512();
		Global_1759319.f_18 = func_715(func_231());
	}
	func_714();
}

void func_714()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1342709.f_527[iVar0 /*49*/].f_1 = func_60();
		Global_1342709.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_715(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_290;
	}
	return -1;
}

int func_716(int iParam0, bool bParam1)
{
	return func_71(unk_0xFB6B3EEFAB2DD12C(), iParam0, bParam1);
}

void func_717(bool bParam0)
{
	int iVar0;
	
	func_708(33);
	func_708(34);
	func_708(35);
	func_708(36);
	func_708(37);
	func_708(38);
	func_708(39);
	func_708(40);
	func_708(43);
	func_708(41);
	func_708(54);
	func_708(42);
	func_708(47);
	func_720(23);
	func_720(24);
	func_708(92);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 2);
	func_719();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494149.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_718(3))
	{
		func_720(3);
	}
	else if (func_718(4))
	{
		func_720(4);
	}
	else if (func_718(5))
	{
		func_720(5);
	}
	else if (func_718(6))
	{
		func_720(6);
	}
	else if (func_718(7))
	{
		func_720(7);
	}
	else if (((((((((((((((((func_718(0) || func_718(1)) || func_718(2)) || func_718(8)) || func_718(9)) || func_718(10)) || func_718(11)) || func_718(12)) || func_718(13)) || func_718(14)) || func_718(15)) || func_718(16)) || func_718(17)) || func_718(18)) || func_718(19)) || func_718(20)) || func_718(21)) || func_718(22))
	{
		func_720(8);
		func_720(0);
		func_720(1);
		func_720(2);
		func_720(9);
		func_720(10);
		func_720(11);
		func_720(12);
		func_720(13);
		func_720(14);
		func_720(15);
		func_720(16);
		func_720(17);
		func_720(18);
		func_720(19);
		func_720(20);
		func_720(21);
		func_720(22);
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

bool func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_12[iVar0], iVar1);
}

void func_719()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2494149.f_4710.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_720(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_12[iVar0]), iVar1);
}

void func_721()
{
	struct<14> Var0;
	
	Global_1759248 = { Var0 };
	Global_1759248.f_14 = 0;
	Global_1759248.f_15 = 0;
}

void func_722()
{
	int iVar0;
	int iVar1;
	
	unk_0x5CF7BD3BFEB33582("relHeadHunterPlayer", &iLocal_1425);
	iVar0 = unk_0x57BF91AE106AF0F8(unk_0x627440686F6E9BBB(unk_0xD5A676B97920D126()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0x42AFB71D42AF78EA(5, Global_1574648[iVar1], iLocal_1425);
		unk_0x42AFB71D42AF78EA(5, iLocal_1425, Global_1574648[iVar1]);
		unk_0x42AFB71D42AF78EA(1, Global_1574648[iVar1], Global_1574690);
		unk_0x42AFB71D42AF78EA(1, Global_1574690, Global_1574648[iVar1]);
		unk_0x42AFB71D42AF78EA(iVar0, iLocal_1425, joaat("COP"));
		unk_0x42AFB71D42AF78EA(iVar0, joaat("COP"), iLocal_1425);
		unk_0x42AFB71D42AF78EA(1, iLocal_1425, Global_1574692[5]);
		unk_0x42AFB71D42AF78EA(1, Global_1574692[5], iLocal_1425);
		unk_0x42AFB71D42AF78EA(1, iLocal_1425, Global_1574681);
		unk_0x42AFB71D42AF78EA(1, Global_1574681, iLocal_1425);
		iVar1++;
	}
	unk_0x42AFB71D42AF78EA(5, iLocal_1425, Global_1574690);
	unk_0x42AFB71D42AF78EA(5, Global_1574690, iLocal_1425);
	unk_0x42AFB71D42AF78EA(1, 2017343592, Global_1574690);
	unk_0x42AFB71D42AF78EA(5, 2017343592, iLocal_1425);
	func_724(1, &Global_1574690);
	func_723(&Global_1574690);
	func_723(&iLocal_1425);
}

void func_723(int iParam0)
{
	unk_0x42AFB71D42AF78EA(1, -1865950624, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, -1865950624);
	unk_0x42AFB71D42AF78EA(1, 296331235, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, 296331235);
	unk_0x42AFB71D42AF78EA(1, 1166638144, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, 1166638144);
	unk_0x42AFB71D42AF78EA(1, 2037579709, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, 2037579709);
	unk_0x42AFB71D42AF78EA(1, 2017343592, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, 2017343592);
	unk_0x42AFB71D42AF78EA(1, -1821475077, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, -1821475077);
	unk_0x42AFB71D42AF78EA(1, 1782292358, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, 1782292358);
	unk_0x42AFB71D42AF78EA(1, -1033021910, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, -1033021910);
	unk_0x42AFB71D42AF78EA(1, -1285976420, *iParam0);
	unk_0x42AFB71D42AF78EA(1, *iParam0, -1285976420);
}

void func_724(int iParam0, var uParam1)
{
	unk_0x42AFB71D42AF78EA(iParam0, joaat("COP"), *uParam1);
	unk_0x42AFB71D42AF78EA(iParam0, *uParam1, joaat("COP"));
	unk_0x42AFB71D42AF78EA(iParam0, joaat("army"), *uParam1);
	unk_0x42AFB71D42AF78EA(iParam0, *uParam1, joaat("army"));
	unk_0x42AFB71D42AF78EA(iParam0, -183807561, *uParam1);
	unk_0x42AFB71D42AF78EA(iParam0, *uParam1, -183807561);
}

int func_725()
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
		if (func_660())
		{
			return 0;
		}
		if (func_658(155))
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

int func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_666();
			}
			else
			{
				return 0;
			}
		}
		if (!func_613())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
				if (func_660())
				{
					if (!bParam2)
					{
						func_666();
					}
					else
					{
						return 0;
					}
				}
				if (func_658(155))
				{
					if (!bParam2)
					{
						func_666();
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
					func_666();
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
				func_666();
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
			func_666();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_727(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_666();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_728(int iParam0)
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

int func_729(int iParam0, bool bParam1, bool bParam2)
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

