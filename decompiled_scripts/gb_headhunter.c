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
	if (unk_0x63C468D583002D23() && func_733(unk_0xBE369BE1BC57A796(), 0, 1))
	{
		func_716(ScriptParam_0);
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
		Global_1763183.f_2 = Local_99.f_863;
		Global_1763183.f_3 = Local_99.f_864;
		switch (func_655(unk_0xCA1D9459B2CC7619()))
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
							unk_0x6751FA44D6CA586D(3);
							func_635(0f);
							iLocal_1426 = unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D());
							unk_0x3BB70315907D9456(unk_0x17B5CC8A8615737D(), iLocal_1425);
						}
						else
						{
							func_636(166, 0, -1, 1);
						}
						func_634();
						func_633();
						func_632();
						Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 1;
					}
				}
				else if (func_654() == 4)
				{
					Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_629(1))
				{
					Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 2;
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
						func_135(&(Global_1342917.f_527), &Global_1342917, 26, &(Global_1342917.f_1), &(Global_1342917.f_110), -1, 0);
					}
					func_73();
				}
				else if (func_654() == 4)
				{
					Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_99.f_845));
				if (func_67(&(Local_99.f_845)))
				{
					Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 4;
			
			case 4:
				func_665();
				break;
		}
		if (unk_0x415DF132F15085E8())
		{
			switch (func_654())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0x6C788331C7A4D6DA(&(Local_99.f_863), &(Local_99.f_864));
						Local_99.f_0 = 1;
						Local_99.f_118 = unk_0xCA1D9459B2CC7619();
						Local_99.f_119 = unk_0xBE369BE1BC57A796();
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
	if (Global_2494199.f_4710.f_20)
	{
		Global_2494199.f_4710.f_20 = 0;
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
	if (unk_0x48B8265059381CD0(Local_99.f_1, 2))
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
			if (unk_0x48B8265059381CD0(Local_99.f_1, 1))
			{
				Local_99.f_117 = 2;
			}
			else if (unk_0x48B8265059381CD0(Local_99.f_1, 3))
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
	if (!unk_0x48B8265059381CD0(Local_99.f_1, 6))
	{
		if (!func_8(&(Local_99.f_849)))
		{
			func_7(&(Local_99.f_849), 0, 0);
		}
		else if (func_6(&(Local_99.f_849), 500, 0))
		{
			unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 6);
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
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
		unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_13134;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x415DF132F15085E8())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_99.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
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
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0x48B8265059381CD0(Local_99.f_109, iVar0))
										{
											unk_0xEB79FECD9022AAF0(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x48B8265059381CD0(Local_99.f_110, iVar0))
										{
											unk_0xEB79FECD9022AAF0(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x48B8265059381CD0(Local_99.f_111, iVar0))
										{
											unk_0xEB79FECD9022AAF0(&(Local_99.f_108), iVar0);
											Local_99.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x48B8265059381CD0(Local_99.f_112, iVar0))
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
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xD035C652F0986F10(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1)))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_99.f_2[iVar0 /*26*/].f_2))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0x48B8265059381CD0(Local_99.f_112, iVar0))
								{
									Local_99.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xFD0FE723227D5AB6(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x48B8265059381CD0(Local_99.f_110, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x48B8265059381CD0(Local_99.f_111, iVar0))
							{
								Local_99.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_99.f_2[iVar0 /*26*/].f_24)
						{
							Local_99.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
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
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
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
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
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
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_24)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_99.f_2[iVar0 /*26*/].f_17 == 3 || Local_99.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_99.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0xFD0FE723227D5AB6(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return !func_13(unk_0xC7C67E717B20DA89(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(iParam0, 0))
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return unk_0xCA41A00932714525(unk_0xDE2767751C03729D(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xEB79FECD9022AAF0(&(Local_99.f_116), iVar0);
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
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			iVar1 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xD4E8FB600263C993(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
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
	
	if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
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
		if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
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
		while (iLocal_1422 < unk_0xCF8627766CD5D4CE())
		{
			if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_1422)))
			{
				iVar3 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_1422));
				if (!func_17(iVar3, 0))
				{
					if (func_733(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1422);
					func_23(iLocal_1422);
					if (!unk_0x48B8265059381CD0(Local_99.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0x48B8265059381CD0(Local_99.f_1, 1) || unk_0x48B8265059381CD0(Local_99.f_1, 3)) || unk_0x48B8265059381CD0(Local_99.f_1, 5))
							{
								if (!unk_0x48B8265059381CD0(Local_971[iLocal_1422 /*14*/].f_1, 4))
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
			else if (!unk_0x48B8265059381CD0(Local_99.f_1, 5))
			{
				if (Local_99.f_118 > -1)
				{
					if (iLocal_1422 == Local_99.f_118)
					{
						unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 5);
					}
				}
			}
			iLocal_1422++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x48B8265059381CD0(Local_99.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_99.f_115 != iVar0)
		{
			Local_99.f_115 = iVar0;
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 1);
			}
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 2);
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
		if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_113, iVar0))
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
					unk_0xEB79FECD9022AAF0(&(Local_99.f_113), iVar0);
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
		if (!unk_0x48B8265059381CD0(Local_99.f_109, iVar0))
		{
			if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_109), iVar0);
			}
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_110, iVar0))
		{
			if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_110), iVar0);
			}
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_112, iVar0))
		{
			if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_112), iVar0);
			}
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_111, iVar0))
		{
			if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_111), iVar0);
			}
		}
		if (!unk_0x48B8265059381CD0(Local_99.f_113, iVar0))
		{
			if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_113), iVar0);
			}
			else if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_113), iVar0);
			}
		}
		if (Local_99.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_99.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_12, iVar0))
				{
					Local_99.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_99.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0x48B8265059381CD0(Local_971[iParam0 /*14*/].f_13, iVar0))
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
	
	if (!unk_0x48B8265059381CD0(Local_99.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xD4E8FB600263C993(unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2), unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iParam0)), 1);
							unk_0xEB79FECD9022AAF0(&(Local_99.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(Local_99.f_114), iParam0);
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
			if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
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
		if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_99.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_99.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_99.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x54EBD52F64A07B00(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0x48B8265059381CD0(Local_99.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x1B60289D0F2A2E3C(Var3, 10f, 1, 0, 0, 1);
							unk_0xEB79FECD9022AAF0(&(Local_99.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0))
						{
							unk_0x4E05E9FB1C72DFF5(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x9F54265623E980EC(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1425);
							unk_0x22BD31A68F219650(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0xCA3E1D8E89A5D52B(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
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
	var uVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x692A2891A2BA7352(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam10);
		if (unk_0x04DB71A22837F85C(iVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(iVar0, iParam9);
		unk_0xBF95E912FF7B9A12(iVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(iVar0);
			unk_0x800D9F6E9FDC9680(iVar0, 5, 5, 1f);
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
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
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
		if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	
	if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_99.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x2357075D7B96D56A(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574729);
											unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
											unk_0x9DFD53125A4416A3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
					if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x2357075D7B96D56A(1))
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
										unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574729);
										unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1425);
										unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x2937901439E611F5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x94E4AB66D79E55A5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0xE1F5F70A15CF94CB(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x6DE4D679A0565F8A(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x26504D4D69F462A1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0x06B74CD245641716(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0xFA4023BBD5BCB8B5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0x9AA7339B5138B5EF(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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
	return unk_0xF2DB717A73826179(Global_262145.f_13142);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_13141;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	iVar0 = unk_0x2AD5F4170F4ACBEB(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x60A7E0316C35C19D(iVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(iVar0, iParam9);
		if (unk_0x04DB71A22837F85C(iVar0))
		{
			if (bParam7)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		unk_0x4EDACF77CDD9CFEB(uParam0);
		return unk_0x093776FE2E6B4BAC(uParam0);
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
			if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
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
			if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_99.f_2[iParam0 /*26*/].f_11;
				if (unk_0x54EBD52F64A07B00(1))
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
								unk_0x9F54265623E980EC(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x4E05E9FB1C72DFF5(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x524A422B74847594(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_2), 1, iLocal_1425);
								unk_0x5DED87DD8464517B(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x22BD31A68F219650(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0x4114B83B329702FF(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xF8EDF3B7E8D2CD26(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xBC120C453A1C2611(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xCA3E1D8E89A5D52B(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 0);
								unk_0xFF1ED70AA8FAB440(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x2357075D7B96D56A(1))
					{
						iVar1 = Local_99.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574729);
								unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0x9DFD53125A4416A3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xEB79FECD9022AAF0(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x2357075D7B96D56A(1))
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
								unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574729);
								unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0x9DFD53125A4416A3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xEB79FECD9022AAF0(&(Local_99.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x2357075D7B96D56A(1))
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
								unk_0x6FE87B0CB5BE8FB1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), Global_1574729);
								unk_0x23863B7BF3FD2FDA(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1, iLocal_1425);
								unk_0x9DFD53125A4416A3(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x2937901439E611F5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x94E4AB66D79E55A5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0xE1F5F70A15CF94CB(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0x6DE4D679A0565F8A(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), Local_99.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x26504D4D69F462A1(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0x06B74CD245641716(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0xFA4023BBD5BCB8B5(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0x4114B83B329702FF(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xEB79FECD9022AAF0(&(Local_99.f_107), iParam0);
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
	return unk_0xF2DB717A73826179(Global_262145.f_13140);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_13139;
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
			if (!unk_0x48B8265059381CD0(Local_99.f_871, iVar1))
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
		Local_99.f_865[iVar0] = unk_0xD1D19967E553E144(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xEB79FECD9022AAF0(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_99.f_865[iVar0] = unk_0xD1D19967E553E144(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xEB79FECD9022AAF0(&(Local_99.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_99.f_865[iVar0] = unk_0xD1D19967E553E144(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xEB79FECD9022AAF0(&(Local_99.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_99.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x0E29C61F26D96FDB(0, Local_99.f_122);
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
			iVar0 = unk_0x0E29C61F26D96FDB(0, Local_99.f_122);
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
			iVar0 = unk_0x0E29C61F26D96FDB(0, 10);
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
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
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
		if (func_733(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_56(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
		if (func_733(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_733(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_56(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_62(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_59(unk_0xBE369BE1BC57A796(), iParam0))
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
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_62(iParam0) };
		Global_2482066 = { func_62(iParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
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
	if (unk_0x48B8265059381CD0(Local_99.f_1, 4))
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
	unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 4);
}

var func_66()
{
	if (Local_99.f_121 != -1)
	{
		return Local_99.f_121;
	}
	if (Local_99.f_121 == -1)
	{
		if (unk_0x369F7C4FB0B633FC(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0)) == joaat("City"))
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
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= 1000)
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
		if (unk_0x415DF132F15085E8())
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
		iVar0 = unk_0x0C36F33B3F746611(Local_99.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			iVar2 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0xDE574EA7A7A2CAF8(5, Global_1574687[iVar1], Global_1574729);
						unk_0xDE574EA7A7A2CAF8(5, Global_1574729, Global_1574687[iVar1]);
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
		if (Global_1619421[iParam0 /*390*/].f_11 != func_60())
		{
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11;
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
			if (Global_1619421[iParam0 /*390*/].f_11 != func_60())
			{
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0)
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
		if (!func_133(unk_0xBE369BE1BC57A796()))
		{
			if (!func_127())
			{
				func_123(0);
				unk_0x02AC9A2B522D447F(0);
				unk_0xEB79FECD9022AAF0(&uLocal_1420, 18);
			}
		}
	}
	if (Local_99.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iVar3 /*26*/].f_1), 0) };
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
	
	if (((func_122(unk_0xBE369BE1BC57A796()) && !func_121(unk_0xBE369BE1BC57A796())) && !unk_0x48B8265059381CD0(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1, 8)) && (func_120(unk_0xBE369BE1BC57A796()) || func_119(unk_0xBE369BE1BC57A796())))
	{
		return;
	}
	Global_1763174 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Param1);
	func_115(iParam0, fVar0);
	if (unk_0x95DBE123BC2DB80B() && unk_0x3C9A4847496426B9() == 15)
	{
		if (func_114(unk_0xBE369BE1BC57A796()) || func_112(unk_0xBE369BE1BC57A796()))
		{
			if (!unk_0xF886D55825EAC222(1344549371))
			{
				unk_0x4DDCE83D0BC7A695(1344549371);
			}
		}
		else if (unk_0xF886D55825EAC222(1344549371))
		{
			unk_0x33BA97D6CB5751AA(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_111(unk_0xBE369BE1BC57A796(), 21))
		{
			func_110(Param1, 1, 0);
		}
		if (!*uParam4 && func_733(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			*uParam4 = 1;
			if (func_109(iParam0))
			{
				unk_0x000E46314C3A507F(func_108(iParam0));
				if (func_107(iParam0, -1))
				{
					unk_0x6751FA44D6CA586D(0);
					if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
					{
						unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 1);
						unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 1);
					}
					unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				fVar1 = func_105(iParam0);
				if (fVar1 != 1f)
				{
					func_635(fVar1);
					unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_104(iParam0) && func_114(unk_0xBE369BE1BC57A796()))
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
			if (func_99(unk_0xBE369BE1BC57A796(), 19))
			{
				func_98(19);
			}
		}
		if (*uParam4 && func_733(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			*uParam4 = 0;
			if (func_109(iParam0))
			{
				if (unk_0x48B8265059381CD0(Global_1763174.f_3, 0))
				{
					unk_0x000E46314C3A507F(1f);
					unk_0x6751FA44D6CA586D(5);
					unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				func_97();
				unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 1);
			}
			if (iParam7 && !func_122(unk_0xBE369BE1BC57A796()))
			{
				if (func_95(unk_0xBE369BE1BC57A796()) != 152)
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
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_25), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_25, iParam0);
}

void func_77()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_24), &Global_2408533, 2);
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_26), &Global_2408535, 17);
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
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_43), &Global_2408552, 313);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408552 };
		Global_2404994.f_43.f_49 = { Global_2408552.f_49 };
		Global_2404994.f_43.f_52 = Global_2408552.f_52;
		Global_2404994.f_43.f_53 = Global_2408552.f_53;
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
	
	if (Global_2404994.f_478.f_1 == unk_0xE9A5FDFDC239B2ED())
	{
		Global_2404994.f_478 = { Var0 };
	}
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_655 = 0;
	}
	else
	{
		Global_2404994.f_655 = 1;
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
		Global_2404994.f_656.f_504 = iParam1;
		Global_2404994.f_656.f_505 = iParam2;
		Global_2404994.f_656.f_506 = iParam10;
		func_88();
		func_87(8, 0, 0, 0, 0);
		Global_2404994.f_656.f_507 = iParam11;
		Global_2404994.f_656.f_510 = iParam3;
		Global_2404994.f_656.f_511 = iParam4;
		Global_2404994.f_656.f_508 = iParam5;
		Global_2404994.f_656.f_509 = iParam6;
		Global_2404994.f_656.f_512 = iParam7;
		Global_2404994.f_656.f_513 = iParam8;
		Global_2404994.f_656.f_514 = iParam9;
		Global_2404994.f_1689 = 1;
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
		Global_2404994.f_1689 = 0;
		Global_2404994.f_1688 = 0;
	}
}

void func_85()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_656), &(Global_2404994.f_1172), 516);
	Global_2404994.f_478 = { Global_2404994.f_484 };
	if (unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		Global_2404994.f_1688 = 0;
	}
}

int func_86()
{
	if ((Global_2404994.f_1688 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_1172.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_1172.f_515))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411323 = 0;
	}
	Global_2404994.f_478 = iParam0;
	Global_2404994.f_478.f_1 = unk_0xE9A5FDFDC239B2ED();
	Global_2404994.f_478.f_2 = iParam1;
	Global_2404994.f_478.f_3 = iParam2;
	Global_2404994.f_478.f_4 = iParam3;
	Global_2404994.f_478.f_5 = iParam4;
}

void func_88()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	func_89();
	Global_2404994.f_656 = 0;
}

void func_89()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_656.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_90()
{
	if (func_86())
	{
		if (Global_2404994.f_656.f_515 == Global_2404994.f_1172.f_515)
		{
			return;
		}
	}
	if (!unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_1172), &(Global_2404994.f_656), 516);
		Global_2404994.f_484 = { Global_2404994.f_478 };
		Global_2404994.f_1688 = 1;
	}
}

int func_91()
{
	if ((Global_2404994.f_1689 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_656.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_356), &Global_2408865, 121);
}

void func_93()
{
	func_94();
	Global_2404994.f_1820 = 0;
}

void func_94()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404994.f_1821[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	if (unk_0x1EFA84312BB8AA22(Global_2494199.f_4706))
	{
		if (!Global_2494199.f_4706 == unk_0xE9A5FDFDC239B2ED() && Global_2494199.f_4705 < 1f)
		{
			return;
		}
	}
	Global_2494199.f_4706 = -1;
	Global_2494199.f_4705 = 1f;
}

void func_98(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

void func_100(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

void func_101(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_25), iParam0);
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
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
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
		if (Global_1619421[iParam0 /*390*/].f_11 != func_60())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
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
	if (!func_117(unk_0xBE369BE1BC57A796()))
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
			return Global_262145.f_11142;
		
		case 142:
			return Global_262145.f_11130;
		
		case 157:
			return Global_262145.f_11097;
		
		case 159:
			return Global_262145.f_11080;
		
		case 162:
			return Global_262145.f_11191;
		
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
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1619421[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!func_133(unk_0xBE369BE1BC57A796()))
	{
		if (iParam0 || func_124(unk_0xBE369BE1BC57A796()) != 0)
		{
			func_100(20);
			if (func_122(unk_0xBE369BE1BC57A796()))
			{
				if (!unk_0x48B8265059381CD0(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1, 8))
				{
					unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1), 8);
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
	bVar1 = ((func_122(iParam0) && !func_121(iParam0)) && !unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 8));
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
	if (Global_2494199.f_4710.f_29 != iVar0)
	{
		Global_2494199.f_4710.f_29 = iVar0;
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
	if ((func_99(unk_0xBE369BE1BC57A796(), 21) || func_99(unk_0xBE369BE1BC57A796(), 22)) || func_130())
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
	if (func_96(unk_0xBE369BE1BC57A796(), 0))
	{
		if ((func_126() && !func_129()) || func_111(unk_0xBE369BE1BC57A796(), 21))
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
	return func_131(286, -1);
}

int func_131(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
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
	Var3 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x841F312D66362BF7(Local_99.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_99.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iVar2 /*26*/].f_1), 1) };
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
		if (func_218(uParam1, iParam2, uParam3, Global_1574103, 0, func_271()))
		{
			func_217(1);
			if ((!func_215() && !func_213()) || unk_0x48B8265059381CD0(Global_2494199.f_4446, 1))
			{
				if (func_212())
				{
					func_209();
				}
				else
				{
					unk_0x4933838CDEC9827A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_208(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574284 != 1)
						{
							func_207(uParam1);
							if (unk_0x48B8265059381CD0(uParam3->f_33, 7))
							{
								unk_0x21E7933CCC7B3724(&(uParam3->f_33), 7);
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
								if (func_733(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C36F33B3F746611(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0xECE6499178490DE1(iVar35, unk_0xBE369BE1BC57A796()) || Global_2421664[iVar35 /*358*/].f_239 != -1) || func_206(iVar35))
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
						if (!func_202(unk_0xBE369BE1BC57A796(), 0) && func_95(unk_0xBE369BE1BC57A796()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_200())
							{
								if (func_733(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C36F33B3F746611(iVar52);
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
							if ((func_199(iVar35) && func_194(iVar35, iParam2)) && func_733(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1591201[iVar44 /*602*/].f_203.f_6;
								Var38 = { func_189(iVar35) };
								if (iVar35 == unk_0xBE369BE1BC57A796())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x592E5DF66777D40F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_183(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7F897CE1A139406E(iVar37);
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
								unk_0xEB79FECD9022AAF0(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0C36F33B3F746611(iVar52);
							if (func_733(iVar35, 0, 1) && !unk_0x48B8265059381CD0(iVar49, iVar35))
							{
								iVar35 = unk_0x0C36F33B3F746611(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_199(iVar35))
							{
								if (func_733(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1591201[iVar44 /*602*/].f_203.f_6;
									Var38 = { func_189(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_183(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7F897CE1A139406E(iVar37);
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
									func_149(iVar35, unk_0x592E5DF66777D40F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x48B8265059381CD0(uParam3->f_33, 11))
						{
							func_146(uParam3, uParam1);
						}
						func_145(&(uParam3->f_21));
						func_144();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x48B8265059381CD0(uParam3->f_33, 7))
						{
							func_143(uParam3, uParam1);
							func_142(uParam1, 0, 1);
							unk_0xEB79FECD9022AAF0(&(uParam3->f_33), 7);
						}
						func_143(uParam3, uParam1);
						if (!unk_0x48B8265059381CD0(uParam3->f_33, 11))
						{
							unk_0xEB79FECD9022AAF0(&(uParam3->f_33), 11);
						}
						if (func_138(uParam3))
						{
							Global_1574284 = 1;
						}
						func_136(uParam3);
						if (Global_1574284 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574284 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xFF84A94166FBB351(*uParam1))
					{
						unk_0x4ED9ECF3735CB826(7);
						unk_0x50F4FD9686DBDC91(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x4ED9ECF3735CB826(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_144();
			func_208(0);
			if (unk_0x48B8265059381CD0(uParam3->f_33, 7))
			{
				unk_0x21E7933CCC7B3724(&(uParam3->f_33), 7);
			}
			if (unk_0x48B8265059381CD0(uParam3->f_33, 10))
			{
				unk_0x21E7933CCC7B3724(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x526D61ADDDE6C626();
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
		if (Global_1574284 != 2)
		{
			Global_1574284 = 2;
		}
	}
	else
	{
		switch (Global_1574284)
		{
			case 0:
				Global_1574284 = 1;
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
	iVar15 = unk_0x0C36F33B3F746611(uParam0->f_37);
	if (iVar15 != func_60() && func_733(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_141(uParam0, uParam0->f_37);
		if (func_140(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (unk_0xD3C126815A4E4DD6(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x1A0BD443C067F484(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (!unk_0xD3C126815A4E4DD6(&Var2))
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
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (!unk_0x1A0BD443C067F484(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x1A0BD443C067F484(&Var2))
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
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
}

var func_141(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEAC9A8A194DF8F91(*uParam0, "COLLAPSE"))
	{
		unk_0x14ED5B5B8289F2FC(iParam1);
		unk_0x44983883E630A945();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEAC9A8A194DF8F91(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x44983883E630A945();
		}
	}
}

void func_143(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_33, 10))
	{
		unk_0xEAC9A8A194DF8F91(*uParam1, "SET_HIGHLIGHT");
		unk_0xDF18CF55301CEB8B(uParam0->f_35);
		unk_0x44983883E630A945();
		unk_0xEB79FECD9022AAF0(&(uParam0->f_33), 10);
	}
}

void func_144()
{
	if (Global_1574284 != 0)
	{
		Global_1574284 = 0;
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
		iVar2 = unk_0x0C36F33B3F746611(iVar0);
		if (iVar2 != func_60())
		{
			if (func_733(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_148(uParam0->f_38[iVar0 /*2*/], 0);
					func_147(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1591201[iVar0 /*602*/].f_203.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		if (unk_0xEAC9A8A194DF8F91(*uParam0, "SET_ICON"))
		{
			unk_0xDF18CF55301CEB8B(iParam1);
			unk_0xDF18CF55301CEB8B(iParam2);
			if (iParam2 == 65)
			{
				unk_0xDF18CF55301CEB8B(iParam3);
			}
			unk_0x44983883E630A945();
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
		if (Global_1574284 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEAC9A8A194DF8F91(*uParam2, sVar1))
		{
			unk_0xDF18CF55301CEB8B(iParam4);
			if (unk_0x48B8265059381CD0(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0xDF18CF55301CEB8B(iParam10);
			}
			func_166(sParam1);
			unk_0xDF18CF55301CEB8B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0xDF18CF55301CEB8B(65);
			}
			unk_0xDF18CF55301CEB8B(-1);
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
			unk_0xFCE11728AE1CFA11(sParam9);
			unk_0xFCE11728AE1CFA11(sParam9);
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
			unk_0x44983883E630A945();
		}
	}
}

bool func_150(var uParam0)
{
	return unk_0x48B8265059381CD0(uParam0->f_33, 6);
}

bool func_151(var uParam0)
{
	return unk_0x48B8265059381CD0(uParam0->f_33, 5);
}

void func_152(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
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
		unk_0xDF18CF55301CEB8B(121);
	}
	else if (func_159(iParam1))
	{
		unk_0xDF18CF55301CEB8B(122);
	}
	else
	{
		if (func_155())
		{
			uParam0->f_36 = 0;
		}
		unk_0x14ED5B5B8289F2FC(uParam0->f_36);
	}
}

int func_155()
{
	if (unk_0xF7271A9481CAC8E3())
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
	return Global_2443134.f_12;
}

bool func_157()
{
	if (unk_0xF7271A9481CAC8E3())
	{
		return func_156();
	}
	return func_158(Global_1633501.f_88646);
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
	if ((func_733(iParam0, 0, 1) && func_163()) && func_160(iParam0, 1))
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
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_60() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 != func_60())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_60())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	if (func_122(unk_0xBE369BE1BC57A796()) || func_164())
	{
		return 0;
	}
	return 1;
}

int func_164()
{
	switch (func_95(unk_0xBE369BE1BC57A796()))
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
		if (func_733(iParam0, 0, 1))
		{
			return func_113(iParam0);
		}
	}
	if ((func_733(iParam0, 0, 1) && func_163()) && func_162(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(char* sParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(sParam0);
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
		if (Global_1574284 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xFF84A94166FBB351(*uParam1))
		{
			if (unk_0xEAC9A8A194DF8F91(*uParam1, sVar1))
			{
				unk_0xDF18CF55301CEB8B(iParam3);
				if (unk_0x48B8265059381CD0(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_166("");
				}
				else
				{
					unk_0xDF18CF55301CEB8B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x9C88EB7B70229335(sParam16))
				{
					func_152(sParam16);
				}
				else
				{
					func_166(&(uParam2->f_1));
				}
				unk_0xDF18CF55301CEB8B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_166("");
				}
				else
				{
					unk_0xDF18CF55301CEB8B(65);
				}
				if (iParam12 == 1)
				{
					unk_0xDF18CF55301CEB8B(iVar0);
				}
				else
				{
					unk_0xDF18CF55301CEB8B(-1);
				}
				if (func_200())
				{
					func_166("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x9C88EB7B70229335(sParam16))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_ONE_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 5 && !unk_0x9C88EB7B70229335(sParam16))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_ONE_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x9C88EB7B70229335(sParam16)) && !unk_0x9C88EB7B70229335(sParam17))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_TWO_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x34D84D73B5DF8E80(sParam17);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 8 && !unk_0x9C88EB7B70229335(&(uParam2->f_104)))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x561D1C39012D002B(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x69967F83C1E636E2(iParam10);
					}
					unk_0x34D84D73B5DF8E80(&(uParam2->f_104));
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xDCEB60B79ECB219E("FM_AE_CASH");
					unk_0x1C4A0E5E77C7F187(iParam10, 1);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xDCEB60B79ECB219E("FM_AE_CASH");
						unk_0x1C4A0E5E77C7F187(iParam10, 1);
						unk_0x1798EBF9408190D3();
					}
					else
					{
						unk_0xDCEB60B79ECB219E("FM_NG_CASH");
						unk_0x1C4A0E5E77C7F187(iParam10, 1);
						unk_0x1798EBF9408190D3();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x9C88EB7B70229335(&(uParam2->f_104)))
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
					unk_0xDCEB60B79ECB219E("STRING");
					unk_0x96F1415E7C5E58EB(iParam14, 6);
					unk_0x1798EBF9408190D3();
				}
				else if (fParam13 != -1f)
				{
					unk_0xDCEB60B79ECB219E("NUMBER");
					unk_0x561D1C39012D002B(fParam13, 1);
					unk_0x1798EBF9408190D3();
				}
				else if (iParam10 != -1)
				{
					unk_0xDF18CF55301CEB8B(iParam10);
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
				if (iParam12 == 1 || unk_0x9C88EB7B70229335(sParam8))
				{
					func_166("");
					func_166("");
				}
				else
				{
					unk_0xFCE11728AE1CFA11(sParam8);
					unk_0xFCE11728AE1CFA11(sParam8);
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
				unk_0x44983883E630A945();
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
	return Global_1619421[iParam0 /*390*/].f_11 != func_60();
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
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_175(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_171(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_61(iParam0)];
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
			if (unk_0x15EF3CAA574DAEED())
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
			if (unk_0x15EF3CAA574DAEED())
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
			if (unk_0x15EF3CAA574DAEED())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_181(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x15EF3CAA574DAEED())
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
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_733(iParam0, 0, 1))
	{
		return;
	}
	if (func_186(iParam0) != -1)
	{
		return;
	}
	if (Global_1364235)
	{
		if (iParam0 == Global_1364235.f_1)
		{
			return;
		}
	}
	if (func_185(iParam0))
	{
		return;
	}
	if (Global_1364273 >= 32)
	{
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (bParam1)
	{
	}
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273)
	{
		if (Global_1364240[iVar0] == iParam0)
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
	
	if (!func_733(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1364233 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233)
	{
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x570F715345905581(Global_1364072[iVar0 /*5*/].f_2) && unk_0x97CCE7AE66FA8CB9(Global_1364072[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1364233)
	{
		return;
	}
	if (unk_0x570F715345905581(Global_1364072[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7F897CE1A139406E(Global_1364072[iParam0 /*5*/].f_2), 64);
			unk_0xA15206CC127327EA(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3DD64AC41265D51A(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233)
	{
		Global_1364072[iVar32 /*5*/] = { Global_1364072[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_188(&(Global_1364072[iVar32 /*5*/]));
	Global_1364233 = (Global_1364233 - 1);
}

void func_188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x63C468D583002D23())
	{
		uParam0->f_3 = unk_0xCB150A8B81012128();
	}
}

struct<4> func_189(int iParam0)
{
	struct<4> Var0;
	
	if (func_733(iParam0, 0, 1))
	{
		Global_2482053 = { func_62(iParam0) };
		if (unk_0x8EA3D5407E9F4AF0())
		{
			if (func_140(Global_2482053))
			{
				if (!unk_0x7BB94A563F5F14FD(&Global_2482053))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x5DC8C64FE18EADF7(0))
		{
			return Var0;
		}
		if (func_193(&Global_2482053))
		{
			Global_2481983 = { func_191(iParam0) };
			func_190(&Global_2481983, &Var0);
		}
	}
	return Var0;
}

void func_190(var uParam0, var uParam1)
{
	unk_0xC4D7F7FDC44E9AC3(uParam0, 35, uParam1);
}

struct<35> func_191(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_192(iParam0))
	{
		return Global_1315265[unk_0xBE369BE1BC57A796() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x7E1D32162078314A(&Var13, 35, &Var0);
	return Var13;
}

int func_192(int iParam0)
{
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
{
	if (unk_0x9B0FAF2C1DE9BB5A())
	{
		if (unk_0x749CE7B33672D350() && unk_0x3B13D05FD2D29D80(uParam0))
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
	if ((!func_195(iParam0) && Global_2421664[iParam0 /*358*/].f_239 == -1) && !func_206(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (func_733(iParam0, 0, 1))
	{
		if (func_733(unk_0xBE369BE1BC57A796(), 0, 1))
		{
			if (unk_0xECE6499178490DE1(iParam0, unk_0xBE369BE1BC57A796()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 22);
}

bool func_197(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 8);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 10) || unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 9));
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
		if (unk_0x48B8265059381CD0(Global_1591201[iVar0 /*602*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_200()
{
	switch (func_95(unk_0xBE369BE1BC57A796()))
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
	switch (func_201(unk_0xBE369BE1BC57A796()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(unk_0xBE369BE1BC57A796()))
	{
		switch (func_95(unk_0xBE369BE1BC57A796()))
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
		return Global_1619421[iVar0 /*390*/];
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 && func_203(Global_1619421[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_203(Global_1619421[iParam0 /*390*/].f_11.f_31))
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
		if (func_733(unk_0x0C36F33B3F746611(iVar0), 0, 1))
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0xECE6499178490DE1(iVar1, unk_0xBE369BE1BC57A796()) || Global_2421664[iVar1 /*358*/].f_239 != -1) || func_206(iVar1))
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
	return Global_1591201[iParam0 /*602*/].f_188 != 0;
}

void func_207(var uParam0)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xDF18CF55301CEB8B(0);
		unk_0x44983883E630A945();
	}
}

void func_208(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1353067.f_2 == 0)
		{
			Global_1353067.f_2 = 1;
		}
	}
	else if (Global_1353067.f_2 == 1)
	{
		Global_1353067.f_2 = 0;
	}
}

void func_209()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 1))
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
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_211()
{
	return Global_2433125.f_2199[0 /*76*/].f_1 != 0;
}

int func_212()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 0) && func_211())
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (func_211())
	{
		if (func_214(Global_2433125.f_2199[0 /*76*/].f_1))
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
		if (func_216(Global_2433125.f_2199[0 /*76*/].f_1))
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
	Global_1353067.f_1 = Global_1353067;
	Global_1353067 = iParam0;
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
			if (func_267() > 0 && Global_1574105)
			{
				unk_0x71231C7FAF12B6DB();
				unk_0xDE0328664F42BCD5(fVar7);
				unk_0xE57F94EA937AAD99(18);
				if (unk_0x9E123D5FF2973C60())
				{
					unk_0xECE81A92069CEC24();
				}
				unk_0xE57F94EA937AAD99(10);
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
	if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
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
		if (unk_0x9E123D5FF2973C60())
		{
			unk_0xECE81A92069CEC24();
		}
		unk_0xE57F94EA937AAD99(10);
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
					unk_0x71231C7FAF12B6DB();
				}
				unk_0xE57F94EA937AAD99(18);
			}
			if (unk_0x48B8265059381CD0(uParam2->f_33, 0))
			{
				Global_1574103 = uParam3;
				Global_1574102 = 1;
				unk_0xDE0328664F42BCD5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574104)
					{
						unk_0x21E7933CCC7B3724(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_247();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x71231C7FAF12B6DB();
					}
					unk_0xE57F94EA937AAD99(18);
				}
				unk_0xDE0328664F42BCD5(fVar7);
				if (func_248(bVar6, uParam0, 0))
				{
					func_207(uParam0);
					uVar4 = func_245(iParam1, &(Global_1633501.f_88653), bParam4);
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
					unk_0xEB79FECD9022AAF0(&(uParam2->f_33), 0);
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
			if (func_222(unk_0xBE369BE1BC57A796()))
			{
				iVar0 = 20;
			}
			if (func_221(unk_0xBE369BE1BC57A796()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_220(unk_0xBE369BE1BC57A796()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_220(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 4;
}

bool func_221(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

bool func_222(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_223()
{
	return Global_1633501.f_1 == 0;
}

void func_224(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (unk_0x9C88EB7B70229335(sParam2))
		{
			func_152(sParam1);
		}
		else
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT");
			unk_0x34D84D73B5DF8E80(sParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam3);
		}
		unk_0x44983883E630A945();
	}
}

char* func_225()
{
	switch (func_95(unk_0xBE369BE1BC57A796()))
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
	switch (func_95(unk_0xBE369BE1BC57A796()))
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
			if (func_227(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_172))
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
	return func_160(unk_0xBE369BE1BC57A796(), bParam0);
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
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_34;
}

bool func_232()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148;
}

void func_233(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (unk_0x9C88EB7B70229335(uParam2))
		{
			func_152(uParam1);
		}
		else if (func_201(unk_0xBE369BE1BC57A796()) == 133)
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT_C");
			unk_0x34D84D73B5DF8E80(uParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		else
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT");
			unk_0x34D84D73B5DF8E80(sParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam3);
		}
		unk_0x44983883E630A945();
	}
}

char* func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0xBE369BE1BC57A796());
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
	if (func_201(unk_0xBE369BE1BC57A796()) == 133)
	{
		return Global_2494199.f_4692;
	}
	return -1;
}

bool func_236()
{
	return Global_1591089;
}

char* func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0xBE369BE1BC57A796());
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
	return Global_2494199.f_4695;
}

int func_239()
{
	if (func_201(unk_0xBE369BE1BC57A796()) == 132)
	{
		return Global_2494199.f_4690;
	}
	return -1;
}

void func_240(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_166(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xDCEB60B79ECB219E(uParam1);
			unk_0x69967F83C1E636E2(iParam5);
			unk_0x1798EBF9408190D3();
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
			unk_0xDCEB60B79ECB219E("LBD_DPD_CNT");
			unk_0x69967F83C1E636E2(iVar0);
			unk_0x69967F83C1E636E2(iVar1);
			unk_0x1798EBF9408190D3();
		}
		else
		{
			func_152(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam4);
			if (func_241(unk_0xBE369BE1BC57A796()))
			{
				unk_0xDF18CF55301CEB8B(166);
			}
		}
		unk_0x44983883E630A945();
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
	if (func_244(unk_0xBE369BE1BC57A796()) || func_220(unk_0xBE369BE1BC57A796()))
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
			StringIntConCat(&Var0, Global_1633501.f_28, 16);
			break;
	}
	if (func_155() && unk_0xF7271A9481CAC8E3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1633501.f_28, 16);
	}
	return Var0;
}

bool func_244(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 5;
}

char* func_245(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_155() || unk_0x9C88EB7B70229335(uParam1)))
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
		if (Global_1574302 == 0)
		{
			Global_1574302 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x9C88EB7B70229335(sParam1))
	{
		if (Global_1574302 == 1)
		{
			Global_1574302 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574302 == 0)
		{
			Global_1574302 = 1;
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
	if (unk_0x4C9507F8E50FC6AF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x505CA008E5D66AC1())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB61E69EF42A9B490())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBBA3C43AC37CB882())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_247()
{
	Global_36684 = 1;
}

bool func_248(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("mp_matchmaking_card");
	}
	return unk_0xFF84A94166FBB351(*uParam1);
}

void func_249(var uParam0, var uParam1, bool bParam2)
{
	unk_0x21E7933CCC7B3724(&(uParam1->f_33), 7);
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
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0x33CBABDFE7B17924(uParam0);
	}
	if (unk_0x48B8265059381CD0(uParam1->f_33, 0))
	{
		unk_0x21E7933CCC7B3724(&(uParam1->f_33), 0);
	}
	unk_0xDE0328664F42BCD5(0f);
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
	if (Global_2494199.f_4407)
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	else if (!func_256(unk_0xBE369BE1BC57A796(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_255(1) || func_253(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (func_251(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (Global_1751032)
	{
		return 0;
	}
	if (Global_1751035)
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 4))
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
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_252()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_253(bool bParam0)
{
	if (unk_0x7A81C223E57BFCA4())
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (func_254(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x79888727131C6854(0, 25) || unk_0x79888727131C6854(0, 68))
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
	if (unk_0x79888727131C6854(0, 19) || (!bParam0 && unk_0x9E3D293A990C1BEF(0, 19)))
	{
		return 1;
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (((unk_0x79888727131C6854(0, 166) || unk_0x79888727131C6854(0, 167)) || unk_0x79888727131C6854(0, 168)) || unk_0x79888727131C6854(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x9E3D293A990C1BEF(0, 166) || unk_0x9E3D293A990C1BEF(0, 167)) || unk_0x9E3D293A990C1BEF(0, 168)) || unk_0x9E3D293A990C1BEF(0, 169))
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
	
	if (unk_0x8BE30CF2E1E63744())
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 1);
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
	if (Global_1591201[iParam0 /*602*/] == -1)
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

bool func_259()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

bool func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
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
	if (unk_0x25BD4C26D84038CD())
	{
		return 0;
	}
	if (unk_0x46EEE08565CE19CA() || unk_0x5C0856D86B18EE57())
	{
		return 0;
	}
	if (unk_0x9E0EF228488611AD())
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
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 5;
}

bool func_266()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_267()
{
	return Global_1353070.f_68;
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
	fVar1 = (1f - (1f - unk_0x8B0C15BA8FEAA03A()));
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
	if (func_272(unk_0xBE369BE1BC57A796()))
	{
		return Global_1318168;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (unk_0x63C468D583002D23())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x30BC32023EA26E38(iParam0);
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
	if (func_197(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_236())
	{
		return 1;
	}
	if (func_122(unk_0xBE369BE1BC57A796()))
	{
		switch (func_201(unk_0xBE369BE1BC57A796()))
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
				if (!func_274(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_274(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_274(unk_0xBE369BE1BC57A796()))
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
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 4);
}

int func_275(int iParam0)
{
	if ((iParam0 == 26 && func_122(unk_0xBE369BE1BC57A796())) && !func_133(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_96(unk_0xBE369BE1BC57A796(), 0) && func_133(unk_0xBE369BE1BC57A796()))
		{
			return 1;
		}
		if (func_124(unk_0xBE369BE1BC57A796()) == 3)
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
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar0 = unk_0xCA1D9459B2CC7619();
	}
	else
	{
		iVar0 = func_277();
	}
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Local_971[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
	if (unk_0x7268A1112372AA44(iVar1))
	{
		if (unk_0xD54DE3C9493BFEC2(iVar1))
		{
			iVar2 = unk_0xB421DCBFBBE3286E(iVar1);
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
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_113, iVar29))
			{
				if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_6, iVar29))
				{
					if (unk_0x23E9113C762466ED(Var0.f_0))
					{
						if (unk_0x3983CCB0D958159C(Var0.f_0))
						{
							if (!unk_0x48B8265059381CD0(Local_99.f_109, iVar29))
							{
								if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_5, iVar29))
								{
									if (unk_0x841F312D66362BF7(Local_99.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0x23E9113C762466ED(unk_0xC7C67E717B20DA89(Local_99.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0xBFC71CD990E479DB(Var0.f_0) == unk_0xC7C67E717B20DA89(Local_99.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0x23E9113C762466ED(Var0.f_1))
												{
													if (unk_0x80E9CA64E9C8E070(Var0.f_1))
													{
														if (unk_0xB80CAAF3D65FBC1F(Var0.f_1) == unk_0x17B5CC8A8615737D())
														{
															if (func_652() == Local_99.f_118)
															{
																unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_5), iVar29);
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
						else if (unk_0x80E9CA64E9C8E070(Var0.f_0))
						{
							iVar11 = unk_0xB80CAAF3D65FBC1F(Var0.f_0);
							if (iVar11 == unk_0xDE2767751C03729D(Local_99.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0x23E9113C762466ED(Var0.f_1))
								{
									if (unk_0x80E9CA64E9C8E070(Var0.f_1))
									{
										iVar10 = unk_0xB80CAAF3D65FBC1F(Var0.f_1);
										if (unk_0x0764AC92F08BEC9E(iVar10))
										{
											iVar13 = unk_0xDE881A032F5BA110(iVar10);
											if (unk_0xD54DE3C9493BFEC2(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0xBE369BE1BC57A796())
													{
														Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_11++;
														unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_6), iVar29);
														Var15.f_2 = 144;
														Var15.f_10 = unk_0xBE369BE1BC57A796();
														func_285(Var15, func_286(0));
														func_280("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0xDE881A032F5BA110(iVar10);
													unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_7), iVar29);
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
		if (!func_99(unk_0xBE369BE1BC57A796(), 20))
		{
			if (unk_0x23E9113C762466ED(Var0.f_0))
			{
				if (unk_0x80E9CA64E9C8E070(Var0.f_0))
				{
					iVar11 = unk_0xB80CAAF3D65FBC1F(Var0.f_0);
					if (unk_0x0764AC92F08BEC9E(iVar11))
					{
						iVar12 = unk_0xDE881A032F5BA110(iVar11);
						if (unk_0x23E9113C762466ED(Var0.f_1))
						{
							if (unk_0x80E9CA64E9C8E070(Var0.f_1))
							{
								iVar10 = unk_0xB80CAAF3D65FBC1F(Var0.f_1);
								if (unk_0x0764AC92F08BEC9E(iVar10))
								{
									iVar13 = unk_0xDE881A032F5BA110(iVar10);
									if (iVar13 == unk_0xBE369BE1BC57A796())
									{
										if (unk_0xD54DE3C9493BFEC2(iVar12))
										{
											if (func_171(iVar12, 1))
											{
												if (Local_99.f_118 > -1)
												{
													iVar14 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(Local_99.f_118));
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
	unk_0xBD18006F0815A298(sParam0);
	iVar0 = unk_0x23048DD0C6E21613(0, 1);
	func_281(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_281(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_284() || !unk_0xF7271A9481CAC8E3()) || !func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_282(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_283(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_284()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

void func_285(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xBE369BE1BC57A796();
	if (!iParam14 == 0)
	{
		unk_0x504D0D40319365B7(1, &Param0, 14, iParam14);
	}
}

int func_286(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			iVar2 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar1));
			if (func_733(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar2);
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
	
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		if (unk_0x48B8265059381CD0(uLocal_1420, 14))
		{
			unk_0x21E7933CCC7B3724(&iLocal_1420, 14);
		}
		return;
	}
	iVar0 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
	if (!unk_0x48B8265059381CD0(iLocal_1420, 14))
	{
		if (Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1 != 0)
		{
			Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1 = 0;
		}
		unk_0xEB79FECD9022AAF0(&iLocal_1420, 14);
	}
	if (!unk_0x48B8265059381CD0(iLocal_1420, 15))
	{
		unk_0xEB79FECD9022AAF0(&iLocal_1420, 15);
		func_584();
	}
	if (unk_0x7268A1112372AA44(iVar0))
	{
		if (unk_0xD54DE3C9493BFEC2(iVar0))
		{
			uVar1 = unk_0xB421DCBFBBE3286E(iVar0);
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
	iVar14 = unk_0xCA1D9459B2CC7619();
	iVar15 = unk_0xBE369BE1BC57A796();
	if (func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar14 = func_277();
		iVar15 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
	}
	if (!unk_0x48B8265059381CD0(Local_971[iVar14 /*14*/].f_1, 4))
	{
		if (!unk_0x48B8265059381CD0(iLocal_1420, 9))
		{
			if (unk_0x48B8265059381CD0(Local_99.f_1, 1))
			{
				if (iVar14 == Local_99.f_118 || func_652() == Local_99.f_118)
				{
					if (func_124(iVar15) >= 2)
					{
						sVar16 = func_528(iVar15);
						iVar17 = func_527(iVar15);
						func_525(87, "GB_WINNER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
					}
					if (iVar15 == unk_0xBE369BE1BC57A796())
					{
						if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
						{
							func_510(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
						}
						Var0.f_0 = func_509();
						Var0.f_1 = func_508();
						func_374(166, 1, &Var0, 0);
						unk_0x9A03DB8A4DBF9E88(iVar15);
						iLocal_1714 = unk_0x21B9C652ECEE5A6D();
						unk_0x6751FA44D6CA586D(0);
						unk_0xEB79FECD9022AAF0(&iLocal_1420, 17);
						func_7(&uLocal_1715, 0, 0);
					}
				}
				else if (func_276())
				{
					if (func_171(iVar15, 1))
					{
						if (func_124(iVar15) >= 2)
						{
							sVar16 = func_528(unk_0x0C36F33B3F746611(Local_99.f_119));
							iVar17 = func_527(unk_0x0C36F33B3F746611(Local_99.f_119));
							func_525(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (iVar15 == unk_0xBE369BE1BC57A796())
						{
							if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
							{
								func_510(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
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
							sVar16 = func_528(unk_0x0C36F33B3F746611(Local_99.f_119));
							iVar17 = func_527(unk_0x0C36F33B3F746611(Local_99.f_119));
							func_525(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (iVar15 == unk_0xBE369BE1BC57A796())
						{
							if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
							{
								func_510(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
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
				unk_0xEB79FECD9022AAF0(&iLocal_1420, 9);
			}
			else if (unk_0x48B8265059381CD0(Local_99.f_1, 3))
			{
				iVar18 = (4 - Local_99.f_115);
				if (iVar14 == Local_99.f_118 || func_652() == Local_99.f_118)
				{
					if (func_124(iVar15) >= 2)
					{
						sVar16 = func_366();
						iVar17 = func_527(iVar15);
						func_525(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
					}
					if (iVar15 == unk_0xBE369BE1BC57A796())
					{
						if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
						{
							func_510(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
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
						sVar16 = func_528(unk_0x0C36F33B3F746611(Local_99.f_119));
						iVar17 = func_527(unk_0x0C36F33B3F746611(Local_99.f_119));
						if (iVar18 == 1)
						{
							func_525(87, "GB_WINNER", "BIGM_HUN1S", sVar16, iVar17, 0, iVar18, -1, -1, 2, -1);
						}
						else if (iVar18 > 1)
						{
							func_525(87, "GB_WINNER", "BIGM_HUNRS", sVar16, iVar17, 0, iVar18, -1, -1, 2, -1);
						}
					}
					if (iVar15 == unk_0xBE369BE1BC57A796())
					{
						if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
						{
							func_510(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
						}
						if (func_117(iVar15))
						{
							Var0.f_0 = func_373();
							Var0.f_1 = func_372();
						}
						func_374(166, 1, &Var0, 0);
						unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
					}
				}
				unk_0xEB79FECD9022AAF0(&iLocal_1420, 9);
			}
			else if (unk_0x48B8265059381CD0(Local_99.f_1, 5))
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
						func_320(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar15 == unk_0xBE369BE1BC57A796())
				{
					if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
					{
						func_510(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
					}
					func_374(166, 0, &Var0, 0);
				}
				unk_0xEB79FECD9022AAF0(&iLocal_1420, 9);
			}
		}
		if (unk_0x48B8265059381CD0(iLocal_1420, 9))
		{
			func_584();
			if (!unk_0x48B8265059381CD0(uLocal_1421, 8))
			{
				func_307();
				func_70();
				unk_0xEB79FECD9022AAF0(&iLocal_1421, 8);
			}
			if (!unk_0x48B8265059381CD0(iLocal_1420, 10))
			{
			}
			if (func_289(&uLocal_1428, 0, 0))
			{
				if (iVar14 == unk_0xCA1D9459B2CC7619())
				{
					unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 4);
				}
			}
			else if (unk_0x48B8265059381CD0(iLocal_1420, 17))
			{
				if (func_6(&uLocal_1715, 10000, 0))
				{
					unk_0x6751FA44D6CA586D(iLocal_1714);
					unk_0x21E7933CCC7B3724(&iLocal_1420, 17);
				}
			}
		}
	}
}

int func_289(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_100(29);
	if ((*uParam0 > 0 && !func_211()) && func_124(unk_0xBE369BE1BC57A796()) != 0)
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
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 2);
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4446), 0);
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
					unk_0x2E2945F5602A744F(1);
				}
				func_302(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 1);
				unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 2);
				func_302(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 1);
			unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_290(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

char* func_291(int iParam0)
{
	if (((func_294(unk_0xBE369BE1BC57A796()) || func_293(unk_0xBE369BE1BC57A796())) || func_229()) || iParam0)
	{
		if (func_293(unk_0xBE369BE1BC57A796()))
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
	return Global_1631902;
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
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148 && func_162(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_34, 1))
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
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 0))
	{
		if ((((((((((!unk_0xF4CF563B04C79242() && !unk_0x48B8265059381CD0(Global_2494199.f_743, 2)) && func_733(unk_0xBE369BE1BC57A796(), 1, 1)) && !Global_68131) && !Global_53003) && !unk_0x25BD4C26D84038CD()) && !func_99(unk_0xBE369BE1BC57A796(), 22)) && func_124(unk_0xBE369BE1BC57A796()) != 0) && !func_300(func_301())) && !func_294(unk_0xBE369BE1BC57A796())) && !func_299(func_95(unk_0xBE369BE1BC57A796())))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4446), 1);
			func_298(func_291(iParam0), -1);
			func_297(1);
			unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 0);
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
		unk_0x4988C48537D1AE4F(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_298(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 0, iParam1);
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
	
	uVar0 = unk_0x6AF6B39BFDB53CB5();
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_RAMPED_UP"))
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
	Global_2454051 = 1;
}

int func_304()
{
	if (((((((func_95(unk_0xBE369BE1BC57A796()) == 170 || func_95(unk_0xBE369BE1BC57A796()) == 219) || func_95(unk_0xBE369BE1BC57A796()) == 221) || func_95(unk_0xBE369BE1BC57A796()) == 220) || func_95(unk_0xBE369BE1BC57A796()) == 216) || func_95(unk_0xBE369BE1BC57A796()) == 215) || func_95(unk_0xBE369BE1BC57A796()) == 214) || func_95(unk_0xBE369BE1BC57A796()) == 218)
	{
		return 1;
	}
	if (func_305(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_733(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
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
		if (unk_0xA3794949321E107C(uLocal_1435[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_1435[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x48B8265059381CD0(iLocal_1420, 18))
	{
		func_319(1);
		unk_0x21E7933CCC7B3724(&iLocal_1420, 18);
	}
	func_316();
	func_308();
}

void func_308()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x48B8265059381CD0(iLocal_1420, 7))
	{
		unk_0xEB79FECD9022AAF0(&iLocal_1420, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar0);
			if (unk_0x7268A1112372AA44(iVar1))
			{
				if (iVar1 != unk_0xBE369BE1BC57A796())
				{
					if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_8, iVar0))
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
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_310(iParam0))
	{
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_386), iVar0);
			Global_2414713.f_605[iParam0] = unk_0xE9A5FDFDC239B2ED();
			Global_2414713.f_440[iVar0] = uParam1;
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_2414713.f_386), iVar0);
			Global_2414713.f_605[iParam0] = -1;
		}
	}
}

int func_310(int iParam0)
{
	if (!unk_0x1EFA84312BB8AA22(Global_2414713.f_605[iParam0]) || Global_2414713.f_605[iParam0] == unk_0xE9A5FDFDC239B2ED())
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
	return Global_25190;
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
	unk_0xE3B46F8779F1AB2E(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
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
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x1EFA84312BB8AA22(Global_2414713.f_572[iParam0]) || Global_2414713.f_572[iParam0] == unk_0xE9A5FDFDC239B2ED())
	{
		if (bParam2)
		{
			if (!unk_0x48B8265059381CD0(Global_2414713.f_385, iVar0))
			{
				func_315();
			}
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_385), iVar0);
			Global_2414713.f_407[iVar0] = uVar1;
			Global_2414713.f_572[iParam0] = unk_0xE9A5FDFDC239B2ED();
		}
		else
		{
			if (unk_0x48B8265059381CD0(Global_2414713.f_385, iVar0))
			{
				func_315();
			}
			unk_0x21E7933CCC7B3724(&(Global_2414713.f_385), iVar0);
			Global_2414713.f_572[iParam0] = -1;
		}
	}
}

void func_315()
{
	Global_2414713.f_995 = 1;
}

void func_316()
{
	if (unk_0x48B8265059381CD0(iLocal_1420, 16))
	{
		func_81();
		func_317();
		unk_0x21E7933CCC7B3724(&iLocal_1420, 16);
	}
}

void func_317()
{
	if (Global_2412536.f_6 == unk_0xE9A5FDFDC239B2ED())
	{
		func_318();
	}
}

void func_318()
{
	struct<25> Var0;
	
	if (unk_0x1EFA84312BB8AA22(Global_2412536.f_6))
	{
		if (!Global_2412536.f_6 == unk_0xE9A5FDFDC239B2ED())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412536 = { Var0 };
	Global_2412536.f_6 = -1;
}

void func_319(bool bParam0)
{
	if (unk_0x63C468D583002D23())
	{
		if (!func_126())
		{
			if (func_733(unk_0xBE369BE1BC57A796(), 1, 0))
			{
				unk_0x5A1E5F0E805EF8B8(unk_0x17B5CC8A8615737D(), 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 342, 0);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 122, 0);
			}
			unk_0x240454F87F8FCCAE(unk_0xBE369BE1BC57A796(), 1f);
			unk_0xE3275C3071721B6D(0);
			unk_0x02AC9A2B522D447F(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xBF60B15AF9063410(0, 0);
				}
			}
		}
		else
		{
			if (func_733(unk_0xBE369BE1BC57A796(), 1, 1))
			{
				unk_0x5A1E5F0E805EF8B8(unk_0x17B5CC8A8615737D(), 0);
				unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 342, 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 122, 1);
				unk_0x240454F87F8FCCAE(unk_0xBE369BE1BC57A796(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xBF60B15AF9063410(1, 0);
				}
			}
			unk_0xE3275C3071721B6D(1);
			unk_0x02AC9A2B522D447F(0);
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
		if (Global_2433125.f_2505)
		{
			return 0;
		}
	}
	func_324(uParam0, uParam0->f_16);
	func_323(uParam0);
	if (func_322(uParam0->f_1))
	{
		if (Global_2433125.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433125.f_2199[0 /*76*/].f_1 == 13 || Global_2433125.f_2199[0 /*76*/].f_1 == 53) || Global_2433125.f_2199[0 /*76*/].f_1 == 54) || Global_2433125.f_2199[0 /*76*/].f_1 == 58)
		{
			Global_2433125.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433125.f_2199[iVar0 + 1 /*76*/] = { Global_2433125.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433125.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_214(Global_2433125.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_322(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103)
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1633501.f_85058[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_251(unk_0xBE369BE1BC57A796()) || (func_340() && func_339())) && !unk_0x48B8265059381CD0(Global_2494199.f_4449, 31))
	{
		uVar1 = func_338();
		if (unk_0x23E9113C762466ED(uVar1))
		{
			if (unk_0x0764AC92F08BEC9E(iVar1))
			{
				if (unk_0xDE881A032F5BA110(iVar1) != -1)
				{
					if (func_733(unk_0xDE881A032F5BA110(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
						{
							if (Global_1633501.f_85058[iParam1] != -1)
							{
								return func_336(iParam1, iParam0, 0);
							}
							else
							{
								return func_333(iParam0, unk_0xDE881A032F5BA110(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_333(iParam0, unk_0xDE881A032F5BA110(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
			{
				if (Global_1633501.f_85058[iParam1] != -1)
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
	if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
	{
		if (Global_1633501.f_85058[iParam1] != -1)
		{
			return func_336(iParam1, iParam0, 0);
		}
		else
		{
			return func_333(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
		}
	}
	return func_333(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
}

int func_326(bool bParam0, int iParam1, bool bParam2)
{
	return func_327(unk_0xBE369BE1BC57A796(), bParam0, iParam1, bParam2);
}

int func_327(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x7268A1112372AA44(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_332(iVar0, iParam2, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18))
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
			else if (unk_0x48B8265059381CD0(Global_1633501.f_4, 20))
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
	if (func_329(Global_1633501.f_88646))
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
		if (iParam0 == Global_262145.f_7845[iVar0])
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1591201[iVar2 /*602*/] == 148)
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
			if ((func_335(iParam1, iParam0, iVar0, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)) || ((func_332(unk_0xB58DEBB81964A4E9(iParam1), unk_0xB58DEBB81964A4E9(iParam0), 0) && unk_0x48B8265059381CD0(Global_1633501.f_15, 23)) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)))
			{
				return func_331(1);
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_15, 26))
			{
				return func_334(1);
			}
			else
			{
				return func_327(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574288 || Global_1574279) || Global_1591201[iParam0 /*602*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574288 == 1 && Global_1574298 == 0))
			{
				return func_331(1);
			}
			else
			{
				return func_327(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574283 && Global_1573825.f_14 == iParam0)
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
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
	}
	return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
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
	if (Global_1633501.f_85058[iParam0] != -1 && Global_1633501.f_85058[iParam0] <= 4)
	{
		if (Global_1633501.f_85058[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1633501.f_85058[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1633501.f_85058[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1633501.f_85058[iParam0] == 4)
		{
			if (unk_0x48B8265059381CD0(Global_1633501.f_15, 29))
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
			iVar0 = Global_1633501.f_85058[iParam0];
		}
	}
	else
	{
		iVar0 = func_327(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_21, 13))
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
			iVar0 = Global_1633501.f_107616;
			break;
		
		case 1:
			iVar0 = Global_1633501.f_107617;
			break;
		
		case 2:
			iVar0 = Global_1633501.f_107618;
			break;
		
		case 3:
			iVar0 = Global_1633501.f_107619;
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
	return unk_0x48B8265059381CD0(Global_2359301, 4);
}

bool func_340()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
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
	
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		if (!func_343(1))
		{
			if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1, 6))
			{
				unk_0x21E7933CCC7B3724(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_127())
		{
			if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1, 6))
			{
				unk_0x21E7933CCC7B3724(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1, 6))
		{
			unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_277();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x48B8265059381CD0(Local_971[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_343(bool bParam0)
{
	if (func_111(unk_0xBE369BE1BC57A796(), 21))
	{
		return 0;
	}
	if (unk_0x51FDEF56E23A7C33())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xEE1438344034E8AA())
		{
			return 0;
		}
	}
	if (func_365(unk_0xBE369BE1BC57A796()))
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
	if (unk_0xF7271A9481CAC8E3())
	{
		return 0;
	}
	if (func_257(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (func_111(unk_0xBE369BE1BC57A796(), 0) || func_111(unk_0xBE369BE1BC57A796(), 3))
	{
		return 0;
	}
	if ((func_111(unk_0xBE369BE1BC57A796(), 12) || func_111(unk_0xBE369BE1BC57A796(), 14)) || func_111(unk_0xBE369BE1BC57A796(), 13))
	{
		return 0;
	}
	if (func_362(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0))
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
	if (Global_1751032)
	{
		return 0;
	}
	if (func_347(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if (func_345(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 4))
	{
		return 0;
	}
	if (func_344(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

int func_344(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421664[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 14))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	if (Global_2583878.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	if (!func_733(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1591201[iParam0 /*602*/].f_35;
}

bool func_348()
{
	return Global_91543.f_304 > 0;
}

int func_349()
{
	int iVar0;
	
	iVar0 = func_95(unk_0xBE369BE1BC57A796());
	if (((func_361(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15) || func_360(unk_0xBE369BE1BC57A796())) || func_359(unk_0xBE369BE1BC57A796())) || func_354(unk_0xBE369BE1BC57A796()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_352(unk_0xBE369BE1BC57A796()))
	{
		if (func_351(iVar0) || func_350(iVar0))
		{
			return 1;
		}
	}
	if (func_305(unk_0xBE369BE1BC57A796()))
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
	if (func_353(Global_1591201[iParam0 /*602*/].f_258.f_15, -1))
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
	if (func_355(Global_1591201[iParam0 /*602*/].f_258.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_356(unk_0xBE369BE1BC57A796(), 0);
	}
	if (bParam1)
	{
		if (func_356(unk_0xBE369BE1BC57A796(), 0))
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
	if (Global_1591069 != func_60())
	{
		if (!func_358(Global_1591069))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xBE369BE1BC57A796() != Global_1591069)
			{
				if (unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) || func_357(Global_1591069))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 24);
}

bool func_357(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 9);
}

int func_358(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_210, 2);
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_733(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_733(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_306(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
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
	if (Global_1591201[iParam0 /*602*/].f_258.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
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
	return Global_1315233;
}

bool func_364()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_365(int iParam0)
{
	if (func_256(iParam0, 1))
	{
		if (Global_1591201[iParam0 /*602*/] != 6)
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
	
	iVar0 = func_61(unk_0xBE369BE1BC57A796());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0xBE369BE1BC57A796())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0xBE369BE1BC57A796(), 28)) || func_371(iVar0)) && !func_370(iVar0))
			{
				return func_368(iVar0, 0);
			}
			if (!unk_0x8EA3D5407E9F4AF0() && !unk_0x65FCCBD8772098C3(0, -1, 1))
			{
				return func_368(iVar0, 0);
			}
		}
		uVar1 = func_367(&(Global_1619421[iVar0 /*390*/].f_11.f_97));
		if (unk_0x9C88EB7B70229335(uVar1))
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
	return unk_0xC7E52B74A3B4973C("GB_REST_ACC");
}

var func_369()
{
	return unk_0xC7E52B74A3B4973C("GB_REST_ACCM");
}

int func_370(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x8EA3D5407E9F4AF0() && unk_0x7BB94A563F5F14FD(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x7C2F31E78C33DE0F() || unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5DC8C64FE18EADF7(0))
		{
			return 0;
		}
	}
	else if (unk_0x8EA3D5407E9F4AF0())
	{
		if (unk_0x7BB94A563F5F14FD(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_372()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13638);
}

int func_373()
{
	return ((4 - Local_99.f_115) * Global_262145.f_13637);
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
			iVar1 = (iVar1 + Global_262145.f_16393);
		}
		else if (iParam0 == 178)
		{
			if (func_505())
			{
				iVar1 = (iVar1 + Global_262145.f_16900);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16901);
			}
		}
		else if (iParam0 == 188)
		{
			if (func_505())
			{
				iVar1 = (iVar1 + Global_262145.f_16984);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16985);
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
			iVar0 = (iVar0 + Global_262145.f_16392);
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
	if (((func_95(unk_0xBE369BE1BC57A796()) == 167 || func_95(unk_0xBE369BE1BC57A796()) == 168) || func_95(unk_0xBE369BE1BC57A796()) == 178) || func_95(unk_0xBE369BE1BC57A796()) == 188)
	{
		if (bParam1)
		{
			if (func_502(unk_0xBE369BE1BC57A796()) > 0)
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
		if (func_171(unk_0xBE369BE1BC57A796(), 0))
		{
			if (!func_71(unk_0xBE369BE1BC57A796(), iVar6, 1))
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
		Global_1763183.f_10 = iVar1;
		func_445();
		func_403(0, unk_0x17B5CC8A8615737D(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1763183.f_9 = iVar0;
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
				unk_0xC8E240057F2F74B7(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_398())
			{
				if (!func_399())
				{
					unk_0xC8E240057F2F74B7(iVar0, uVar5);
				}
			}
			else if (func_399())
			{
				func_389(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2590252[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2590252[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2590252[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0xC8E240057F2F74B7(iVar0, uVar5);
			}
		}
		else if (func_399())
		{
			func_389(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2590252[iVar14 /*76*/].f_8.f_54 = uVar9;
			Global_2590252[iVar14 /*76*/].f_8.f_55 = uVar10;
			Global_2590252[iVar14 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xC3EB5198F99AB34C(uVar9, uVar10, iVar0, bVar12);
		}
		func_388(iParam0, iVar0);
		if (func_387(iParam0))
		{
			if (func_386(iParam0) > -1)
			{
				func_385(func_386(iParam0), iVar0);
			}
		}
		Global_2454708 = iVar0;
		func_384(&Global_2452983, 0, 0);
	}
	if (func_114(unk_0xBE369BE1BC57A796()) || func_133(unk_0xBE369BE1BC57A796()))
	{
		func_375(iParam0);
	}
	if (func_295(iParam0))
	{
		Global_1763201.f_13 = iVar0;
		Global_1763201.f_14 = iVar1;
	}
	if (func_299(iParam0))
	{
		Global_1763254.f_13 = iVar0;
		Global_1763254.f_14 = iVar1;
	}
}

void func_375(int iParam0)
{
	if (func_383(unk_0xBE369BE1BC57A796()) && func_398())
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
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_132(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_132(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_132(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_132(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_132(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_132(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_132(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_132(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_132(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_132(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_132(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_132(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_132(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_132(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_132(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_132(iParam2)] = iParam1;
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_381(int iParam0)
{
	if (Global_1363152)
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
	uVar0 = Global_2503826[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_97, 14);
}

void func_384(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
	}
	uParam0->f_1 = 1;
}

void func_385(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494199.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5491)
		{
			iParam1 = Global_262145.f_5491;
		}
		Global_2494199.f_270 = iParam1;
		Global_2494199.f_271 = 0;
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
	if (func_383(unk_0xBE369BE1BC57A796()) && func_398())
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
		case -135813048:
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
		if (!unk_0xAE2B681D784C7E64(func_19()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x1EB4A371BFB0E524(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar3))
		{
			*uParam0 = func_397(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590252[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_396(1, iParam4);
			Global_2590761 = 0;
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
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_125.f_71), 0);
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
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_393(&(Global_2590252[iParam0 /*76*/]));
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
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_396(int iParam0, var uParam1)
{
	Global_2454840 = uParam1;
	Global_2454839 = iParam0;
}

int func_397(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_399())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = uParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = uParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_398()
{
	return func_230(unk_0xBE369BE1BC57A796());
}

int func_399()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

bool func_400(bool bParam0)
{
	return func_171(unk_0xBE369BE1BC57A796(), bParam0);
}

void func_401(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1619421[iParam0 /*390*/].f_11.f_7[0];
	*uParam2 = Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

int func_402()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
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
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(iParam1);
				func_410(unk_0x425DAA25CBB7EDE2(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
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
	if (iParam0 == func_407(unk_0x17B5CC8A8615737D()))
	{
		func_406(1);
	}
	func_410(Var0, iParam1, 0, sParam2, iParam3);
}

void func_406(int iParam0)
{
	Global_2433125.f_1382 = iParam0;
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
	
	if (unk_0x354EBDB72A54F91B())
	{
		Var3 = { unk_0xBEBA2DED4C4C66BD(2) };
	}
	if (iParam0 == func_409(unk_0x17B5CC8A8615737D()) && unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		Var0 = { unk_0x854ED33E6D715648(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		fVar6 = unk_0x638527C9799F2AE4(iParam0);
		if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x3CE07141081BBC2B(Var0, fVar6, 0f, 0f, fVar13) };
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
			if (Global_2433125.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433125.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433125.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433125.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433125.f_781[iVar1 /*30*/].f_4 = func_413(Global_2433125.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433125.f_781[iVar1 /*30*/].f_7 = unk_0xCB150A8B81012128();
			Global_2433125.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433125.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433125.f_781[iVar1 /*30*/].f_9 = func_412();
			Global_2433125.f_781[iVar1 /*30*/].f_10 = func_411();
			StringCopy(&(Global_2433125.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433125.f_781[iVar1 /*30*/].f_26 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), iParam6);
		}
	}
}

int func_411()
{
	if (Global_2433125.f_1382)
	{
		Global_2433125.f_1382 = 0;
		return 1;
	}
	Global_2433125.f_1382 = 0;
	return 0;
}

var func_412()
{
	var uVar0;
	
	uVar0 = Global_2433125.f_1384;
	Global_2433125.f_1384 = 1;
	return uVar0;
}

float func_413(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x3DC4639D5F23DEA2(unk_0x667FF09580838E25(), Param0, 1);
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
	
	if (func_444(unk_0xBE369BE1BC57A796()) || func_443(unk_0xBE369BE1BC57A796()))
	{
		if (Global_262145.f_8270 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8270;
		}
	}
	else if (Global_262145.f_5542 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5542;
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
				func_425((func_432(unk_0xBE369BE1BC57A796()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x4A006931F5B47F5F(iVar1, iParam8, iParam9);
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_2 != -1)
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
				func_416((func_418(unk_0xBE369BE1BC57A796()) + iVar1));
			}
			else
			{
				func_416((func_418(unk_0xBE369BE1BC57A796()) + iParam6));
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
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_5 = iParam0;
		func_417(joaat("mpply_globalxp"), iParam0);
	}
}

void func_417(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_418(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_733(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return func_419(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_5;
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
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_420(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0xBE369BE1BC57A796()) };
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(&Var0))
		{
			iVar13 = func_423(func_424(&Var0));
			if (iVar13 == 0)
			{
				func_422(&Global_1363158, iParam0);
				func_421(joaat("mpply_crew_local_xp_0"), Global_1363158);
			}
			else if (iVar13 == 1)
			{
				func_422(&Global_1363159, iParam0);
				func_421(joaat("mpply_crew_local_xp_1"), Global_1363159);
			}
			else if (iVar13 == 2)
			{
				func_422(&Global_1363160, iParam0);
				func_421(joaat("mpply_crew_local_xp_2"), Global_1363160);
			}
			else if (iVar13 == 3)
			{
				func_422(&Global_1363161, iParam0);
				func_421(joaat("mpply_crew_local_xp_3"), Global_1363161);
			}
			else if (iVar13 == 4)
			{
				func_422(&Global_1363162, iParam0);
				func_421(joaat("mpply_crew_local_xp_4"), Global_1363162);
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
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = iParam1;
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
	if (iParam0 == Global_1363153)
	{
		return 0;
	}
	else if (iParam0 == Global_1363154)
	{
		return 1;
	}
	else if (iParam0 == Global_1363155)
	{
		return 2;
	}
	else if (iParam0 == Global_1363156)
	{
		return 3;
	}
	else if (iParam0 == Global_1363157)
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
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(uParam0))
		{
			return Global_2452452;
		}
	}
	return Global_2452452;
}

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (func_441())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8240 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1363273[func_132(-1)])
				{
					unk_0x4A006931F5B47F5F(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1363273[func_132(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_431(unk_0xBE369BE1BC57A796()))
		{
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iParam0;
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_429(iParam0, 1);
		}
		func_379(634, iParam0, -1, 1);
		func_380(635, func_429(iParam0, 1), -1, 1, 0);
		Global_1363273[func_132(-1)] = iParam0;
		func_426(7, 0);
	}
}

void func_426(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_428(iParam0, iParam1))
	{
		iVar0 = func_427();
		Global_2452429[iVar0] = iParam0;
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
		if (Global_2452429[iVar1] == 0)
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
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_432(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_132(-1)];
			}
			else if (func_431(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_132(-1)];
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
	
	iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		iVar4 = unk_0x62C65E3042052191(iVar0);
		if (unk_0x5877B93374C85567(iVar4))
		{
			iVar5 = unk_0xD878F413B7BB4895(iVar4);
			if (unk_0xB58DEBB81964A4E9(iVar5) != -1)
			{
				if (unk_0xB58DEBB81964A4E9(iVar5) == iVar1 || func_332(unk_0xB58DEBB81964A4E9(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xBE369BE1BC57A796())
					{
						if (func_63(unk_0xBE369BE1BC57A796(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_435(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_435(*iParam0, 100) * (20f * Global_262145.f_4210)));
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
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			iVar3 = iVar0;
			if (unk_0x5877B93374C85567(iVar3))
			{
				iVar4 = unk_0xD878F413B7BB4895(iVar3);
				if (func_733(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xBE369BE1BC57A796())
					{
						iVar1++;
						if (func_63(unk_0xBE369BE1BC57A796(), iVar4))
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
			if (func_733(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xBE369BE1BC57A796())
				{
					if (func_437(unk_0xBE369BE1BC57A796(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0xBE369BE1BC57A796(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_435(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_435(*iParam1, 100) * (20f * Global_262145.f_4210)));
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
	
	if (unk_0xF38E4347579BAB61() != 3)
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
		if (unk_0x049F77DED8AE0AF4(iParam0) > func_432(unk_0xBE369BE1BC57A796()))
		{
			iParam0 = -func_432(unk_0xBE369BE1BC57A796());
		}
	}
	if (func_440(8000, 0, 0) > 0)
	{
		if (func_440(8000, 0, 0) < (iParam0 + func_432(unk_0xBE369BE1BC57A796())))
		{
			iParam0 = (func_440(8000, 0, 0) - func_432(unk_0xBE369BE1BC57A796()));
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
	return Global_280048[iParam0];
}

int func_441()
{
	return 1;
}

int func_442(var uParam0)
{
	if (unk_0xD3115E7F7876D6E6(uParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uParam0, "") || unk_0x6A7B0D91FD88D9EE(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_443(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_444(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

void func_445()
{
	Global_2454050 = 1;
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
	iVar2 = unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(Global_2494199.f_4710.f_78, unk_0xCB150A8B81012128()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16595)
		{
			iVar2 = Global_262145.f_16595;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16596)
		{
			iVar2 = Global_262145.f_16596;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16594)
		{
			iVar2 = Global_262145.f_16594;
		}
	}
	else if (func_351(iParam0))
	{
		if (iVar2 > Global_262145.f_16597)
		{
			iVar2 = Global_262145.f_16597;
		}
	}
	else if (func_204(iParam0, 0) || func_377(iParam0))
	{
		if (iVar2 > Global_262145.f_16598)
		{
			iVar2 = Global_262145.f_16598;
		}
	}
	else if (iVar2 > Global_262145.f_11015)
	{
		iVar2 = Global_262145.f_11015;
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
			return Global_262145.f_11106;
		
		case 152:
			return Global_262145.f_11141;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11129;
		
		case 157:
			return Global_262145.f_11096;
		
		case 159:
			return Global_262145.f_11079;
		
		case 164:
			return Global_262145.f_11119;
		
		case 160:
			return Global_262145.f_11169;
		
		case 162:
			return Global_262145.f_11189;
		
		case 163:
			return Global_262145.f_11154;
		
		case 154:
			return Global_262145.f_11224;
		
		case 155:
			return Global_262145.f_11214;
		
		case 153:
			return Global_262145.f_11178;
		
		case 170:
			return Global_262145.f_13115;
		
		case 171:
			return Global_262145.f_13174;
		
		case 172:
			return Global_262145.f_13192;
		
		case 173:
			return Global_262145.f_13133;
		
		case 166:
			return Global_262145.f_13148;
		
		case 167:
			return Global_262145.f_13239;
		
		case 169:
			return Global_262145.f_13211;
		
		case 168:
			return Global_262145.f_13204;
		
		case 179:
			return Global_262145.f_16477;
		
		case 180:
			return Global_262145.f_16256;
		
		case 182:
			return Global_262145.f_16256;
		
		case 183:
			return Global_262145.f_16256;
		
		case 185:
			return Global_262145.f_16256;
		
		case 186:
			return Global_262145.f_16256;
		
		case 189:
			return Global_262145.f_16477;
		
		case 190:
			return Global_262145.f_16132;
		
		case 191:
			return Global_262145.f_16223;
		
		case 192:
			return Global_262145.f_16017;
		
		case 193:
			return Global_262145.f_16477;
		
		case 194:
			return Global_262145.f_16477;
		
		case 195:
			return Global_262145.f_16256;
		
		case 197:
			return Global_262145.f_16256;
		
		case 198:
			return Global_262145.f_16256;
		
		case 199:
			return Global_262145.f_16477;
		
		case 200:
			return Global_262145.f_16477;
		
		case 201:
			return Global_262145.f_16477;
		
		case 205:
			return Global_262145.f_16477;
		
		case 207:
			return Global_262145.f_16256;
		
		case 208:
			return Global_262145.f_16256;
		
		case 209:
			return Global_262145.f_16256;
		
		case 210:
			return Global_262145.f_16477;
		
		case 211:
			return Global_262145.f_16477;
		
		case 214:
			return Global_262145.f_17273;
		
		case 215:
			return Global_262145.f_17275;
		
		case 216:
			return Global_262145.f_17277;
		
		case 217:
			return Global_262145.f_17279;
		
		case 218:
			return Global_262145.f_17281;
		
		case 219:
			return Global_262145.f_17283;
		
		case 220:
			return Global_262145.f_17285;
		
		case 221:
			return Global_262145.f_17287;
		
		default:
	}
	return 0;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11105;
		
		case 152:
			return Global_262145.f_11140;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11128;
		
		case 157:
			return Global_262145.f_11095;
		
		case 159:
			return Global_262145.f_11078;
		
		case 164:
			return Global_262145.f_11118;
		
		case 160:
			return Global_262145.f_11168;
		
		case 162:
			return Global_262145.f_11188;
		
		case 163:
			return Global_262145.f_11153;
		
		case 154:
			return Global_262145.f_11223;
		
		case 155:
			return Global_262145.f_11213;
		
		case 153:
			return Global_262145.f_11177;
		
		case 170:
			return Global_262145.f_13114;
		
		case 171:
			return Global_262145.f_13173;
		
		case 172:
			return Global_262145.f_13191;
		
		case 173:
			return Global_262145.f_13132;
		
		case 166:
			return Global_262145.f_13147;
		
		case 179:
			return Global_262145.f_16476;
		
		case 180:
			return Global_262145.f_16255;
		
		case 182:
			return Global_262145.f_16255;
		
		case 183:
			return Global_262145.f_16255;
		
		case 185:
			return Global_262145.f_16255;
		
		case 186:
			return Global_262145.f_16255;
		
		case 189:
			return Global_262145.f_16476;
		
		case 193:
			return Global_262145.f_16476;
		
		case 194:
			return Global_262145.f_16476;
		
		case 195:
			return Global_262145.f_16255;
		
		case 197:
			return Global_262145.f_16255;
		
		case 198:
			return Global_262145.f_16255;
		
		case 199:
			return Global_262145.f_16476;
		
		case 200:
			return Global_262145.f_16476;
		
		case 201:
			return Global_262145.f_16476;
		
		case 205:
			return Global_262145.f_16476;
		
		case 207:
			return Global_262145.f_16255;
		
		case 208:
			return Global_262145.f_16255;
		
		case 209:
			return Global_262145.f_16255;
		
		case 210:
			return Global_262145.f_16476;
		
		case 211:
			return Global_262145.f_16476;
		
		case 190:
			if (!func_505())
			{
				return Global_262145.f_16131;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_505())
			{
				return Global_262145.f_16222;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_505())
			{
				return Global_262145.f_16016;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17272;
		
		case 215:
			return Global_262145.f_17274;
		
		case 216:
			return Global_262145.f_17276;
		
		case 217:
			return Global_262145.f_17278;
		
		case 218:
			return Global_262145.f_17280;
		
		case 219:
			return Global_262145.f_17282;
		
		case 220:
			return Global_262145.f_17284;
		
		case 221:
			return Global_262145.f_17286;
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
					if (unk_0x7268A1112372AA44(func_402()))
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
	
	if (func_733(iParam0, 0, 1))
	{
		Var0.f_0 = 490;
		Var0.f_1 = unk_0xBE369BE1BC57A796();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x504D0D40319365B7(1, &Var0, 5, func_451(iParam0));
	}
}

var func_451(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

void func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

int func_453(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var1))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		unk_0x80A171A436807CA0(func_325(iParam1, -2, 1, 0));
		unk_0xBAB00B98D1E61BEE(func_454(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x80A171A436807CA0(iParam3);
		}
		unk_0x69967F83C1E636E2(iParam2);
		iVar0 = unk_0x23048DD0C6E21613(0, 1);
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
	return Global_262145.f_11010;
}

int func_458()
{
	return Global_262145.f_11009;
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
					*uParam3 = (func_468(unk_0xBE369BE1BC57A796(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_468(unk_0xBE369BE1BC57A796(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_462(unk_0xBE369BE1BC57A796(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16706);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16705);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_461(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16696);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16695));
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
				Global_2494199.f_4710.f_190 = *iParam2;
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
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16706));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16705));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16745;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16746;
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
	return Global_1619421[iParam0 /*390*/].f_11.f_184;
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
		if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(iVar0)))
		{
			iVar2 = unk_0x0C36F33B3F746611(iVar0);
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0xBE369BE1BC57A796(), 1))
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
				iVar0 = Global_262145.f_15076;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15081);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15086);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15075;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15080);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15085);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15074;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15079);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15084);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15072;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15077);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15082);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15073;
				if (func_463(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15078);
				}
				if (func_463(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15083);
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
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_5, iParam2);
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_469()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_184;
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
		if (func_113(unk_0xBE369BE1BC57A796()))
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
			if (func_113(unk_0xBE369BE1BC57A796()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_489(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_173));
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
					iVar4 = Global_262145.f_14261;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13470));
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
				Global_2494199.f_4710.f_190 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xCF8627766CD5D4CE())
				{
					iVar8 = iVar7;
					if (unk_0x5877B93374C85567(iVar8))
					{
						iVar9 = unk_0xD878F413B7BB4895(iVar8);
						if (func_480(iVar9))
						{
							func_472(iVar9, 1, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_113(unk_0xBE369BE1BC57A796()))
		{
			func_471();
		}
	}
}

void func_471()
{
	int iVar0;
	
	iVar0 = Global_2524389[func_19()];
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
	
	Var0.f_0 = 487;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	if (iParam0 != func_60())
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			unk_0x504D0D40319365B7(1, &Var0, 5, func_451(iParam0));
		}
	}
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_479();
	iVar0 = func_477(iParam0, iVar0);
	iVar1 = Global_1619421[func_402() /*390*/].f_11.f_288;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13075));
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
	return Global_262145.f_13076;
}

int func_476()
{
	return Global_262145.f_14251;
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
	return Global_262145.f_14250;
}

var func_479()
{
	return Global_262145.f_11001;
}

int func_480(int iParam0)
{
	if (unk_0x7268A1112372AA44(iParam0))
	{
		if (iParam0 != unk_0xBE369BE1BC57A796())
		{
			if (func_71(iParam0, unk_0xBE369BE1BC57A796(), 0))
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
	
	iVar0 = Global_2524395[func_19()];
	iVar0++;
	func_379(3648, iVar0, -1, 1);
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2524398[func_19()];
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
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x94F17AB80A52E8BB((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x94F17AB80A52E8BB((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x94F17AB80A52E8BB((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x94F17AB80A52E8BB((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x94F17AB80A52E8BB((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x94F17AB80A52E8BB((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x94F17AB80A52E8BB((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x94F17AB80A52E8BB((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x94F17AB80A52E8BB((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x94F17AB80A52E8BB((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x94F17AB80A52E8BB((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x94F17AB80A52E8BB((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x94F17AB80A52E8BB((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x94F17AB80A52E8BB((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x94F17AB80A52E8BB((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x3141DFACC370CE7D(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14394;
			break;
		
		case 2:
			return Global_262145.f_14395;
			break;
		
		case 3:
			return Global_262145.f_14396;
			break;
		
		case 4:
			return Global_262145.f_14397;
			break;
		
		case 5:
			return Global_262145.f_14398;
			break;
		
		case 6:
			return Global_262145.f_14399;
			break;
		
		case 7:
			return Global_262145.f_14400;
			break;
		
		case 8:
			return Global_262145.f_14401;
			break;
		
		case 9:
			return Global_262145.f_14402;
			break;
		
		case 10:
			return Global_262145.f_14403;
			break;
		
		case 11:
			return Global_262145.f_14404;
			break;
		
		case 12:
			return Global_262145.f_14405;
			break;
		
		case 13:
			return Global_262145.f_14406;
			break;
		
		case 14:
			return Global_262145.f_14407;
			break;
		
		case 15:
			return Global_262145.f_14408;
			break;
		
		case 16:
			return Global_262145.f_14409;
			break;
		
		case 17:
			return Global_262145.f_14410;
			break;
		
		case 18:
			return Global_262145.f_14411;
			break;
		
		case 19:
			return Global_262145.f_14412;
			break;
		
		case 20:
			return Global_262145.f_14413;
			break;
		
		case 21:
			return Global_262145.f_14414;
			break;
		
		case 22:
			return Global_262145.f_14415;
			break;
		
		case 23:
			return Global_262145.f_14416;
			break;
		
		case 24:
			return Global_262145.f_14417;
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
		if (!unk_0xBF0855EEDDBBCBB7(iVar1, &iVar0, uVar2, 8, iParam2))
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
		iVar0 = ((iParam0 - 384) - unk_0x94F17AB80A52E8BB((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x94F17AB80A52E8BB((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x94F17AB80A52E8BB((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x94F17AB80A52E8BB((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x94F17AB80A52E8BB((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x94F17AB80A52E8BB((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x94F17AB80A52E8BB((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x94F17AB80A52E8BB((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x94F17AB80A52E8BB((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x94F17AB80A52E8BB((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x94F17AB80A52E8BB((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x94F17AB80A52E8BB((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x94F17AB80A52E8BB((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x94F17AB80A52E8BB((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x94F17AB80A52E8BB((iParam0 - 7641)) * 8) * 8;
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
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_488(int iParam0)
{
	if (iParam0 >= Global_262145.f_13448)
	{
		return Global_262145.f_13469;
	}
	else if (iParam0 >= Global_262145.f_13447)
	{
		return Global_262145.f_13468;
	}
	else if (iParam0 >= Global_262145.f_13446)
	{
		return Global_262145.f_13467;
	}
	else if (iParam0 >= Global_262145.f_13445)
	{
		return Global_262145.f_13466;
	}
	else if (iParam0 >= Global_262145.f_13444)
	{
		return Global_262145.f_13465;
	}
	else if (iParam0 >= Global_262145.f_13443)
	{
		return Global_262145.f_13464;
	}
	else if (iParam0 >= Global_262145.f_13442)
	{
		return Global_262145.f_13463;
	}
	else if (iParam0 >= Global_262145.f_13441)
	{
		return Global_262145.f_13462;
	}
	else if (iParam0 >= Global_262145.f_13440)
	{
		return Global_262145.f_13461;
	}
	else if (iParam0 >= Global_262145.f_13439)
	{
		return Global_262145.f_13460;
	}
	else if (iParam0 >= Global_262145.f_13438)
	{
		return Global_262145.f_13459;
	}
	else if (iParam0 >= Global_262145.f_13437)
	{
		return Global_262145.f_13458;
	}
	else if (iParam0 >= Global_262145.f_13436)
	{
		return Global_262145.f_13457;
	}
	else if (iParam0 >= Global_262145.f_13435)
	{
		return Global_262145.f_13456;
	}
	else if (iParam0 >= Global_262145.f_13434)
	{
		return Global_262145.f_13455;
	}
	else if (iParam0 >= Global_262145.f_13433)
	{
		return Global_262145.f_13454;
	}
	else if (iParam0 >= Global_262145.f_13432)
	{
		return Global_262145.f_13453;
	}
	else if (iParam0 >= Global_262145.f_13431)
	{
		return Global_262145.f_13452;
	}
	else if (iParam0 >= Global_262145.f_13430)
	{
		return Global_262145.f_13451;
	}
	else if (iParam0 >= Global_262145.f_13429)
	{
		return Global_262145.f_13450;
	}
	return Global_262145.f_13449;
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
				iVar0 = (iVar0 + func_494(unk_0x0E29C61F26D96FDB(1, 6)));
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
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
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
		return Global_262145.f_13648;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13646;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13650;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13644;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13642;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13652;
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
			if (Global_1764419[iVar0] == iParam1 && Global_1764426[iVar0] == iParam0)
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
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
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
	
	iVar0 = Global_2524386[func_19()];
	iVar0++;
	Global_2524386[func_19()] = iVar0;
	func_379(3647, iVar0, -1, 1);
}

void func_498()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2524383[func_19()];
	iVar1 = Global_2524392[func_19()];
	iVar0++;
	iVar1++;
	Global_2524383[func_19()] = iVar0;
	Global_2524392[func_19()] = iVar1;
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_102 = iVar1;
	func_379(3645, iVar0, -1, 1);
	func_379(3646, iVar1, -1, 1);
}

void func_499()
{
	if (func_505())
	{
		Global_2443905.f_3065.f_134 = 0;
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
	}
}

void func_500()
{
	if (func_505())
	{
		if (Global_2443905.f_3065.f_134 < 10)
		{
			Global_2443905.f_3065.f_134++;
			Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
		}
	}
}

void func_501()
{
	if (func_505())
	{
		if (Global_2443905.f_3065.f_134 > 0)
		{
			Global_2443905.f_3065.f_134 = (Global_2443905.f_3065.f_134 - 1);
			Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
		}
	}
}

int func_502(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_27;
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11126) * Global_262145.f_11131));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11076) * Global_262145.f_11081));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11103) * Global_262145.f_11107));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11120));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11138) * Global_262145.f_11143));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11300) * Global_262145.f_11301));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11306) * Global_262145.f_11307));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11304) * Global_262145.f_11305));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11298) * Global_262145.f_11299));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11302) * Global_262145.f_11303));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11296) * Global_262145.f_11297));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13171;
		
		case 172:
			return Global_262145.f_13187;
		
		case 173:
			return Global_262145.f_13130;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16400;
		
		case 180:
			return Global_262145.f_16276;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16284;
		
		case 185:
			return Global_262145.f_16293;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16488;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16505;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16353;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16536;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16414;
		
		case 205:
			return Global_262145.f_16523;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16381;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16518;
		
		case 211:
			return Global_262145.f_16482;
		
		case 214:
			return Global_262145.f_17022;
		
		case 215:
			return Global_262145.f_17032;
		
		case 216:
			return Global_262145.f_17042;
		
		case 217:
			return Global_262145.f_17051;
		
		case 218:
			return Global_262145.f_17060;
		
		case 219:
			return Global_262145.f_17076;
		
		default:
	}
	return 0;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11127) * Global_262145.f_11132));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11077) * Global_262145.f_11082));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11104) * Global_262145.f_11108));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11117) * Global_262145.f_11121));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11139) * Global_262145.f_11144));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11176) * Global_262145.f_11179));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11222) * Global_262145.f_11225));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11212) * Global_262145.f_11215));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11167) * Global_262145.f_11170));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11187) * Global_262145.f_11192));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11152) * Global_262145.f_11155));
		
		case 170:
			return Global_262145.f_13113;
		
		case 171:
			return Global_262145.f_13172;
		
		case 172:
			return Global_262145.f_13188;
		
		case 173:
			return Global_262145.f_13131;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15204;
		
		case 168:
			return Global_262145.f_15203;
		
		case 179:
			return Global_262145.f_16401;
		
		case 180:
			return Global_262145.f_16277;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16285;
		
		case 185:
			return Global_262145.f_16294;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16489;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16506;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16354;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16537;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16415;
		
		case 205:
			return Global_262145.f_16524;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16382;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16519;
		
		case 211:
			return Global_262145.f_16483;
		
		case 214:
			return Global_262145.f_17023;
		
		case 215:
			return Global_262145.f_17033;
		
		case 216:
			return Global_262145.f_17043;
		
		case 217:
			return Global_262145.f_17052;
		
		case 218:
			return Global_262145.f_17061;
		
		case 219:
			return Global_262145.f_17077;
		
		default:
	}
	return 0;
}

bool func_505()
{
	return func_113(unk_0xBE369BE1BC57A796());
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
			*uParam2 = Global_262145.f_11020;
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
		*uParam1 = (Global_262145.f_16254 / 100f);
		*uParam2 = (Global_262145.f_16254 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11019;
		*uParam2 = Global_262145.f_11018;
	}
	if (func_295(iParam0))
	{
		if (func_171(unk_0xBE369BE1BC57A796(), 1))
		{
			*uParam1 = (Global_262145.f_16253 / 100f);
			*uParam2 = (Global_262145.f_16253 / 100f);
		}
	}
	else if (func_171(unk_0xBE369BE1BC57A796(), 1))
	{
		*uParam1 = Global_262145.f_11017;
		*uParam2 = Global_262145.f_11016;
	}
	iVar0 = func_231();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0xBE369BE1BC57A796(), iVar0, 1))
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
	return (Local_99.f_115 * Global_262145.f_13146);
}

int func_509()
{
	return (Local_99.f_115 * Global_262145.f_13145);
}

void func_510(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_95(unk_0xBE369BE1BC57A796());
	if (func_295(iVar0))
	{
		Global_1763201.f_2 = func_524();
		Global_1763201.f_3 = func_523();
		Global_1763201.f_50 = iParam4;
		Global_1763201.f_51 = iParam5;
		Global_1763201.f_10 = unk_0x57E9911EC23E2C54();
		Global_1763201.f_20 = (Global_1763201.f_10 - Global_1763201.f_9);
		Global_1763201.f_12 = iParam1;
		Global_1763201.f_19 = func_517(iVar0, bParam0, func_522(bParam3));
		if (bParam0)
		{
			Global_1763201.f_11 = 1;
		}
		else
		{
			Global_1763201.f_11 = 0;
		}
		if ((func_114(unk_0xBE369BE1BC57A796()) || func_125(unk_0xBE369BE1BC57A796())) || func_133(unk_0xBE369BE1BC57A796()))
		{
			Global_1763201.f_8 = 1;
		}
		else
		{
			Global_1763201.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1763201.f_43 = 0;
			Global_1763201.f_45 = func_516(func_402(), iParam2);
			Global_1763201.f_47 = iParam7;
			Global_1763201.f_46 = iParam6;
			Global_1763201.f_52 = func_515(func_402(), iParam2);
		}
		func_513(iVar0);
	}
	else if (func_299(iVar0))
	{
		Global_1763254.f_2 = func_524();
		Global_1763254.f_3 = func_523();
		Global_1763254.f_10 = unk_0x57E9911EC23E2C54();
		Global_1763254.f_19 = (Global_1763254.f_10 - Global_1763254.f_9);
		Global_1763254.f_12 = iParam1;
		if (bParam0)
		{
			Global_1763254.f_11 = 1;
		}
		else
		{
			Global_1763254.f_11 = 0;
		}
		if ((func_114(unk_0xBE369BE1BC57A796()) || func_125(unk_0xBE369BE1BC57A796())) || func_133(unk_0xBE369BE1BC57A796()))
		{
			Global_1763254.f_8 = 1;
		}
		else
		{
			Global_1763254.f_8 = 0;
		}
		func_511(iVar0);
	}
	else
	{
		Global_1763183.f_6 = unk_0x57E9911EC23E2C54();
		if (bParam0)
		{
			Global_1763183.f_7 = 1;
		}
		else
		{
			Global_1763183.f_7 = 0;
		}
		Global_1763183.f_8 = iParam1;
		if (Global_1763183.f_4 == 0)
		{
			if ((func_114(unk_0xBE369BE1BC57A796()) || func_125(unk_0xBE369BE1BC57A796())) || func_133(unk_0xBE369BE1BC57A796()))
			{
				Global_1763183.f_4 = 1;
			}
		}
	}
}

void func_511(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x75B0AF9E8E322546(&Global_1763254);
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
	Global_1763254 = { Var0 };
	Global_1763254.f_24 = 0;
	Global_1763254.f_25 = 0;
	Global_1763254.f_17 = 0;
}

void func_513(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x5C026EC42879D295(&Global_1763201);
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
	Global_1763201 = { Var0 };
	Global_1763201.f_29 = 0;
	Global_1763201.f_30 = 0;
	Global_1763201.f_17 = 0;
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_2;
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
			iVar0 = Global_262145.f_15811;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15810;
		}
		else
		{
			iVar0 = Global_262145.f_15792;
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
			iVar0 = Global_262145.f_15791;
			iVar1 = 20;
		}
	}
	else if (func_295(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15811;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15810;
		}
		else
		{
			iVar0 = Global_262145.f_15792;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x809988B0EDD4A6E9(func_521(func_402()), func_520(func_402()), func_524(), func_523(), iVar1, iVar0);
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
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_329 = iVar0;
	func_380(3940, iVar0, -1, 1, 0);
}

void func_519(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	Global_1619421[iVar0 /*390*/].f_11.f_328 = (Global_1619421[iVar0 /*390*/].f_11.f_328 + iParam0);
	if (Global_1619421[iVar0 /*390*/].f_11.f_328 < -9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
	else if (Global_1619421[iVar0 /*390*/].f_11.f_328 > 9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
}

int func_520(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

int func_521(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

int func_522(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_114(unk_0xBE369BE1BC57A796()) || func_133(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	return 0;
}

int func_523()
{
	if (Global_1763183.f_3 != 0)
	{
		return Global_1763183.f_3;
	}
	return -1;
}

int func_524()
{
	if (Global_1763183.f_2 != 0)
	{
		return Global_1763183.f_2;
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
	unk_0xEB79FECD9022AAF0(&(Var0.f_67), 2);
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
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		uVar0 = func_367(&(Global_1619421[iParam0 /*390*/].f_11.f_97));
		return uVar0;
	}
	if (Global_1619421[iParam0 /*390*/].f_11.f_113 != Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_113)
	{
		uVar0 = func_368(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0xBE369BE1BC57A796(), 28)) || func_371(iParam0)) && !func_370(iParam0))
	{
		return func_368(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0xBE369BE1BC57A796())
		{
			if (!unk_0x8EA3D5407E9F4AF0() && !unk_0x65FCCBD8772098C3(0, -1, 1))
			{
				return func_368(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_367(&(Global_1619421[iVar1 /*390*/].f_11.f_97));
		if (unk_0x9C88EB7B70229335(uVar0))
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
	iVar0 = unk_0xBE369BE1BC57A796();
	if (func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar0 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
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
	func_534(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
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
		Global_1354542.f_1 = 1;
		func_532(7, iVar0);
		Global_1354542.f_4282[iVar0] = uParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = uParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = uParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_532(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_533(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

void func_534(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
		Global_1354542.f_1 = 1;
		func_532(6, iVar0);
		Global_1354542.f_3686[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_3686.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_3686.f_183[iVar0] = iParam3;
		Global_1354542.f_3686.f_172[iVar0] = iParam2;
		Global_1354542.f_3686.f_260[iVar0] = iParam4;
		Global_1354542.f_3686.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354542.f_3686.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354542.f_3686.f_443[iVar0] = iParam7;
		Global_1354542.f_3686.f_454[iVar0] = iParam8;
		Global_1354542.f_3686.f_497[iVar0] = iParam9;
		Global_1354542.f_3686.f_508[iVar0] = iParam10;
		Global_1354542.f_3686.f_205[iVar0] = iParam11;
		Global_1354542.f_3686.f_216[iVar0] = iParam12;
		Global_1354542.f_3686.f_227[iVar0] = iParam13;
		Global_1354542.f_3686.f_238[iVar0] = iParam14;
		Global_1354542.f_3686.f_249[iVar0] = iParam15;
		Global_1354542.f_3686.f_519[iVar0] = iParam16;
		Global_1354542.f_3686.f_530[iVar0] = iParam17;
		Global_1354542.f_3686.f_541[iVar0] = iParam18;
		Global_1354542.f_3686.f_552[iVar0] = iParam19;
		Global_1354542.f_3686.f_563[iVar0] = iParam20;
		Global_1354542.f_3686.f_574[iVar0] = iParam21;
		Global_1354542.f_3686.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_536())
		{
			Global_1354542.f_1004 = 1;
		}
		if (unk_0xEF4E5E47AF0D4480())
		{
			iVar2 = 0;
			unk_0xC00B89C485A069D9(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354542.f_1008 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354542.f_1007 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354542.f_1004 = 1;
			}
			if (func_535())
			{
				Global_1354542.f_1008 = 1;
			}
		}
	}
}

int func_535()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0xC00B89C485A069D9(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_536()
{
	if ((unk_0xB8EB22F9350F13DC() == 8 || unk_0xB8EB22F9350F13DC() == 9) || unk_0xB8EB22F9350F13DC() == 10)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	unk_0xE57F94EA937AAD99(8);
	unk_0xE57F94EA937AAD99(9);
	unk_0xE57F94EA937AAD99(6);
	unk_0xE57F94EA937AAD99(7);
	Global_2454054 = 1;
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
		if (func_733(unk_0xBE369BE1BC57A796(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_539()
{
	return unk_0x48B8265059381CD0(Global_2359301, 12);
}

void func_540(int iParam0)
{
	if (unk_0x48B8265059381CD0(iLocal_1421, 8))
	{
		func_541();
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_1421, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x5BE53482EFD49141("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xEB79FECD9022AAF0(&iLocal_1421, 15);
				unk_0xEB79FECD9022AAF0(&iLocal_1421, 9);
				unk_0x589451489CB70B8C("AllowScoreAndRadio", 1);
				unk_0x4CE603708D103834(0);
				unk_0x589451489CB70B8C("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_1421, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x48B8265059381CD0(iLocal_1421, 11))
			{
				if (unk_0x5823F1F25CE33C5D("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xEB79FECD9022AAF0(&iLocal_1421, 11);
				}
			}
			else
			{
				unk_0x48B8265059381CD0(iLocal_1421, 11);
				if (!unk_0x48B8265059381CD0(iLocal_1421, 14))
				{
					if (unk_0x5BE53482EFD49141("APT_COUNTDOWN_30S"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_1421, 14);
					}
				}
			}
			if (unk_0x48B8265059381CD0(iLocal_1421, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x48B8265059381CD0(iLocal_1421, 12))
					{
						unk_0x4CE603708D103834(1);
						unk_0x589451489CB70B8C("AllowScoreAndRadio", 0);
						unk_0xEB79FECD9022AAF0(&iLocal_1421, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x5BE53482EFD49141("APT_FADE_IN_RADIO"))
						{
							unk_0x01BF9836BF02F6C4("APT_COUNTDOWN_30S_KILL");
							unk_0x21E7933CCC7B3724(&iLocal_1421, 9);
						}
					}
				}
			}
		}
	}
}

void func_541()
{
	if (unk_0x48B8265059381CD0(iLocal_1421, 8))
	{
		if (unk_0x48B8265059381CD0(iLocal_1421, 9))
		{
			if (!unk_0x48B8265059381CD0(iLocal_1421, 10))
			{
				if (unk_0x48B8265059381CD0(iLocal_1421, 11))
				{
					if (!unk_0x48B8265059381CD0(iLocal_1421, 12))
					{
						unk_0x4CE603708D103834(1);
						unk_0x589451489CB70B8C("AllowScoreAndRadio", 0);
						unk_0x589451489CB70B8C("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0x48B8265059381CD0(iLocal_1421, 16))
				{
					if (unk_0x5BE53482EFD49141("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_1421, 16);
					}
				}
				if (unk_0x48B8265059381CD0(iLocal_1421, 16))
				{
					if (!unk_0x48B8265059381CD0(iLocal_1421, 13))
					{
						if (unk_0x5BE53482EFD49141("APT_FADE_IN_RADIO"))
						{
							unk_0xEB79FECD9022AAF0(&iLocal_1421, 13);
						}
					}
					if (unk_0x48B8265059381CD0(iLocal_1421, 13))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_1421, 10);
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
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0);
		}
		else
		{
			return unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), *uParam0);
		}
	}
	return unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0);
}

void func_544()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0xBE369BE1BC57A796();
	iVar18 = unk_0xCA1D9459B2CC7619();
	if (func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar18 = func_277();
		iVar17 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
	}
	iVar19 = func_124(iVar17);
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
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
	else if (!unk_0x48B8265059381CD0(Local_971[iVar18 /*14*/].f_1, 6))
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
					StringCopy(&Var1, func_528(unk_0x0C36F33B3F746611(Local_99.f_119)), 64);
					iVar0 = func_527(unk_0x0C36F33B3F746611(Local_99.f_119));
					func_545("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_561("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_528(unk_0x0C36F33B3F746611(Local_99.f_119)), 64);
				iVar0 = func_527(unk_0x0C36F33B3F746611(Local_99.f_119));
				func_545("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_545(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_546(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 16;
		Global_1312575.f_56 = iParam2;
	}
}

int func_546(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(sParam1))
	{
		return 0;
	}
	if (func_556(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_550();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0x6AF6B39BFDB53CB5(), 32);
	Global_1312575.f_9 = unk_0x765F5B806B517045(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_549();
	func_548(bParam2);
	func_547();
	return 1;
}

void func_547()
{
	unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 1);
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x21E7933CCC7B3724(&(Global_1312575.f_59), 0);
}

void func_549()
{
	Global_1312575.f_10 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 86400000);
	Global_1312575.f_11 = unk_0xCB150A8B81012128();
}

void func_550()
{
	func_552();
	func_551(0);
}

void func_551(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x63C468D583002D23();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0xCB150A8B81012128();
		Global_1312575.f_11 = unk_0xCB150A8B81012128();
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

void func_552()
{
	if (!func_555())
	{
	}
	if (func_554())
	{
		unk_0x97C3FF45B25050A7(&(Global_1312575.f_12));
		func_553();
		unk_0x8DC57A8DB7696F93();
	}
}

void func_553()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			unk_0x69967F83C1E636E2(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_554()
{
	if (Global_1312575 == 20)
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
	unk_0x5A99EA84320AB387(&(Global_1312575.f_12));
	func_553();
	return unk_0x2B886121A03F928A();
}

bool func_556(char* sParam0, char* sParam1)
{
	if (!func_554())
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam1))
	{
		return 0;
	}
	if (!unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam1) == unk_0x765F5B806B517045(&(Global_1312575.f_16));
}

void func_557(char* sParam0, bool bParam1)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return;
	}
	if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return;
	}
	if (func_558(sParam0))
	{
		return;
	}
	func_550();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x6AF6B39BFDB53CB5(), 32);
	Global_1312575.f_9 = unk_0x765F5B806B517045(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
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
	if (Global_1312575 == 11)
	{
		return func_559(uParam0);
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_12));
}

bool func_559(char* sParam0)
{
	if (!func_554())
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_16));
}

int func_560()
{
	return (4 - Local_99.f_115);
}

int func_561(char* sParam0)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	if (!func_554())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x761258E562C07369(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x761258E562C07369(sParam0) > 23)
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
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar1 = unk_0xBE369BE1BC57A796();
		iVar2 = unk_0xCA1D9459B2CC7619();
	}
	else
	{
		iVar2 = func_277();
		iVar1 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_1420, 1))
	{
		iVar0 = func_124(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_99.f_118 || func_652() == Local_99.f_118)
			{
				if (func_567(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_320(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0xCA1D9459B2CC7619())
					{
						func_566(1);
						func_563(-1, 0, 0, -1);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0xCA1D9459B2CC7619())
				{
					func_563(-1, 0, 0, -1);
				}
				func_320(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0xEB79FECD9022AAF0(&iLocal_1420, 1);
	}
}

void func_563(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_95(unk_0xBE369BE1BC57A796());
	if (iParam2 || func_295(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1763201 = iVar0;
		if (func_351(iVar0))
		{
			Global_1763201.f_1 = 4;
		}
		else if (func_350(iVar0))
		{
			Global_1763201.f_1 = 5;
		}
		else if (func_204(iVar0, 0))
		{
			Global_1763201.f_1 = 2;
			if (func_376(iVar0))
			{
				Global_1763201.f_1 = 3;
			}
		}
		else
		{
			Global_1763201.f_1 = 1;
		}
		if (func_402() != func_60())
		{
			Global_1763201.f_4 = func_521(func_402());
			Global_1763201.f_5 = func_520(func_402());
		}
		if (func_231() != func_60())
		{
			func_401(func_231(), &(Global_1763201.f_6), &(Global_1763201.f_7));
		}
		Global_1763201.f_9 = unk_0x57E9911EC23E2C54();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1763201.f_27 = 1;
			Global_1763201.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1763201.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1763201.f_40 = func_467(iParam1);
			Global_1763201.f_41 = func_565();
			Global_1763201.f_42 = func_468(unk_0xBE369BE1BC57A796(), iParam1);
			Global_1763201.f_44 = func_516(unk_0xBE369BE1BC57A796(), iParam1);
		}
	}
	else if (func_299(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1763254 = iVar0;
		Global_1763201.f_1 = 1;
		if (func_402() != func_60())
		{
			Global_1763254.f_4 = func_521(func_402());
			Global_1763254.f_5 = func_520(func_402());
		}
		if (func_231() != func_60())
		{
			func_401(func_231(), &(Global_1763254.f_6), &(Global_1763254.f_7));
		}
		Global_1763254.f_9 = unk_0x57E9911EC23E2C54();
		if (iParam0 != -1)
		{
			Global_1763254.f_21 = iParam0;
		}
	}
	else
	{
		if (func_402() != func_60())
		{
			Global_1763183 = func_521(func_402());
			Global_1763183.f_1 = func_520(func_402());
		}
		Global_1763183.f_5 = unk_0x57E9911EC23E2C54();
		Global_1763183.f_13 = func_564();
		Global_1763183.f_15 = 0;
		if (func_400(1))
		{
			if (func_231() == func_402())
			{
				Global_1763183.f_15 = 1;
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
		return Global_1619421[iVar0 /*390*/].f_11.f_91;
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
		if (func_465(unk_0xBE369BE1BC57A796(), iVar0))
		{
			unk_0xEB79FECD9022AAF0(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_566(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0xBE369BE1BC57A796(), 9))
		{
			if (func_124(unk_0xBE369BE1BC57A796()) != 0)
			{
				func_100(9);
			}
		}
	}
	else if (func_99(unk_0xBE369BE1BC57A796(), 9))
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
	
	unk_0x21E7933CCC7B3724(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xEB79FECD9022AAF0(&Global_2313, 1);
			unk_0xEB79FECD9022AAF0(&Global_2313, 7);
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
	if (unk_0x6A7B0D91FD88D9EE(sParam14, sParam15))
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
			{
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/]), sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x48B8265059381CD0(Global_2313, 10))
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x48B8265059381CD0(Global_2313, 10))
		{
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101700.f_13010[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101700.f_13010[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101700.f_13010[1 /*20*/].f_17 = 1;
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
				unk_0x4988C48537D1AE4F(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
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
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(uParam7))
	{
		func_152(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_152(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_152(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_152(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_152(iParam11);
	}
	unk_0x44983883E630A945();
}

bool func_571(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_572(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_573(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x0956E4296D9CC40A();
	uVar1 = unk_0x32883EAC7DC86C40();
	uVar2 = unk_0x80BC37C67CB292E5();
	uVar3 = unk_0x202B089E6328ABFA();
	uVar4 = unk_0xCD8338A83E1BCC14() + 1;
	uVar5 = unk_0x1BBFD9409EC2598C();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_575()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
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
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_576(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69702)
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
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_576(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
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
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_578()
{
	if (func_571(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_580()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_583(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_582(unk_0x17B5CC8A8615737D());
			if (func_581(iVar0) && (!func_571(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_581(Global_101700.f_2095.f_539.f_3549))
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

bool func_581(int iParam0)
{
	return iParam0 < 3;
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
	if (!unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == Global_1312575.f_9)
	{
		return;
	}
	func_550();
}

void func_585()
{
	if (func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	switch (Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_9)
	{
		case 0:
			func_587();
			func_288();
			if (Local_99.f_117 == 2)
			{
				Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_9 = 2;
			}
			else if (Local_99.f_117 == 3)
			{
				Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_9 = 3;
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
				Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_665();
			break;
	}
}

bool func_586()
{
	return ((unk_0x48B8265059381CD0(Local_99.f_1, 1) || unk_0x48B8265059381CD0(Local_99.f_1, 3)) || unk_0x48B8265059381CD0(Local_99.f_1, 5));
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
	if (!Global_262145.f_13138)
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
				Var1 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 0) };
				func_87(10, 0, 0, 0, 0);
				func_591(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				iLocal_1427 = iVar0;
				unk_0xEB79FECD9022AAF0(&iLocal_1420, 16);
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
	if (unk_0x1EFA84312BB8AA22(Global_2412536.f_6))
	{
		if (!Global_2412536.f_6 == unk_0xE9A5FDFDC239B2ED())
		{
			return;
		}
	}
	else
	{
		Global_2412536.f_6 = unk_0xE9A5FDFDC239B2ED();
	}
	Var0.f_6 = Global_2412536.f_6;
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
	if (func_592(unk_0xBE369BE1BC57A796()))
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
	Global_2412536 = { Var0 };
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
	if (Global_1312447 != 0)
	{
		return func_594(iParam0) != 0;
	}
	return func_256(iParam0, bParam1);
}

int func_594(int iParam0)
{
	if (func_733(iParam0, 0, 1))
	{
		return Global_2421664[iParam0 /*358*/].f_1;
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
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
				{
					if (!unk_0xEE1438344034E8AA())
					{
						iVar0 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
						switch (Local_99.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_13135)
								{
									unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), Global_262145.f_13135, 0);
									unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_13136)
								{
									unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), Global_262145.f_13136, 0);
									unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_13137)
								{
									unk_0x6751FA44D6CA586D(Global_262145.f_13137);
									unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), Global_262145.f_13137, 0);
									unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
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
			unk_0x2E2945F5602A744F(1);
		}
		return;
	}
	iVar0 = func_124(unk_0xBE369BE1BC57A796());
	if (iVar0 < 2)
	{
		if (func_605("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_1420, 2))
	{
		if (!func_604(86))
		{
			if (func_598(0, 1, 1, 1))
			{
				if (unk_0xCA1D9459B2CC7619() == Local_99.f_118)
				{
					func_597("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xEB79FECD9022AAF0(&iLocal_1420, 2);
				}
				else if (func_652() == Local_99.f_118)
				{
					func_597("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xEB79FECD9022AAF0(&iLocal_1420, 2);
				}
				else if (func_276())
				{
					func_597("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_297(1);
					unk_0xEB79FECD9022AAF0(&iLocal_1420, 2);
				}
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_1420, 2))
	{
		if (!unk_0x48B8265059381CD0(iLocal_1420, 3))
		{
			if (func_598(0, 1, 1, 1))
			{
				if (!func_605("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0xCA1D9459B2CC7619() == Local_99.f_118 || func_652() == Local_99.f_118)
					{
						func_298("HUNT_HELPB", -1);
						func_297(1);
						unk_0xEB79FECD9022AAF0(&iLocal_1420, 3);
					}
				}
			}
		}
	}
}

void func_597(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x252D021C9D92DBA9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x80A171A436807CA0(iParam2);
	}
	unk_0x34D84D73B5DF8E80(sParam1);
	unk_0x8B1500AADBA665BD(0, 0, 0, iParam3);
}

int func_598(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x9E123D5FF2973C60())
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (!unk_0x30F06AB0772AFB80())
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
		if (func_256(unk_0xBE369BE1BC57A796(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_602(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (func_601())
	{
		return 0;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
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
	if (Global_68131)
	{
		return 0;
	}
	if (Global_2502455)
	{
		return 0;
	}
	return 1;
}

bool func_599()
{
	return Global_2443134.f_570;
}

bool func_600()
{
	return Global_2443134.f_722;
}

bool func_601()
{
	return Global_2433125.f_2506.f_577;
}

int func_602(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_603()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

bool func_604(int iParam0)
{
	return Global_2433125.f_2199[0 /*76*/].f_1 == iParam0;
}

bool func_605(char* sParam0, char* sParam1)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	unk_0x34D84D73B5DF8E80(sParam1);
	return unk_0xCF2B4FB18449D099(0);
}

void func_606()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_134(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_117(unk_0xBE369BE1BC57A796()))
		{
			func_116();
		}
	}
}

void func_607()
{
	if (func_127())
	{
		if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1, 1))
		{
			func_102(0);
			unk_0x21E7933CCC7B3724(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_124(unk_0xBE369BE1BC57A796()) == 0)
	{
		return;
	}
	if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1, 1))
	{
		if (!func_651())
		{
			if (!func_126())
			{
				if (unk_0x48B8265059381CD0(Local_99.f_1, 6))
				{
					func_102(1);
					unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_1), 1);
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
		if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_2, iVar0))
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_110, iVar0))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							if (func_652() == Local_99.f_118)
							{
								if (func_626(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_3, iVar0))
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_112, iVar0))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
				{
					if (func_625(iVar0))
					{
						unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_4, iVar0))
		{
			if (!unk_0x48B8265059381CD0(Local_99.f_111, iVar0))
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_624(iVar0);
		if (func_342())
		{
			if (!unk_0xA3794949321E107C(uLocal_1435[iVar0]))
			{
				if (!func_586())
				{
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1435[iVar0] = unk_0xF1FE04D602EA392E(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1));
							if (func_652() == Local_99.f_118)
							{
								unk_0x84DAB725836026C6(uLocal_1435[iVar0], 12);
								unk_0xA0BCCD5C2B5FC84F(uLocal_1435[iVar0], 432);
								func_623(&(uLocal_1435[iVar0]), 6);
							}
							else
							{
								unk_0xA0BCCD5C2B5FC84F(uLocal_1435[iVar0], 480);
								func_623(&(uLocal_1435[iVar0]), 9);
							}
							unk_0x76C0584E1FF9B958(uLocal_1435[iVar0], 1);
							unk_0x9DD4955F28C1A885(uLocal_1435[iVar0], 7000);
							unk_0x00EA14207118EEE2(uLocal_1435[iVar0], 1.1f);
							unk_0xAAF15482D9DB27D9(uLocal_1435[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x020DF7300725ECAB(&(uLocal_1435[iVar0]));
				}
				else if (func_586())
				{
					unk_0x020DF7300725ECAB(&(uLocal_1435[iVar0]));
				}
			}
		}
		else if (unk_0xA3794949321E107C(uLocal_1435[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_1435[iVar0]));
		}
		func_622(iVar0);
		func_621(iVar0);
		func_619(iVar0);
		switch (Local_99.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x415DF132F15085E8())
				{
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x9178B6CFE95D27C6(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x415DF132F15085E8())
				{
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_99.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x7B816C72877502C5(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0x48B8265059381CD0(Local_99.f_108, iVar0))
										{
											unk_0x9178B6CFE95D27C6(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xC7C67E717B20DA89(Local_99.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0x48B8265059381CD0(Local_99.f_108, iVar0))
											{
												unk_0x21E7933CCC7B3724(&(Local_99.f_108), iVar0);
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
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x83150B7E65C16AFE(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x401B18D8E7BEEC86(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							if (unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_615(iVar0);
										if (!unk_0xCA41A00932714525(uVar2))
										{
											unk_0xCA58071CE9CCE891(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x0E21DA99F698AF06(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 0);
									unk_0x97B2F6B96CC03922(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x0E21DA99F698AF06(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xAA70EB198C6F2985(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_614(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0xA5D296AB6DFDEA70(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xDF7CE83326F434E9(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_99.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_617(Local_99.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xBD415ADB0A08F6EF(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xBD415ADB0A08F6EF(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x97B2F6B96CC03922(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x97B2F6B96CC03922(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0xD035C652F0986F10(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x1F8F07D86DA1A701(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_617(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x83150B7E65C16AFE(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		if (func_613())
		{
			Global_2433125 = unk_0xBE369BE1BC57A796();
		}
		if (bParam3)
		{
			func_612(unk_0xDE2767751C03729D(uParam0), uParam1, 1, Global_2433125, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_612(unk_0xDE2767751C03729D(uParam0), uParam1, -1, Global_2433125, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA3794949321E107C(*uParam1))
	{
		func_611(uParam1);
	}
}

void func_611(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
		bVar0 = true;
	}
	if (unk_0xA3794949321E107C(uParam0->f_1))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x23E9113C762466ED(uParam0->f_7))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_7))
		{
			if (unk_0x708B478711FA7649(uParam0->f_7))
			{
				unk_0x53D9FD8A3418C8E9(uParam0->f_7, 0);
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
		iParam3 = unk_0x592069F95C314814();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCA41A00932714525(uParam0))
	{
		if (!unk_0x708B478711FA7649(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x53D9FD8A3418C8E9(iParam0, 1);
			}
			else
			{
				unk_0x20DA9B5EBDD69183(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E0E4A8CBE4A8769(iParam0, iParam2);
			unk_0xC49F45795B7AFEEA(iParam0, fParam6);
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x8F033B85B9F09390(iParam0, iParam9);
		}
		unk_0xB9B7F383FB2453E6(iParam0, uParam4);
		unk_0xB04373FE92ECD69C(iParam0, uParam5);
		*uParam1 = unk_0x4DFA608A26DB4230(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xCC930AE12D020496(*uParam1, iParam8);
				}
				unk_0x457AECF7F7E33610("STRING");
				if (bParam10)
				{
					unk_0xBAB00B98D1E61BEE(uParam7);
				}
				else
				{
					unk_0x34D84D73B5DF8E80(uParam7);
				}
				unk_0xB58BBC88882D90A6(*uParam1);
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!unk_0x48B8265059381CD0(uParam1->f_6, 2))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!unk_0x9C88EB7B70229335(sParam7))
				{
					unk_0x457AECF7F7E33610("STRING");
					if (bParam10)
					{
						unk_0xBAB00B98D1E61BEE(sParam7);
					}
					else
					{
						unk_0x34D84D73B5DF8E80(sParam7);
					}
					unk_0xB58BBC88882D90A6(*uParam1);
				}
				unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uParam1->f_1 = unk_0x3329BF35D4BD3992(iParam0);
			if (!unk_0x48B8265059381CD0(uParam1->f_6, 3))
			{
				if (unk_0xA3794949321E107C(uParam1->f_1))
				{
					unk_0x84DAB725836026C6(uParam1->f_1, 7);
					unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA3794949321E107C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam1->f_6), 3);
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
	return Global_1315210;
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
	Var3 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar6)))
		{
			iVar7 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0xDF7CE83326F434E9(iVar7);
				if (iVar6 == Local_99.f_118 || Local_971[iVar6 /*14*/].f_10 == Local_99.f_118)
				{
					if (!unk_0xCA41A00932714525(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iVar8, 1), Var3);
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
		uVar0 = unk_0xDF7CE83326F434E9(iVar1);
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
	Var4 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar3)))
		{
			iVar7 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar3));
			uVar8 = unk_0xDF7CE83326F434E9(iVar7);
			if (func_171(iVar7, 1))
			{
				if (!unk_0x48B8265059381CD0(Local_971[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(Local_99.f_118)))
					{
						if (!unk_0xCA41A00932714525(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iVar8, 1), Var4);
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
	if (unk_0x1E76805ECF5AA8B0(uParam0))
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
	if (!unk_0x415DF132F15085E8())
	{
		return 0;
	}
	if (!unk_0x841F312D66362BF7(uParam0))
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
	if (func_124(unk_0xBE369BE1BC57A796()) < 1)
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
		unk_0xE3B46F8779F1AB2E(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xE3B46F8779F1AB2E(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0xD035C652F0986F10(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0x3B4F927A1836BD27(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0x60604E51E30D25B8(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 0);
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
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0x3B4F927A1836BD27(2, unk_0x57240623C1BC6E88(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
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
	if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0) };
	Var4 = { unk_0x57240623C1BC6E88(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar7]))
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
		unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_13), iParam0);
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
	if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_99.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0) };
	Var4 = { unk_0x57240623C1BC6E88(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_652() == Local_99.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
						return;
					}
					if (func_626(uVar7))
					{
						unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_12), iParam0);
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
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		uVar0 = func_313(iParam1);
		unk_0xCC930AE12D020496(*uParam0, uVar0);
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
		if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0x093776FE2E6B4BAC(Local_99.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_99.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x13B7ACE69D27E3E4(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x4F34E573D7F5024B(Var5, &fVar1, 0))
							{
								if (unk_0xE851F22ED3518011((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_99.f_2[iParam0 /*26*/].f_1), 0);
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
	if (unk_0x841F312D66362BF7(Local_99.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_99.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x01F09F0D64EF3285(unk_0xC7C67E717B20DA89(Local_99.f_2[iParam0 /*26*/].f_2), 1, 40000))
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
	
	if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), uParam0))
	{
		return 1;
	}
	if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), uParam0))
	{
		return 1;
	}
	if (func_627())
	{
		if (unk_0x7940476800F126AE(unk_0xBE369BE1BC57A796(), &uVar0))
		{
			if (unk_0x80E9CA64E9C8E070(uVar0))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(iVar0);
				if (unk_0x23E9113C762466ED(uVar1))
				{
					if (!unk_0xA929B2923D14E2F8(iVar1, 0))
					{
						if (unk_0xFD0FE723227D5AB6(iVar1, 0))
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
	return Global_1574282;
}

void func_628()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_0 != 4)
	{
		iVar1 = unk_0x0C36F33B3F746611(iLocal_1423);
		if (unk_0x7268A1112372AA44(iVar1))
		{
			if (unk_0xD54DE3C9493BFEC2(iVar1))
			{
				if (!func_586())
				{
					if (!func_651())
					{
						if (func_276())
						{
							if (func_171(iVar1, 1))
							{
								iVar0 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(Local_99.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_8, iLocal_1423))
									{
										func_314(iVar1, 432, 1);
										func_309(iVar1, func_313(iLocal_1712), 1);
										unk_0xEB79FECD9022AAF0(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_8), iLocal_1423);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0x48B8265059381CD0(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_8, iLocal_1423))
			{
				func_314(iVar1, 432, 0);
				func_309(iVar1, func_313(iLocal_1712), 0);
				unk_0x21E7933CCC7B3724(&(Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_8), iLocal_1423);
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
	if (Global_2494199.f_4710.f_21)
	{
		Global_2494199.f_4710.f_21 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_231() == func_60() || !func_733(func_231(), 0, 1))
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
		if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 != func_60())
		{
			if (func_733(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55, 0, 1))
			{
				if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_23 == 4 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_631(func_95(unk_0xBE369BE1BC57A796())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_452(31);
				if (func_295(func_95(unk_0xBE369BE1BC57A796())))
				{
					func_452(81);
				}
				if (unk_0x7268A1112372AA44(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55))
				{
					Global_1618005 = func_325(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55, -2, 0, 0);
					if (!func_230(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55))
					{
						func_452(88);
					}
				}
				else
				{
					Global_1618005 = 1;
				}
				Global_1617989 = { Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_97 };
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
		if (unk_0x841F312D66362BF7(Local_99.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_99.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x841F312D66362BF7(Local_99.f_2[iVar1 /*26*/].f_3[iVar2]))
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
	
	bVar2 = (unk_0xCA1D9459B2CC7619() == Local_99.f_118 || func_652() == Local_99.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
			{
				unk_0x80011E0B47592D8A(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_1), unk_0xBE369BE1BC57A796(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0x80011E0B47592D8A(unk_0xDE2767751C03729D(Local_99.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0xBE369BE1BC57A796(), 0);
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
		iLocal_1712 = func_527(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(Local_99.f_118)));
	}
}

void func_635(float fParam0)
{
	float fVar0;
	
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_311())
	{
		return;
	}
	fVar0 = (Global_2494199.f_4705 - fParam0);
	if (unk_0x1EFA84312BB8AA22(Global_2494199.f_4706))
	{
		if (!Global_2494199.f_4706 == unk_0xE9A5FDFDC239B2ED() && unk_0xE851F22ED3518011(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2494199.f_4705 = fParam0;
	Global_2494199.f_4706 = unk_0xE9A5FDFDC239B2ED();
}

void func_636(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 != iParam0)
	{
		func_650(-1);
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 = iParam0;
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
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 1);
			}
		}
		if (!func_109(iParam0) || iParam3)
		{
			if (func_107(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x6751FA44D6CA586D(0);
				if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
				{
					unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
					unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
				}
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 0);
			}
			else if (unk_0x21B9C652ECEE5A6D() < 5)
			{
				unk_0x000E46314C3A507F(1f);
				unk_0x6751FA44D6CA586D(5);
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
			if ((unk_0x48B8265059381CD0(Global_2494199.f_4418, 1) || unk_0x48B8265059381CD0(Global_2494199.f_4418, 4)) || unk_0x48B8265059381CD0(Global_2494199.f_4418, 0))
			{
				func_452(6);
			}
			func_642();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xFCBD7340FBF1FE46(3, 0);
			unk_0xFCBD7340FBF1FE46(5, 0);
		}
		if (func_122(unk_0xBE369BE1BC57A796()) && func_114(unk_0xBE369BE1BC57A796()))
		{
			unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1), 8);
		}
		func_638();
		if (func_637(iParam0))
		{
			unk_0xFCBD7340FBF1FE46(3, 0);
			unk_0xFCBD7340FBF1FE46(5, 0);
			unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 6);
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
	iVar2 = func_61(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C36F33B3F746611(iVar0);
		if (unk_0x7268A1112372AA44(iVar1))
		{
			if (func_71(iVar1, iVar2, 1) || func_639(iVar1, unk_0xBE369BE1BC57A796()))
			{
				unk_0x7621385B3CA2BA0B(unk_0xBE369BE1BC57A796(), iVar1, uVar3);
				unk_0x7621385B3CA2BA0B(iVar1, unk_0xBE369BE1BC57A796(), uVar3);
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
		return Global_1619421[func_61(iParam0) /*390*/].f_11.f_323;
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
		if (func_733(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x48B8265059381CD0(Global_1619421[iVar1 /*390*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_642()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 1))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 1);
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 4))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 4);
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 6))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 6);
	}
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 0);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 2);
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_511 = 0;
	if (Global_2494199.f_4420 > 0)
	{
		unk_0x6751FA44D6CA586D(Global_2494199.f_4420);
	}
	Global_2494199.f_4419 = 0;
}

void func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_382(3763, -1, 0);
	iVar1 = func_644(iParam0);
	if (iVar1 != -1)
	{
		unk_0xEB79FECD9022AAF0(&iVar0, iVar1);
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
	
	iVar0 = unk_0xBE369BE1BC57A796();
	if (Global_1619421[iVar0 /*390*/].f_11.f_172 != iParam0)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_172 = iParam0;
	}
}

void func_646(int iParam0)
{
	if (Global_2494199.f_4710.f_149 != iParam0)
	{
		Global_2494199.f_4710.f_149 = iParam0;
	}
}

int func_647()
{
	return Global_2494199.f_4710.f_149;
}

void func_648(int iParam0)
{
	if (Global_2494199.f_4710.f_148 != iParam0)
	{
		Global_2494199.f_4710.f_148 = iParam0;
	}
}

int func_649()
{
	return Global_2494199.f_4710.f_148;
}

void func_650(int iParam0)
{
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_31 = iParam0;
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
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		iVar0 = unk_0xCA1D9459B2CC7619();
		iVar1 = unk_0xBE369BE1BC57A796();
	}
	else
	{
		iVar0 = func_277();
		iVar1 = Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_501;
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
			if (unk_0xD54DE3C9493BFEC2(iVar2))
			{
				Local_971[iVar0 /*14*/].f_10 = unk_0xB421DCBFBBE3286E(iVar2);
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
		if (!unk_0x841F312D66362BF7(Local_99.f_2[iVar0 /*26*/].f_1))
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
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_660())
	{
		return 1;
	}
	if (Global_2454747)
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
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_311() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_311()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_657()
{
	return Global_2443134.f_577;
}

int func_658(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_659()
{
	return Global_2452525;
}

bool func_660()
{
	return Global_2443134.f_572;
}

void func_661(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_662(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_733(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_663(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_663(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
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
	
	if (!func_17(unk_0xBE369BE1BC57A796(), 0))
	{
		if (!unk_0x48B8265059381CD0(iLocal_1420, 6))
		{
			if (unk_0x63C468D583002D23())
			{
				if (func_651() || func_276())
				{
					func_510(0, 4, 0, 0, -1, -1, -1, -1);
					unk_0xEB79FECD9022AAF0(&iLocal_1420, 6);
				}
			}
		}
		uVar0 = Local_99.f_115;
		uVar1 = Local_99.f_121;
		iVar2 = -1;
		if (unk_0x63C468D583002D23())
		{
			iVar2 = Local_971[unk_0xCA1D9459B2CC7619() /*14*/].f_11;
		}
		func_714(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x63C468D583002D23())
		{
			if (unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()) == iLocal_1425)
			{
				unk_0x3BB70315907D9456(unk_0x17B5CC8A8615737D(), iLocal_1426);
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_1420, 18))
	{
		func_319(1);
		unk_0x21E7933CCC7B3724(&iLocal_1420, 18);
	}
	func_713();
	if (Local_99.f_119 != -1)
	{
		if (unk_0x48B8265059381CD0(iLocal_1420, 5))
		{
			if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(Local_99.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x415DF132F15085E8())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0x48B8265059381CD0(Local_99.f_871, iVar3))
				{
					unk_0x571422CE42B47889(Local_99.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_1420, 17))
	{
		unk_0x6751FA44D6CA586D(iLocal_1714);
		unk_0x21E7933CCC7B3724(&iLocal_1420, 17);
	}
	func_316();
	unk_0xEB79FECD9022AAF0(&iLocal_1421, 8);
	func_541();
	unk_0x7FB3512FE15142C6(1);
	func_566(0);
	func_667(1, 0);
	unk_0x6751FA44D6CA586D(5);
	func_308();
	func_666();
}

void func_666()
{
	unk_0x921053BAF754303D();
}

void func_667(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1342917.f_1.f_108 != 0)
	{
		Global_1342917.f_1.f_108 = 0;
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 167 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 168)
	{
		func_711();
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 4);
	}
	if ((func_398() && iParam1 != 0) && Global_262145.f_15095)
	{
		if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 190 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 192)
		{
			func_692(unk_0xBE369BE1BC57A796(), iParam1, Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 192);
		}
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 164 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 208)
	{
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xFCBD7340FBF1FE46(5, 1);
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 != -1)
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 = -1;
		if (!unk_0x48B8265059381CD0(Global_1574371.f_1, 14) && !func_122(unk_0xBE369BE1BC57A796()))
		{
			func_102(0);
		}
	}
	else if (func_690(unk_0xBE369BE1BC57A796()) != -1)
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
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 0))
	{
		unk_0x000E46314C3A507F(1f);
		unk_0x6751FA44D6CA586D(5);
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 0);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 5))
	{
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 5);
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
	if (func_114(unk_0xBE369BE1BC57A796()))
	{
		func_566(0);
	}
	func_98(29);
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 = func_60();
	if (Global_2494199.f_4710.f_21 != 0)
	{
		Global_2494199.f_4710.f_21 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_122(unk_0xBE369BE1BC57A796()))
	{
		func_97();
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 1);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 6))
	{
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xFCBD7340FBF1FE46(5, 1);
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 6);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 7))
	{
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 7);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 8))
	{
		func_672("IMPEXP_SELFDES", 0);
		func_670("IMPEXP_SELFDES");
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 8);
	}
	func_668(iVar2, 0);
}

void func_668(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_1763174.f_3, 9))
		{
			unk_0x4A5D4AD0FE6ACF73(func_669(iParam0));
			unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 9);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_1763174.f_3, 9))
	{
		unk_0xB8CAC5F3774894A1(func_669(iParam0));
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 9);
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
		if (!unk_0xD3115E7F7876D6E6(&(Global_101700.f_13100[iVar0 /*104*/])))
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar0 /*104*/]), sParam0))
			{
				if (Global_101700.f_13100[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_578();
					Global_101700.f_13100[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_671(iVar0))
					{
					}
					else
					{
						Global_101700.f_13100[iVar0 /*104*/].f_24 = 0;
						Global_101700.f_13100[iVar0 /*104*/].f_28 = 0;
						Global_101700.f_13100[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x20F0B569F9F3A02A(Global_101700.f_13100[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_671(int iParam0)
{
	if ((Global_101700.f_13100[iParam0 /*104*/].f_99[0] == 1 || Global_101700.f_13100[iParam0 /*104*/].f_99[1] == 1) || Global_101700.f_13100[iParam0 /*104*/].f_99[2] == 1)
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
		if (!unk_0xD3115E7F7876D6E6(&(Global_101700.f_13100[iVar0 /*104*/])))
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar0 /*104*/]), sParam0))
			{
				if (Global_101700.f_13100[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_101700.f_13100[iVar0 /*104*/].f_24 = 1;
				if (Global_101700.f_13100[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_101700.f_13010[0 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_101700.f_13010[1 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_101700.f_13010[2 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_101700.f_13010[3 /*20*/].f_17 = 0;
					}
					Global_101700.f_13100[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_101700.f_13100[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_673()
{
	if (func_117(unk_0xBE369BE1BC57A796()))
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
			if (func_679(unk_0xBE369BE1BC57A796()) == unk_0xBE369BE1BC57A796())
			{
				Global_2482258.f_93[func_678(iParam0)] = 1;
			}
		}
		iVar0 = func_678(159);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(157);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(148);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(164);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(142);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(152);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(166);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(170);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(173);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(179);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(200);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(201);
		if (func_677(iVar0, Global_262145.f_11226, bParam1))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(182);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(183);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(185);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(186);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(180);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(195);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(197);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(198);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(207);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(208);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(209);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(214);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(215);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(216);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(217);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(218);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(219);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(220);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(221);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_677(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0xBE369BE1BC57A796(), 19) && !func_99(unk_0xBE369BE1BC57A796(), 20)) && !func_99(unk_0xBE369BE1BC57A796(), 9))
		{
			return 0;
		}
	}
	if (Global_2482258.f_93[iParam0] == 1 && func_8(&(Global_2482258[iParam0 /*2*/])))
	{
		if (func_543(&(Global_2482258[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2482258.f_93[iParam0] = 0;
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
	return Global_1619421[iParam0 /*390*/].f_11.f_34;
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
			Global_2482258.f_93[func_678(iParam0)] = 1;
		}
		iVar0 = func_678(155);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(163);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(160);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(153);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(162);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(154);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(171);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(172);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(199);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(194);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(193);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(210);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(205);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(189);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_678(211);
		if (func_677(iVar0, Global_262145.f_11227, 0))
		{
			func_145(&(Global_2482258[iVar0 /*2*/]));
			func_7(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_681(int iParam0)
{
	if (!func_28(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_228[iParam0 /*3*/], func_682(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_228[iParam0 /*3*/] = { func_682() };
	}
	if (!func_28(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_215[iParam0 /*3*/], func_682(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_215[iParam0 /*3*/] = { func_682() };
	}
}

Vector3 func_682()
{
	struct<3> Var0;
	
	return Var0;
}

void func_683(int iParam0)
{
	if (!func_28(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_143[iParam0 /*3*/], func_682(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_143[iParam0 /*3*/] = { func_682() };
	}
	if (!func_28(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_118[iParam0 /*3*/], func_682(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_118[iParam0 /*3*/] = { func_682() };
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
	if (unk_0x48B8265059381CD0(Global_1573332, 3))
	{
		unk_0x21E7933CCC7B3724(&Global_1573332, 3);
	}
}

void func_685(bool bParam0)
{
	if (bParam0)
	{
		if (!func_688(unk_0xBE369BE1BC57A796(), 14))
		{
			func_687(14);
		}
	}
	else if (func_688(unk_0xBE369BE1BC57A796(), 14))
	{
		func_686(14);
	}
}

void func_686(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_5), iParam0);
}

void func_687(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_5), iParam0);
}

bool func_688(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_5, iParam1);
}

void func_689(int iParam0)
{
	if (func_113(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0xBE369BE1BC57A796() != iParam0)
		{
			if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_323 != iParam0)
			{
				Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_323 = iParam0;
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
		return Global_1619421[iParam0 /*390*/].f_11.f_31;
	}
	return -1;
}

int func_691(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_31 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_692(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1) && func_710(iParam0, iParam1))
	{
		iVar0 = func_464(iParam0, iParam1);
		func_696(iVar0, bParam2);
		func_693(iVar0, 1);
	}
}

void func_693(int iParam0, int iParam1)
{
	func_694(func_695(iParam0), iParam1, -1, 1);
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_6 = iParam1;
}

int func_694(int iParam0, var uParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, uParam1, iVar1, iParam3);
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

void func_696(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_709(unk_0xBE369BE1BC57A796(), iParam0);
	if (!bParam1)
	{
		func_708(iParam0, 0);
	}
	if (bParam1)
	{
		iVar0 = Global_2482243[iParam0];
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_1764563 = -1;
		func_707(iParam0, 0);
	}
	else if (func_702(iParam0))
	{
		iVar0 = func_701(iVar2);
		iVar3 = func_516(unk_0xBE369BE1BC57A796(), iVar2);
		iVar4 = func_700(iVar2);
		iVar5 = func_701(iVar2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		func_708(iParam0, iVar0);
	}
	else
	{
		if (func_699(unk_0xBE369BE1BC57A796(), iVar2) > 0)
		{
			func_698(iParam0, (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2 - (func_700(iVar2) / 2)));
		}
		iVar0 = (func_701(iVar2) / func_699(unk_0xBE369BE1BC57A796(), iVar2) + 1);
	}
	if (!bVar1)
	{
	}
	func_697(unk_0xBE369BE1BC57A796(), iVar2, iVar0);
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

void func_698(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2)
	{
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2 = iParam1;
	}
}

int func_699(int iParam0, int iParam1)
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
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_700(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_467(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15066;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15071;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15065;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15070;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15064;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15069;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15062;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15067;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15063;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15068;
			}
			break;
	}
	return uVar0;
}

int func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_467(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15047;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15056);
			}
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15061);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15048;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15055);
			}
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15060);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15049;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15054);
			}
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15059);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15050;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15052);
			}
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15057);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15051;
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15053);
			}
			if (func_463(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15058);
			}
			break;
	}
	return iVar0;
}

bool func_702(int iParam0)
{
	return func_703(func_706(iParam0), -1, -1);
}

int func_703(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_705(iParam0, iParam1);
	uVar2 = func_704(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x083FFE917EBA1560(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_704(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_706(int iParam0)
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

void func_707(int iParam0, int iParam1)
{
	func_694(func_706(iParam0), iParam1, -1, 1);
}

void func_708(int iParam0, int iParam1)
{
	Global_2482243[iParam0] = iParam1;
}

int func_709(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_466(Global_1591201[iParam0 /*602*/].f_258.f_152[iParam1 /*11*/]))
	{
		uVar0 = Global_1591201[iParam0 /*602*/].f_258.f_152[iParam1 /*11*/];
	}
	return uVar0;
}

int func_710(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_465(iParam0, iParam1))
	{
		iVar0 = func_464(iParam0, iParam1);
		if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_4 > 0 && Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_711()
{
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 28);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 29);
	func_712(24);
}

void func_712(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

void func_713()
{
	unk_0x111E99E32A85B908(iLocal_1425);
}

void func_714(var uParam0, var uParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x6AF6B39BFDB53CB5();
	Var1.f_0 = Global_1763183;
	Var1.f_1 = Global_1763183.f_1;
	Var1.f_2 = Global_1763183.f_2;
	Var1.f_3 = Global_1763183.f_3;
	Var1.f_4 = Global_1763183.f_4;
	Var1.f_5 = Global_1763183.f_5;
	Var1.f_6 = Global_1763183.f_6;
	Var1.f_7 = Global_1763183.f_7;
	Var1.f_8 = Global_1763183.f_8;
	Var1.f_9 = Global_1763183.f_9;
	Var1.f_10 = Global_1763183.f_10;
	Var1.f_11 = Global_1763183.f_11;
	Var1.f_12 = Global_1763183.f_12;
	Var1.f_13 = Global_1763183.f_14;
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1763183.f_15;
			Var15.f_15 = Global_1763183.f_16;
			Var15.f_16 = Global_1763183.f_17;
			unk_0xCA09F3B5196EEBF4(&Var15);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1763183.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xF93B0EEF06556607(&Var32);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1763183.f_15;
			Var49.f_15 = uParam0;
			unk_0x23DF6C5DD10D1DB8(&Var49);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1763183.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x1E61E15D6754D09D(&Var65);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1763183.f_15;
			Var82.f_15 = uParam0;
			unk_0x5434EB23804233CF(&Var82);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1763183.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0xEA355406E8089623(&Var98);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1763183.f_15;
			unk_0xCE9166AA95B60633(&Var116);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1763183.f_15;
			unk_0x0A36ABA3A50F7868(&Var134);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1763183.f_15;
			unk_0xA1072E4C0F8569F5(&Var153);
		}
	}
	func_715();
}

void func_715()
{
	struct<18> Var0;
	
	Global_1763183 = { Var0 };
}

void func_716(struct<20> Param0)
{
	func_731(func_732(Param0.f_0), Param0);
	unk_0x06EC4FFE0DCCA716(16);
	unk_0x43FD798CD0523B1F(8);
	func_730(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_99, 872);
	unk_0x0C3BA36587E6FBEE(&Local_971, 449);
	if (!func_729())
	{
		func_665();
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		if (unk_0x415DF132F15085E8())
		{
		}
		func_726();
		func_717(0, 0);
		Local_971[unk_0xCA1D9459B2CC7619() /*14*/] = 0;
	}
	else
	{
		func_665();
	}
}

void func_717(int iParam0, int iParam1)
{
	func_725();
	func_721(1);
	if ((iParam0 != 0 && unk_0x7268A1112372AA44(iParam1)) && func_720(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xEB79FECD9022AAF0(&Global_1763169, 0);
				break;
			}
	}
	if (!func_505() && !func_171(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_130())
		{
			func_101(3);
		}
		func_101(4);
	}
	if (func_400(0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 = func_402();
	}
	if (func_295(iParam0))
	{
		func_514();
		Global_1763201.f_18 = func_719(func_231());
	}
	else if (func_299(func_690(unk_0xBE369BE1BC57A796())))
	{
		func_512();
		Global_1763254.f_18 = func_719(func_231());
	}
	func_718();
}

void func_718()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1342917.f_527[iVar0 /*49*/].f_1 = func_60();
		Global_1342917.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_719(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_290;
	}
	return -1;
}

int func_720(int iParam0, bool bParam1)
{
	return func_71(unk_0xBE369BE1BC57A796(), iParam0, bParam1);
}

void func_721(bool bParam0)
{
	int iVar0;
	
	func_712(33);
	func_712(34);
	func_712(35);
	func_712(36);
	func_712(37);
	func_712(38);
	func_712(39);
	func_712(40);
	func_712(43);
	func_712(41);
	func_712(54);
	func_712(42);
	func_712(47);
	func_724(23);
	func_724(24);
	func_712(92);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 2);
	func_723();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494199.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_722(3))
	{
		func_724(3);
	}
	else if (func_722(4))
	{
		func_724(4);
	}
	else if (func_722(5))
	{
		func_724(5);
	}
	else if (func_722(6))
	{
		func_724(6);
	}
	else if (func_722(7))
	{
		func_724(7);
	}
	else if (((((((((((((((((func_722(0) || func_722(1)) || func_722(2)) || func_722(8)) || func_722(9)) || func_722(10)) || func_722(11)) || func_722(12)) || func_722(13)) || func_722(14)) || func_722(15)) || func_722(16)) || func_722(17)) || func_722(18)) || func_722(19)) || func_722(20)) || func_722(21)) || func_722(22))
	{
		func_724(8);
		func_724(0);
		func_724(1);
		func_724(2);
		func_724(9);
		func_724(10);
		func_724(11);
		func_724(12);
		func_724(13);
		func_724(14);
		func_724(15);
		func_724(16);
		func_724(17);
		func_724(18);
		func_724(19);
		func_724(20);
		func_724(21);
		func_724(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494199.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_12[iVar0], iVar1);
}

void func_723()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2494199.f_4710.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_12[iVar0]), iVar1);
}

void func_725()
{
	struct<14> Var0;
	
	Global_1763183 = { Var0 };
	Global_1763183.f_14 = 0;
	Global_1763183.f_15 = 0;
}

void func_726()
{
	int iVar0;
	int iVar1;
	
	unk_0x1EF7A8224AE81790("relHeadHunterPlayer", &iLocal_1425);
	iVar0 = unk_0x380FD986263724B3(unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0xDE574EA7A7A2CAF8(5, Global_1574687[iVar1], iLocal_1425);
		unk_0xDE574EA7A7A2CAF8(5, iLocal_1425, Global_1574687[iVar1]);
		unk_0xDE574EA7A7A2CAF8(1, Global_1574687[iVar1], Global_1574729);
		unk_0xDE574EA7A7A2CAF8(1, Global_1574729, Global_1574687[iVar1]);
		unk_0xDE574EA7A7A2CAF8(iVar0, iLocal_1425, joaat("COP"));
		unk_0xDE574EA7A7A2CAF8(iVar0, joaat("COP"), iLocal_1425);
		unk_0xDE574EA7A7A2CAF8(1, iLocal_1425, Global_1574731[5]);
		unk_0xDE574EA7A7A2CAF8(1, Global_1574731[5], iLocal_1425);
		unk_0xDE574EA7A7A2CAF8(1, iLocal_1425, Global_1574720);
		unk_0xDE574EA7A7A2CAF8(1, Global_1574720, iLocal_1425);
		iVar1++;
	}
	unk_0xDE574EA7A7A2CAF8(5, iLocal_1425, Global_1574729);
	unk_0xDE574EA7A7A2CAF8(5, Global_1574729, iLocal_1425);
	unk_0xDE574EA7A7A2CAF8(1, 2017343592, Global_1574729);
	unk_0xDE574EA7A7A2CAF8(5, 2017343592, iLocal_1425);
	func_728(1, &Global_1574729);
	func_727(&Global_1574729);
	func_727(&iLocal_1425);
}

void func_727(int iParam0)
{
	unk_0xDE574EA7A7A2CAF8(1, -1865950624, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, -1865950624);
	unk_0xDE574EA7A7A2CAF8(1, 296331235, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, 296331235);
	unk_0xDE574EA7A7A2CAF8(1, 1166638144, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, 1166638144);
	unk_0xDE574EA7A7A2CAF8(1, 2037579709, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, 2037579709);
	unk_0xDE574EA7A7A2CAF8(1, 2017343592, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, 2017343592);
	unk_0xDE574EA7A7A2CAF8(1, -1821475077, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, -1821475077);
	unk_0xDE574EA7A7A2CAF8(1, 1782292358, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, 1782292358);
	unk_0xDE574EA7A7A2CAF8(1, -1033021910, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, -1033021910);
	unk_0xDE574EA7A7A2CAF8(1, -1285976420, *iParam0);
	unk_0xDE574EA7A7A2CAF8(1, *iParam0, -1285976420);
}

void func_728(int iParam0, var uParam1)
{
	unk_0xDE574EA7A7A2CAF8(iParam0, joaat("COP"), *uParam1);
	unk_0xDE574EA7A7A2CAF8(iParam0, *uParam1, joaat("COP"));
	unk_0xDE574EA7A7A2CAF8(iParam0, joaat("army"), *uParam1);
	unk_0xDE574EA7A7A2CAF8(iParam0, *uParam1, joaat("army"));
	unk_0xDE574EA7A7A2CAF8(iParam0, -183807561, *uParam1);
	unk_0xDE574EA7A7A2CAF8(iParam0, *uParam1, -183807561);
}

int func_729()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
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

int func_730(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
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
				if (!unk_0x63C468D583002D23())
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
			else if (!unk_0x9AD8CE0019487D7C())
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
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
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
	else if (!unk_0x9AD8CE0019487D7C())
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

void func_731(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_666();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_732(int iParam0)
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

int func_733(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

