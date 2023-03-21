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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<872> Local_112 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_984[32];
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	int iLocal_1439 = 0;
	int iLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448[4] = { 0, 0, 0, 0 };
	struct<8> Local_1453[30];
	var uLocal_1694[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1725 = 0;
	var uLocal_1726 = 0;
	int iLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
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
	iLocal_110 = -1;
	iLocal_111 = -1;
	iLocal_1440 = -1;
	if (unk_0x393E9918BC37548A() && func_1000(unk_0x7C7787D2D7139A85(), 0, 1))
	{
		func_950(ScriptParam_0);
	}
	else
	{
		func_902();
	}
	while (true)
	{
		func_901();
		if (func_893())
		{
			func_902();
		}
		Global_1674861.f_2 = Local_112.f_863;
		Global_1674861.f_3 = Local_112.f_864;
		switch (func_892(unk_0x2E40EEA43EF34BD6()))
		{
			case 0:
				if (func_891() == 1)
				{
					if (func_890())
					{
						func_889();
						if (func_888())
						{
							func_873(166, 1, -1, 0);
							unk_0x60F310C72311BCA8(3);
							func_872(0f);
							iLocal_1439 = unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203());
							unk_0xDB889DCC8B0139E6(unk_0x0FA8183DAD2B3203(), iLocal_1438);
						}
						else
						{
							func_873(166, 0, -1, 0);
						}
						func_871();
						func_870();
						func_869();
						Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 1;
					}
				}
				else if (func_891() == 4)
				{
					Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_865(1))
				{
					Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 2;
				}
				if (func_891() == 1)
				{
					func_864();
					func_844();
					func_821();
					func_310();
					func_301();
					if (func_888() || func_299())
					{
						func_151(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_891() == 4)
				{
					Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_112.f_845));
				if (func_72(&(Local_112.f_845)))
				{
					Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 4;
			
			case 4:
				func_902();
				break;
		}
		if (unk_0x722688699565161D())
		{
			switch (func_891())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						unk_0x3B462AFBC888A3F1(&(Local_112.f_863), &(Local_112.f_864));
						Local_112.f_0 = 1;
						Local_112.f_118 = unk_0x2E40EEA43EF34BD6();
						Local_112.f_119 = unk_0x7C7787D2D7139A85();
						func_873(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_112.f_0 = 4;
					}
					else if (func_1())
					{
						Local_112.f_0 = 4;
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
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
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
	if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 2))
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
	switch (Local_112.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 1))
			{
				Local_112.f_117 = 2;
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 3))
			{
				Local_112.f_117 = 2;
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
	if (!unk_0xA2BC31158C8CEFD2(Local_112.f_1, 6))
	{
		if (!func_8(&(Local_112.f_849)))
		{
			func_7(&(Local_112.f_849), 0, 0);
		}
		else if (func_6(&(Local_112.f_849), 500, 0))
		{
			unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 6);
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
	if (unk_0x393E9918BC37548A() && !bParam2)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
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
	if (!func_8(&(Local_112.f_847)))
	{
		func_7(&(Local_112.f_847), 0, 0);
	}
	else if (func_6(&(Local_112.f_847), func_10(), 0))
	{
		unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_15002;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x722688699565161D())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_112.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_112.f_2[iVar0 /*26*/] == 1)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x7E6F0519746C2295(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xA2BC31158C8CEFD2(Local_112.f_109, iVar0))
										{
											unk_0xA1E7A40E1F56E511(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xA2BC31158C8CEFD2(Local_112.f_110, iVar0))
										{
											unk_0xA1E7A40E1F56E511(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xA2BC31158C8CEFD2(Local_112.f_111, iVar0))
										{
											unk_0xA1E7A40E1F56E511(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xA2BC31158C8CEFD2(Local_112.f_112, iVar0))
										{
											Local_112.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_112.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xA2DB82364F08360E(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1)))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xA2BC31158C8CEFD2(Local_112.f_112, iVar0))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x5294582CE404D3F4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xA2BC31158C8CEFD2(Local_112.f_110, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xA2BC31158C8CEFD2(Local_112.f_111, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_24)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_25)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 6;
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
				switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/] == 0)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_112.f_2[iVar0 /*26*/] == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_24)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x5294582CE404D3F4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
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
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return !func_13(unk_0x40237B62400B4BCC(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (unk_0xF4B969E0807E76C7(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD960230552BC4165(iParam0, 0))
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
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return unk_0x2BF5E63466422C38(unk_0x70D3AC024E0A9837(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xA1E7A40E1F56E511(&(Local_112.f_116), iVar0);
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
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
		{
			iVar1 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xAA9D9C46E4C1FFE1(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
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
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	if (Local_112.f_0 != 4)
	{
		iLocal_1435 = 0;
		while (iLocal_1435 < unk_0xACF7D965CEBE5714())
		{
			if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iLocal_1435)))
			{
				iVar3 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iLocal_1435));
				if (!func_17(iVar3, 0))
				{
					if (func_1000(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1435);
					func_23(iLocal_1435);
					if (!unk_0xA2BC31158C8CEFD2(Local_112.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xA2BC31158C8CEFD2(Local_112.f_1, 1) || unk_0xA2BC31158C8CEFD2(Local_112.f_1, 3)) || unk_0xA2BC31158C8CEFD2(Local_112.f_1, 5))
							{
								if (!unk_0xA2BC31158C8CEFD2(Local_984[iLocal_1435 /*14*/].f_1, 4))
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
			else if (!unk_0xA2BC31158C8CEFD2(Local_112.f_1, 5))
			{
				if (Local_112.f_118 > -1)
				{
					if (iLocal_1435 == Local_112.f_118)
					{
						unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 5);
					}
				}
			}
			iLocal_1435++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xA2BC31158C8CEFD2(Local_112.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_112.f_115 != iVar0)
		{
			Local_112.f_115 = iVar0;
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 1);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 2);
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
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_113, iVar0))
			{
				if (!func_8(&(Local_112.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_112.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_112.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xA1E7A40E1F56E511(&(Local_112.f_113), iVar0);
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
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_109, iVar0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_109), iVar0);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_110, iVar0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_110), iVar0);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_112, iVar0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_112), iVar0);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_111, iVar0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_111), iVar0);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_112.f_113, iVar0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_113), iVar0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_113), iVar0);
			}
		}
		if (Local_112.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_112.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_12, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_112.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xA2BC31158C8CEFD2(Local_984[iParam0 /*14*/].f_13, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(Local_112.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xAA9D9C46E4C1FFE1(unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2), unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iParam0)), 1);
							unk_0xA1E7A40E1F56E511(&(Local_112.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(Local_112.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
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
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
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
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
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
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_112.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_112.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x987DF1B2025CC706(1))
				{
					if (func_33(iVar2))
					{
						if (!unk_0xA2BC31158C8CEFD2(Local_112.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0xB82DC93528F8603C(Var3, 10f, 1, 0, 0, 1);
							unk_0xA1E7A40E1F56E511(&(Local_112.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x160E0EFE160BD50D(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0xF95C3459EF1A6ECB(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1438);
							unk_0x0051275ADD67B49D(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0xB6F71CE300A5E3B4(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
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
	int iVar1;
	
	if (!unk_0xCBBFE6965951B21E(iParam1))
	{
		return 0;
	}
	if (!unk_0x987DF1B2025CC706(1))
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
		unk_0x7FB505C34A14BAAA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x847817A65E16621A(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xD4B321D9096B01FC(iVar1))
	{
		*uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (unk_0x9C625F4590C97F13(*uParam0))
		{
			if (bParam15)
			{
				unk_0x18620062E6D68D6E(iVar1, 1);
			}
			unk_0x9D3FE4786B8925D2(iVar1, iParam10);
			if (unk_0x457EF27DC4F63820(iVar1))
			{
				if (bParam8)
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 1);
				}
				else
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
				}
			}
			unk_0xEF5C4BC935BFF76E(iVar1, iParam9);
			unk_0x98E94863AB8F55F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x58DFD2EDF224315F(iVar1);
				unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
			}
			func_31(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_32(unk_0x7C7787D2D7139A85(), Param0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405071.f_2910[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { Param0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
	}
}

int func_32(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x01CBD71E072E9F33((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6BB2B1818CAE531E(iParam0);
	return unk_0x6DF9C43E3CC645BC(iParam0);
}

bool func_34(int iParam0)
{
	int iVar0;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_112.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_112.f_2[iParam0 /*26*/];
	iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_112.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0xEA2FCC46B8870EF9(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0xB0675208A25FD4B5(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xD35ECDBE422E2361(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575009);
											unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1438);
											unk_0x57B477AB6783471C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xC167C31F20B1FD61(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0xEA2FCC46B8870EF9(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_112.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0xB0675208A25FD4B5(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xD35ECDBE422E2361(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575009);
										unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1438);
										unk_0xC167C31F20B1FD61(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x372133FEEA436533(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0x81A9CCDE091AC75C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0xB9B72194C00AE3EB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x4CACF0684628528E(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_40();
										unk_0x0618833C3726B3E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x0BBBAC4546BFE280(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										uVar4 = func_39();
										unk_0xA3A80E8605D69DFD(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0x160AF5DE0B0878EE(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										unk_0x40162A4E6C7B29D7(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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

int func_38()
{
	return unk_0xF2DB717A73826179(Global_262145.f_15010);
}

int func_39()
{
	return 200;
}

var func_40()
{
	return Global_262145.f_15009;
}

int func_41(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xEA2FCC46B8870EF9(1))
	{
		return 0;
	}
	iVar0 = unk_0xB983F26E7AFB47BF(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x62F4D4DB24880CA5(iVar0);
	if (unk_0x9C625F4590C97F13(*uParam0))
	{
		unk_0x9D3FE4786B8925D2(iVar0, iParam9);
		if (unk_0x457EF27DC4F63820(iVar0))
		{
			if (bParam7)
			{
				unk_0x9E11C6A0FFF1E999(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xEA2FCC46B8870EF9(1))
	{
		return 0;
	}
	if (!unk_0x9C625F4590C97F13(uParam1))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x62F4D4DB24880CA5(unk_0x81024A420EDCE2B5(unk_0x40237B62400B4BCC(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x9C625F4590C97F13(*uParam0))
	{
		unk_0x9D3FE4786B8925D2(unk_0x70D3AC024E0A9837(*uParam0), iParam7);
		if (unk_0x457EF27DC4F63820(unk_0x70D3AC024E0A9837(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9E11C6A0FFF1E999(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		unk_0x4DB32D0662E0696B(uParam0);
		return unk_0xF42AC9E0924DC59B(uParam0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (Local_112.f_2[iParam0 /*26*/] == 0 || Local_112.f_2[iParam0 /*26*/] == 2);
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)
{
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_112.f_2[iParam0 /*26*/].f_11;
				if (unk_0x987DF1B2025CC706(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_2), iVar0, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0xF95C3459EF1A6ECB(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x160E0EFE160BD50D(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xB90231068DCFFBA1(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_2), 1, iLocal_1438);
								unk_0x3E26E6ECFA8CB038(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x0051275ADD67B49D(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0xDA778D908FD69EEE(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1, 1);
								unk_0x704613B55607A27B(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x0EB8E32DE5C90C14(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xB6F71CE300A5E3B4(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x519CCD4366BAFEA7(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0xEA2FCC46B8870EF9(1))
					{
						iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0xB0675208A25FD4B5(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD35ECDBE422E2361(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								unk_0x57B477AB6783471C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xA1E7A40E1F56E511(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xEA2FCC46B8870EF9(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xB0675208A25FD4B5(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD35ECDBE422E2361(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								unk_0x57B477AB6783471C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xA1E7A40E1F56E511(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xEA2FCC46B8870EF9(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_112.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_53(Var2);
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xB0675208A25FD4B5(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD35ECDBE422E2361(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								unk_0x3D63953EC92297FB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								unk_0x57B477AB6783471C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x372133FEEA436533(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0x81A9CCDE091AC75C(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0xB9B72194C00AE3EB(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xC167C31F20B1FD61(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_52(iParam0);
								unk_0x4CACF0684628528E(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0x1DB66BD2267055C0(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_51();
								unk_0x0618833C3726B3E6(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0x0BBBAC4546BFE280(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), iVar7, 0);
								uVar8 = func_50();
								unk_0xA3A80E8605D69DFD(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0x160AF5DE0B0878EE(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), func_49());
								unk_0xDA778D908FD69EEE(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1, 1);
								unk_0xA1E7A40E1F56E511(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()
{
	return unk_0xF2DB717A73826179(Global_262145.f_15008);
}

int func_50()
{
	return 100;
}

var func_51()
{
	return Global_262145.f_15007;
}

float func_52(int iParam0)
{
	if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_871, iVar1))
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
		Local_112.f_865[iVar0] = unk_0x740FE9B7B3FE1CE5(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xA1E7A40E1F56E511(&(Local_112.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_112.f_865[iVar0] = unk_0x740FE9B7B3FE1CE5(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xA1E7A40E1F56E511(&(Local_112.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_112.f_865[iVar0] = unk_0x740FE9B7B3FE1CE5(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xA1E7A40E1F56E511(&(Local_112.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0xBAC643F143880136(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0xBAC643F143880136(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0xBAC643F143880136(0, 10);
			if (!func_28(Local_112.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_484[iVar0 /*36*/] };
					*uParam2 = Local_112.f_484[iVar0 /*36*/].f_3;
					Local_112.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xF57CE8FF35DF4458(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x20DAA923606B772E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x20DAA923606B772E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x20E117647697470E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (unk_0x44C423C5FBCB538D(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1000(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (!unk_0x260395BA7F0C83CB())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xD34AF93E9BCF12F0(func_58(unk_0x7C7787D2D7139A85()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x93086679C0E859D8(Param0, fParam3))
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
		if (func_1000(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xD34AF93E9BCF12F0(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam8 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
						{
							if (unk_0xD34AF93E9BCF12F0(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
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

int func_57(int iParam0)
{
	if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590446[iVar0 /*871*/].f_842) && !func_60(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_60(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2448961.f_17;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam8 == 0)
		{
			if (func_1000(iVar1, bParam4, bParam5))
			{
				if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
				{
					if (!bParam7 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
						{
							if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
							{
								if (unk_0xD34AF93E9BCF12F0(func_59(iVar1), Param0, 1) < fParam3)
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

int func_63(int iParam0)
{
	if (func_68(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_67(iParam0) };
	if (unk_0xB8A6A83E8C303720(&Global_2507671))
	{
		return 1;
	}
	if (func_64(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)
{
	if (unk_0xFF6895C150414C31())
	{
		Global_2507671 = { func_67(iParam0) };
		Global_2507684 = { func_67(iParam1) };
		if (unk_0xF10E9BDC0C546560(&Global_2507671))
		{
			if (unk_0xF10E9BDC0C546560(&Global_2507684))
			{
				unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671);
				unk_0x4065D3D900AB253F(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()
{
	Local_112.f_2[0 /*26*/] = 2;
	Local_112.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_112.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[1 /*26*/] = 2;
	Local_112.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_112.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[2 /*26*/] = 0;
	Local_112.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_112.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[3 /*26*/] = 0;
	Local_112.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_112.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()
{
	func_71();
	if (Local_112.f_122 == 0)
	{
		if (Local_112.f_121 == 0)
		{
			Local_112.f_122 = 10;
		}
		else
		{
			Local_112.f_122 = 9;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 4))
	{
		return;
	}
	switch (Local_112.f_121)
	{
		case 0:
			Local_112.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_112.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_112.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_112.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_112.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_112.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_112.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_112.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_112.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_112.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_112.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_112.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_112.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_112.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_112.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_112.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_112.f_123[6 /*36*/].f_14[2] = 180f;
			Local_112.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_112.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_112.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_112.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_112.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_112.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_112.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_112.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_112.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_112.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_112.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_112.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_112.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_112.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_112.f_484[0 /*36*/].f_3 = 179.583f;
			Local_112.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_112.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_112.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_112.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_112.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_112.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_112.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_112.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_112.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_112.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_112.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_112.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_112.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_112.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_112.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_112.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_112.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_112.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_112.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_112.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_112.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_112.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_112.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_112.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_112.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_112.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_112.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_112.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_112.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_112.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_112.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_112.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_112.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_112.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_112.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_112.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_112.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_112.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_112.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_112.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_112.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_112.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_112.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_112.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_112.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_112.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_112.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_112.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_112.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_112.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_112.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_112.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_112.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_112.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_112.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_112.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_112.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_112.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_112.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_112.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_112.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xA1E7A40E1F56E511(&(Local_112.f_1), 4);
}

var func_71()
{
	if (Local_112.f_121 != -1)
	{
		return Local_112.f_121;
	}
	if (Local_112.f_121 == -1)
	{
		if (unk_0x99E463142E903D66(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0)) == joaat("City"))
		{
			Local_112.f_121 = 0;
		}
		else
		{
			Local_112.f_121 = 1;
		}
	}
	return Local_112.f_121;
}

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x722688699565161D())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()
{
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_119 != -1)
	{
		iVar0 = unk_0x0C98179F08C6DA4F(Local_112.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
		{
			iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						unk_0x9B54A3CCAAB4F5FB(5, Global_1574964[iVar1], Global_1575009);
						unk_0x9B54A3CCAAB4F5FB(5, Global_1575009, Global_1574964[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	
	if (func_888())
	{
		return;
	}
	if (!func_299())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_150(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_149(unk_0x7C7787D2D7139A85()))
		{
			if (!func_143())
			{
				func_132(0);
				unk_0x426221D97FBAC579(0);
				unk_0xA1E7A40E1F56E511(&uLocal_1433, 18);
			}
		}
	}
	if (Local_112.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_79(166, Var0, &uLocal_1726, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_131(unk_0x7C7787D2D7139A85()) && !func_130(unk_0x7C7787D2D7139A85())) && !unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 8)) && (func_129(unk_0x7C7787D2D7139A85()) || func_128(unk_0x7C7787D2D7139A85()))) || func_60(Param1))
	{
		return;
	}
	Global_1674852 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Param1);
	func_124(iParam0, fVar0);
	if (unk_0xCD97B9861557C025() && unk_0x097FC2B62E383500() == 15)
	{
		if (func_123(unk_0x7C7787D2D7139A85()) || func_121(unk_0x7C7787D2D7139A85()))
		{
			if (!unk_0xCE5F730CE5D2B3B2(1344549371))
			{
				unk_0x339AECE514362B5F(1344549371);
			}
		}
		else if (unk_0xCE5F730CE5D2B3B2(1344549371))
		{
			unk_0x545AD6392BF558B6(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_120(unk_0x7C7787D2D7139A85(), 21) || func_120(unk_0x7C7787D2D7139A85(), 25)))
		{
			func_119(Param1, 1, 0);
		}
		if (!*uParam4 && func_1000(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			*uParam4 = 1;
			if (func_118(iParam0))
			{
				unk_0xB7F4DA52DE3AAF24(func_117(iParam0));
				if (func_116(iParam0, -1))
				{
					unk_0x60F310C72311BCA8(0);
					if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
					{
						unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 1);
						unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 1);
					}
					unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 0);
				}
			}
			if (func_115(iParam0))
			{
				fVar1 = func_114(iParam0);
				if (fVar1 != 1f)
				{
					func_872(fVar1);
					unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_113(iParam0) && func_123(unk_0x7C7787D2D7139A85()))
				{
					func_111(1);
					func_110(2);
				}
			}
			func_109(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_108(unk_0x7C7787D2D7139A85(), 19))
			{
				func_107(19);
			}
		}
		if (*uParam4 && func_1000(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			*uParam4 = 0;
			if (func_118(iParam0))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 0))
				{
					unk_0xB7F4DA52DE3AAF24(1f);
					unk_0x60F310C72311BCA8(5);
					unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 0);
				}
			}
			if (func_115(iParam0))
			{
				func_106();
				unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_131(unk_0x7C7787D2D7139A85()))
			{
				if (func_104(unk_0x7C7787D2D7139A85()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_111(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_43), iParam0);
}

bool func_81(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_43, iParam0);
}

void func_82()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_24), &Global_2409324, 2);
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_26), &Global_2409326, 19);
	func_102();
	func_85(1, 1, 0);
	func_83();
}

void func_83()
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_101();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_87(0);
	func_86();
}

void func_86()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x429EE9FF15BB9033())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_100())
		{
			func_99();
		}
		Global_2405071.f_704.f_518 = unk_0x429EE9FF15BB9033();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_97();
		func_92(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_97();
		func_92(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_90()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_91()
{
	if ((Global_2405071.f_1742 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_1223.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_65())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x429EE9FF15BB9033();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_93()
{
	if (((((func_104(unk_0x7C7787D2D7139A85()) == 229 || func_104(unk_0x7C7787D2D7139A85()) == 191) || func_96()) || func_95()) || func_94(unk_0x7C7787D2D7139A85())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x393E9918BC37548A())
	{
		return 0;
	}
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return Global_2508348;
	}
	else
	{
		uVar0 = unk_0x23625FE58BACEBFD(iParam0);
		if (unk_0xD4B321D9096B01FC(uVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_95()
{
	return Global_1574402;
}

int func_96()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	func_98();
	Global_2405071.f_704 = 0;
}

void func_98()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_99()
{
	if (func_91())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_100()
{
	if ((Global_2405071.f_1743 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_102()
{
	func_103();
	Global_2405071.f_2252 = 0;
}

void func_103()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

void func_107(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

bool func_108(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_109(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

void func_110(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_111(int iParam0)
{
	if (func_112() && iParam0)
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

int func_112()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
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

float func_114(int iParam0)
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
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

float func_117(int iParam0)
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_118(int iParam0)
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_119(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405071.f_45.f_49 = { Param0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

bool func_120(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

int func_121(int iParam0)
{
	if (func_122(iParam0))
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_108(iParam0, 9);
	}
	return 0;
}

void func_124(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_125();
	}
}

void func_125()
{
	if (!func_126(unk_0x7C7787D2D7139A85()))
	{
		func_109(25);
	}
}

bool func_126(int iParam0)
{
	return func_108(iParam0, 25);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_130(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_132(int iParam0)
{
	if (!func_149(unk_0x7C7787D2D7139A85()))
	{
		if (iParam0 || func_140(unk_0x7C7787D2D7139A85()) != 0)
		{
			func_109(20);
			func_133(func_135());
			if (func_131(unk_0x7C7787D2D7139A85()))
			{
				if (!unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 8))
				{
					unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_133(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_134() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_134()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_135()
{
	int iVar0;
	
	iVar0 = func_104(unk_0x7C7787D2D7139A85());
	if (func_139(iVar0) == 0)
	{
		return -1;
	}
	if (func_138(iVar0))
	{
		return 65;
	}
	if (func_137(iVar0))
	{
		return 66;
	}
	if (func_136(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_137(int iParam0)
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

int func_138(int iParam0)
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

int func_139(int iParam0)
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
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
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
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_140(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_131(iParam0) && !func_130(iParam0)) && !unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_149(iParam0);
	uVar3 = func_142();
	uVar4 = func_143();
	if ((bVar1 && (func_129(iParam0) || func_128(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_123(iParam0)) && !func_141(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

bool func_141(int iParam0)
{
	return func_108(iParam0, 19);
}

bool func_142()
{
	return Global_1312417;
}

int func_143()
{
	if ((func_108(unk_0x7C7787D2D7139A85(), 21) || func_108(unk_0x7C7787D2D7139A85(), 22)) || func_146())
	{
		return 1;
	}
	if (func_144())
	{
		func_109(22);
		return 1;
	}
	return 0;
}

int func_144()
{
	if (func_105(unk_0x7C7787D2D7139A85(), 0))
	{
		if (((func_142() && !func_145()) || func_120(unk_0x7C7787D2D7139A85(), 21)) || func_120(unk_0x7C7787D2D7139A85(), 25))
		{
			return 1;
		}
		else
		{
			func_107(27);
		}
	}
	return 0;
}

bool func_145()
{
	return Global_1312417.f_1;
}

bool func_146()
{
	return func_147(356, -1);
}

int func_147(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

bool func_149(int iParam0)
{
	return func_108(iParam0, 20);
}

float func_150(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_112.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar2 /*26*/].f_1), 1) };
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

void func_151(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_298(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_296() || iParam2 == 27)
	{
		if (func_237(uParam1, iParam2, uParam3, Global_1574182, 0, func_294(), iParam7))
		{
			func_236(1);
			if ((!func_234() && !func_232()) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
			{
				if (func_231())
				{
					func_226();
				}
				else
				{
					unk_0xE0EE6551C6D522E7(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_225(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_224(uParam1, 0, 0);
							if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
							{
								unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
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
								if (func_1000(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((func_223(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_222(iVar35))
										{
											iVar44 = iVar35;
											if (func_122(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_221(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_218(unk_0x7C7787D2D7139A85(), 0) && func_104(unk_0x7C7787D2D7139A85()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_217())
							{
								if (func_1000(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
								}
								else
								{
									iVar35 = func_65();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_216(iVar35) && func_212(iVar35, iParam2)) && func_1000(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_207(iVar35) };
								if (iVar35 == unk_0x7C7787D2D7139A85())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xA09A99AC02B24954(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_67(iVar35) };
								iVar37 = func_201(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5C3CC258CDC18660(iVar37);
								}
								Global_1574182++;
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
									if (!func_217())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_196(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_195(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_190(iVar35, 0);
								if (bVar34)
								{
									if (func_189(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_188(iParam5))
								{
									func_187(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_187(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xA1E7A40E1F56E511(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							if (func_1000(iVar35, 0, 1) && !unk_0xA2BC31158C8CEFD2(iVar49, iVar35))
							{
								iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							}
							else
							{
								iVar35 = func_65();
							}
							if (func_216(iVar35))
							{
								if (func_1000(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_207(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_67(iVar35) };
									iVar37 = func_201(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5C3CC258CDC18660(iVar37);
									}
									Global_1574182++;
									iVar51 = func_190(iVar35, 1);
									if (bVar34)
									{
										if (func_189(iVar35, 1))
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
									func_165(iVar35, unk_0xA09A99AC02B24954(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							func_162(uParam3, uParam1);
						}
						func_161(&(uParam3->f_21));
						func_160();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
						{
							func_159(uParam3, uParam1);
							func_158(uParam1, 0, 1);
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 7);
						}
						func_159(uParam3, uParam1);
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 11);
						}
						if (func_154(uParam3))
						{
							Global_1574403 = 1;
						}
						func_152(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x08EA887200715AD9(*uParam1))
					{
						unk_0xF314976CA3E17AC7(7);
						unk_0x1C65AC18AFC2CA39(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xF314976CA3E17AC7(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_160();
			func_225(0);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
			}
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 10))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x01C11ACADC5D0A74();
}

void func_152(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_161(&(uParam0->f_21));
		func_153(0);
	}
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0C98179F08C6DA4F(uParam0->f_37);
	if (iVar15 != func_65() && func_1000(iVar15, 0, 1))
	{
		Var2 = { func_67(iVar15) };
		iVar1 = func_157(uParam0, uParam0->f_37);
		if (func_156(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0xCE08CBA13236EC65(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 0);
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

void func_155(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5D17AB84230A234B(&uParam0, 13);
}

var func_157(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_158(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xF1BC72CEC2746995(*uParam0, "COLLAPSE"))
	{
		unk_0x282C78036676E0C2(iParam1);
		unk_0xAC7C2DE2DDC7AF03();
	}
	if (iParam2 == 1)
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

void func_159(var uParam0, var uParam1)
{
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_33, 10))
	{
		unk_0xF1BC72CEC2746995(*uParam1, "SET_HIGHLIGHT");
		unk_0xD02F24F3E2DB263A(uParam0->f_35);
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xA1E7A40E1F56E511(&(uParam0->f_33), 10);
	}
}

void func_160()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_161(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_162(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
		if (iVar2 != func_65())
		{
			if (func_1000(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_164(uParam0->f_38[iVar0 /*2*/], 0);
					func_163(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_163(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "SET_ICON"))
		{
			unk_0xD02F24F3E2DB263A(iParam1);
			unk_0xD02F24F3E2DB263A(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD02F24F3E2DB263A(iParam3);
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

int func_164(int iParam0, bool bParam1)
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

void func_165(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_186() && iParam4 < func_185())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF1BC72CEC2746995(*uParam2, sVar1))
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_184("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(iParam10);
			}
			func_184(sParam1);
			unk_0xD02F24F3E2DB263A(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_184("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(65);
			}
			unk_0xD02F24F3E2DB263A(-1);
			func_184("");
			if (uParam3->f_108 == 6)
			{
				func_184("");
			}
			else
			{
				func_184(&sParam5);
			}
			func_170(uParam3, iParam0);
			unk_0xE2603C088682FC07(sParam9);
			unk_0xE2603C088682FC07(sParam9);
			if (func_169(uParam3))
			{
				func_168("DPAD_FRIEND");
			}
			else if (func_167(uParam3))
			{
				func_168("DPAD_FRIEND");
			}
			else if (func_166(uParam3))
			{
				func_168("DPAD_CREW");
			}
			else
			{
				func_168("");
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

bool func_166(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 6);
}

bool func_167(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 5);
}

void func_168(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

int func_169(var uParam0)
{
	if (func_167(uParam0) && func_166(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, int iParam1)
{
	if (func_183(iParam1))
	{
		unk_0xD02F24F3E2DB263A(121);
	}
	else if (func_175(iParam1))
	{
		unk_0xD02F24F3E2DB263A(122);
	}
	else if (((unk_0xA2BC31158C8CEFD2(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xA2BC31158C8CEFD2(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		unk_0xD02F24F3E2DB263A(123);
	}
	else
	{
		if (func_171())
		{
			uParam0->f_36 = 0;
		}
		unk_0x282C78036676E0C2(uParam0->f_36);
	}
}

int func_171()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		if (func_173() || func_172())
		{
			return 1;
		}
	}
	return 0;
}

var func_172()
{
	return Global_2448961.f_15;
}

int func_173()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_172();
	}
	return func_174(Global_4456448.f_154360);
}

int func_174(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_175(int iParam0)
{
	if ((func_1000(iParam0, 0, 1) && func_179()) && func_176(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, bool bParam1)
{
	return func_177(iParam0, bParam1, 1);
}

int func_177(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_178(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_65() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179()
{
	if (func_131(unk_0x7C7787D2D7139A85()) || func_182())
	{
		if (!func_180(unk_0x7C7787D2D7139A85(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_180(int iParam0, int iParam1)
{
	if (func_181(iParam0) == iParam1)
	{
		return func_129(iParam0);
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_182()
{
	switch (func_104(unk_0x7C7787D2D7139A85()))
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

int func_183(int iParam0)
{
	if (func_171())
	{
		if (func_1000(iParam0, 0, 1))
		{
			return func_122(iParam0);
		}
	}
	if ((func_1000(iParam0, 0, 1) && func_179()) && func_178(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_184(char* sParam0)
{
	unk_0x7151302E2AA285DC(sParam0);
}

int func_185()
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_186()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_187(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_186() && iParam3 < func_185())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
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
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x08EA887200715AD9(*uParam1))
		{
			if (unk_0xF1BC72CEC2746995(*uParam1, sVar1))
			{
				unk_0xD02F24F3E2DB263A(iParam3);
				if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_184("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					func_168(sParam16);
				}
				else
				{
					func_184(&(uParam2->f_1));
				}
				unk_0xD02F24F3E2DB263A(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_184("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD02F24F3E2DB263A(iVar0);
				}
				else
				{
					unk_0xD02F24F3E2DB263A(-1);
				}
				if (func_217())
				{
					func_184("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 5 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 7 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_TWO_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 8 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x10D1E89D0C3D279B(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6A8B3CC08A759F44(iParam10);
					}
					unk_0x0AC9F8E1AFCEC860(&(uParam2->f_104));
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
					unk_0x4BDF2F68AA4EAA77(iParam10, 1);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
					else
					{
						unk_0x759AC38FBC6CCA9E("FM_NG_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
					{
						func_168(&(uParam2->f_104));
					}
					else
					{
						func_184("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x759AC38FBC6CCA9E("STRING");
					unk_0xC5B1209EEC9E6603(iParam14, 6);
					unk_0x81019766FF500CCA();
				}
				else if (fParam13 != -1f)
				{
					unk_0x759AC38FBC6CCA9E("NUMBER");
					unk_0x10D1E89D0C3D279B(fParam13, 1);
					unk_0x81019766FF500CCA();
				}
				else if (iParam10 != -1)
				{
					unk_0xD02F24F3E2DB263A(iParam10);
				}
				else
				{
					func_184("");
				}
				if (uParam2->f_108 == 6)
				{
					func_184("");
				}
				else
				{
					func_184(&sParam4);
				}
				func_170(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x9591DE0F00127F2A(sParam8))
				{
					func_184("");
					func_184("");
				}
				else
				{
					unk_0xE2603C088682FC07(sParam8);
					unk_0xE2603C088682FC07(sParam8);
				}
				if (func_169(uParam2))
				{
					func_168("DPAD_FRIEND");
				}
				else if (func_167(uParam2))
				{
					func_168("DPAD_FRIEND");
				}
				else if (func_166(uParam2))
				{
					func_168("DPAD_CREW");
				}
				else
				{
					func_168("");
				}
				unk_0xAC7C2DE2DDC7AF03();
			}
		}
	}
}

int func_188(int iParam0)
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

bool func_189(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_122(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_65();
}

int func_190(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_131(iParam0)) && !func_149(iParam0))
	{
		iVar0 = func_194();
	}
	iVar1 = func_193(iParam0);
	if (!iVar1 == -1)
	{
		return func_191(iVar1);
	}
	return iVar0;
}

int func_191(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_192(iParam0);
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

var func_192(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_193(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_189(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_194()
{
	return 21;
}

char* func_195(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xB28FEB6F176CE84A())
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
			if (unk_0xB28FEB6F176CE84A())
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

int func_196(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_200(iParam3))
	{
		*fParam1 = (func_197(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_188(iParam3))
	{
		*fParam1 = (func_197(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_197(int iParam0, int iParam1)
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
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_199(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_198(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_198(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_199(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_200(int iParam0)
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	if (iVar0 == -1)
	{
		func_202(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_202(int iParam0, bool bParam1)
{
	if (!func_1000(iParam0, 0, 1))
	{
		return;
	}
	if (func_204(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_203(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (!func_1000(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_205(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_205(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5C3CC258CDC18660(Global_1385294[iParam0 /*5*/].f_2), 64);
			unk_0x41E6991C564E55CD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xF0502EB385D5B3C4(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_206(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_206(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x393E9918BC37548A())
	{
		uParam0->f_3 = unk_0x169A8AC9F93C2727();
	}
}

struct<4> func_207(int iParam0)
{
	struct<4> Var0;
	
	if (func_1000(iParam0, 0, 1))
	{
		Global_2507671 = { func_67(iParam0) };
		if (unk_0x77BA37DB22C66465())
		{
			if (func_156(Global_2507671))
			{
				if (!unk_0xCA3736B46FE270BB(&Global_2507671))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x7B3E18C7DAC336C3(0))
		{
			return Var0;
		}
		if (func_211(&Global_2507671))
		{
			Global_2507601 = { func_209(iParam0) };
			func_208(&Global_2507601, &Var0);
		}
	}
	return Var0;
}

void func_208(var uParam0, var uParam1)
{
	unk_0x1E527CF40C25B139(uParam0, 35, uParam1);
}

struct<35> func_209(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_210(iParam0))
	{
		return Global_1312905[unk_0x7C7787D2D7139A85() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	unk_0x4065D3D900AB253F(&Var13, 35, &Var0);
	return Var13;
}

int func_210(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0)
{
	if (unk_0xE7017554E7BCFB0E())
	{
		if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_130(iParam0) || func_215(iParam0)) || func_214(iParam0))
		{
			return 0;
		}
	}
	if (!func_213(iParam0))
	{
		return 0;
	}
	if ((!func_223(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_222(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_213(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_214(int iParam0)
{
	if (func_130(iParam0))
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 10) || unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
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
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_217()
{
	switch (func_104(unk_0x7C7787D2D7139A85()))
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
	switch (func_181(unk_0x7C7787D2D7139A85()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_149(unk_0x7C7787D2D7139A85()))
	{
		switch (func_104(unk_0x7C7787D2D7139A85()))
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
	if (func_180(unk_0x7C7787D2D7139A85(), 236))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_219(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_219(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
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
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_220(iParam0, 0);
	return 0;
}

int func_220(int iParam0, int iParam1)
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

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1000(unk_0x0C98179F08C6DA4F(iVar0), 0, 1))
		{
			iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_223(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_222(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
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

bool func_222(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_223(int iParam0)
{
	if (func_1000(iParam0, 0, 1))
	{
		if (func_1000(unk_0x7C7787D2D7139A85(), 0, 1))
		{
			if (unk_0x645A04F62406C561(iParam0, unk_0x7C7787D2D7139A85()) || func_104(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD02F24F3E2DB263A(iParam1);
		unk_0xD02F24F3E2DB263A(iParam2);
		unk_0xAC7C2DE2DDC7AF03();
	}
}

void func_225(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_226()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
	{
		if (func_230())
		{
			func_227();
		}
	}
}

void func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_228(var uParam0, int iParam1)
{
	func_229(uParam0, iParam1);
}

void func_229(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_230()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_231()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 0) && func_230())
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1) && func_230())
	{
		return 1;
	}
	return 0;
}

int func_232()
{
	if (func_230())
	{
		if (func_233(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)
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
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_234()
{
	if (func_230())
	{
		if (func_235(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0)
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

void func_236(int iParam0)
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_237(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_293(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_292();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_291())
		{
			if (func_290() > 0 && Global_1574184)
			{
				unk_0x1C0FEAA5C83F343B();
				unk_0xF3F61F23853206CB(fVar7);
				unk_0x0AF55029F939BA65(18);
				if (unk_0x0945988C02AF3025())
				{
					unk_0x3D0BC3CE4D5E1DD0();
				}
				unk_0x0AF55029F939BA65(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_271())
		{
			func_270(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
	{
		func_270(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_290() == 1)
		{
			func_269(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_270(uParam0, uParam2, 0);
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x0945988C02AF3025())
		{
			unk_0x3D0BC3CE4D5E1DD0();
		}
		unk_0x0AF55029F939BA65(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_290() == 0 && !bParam5))
		{
			func_270(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_268();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x1C0FEAA5C83F343B();
				}
				unk_0x0AF55029F939BA65(18);
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_268();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x1C0FEAA5C83F343B();
					}
					unk_0x0AF55029F939BA65(18);
				}
				unk_0xF3F61F23853206CB(fVar7);
				if (func_269(bVar6, uParam0, 0))
				{
					func_224(uParam0, 0, 0);
					uVar4 = func_266(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_264(iParam1) };
					if (bParam4)
					{
						func_261(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_254(uParam0, func_258(uParam2), func_255(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_247(uParam2);
						if (!unk_0x9591DE0F00127F2A(uParam6))
						{
							sVar9 = sParam6;
						}
						func_245(uParam0, sVar9, func_246(), -1);
					}
					else if (func_171())
					{
						uParam2->f_34 = Global_1574183;
						func_261(uParam0, uVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_238(iParam1);
						uParam2->f_34 = Global_1574183;
						func_261(uParam0, uVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_238(iParam1);
						func_261(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xA1E7A40E1F56E511(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				unk_0xF3F61F23853206CB(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						unk_0x3B76114EC84D5812(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_244())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
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
			if (func_243(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 20;
			}
			if (func_242(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_241(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = 2;
	}
	if (func_239())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_239()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_61();
	}
	return func_240(Global_4456448.f_154360);
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_241(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_242(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_243(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_244()
{
	return Global_4456448.f_1 == 0;
}

void func_245(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(sParam2))
		{
			func_168(sParam1);
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_168("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_246()
{
	switch (func_104(unk_0x7C7787D2D7139A85()))
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

char* func_247(var uParam0)
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
	switch (func_104(unk_0x7C7787D2D7139A85()))
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
			if (func_250())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_249(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_249(1))
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
			if (func_248(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_248(int iParam0)
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

bool func_249(bool bParam0)
{
	return func_176(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_250()
{
	return (func_253() && func_251(func_252()));
}

bool func_251(int iParam0)
{
	return func_178(iParam0, 1);
}

int func_252()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35;
}

bool func_253()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

void func_254(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(uParam2))
		{
			func_168(uParam1);
		}
		else if (func_181(unk_0x7C7787D2D7139A85()) == 133)
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT_C");
			unk_0x0AC9F8E1AFCEC860(uParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_168("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_255(var uParam0)
{
	int iVar0;
	
	iVar0 = func_181(unk_0x7C7787D2D7139A85());
	if (func_257())
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
			switch (func_256())
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

int func_256()
{
	if (func_181(unk_0x7C7787D2D7139A85()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_257()
{
	return Global_1590319;
}

char* func_258(var uParam0)
{
	int iVar0;
	
	iVar0 = func_181(unk_0x7C7787D2D7139A85());
	if (func_257())
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
			if (func_260() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_260() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_256())
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
			if (func_259() == 1)
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

int func_259()
{
	return Global_2531497.f_4822;
}

int func_260()
{
	if (func_181(unk_0x7C7787D2D7139A85()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_261(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_184(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x759AC38FBC6CCA9E(uParam1);
			unk_0x6A8B3CC08A759F44(iParam5);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_168(sParam1);
		}
		if (func_291() && iParam6)
		{
			if (func_263())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x759AC38FBC6CCA9E("LBD_DPD_CNT");
			unk_0x6A8B3CC08A759F44(iVar0);
			unk_0x6A8B3CC08A759F44(iVar1);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_168(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (func_262(unk_0x7C7787D2D7139A85()))
			{
				unk_0xD02F24F3E2DB263A(166);
			}
			else if (func_61())
			{
				unk_0xD02F24F3E2DB263A(220);
			}
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

int func_262(int iParam0)
{
	if (func_243(iParam0) || func_242(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_263()
{
	return Global_1574184;
}

struct<4> func_264(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_265(unk_0x7C7787D2D7139A85()) || func_241(unk_0x7C7787D2D7139A85()))
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
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_171() && unk_0xA51CBC95AC3A4B14())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_265(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_266(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_171() || unk_0x9591DE0F00127F2A(uParam1)))
	{
		uVar0 = func_267();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x9591DE0F00127F2A(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
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

char* func_267()
{
	if (unk_0xB60C981253946EC0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x28B56AB7204D753B())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x2D635A9E46DA733C())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xF74FDCB441C8F4C2())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_268()
{
	Global_42316 = 1;
}

bool func_269(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_matchmaking_card");
	}
	return unk_0x08EA887200715AD9(*uParam1);
}

void func_270(var uParam0, var uParam1, bool bParam2)
{
	unk_0x3B76114EC84D5812(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_160();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_161(&(uParam1->f_19));
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4592), 5);
		}
	}
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0x749CA887CB0AFEC9(uParam0);
	}
	if (unk_0xA2BC31158C8CEFD2(uParam1->f_33, 0))
	{
		unk_0x3B76114EC84D5812(&(uParam1->f_33), 0);
	}
	unk_0xF3F61F23853206CB(0f);
}

int func_271()
{
	if (func_289())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (!func_286())
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	if (func_283(8, -1))
	{
		return 0;
	}
	if (func_290() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	else if (!func_279(unk_0x7C7787D2D7139A85(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_278(1) || func_276(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (func_275() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_273(unk_0x7C7787D2D7139A85()) && !func_275())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_272(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_272(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

int func_273(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_274())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_274()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

bool func_275()
{
	return (unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 0));
}

int func_276(bool bParam0)
{
	if (unk_0x8F0856319BE615A3())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (func_277(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x3772881BFFE6C3F8(0, 25) || unk_0x3772881BFFE6C3F8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x3772881BFFE6C3F8(0, 19) || (!bParam0 && unk_0x0B6782DED1C4B3B1(0, 19)))
	{
		return 1;
	}
	if (unk_0xE434AB6E3DE89861())
	{
		if (((unk_0x3772881BFFE6C3F8(0, 166) || unk_0x3772881BFFE6C3F8(0, 167)) || unk_0x3772881BFFE6C3F8(0, 168)) || unk_0x3772881BFFE6C3F8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0B6782DED1C4B3B1(0, 166) || unk_0x0B6782DED1C4B3B1(0, 167)) || unk_0x0B6782DED1C4B3B1(0, 168)) || unk_0x0B6782DED1C4B3B1(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (unk_0xC6649C48084573DA())
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_278(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_280(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_280(int iParam0)
{
	return func_281(iParam0);
}

bool func_281(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_282()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196 != 0;
}

bool func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

int func_284()
{
	if (func_285() == 0)
	{
		return 1;
	}
	return 0;
}

int func_285()
{
	return Global_1312467.f_18;
}

int func_286()
{
	if (func_287())
	{
		return 1;
	}
	if (unk_0x260395BA7F0C83CB())
	{
		return 0;
	}
	if (unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8())
	{
		return 0;
	}
	if (unk_0x75EBF5007DD359C9())
	{
		return 0;
	}
	return 1;
}

bool func_287()
{
	return Global_1312439;
}

bool func_288()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

bool func_289()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_290()
{
	return Global_1373500.f_68;
}

int func_291()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_292()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x7BC897FD6110BBB4()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_294()
{
	if (func_295(unk_0x7C7787D2D7139A85()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0xC0E0C265EFDEC931(iParam0);
		}
	}
	return 0;
}

int func_296()
{
	if (func_294())
	{
		return 1;
	}
	if (func_214(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_131(unk_0x7C7787D2D7139A85()))
	{
		switch (func_181(unk_0x7C7787D2D7139A85()))
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
				if (!func_297(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_297(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_297(unk_0x7C7787D2D7139A85()))
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

bool func_297(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_298(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_131(unk_0x7C7787D2D7139A85()) && !func_149(unk_0x7C7787D2D7139A85())) && !func_180(unk_0x7C7787D2D7139A85(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_105(unk_0x7C7787D2D7139A85(), 0) && func_149(unk_0x7C7787D2D7139A85()))
		{
			return 1;
		}
		if (func_140(unk_0x7C7787D2D7139A85()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_299()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = unk_0x2E40EEA43EF34BD6();
	}
	else
	{
		iVar0 = func_300();
	}
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Local_984[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	if (unk_0xD56C8C2B75BF9665(iVar1))
	{
		if (unk_0xA890E17DFBBB3192(iVar1))
		{
			iVar2 = unk_0x932F91FB8ED4D272(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_301()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_302(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_302(int iParam0)
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<14> Var16;
	int iVar30;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 11))
	{
		iVar30 = 0;
		while (iVar30 < 4)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_113, iVar30))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_6, iVar30))
				{
					if (unk_0xD4B321D9096B01FC(Var0.f_0))
					{
						if (unk_0x905FBA24E7FA8D23(Var0.f_0))
						{
							if (!unk_0xA2BC31158C8CEFD2(Local_112.f_109, iVar30))
							{
								if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_5, iVar30))
								{
									if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar30 /*26*/].f_2))
									{
										if (unk_0xD4B321D9096B01FC(unk_0x40237B62400B4BCC(Local_112.f_2[iVar30 /*26*/].f_2)))
										{
											if (unk_0xD05B0DA3866791D0(Var0.f_0) == unk_0x40237B62400B4BCC(Local_112.f_2[iVar30 /*26*/].f_2))
											{
												if (unk_0xD4B321D9096B01FC(Var0.f_1))
												{
													if (unk_0x4625051E51BA911B(Var0.f_1))
													{
														if (unk_0x3D464779B732760F(Var0.f_1) == unk_0x0FA8183DAD2B3203())
														{
															if (func_889() == Local_112.f_118)
															{
																unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_5), iVar30);
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
						else if (unk_0x4625051E51BA911B(Var0.f_0))
						{
							iVar12 = unk_0x3D464779B732760F(Var0.f_0);
							if (iVar12 == unk_0x70D3AC024E0A9837(Local_112.f_2[iVar30 /*26*/].f_1))
							{
								if (unk_0xD4B321D9096B01FC(Var0.f_1))
								{
									if (unk_0x4625051E51BA911B(Var0.f_1))
									{
										iVar11 = unk_0x3D464779B732760F(Var0.f_1);
										if (unk_0x7FA2061748BA645E(iVar11))
										{
											iVar14 = unk_0x74D4E16E179B8F53(iVar11);
											if (unk_0xA890E17DFBBB3192(iVar14))
											{
												if (Var0.f_3)
												{
													if (iVar14 == unk_0x7C7787D2D7139A85())
													{
														Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_11++;
														unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_6), iVar30);
														Var16.f_2 = -90062717;
														Var16.f_10 = unk_0x7C7787D2D7139A85();
														func_308(Var16, func_309(0));
														func_303("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7, iVar30))
											{
												if (Var0.f_3)
												{
													iVar14 = unk_0x74D4E16E179B8F53(iVar11);
													unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7), iVar30);
												}
											}
										}
										else if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7, iVar30))
										{
											if (Var0.f_3)
											{
												unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7), iVar30);
											}
										}
									}
									else if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7, iVar30))
									{
										if (Var0.f_3)
										{
											unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7), iVar30);
										}
									}
								}
								else if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7, iVar30))
								{
									if (Var0.f_3)
									{
										unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_7), iVar30);
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
	if (func_299())
	{
		if (!func_108(unk_0x7C7787D2D7139A85(), 20))
		{
			if (unk_0xD4B321D9096B01FC(Var0.f_0))
			{
				if (unk_0x4625051E51BA911B(Var0.f_0))
				{
					iVar12 = unk_0x3D464779B732760F(Var0.f_0);
					if (unk_0x7FA2061748BA645E(iVar12))
					{
						iVar13 = unk_0x74D4E16E179B8F53(iVar12);
						if (unk_0xD4B321D9096B01FC(Var0.f_1))
						{
							if (unk_0x4625051E51BA911B(Var0.f_1))
							{
								iVar11 = unk_0x3D464779B732760F(Var0.f_1);
								if (unk_0x7FA2061748BA645E(iVar11))
								{
									iVar14 = unk_0x74D4E16E179B8F53(iVar11);
									if (iVar14 == unk_0x7C7787D2D7139A85())
									{
										if (unk_0xA890E17DFBBB3192(iVar13))
										{
											if (func_189(iVar13, 1))
											{
												if (Local_112.f_118 > -1)
												{
													iVar15 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Local_112.f_118));
													if (func_76(iVar13, iVar15, 1))
													{
														if (!func_143())
														{
															func_132(0);
															func_125();
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

int func_303(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x6C607B5286DEE8D9(sParam0);
	iVar0 = unk_0x6E617E0C74B3189D(0, 1);
	func_304(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_304(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_307() || !unk_0xA51CBC95AC3A4B14()) || !func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		return;
	}
	iVar0 = func_305(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_306(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_307()
{
	return unk_0x9742C47C6EA02281(-1762644250);
}

void func_308(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 564131320;
	Param0.f_1 = unk_0x7C7787D2D7139A85();
	if (!iParam14 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam14);
	}
}

int func_309(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
		{
			iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
			if (func_1000(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_310()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		if (unk_0xA2BC31158C8CEFD2(uLocal_1433, 14))
		{
			unk_0x3B76114EC84D5812(&iLocal_1433, 14);
		}
		return;
	}
	iVar0 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 14))
	{
		if (Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1 != 0)
		{
			Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1 = 0;
		}
		unk_0xA1E7A40E1F56E511(&iLocal_1433, 14);
	}
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 15))
	{
		unk_0xA1E7A40E1F56E511(&iLocal_1433, 15);
		func_820();
	}
	if (unk_0xD56C8C2B75BF9665(iVar0))
	{
		if (unk_0xA890E17DFBBB3192(iVar0))
		{
			uVar1 = unk_0x932F91FB8ED4D272(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_984[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_775();
					func_757();
					func_742();
					break;
				
				case 2:
					func_311();
					break;
				
				case 3:
					func_902();
					break;
				}
			}
	}
}

void func_311()
{
	struct<20> Var0;
	int iVar22;
	int iVar23;
	char* sVar24;
	int iVar25;
	int iVar26;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar22 = unk_0x2E40EEA43EF34BD6();
	iVar23 = unk_0x7C7787D2D7139A85();
	if (func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar22 = func_300();
		iVar23 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	}
	if (!unk_0xA2BC31158C8CEFD2(Local_984[iVar22 /*14*/].f_1, 4))
	{
		if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 9))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 1))
			{
				if (iVar22 == Local_112.f_118 || func_889() == Local_112.f_118)
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_741(iVar23);
						iVar25 = func_740(iVar23);
						func_738(87, "GB_WINNER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar23 == unk_0x7C7787D2D7139A85())
					{
						if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
						{
							func_628(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
						}
						Var0.f_0 = func_627();
						Var0.f_1 = func_626();
						func_438(166, 1, &Var0, 0);
						unk_0xE643698D7D91CE86(iVar23);
						iLocal_1727 = unk_0xD13C2E5A700836D1();
						unk_0x60F310C72311BCA8(0);
						unk_0xA1E7A40E1F56E511(&iLocal_1433, 17);
						func_7(&uLocal_1728, 0, 0);
					}
				}
				else if (func_299())
				{
					if (func_189(iVar23, 1))
					{
						if (func_140(iVar23) >= 2)
						{
							sVar24 = func_741(unk_0x0C98179F08C6DA4F(Local_112.f_119));
							iVar25 = func_740(unk_0x0C98179F08C6DA4F(Local_112.f_119));
							func_738(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (iVar23 == unk_0x7C7787D2D7139A85())
						{
							if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
							{
								func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
							}
							if (func_126(iVar23))
							{
								Var0.f_0 = func_437();
								Var0.f_1 = func_436();
							}
							func_438(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_140(iVar23) >= 2)
						{
							sVar24 = func_741(unk_0x0C98179F08C6DA4F(Local_112.f_119));
							iVar25 = func_740(unk_0x0C98179F08C6DA4F(Local_112.f_119));
							func_738(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (iVar23 == unk_0x7C7787D2D7139A85())
						{
							if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
							{
								func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
							}
							if (func_126(iVar23))
							{
								Var0.f_0 = func_437();
								Var0.f_1 = func_436();
							}
							func_438(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xA1E7A40E1F56E511(&iLocal_1433, 9);
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 3))
			{
				iVar26 = (4 - Local_112.f_115);
				if (iVar22 == Local_112.f_118 || func_889() == Local_112.f_118)
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_430();
						iVar25 = func_740(iVar23);
						func_738(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar23 == unk_0x7C7787D2D7139A85())
					{
						if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
						{
							func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
						}
						Var0.f_0 = func_627();
						Var0.f_1 = func_626();
						func_438(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_741(unk_0x0C98179F08C6DA4F(Local_112.f_119));
						iVar25 = func_740(unk_0x0C98179F08C6DA4F(Local_112.f_119));
						if (iVar26 == 1)
						{
							func_738(87, "GB_WINNER", "BIGM_HUN1S", sVar24, iVar25, 0, iVar26, -1, -1, 2, -1);
						}
						else if (iVar26 > 1)
						{
							func_738(87, "GB_WINNER", "BIGM_HUNRS", sVar24, iVar25, 0, iVar26, -1, -1, 2, -1);
						}
					}
					if (iVar23 == unk_0x7C7787D2D7139A85())
					{
						if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
						{
							func_628(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
						}
						if (func_126(iVar23))
						{
							Var0.f_0 = func_437();
							Var0.f_1 = func_436();
						}
						func_438(166, 1, &Var0, 0);
						unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
					}
				}
				unk_0xA1E7A40E1F56E511(&iLocal_1433, 9);
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 5))
			{
				if (func_384())
				{
					if (func_888())
					{
						if (func_140(iVar23) >= 2)
						{
						}
					}
					else if (func_140(iVar23) >= 2)
					{
						func_346(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar23 == unk_0x7C7787D2D7139A85())
				{
					if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
					{
						func_628(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
					}
					func_438(166, 0, &Var0, 0);
				}
				unk_0xA1E7A40E1F56E511(&iLocal_1433, 9);
			}
		}
		if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 9))
		{
			func_820();
			if (!unk_0xA2BC31158C8CEFD2(uLocal_1434, 8))
			{
				func_331();
				func_75();
				unk_0xA1E7A40E1F56E511(&iLocal_1434, 8);
			}
			if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 10))
			{
			}
			if (func_312(&uLocal_1441, 0, 0))
			{
				if (iVar22 == unk_0x2E40EEA43EF34BD6())
				{
					unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 17))
			{
				if (func_6(&uLocal_1728, 10000, 0))
				{
					unk_0x60F310C72311BCA8(iLocal_1727);
					unk_0x3B76114EC84D5812(&iLocal_1433, 17);
				}
			}
		}
	}
}

int func_312(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_109(29);
	if ((*uParam0 > 0 && !func_230()) && func_140(unk_0x7C7787D2D7139A85()) != 0)
	{
		if (!func_328())
		{
			func_327();
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
				unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4588), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_326(uParam0, 1);
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
				func_319(iParam2);
				func_326(uParam0, 2);
			}
			break;
		
		case 2:
			func_319(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_313(func_314(0)))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
				func_326(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 1);
				unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 2);
				func_326(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 1);
			unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_313(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

char* func_314(int iParam0)
{
	if (((func_317(unk_0x7C7787D2D7139A85()) || func_316(unk_0x7C7787D2D7139A85())) || func_250()) || iParam0)
	{
		if (func_316(unk_0x7C7787D2D7139A85()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_219(func_315()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_315()
{
	return Global_1651198;
}

bool func_316(int iParam0)
{
	return func_220(func_104(iParam0), 0);
}

bool func_317(int iParam0)
{
	return func_318(func_104(iParam0));
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148 && func_178(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35, 1))
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

void func_319(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 0))
	{
		if (((((((((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_795, 2)) && func_1000(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_73784) && !Global_58652) && !unk_0x260395BA7F0C83CB()) && !func_108(unk_0x7C7787D2D7139A85(), 22)) && func_140(unk_0x7C7787D2D7139A85()) != 0) && !func_324(func_325())) && !func_317(unk_0x7C7787D2D7139A85())) && !func_323(func_104(unk_0x7C7787D2D7139A85()))) && !func_322(func_104(unk_0x7C7787D2D7139A85())))
		{
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4588), 1);
			func_321(func_314(iParam0), -1);
			func_320(1);
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_320(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_249(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_230())
	{
		unk_0x9964F5BBD9415AB7(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_321(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam1);
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_323(int iParam0)
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

int func_324(int iParam0)
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

int func_325()
{
	var uVar0;
	
	uVar0 = unk_0x0037AFCBDC61F351();
	if (unk_0x2553916E420E8EF0(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_326(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_327()
{
	Global_2460541 = 1;
}

int func_328()
{
	if (((((((func_104(unk_0x7C7787D2D7139A85()) == 170 || func_104(unk_0x7C7787D2D7139A85()) == 219) || func_104(unk_0x7C7787D2D7139A85()) == 221) || func_104(unk_0x7C7787D2D7139A85()) == 220) || func_104(unk_0x7C7787D2D7139A85()) == 216) || func_104(unk_0x7C7787D2D7139A85()) == 215) || func_104(unk_0x7C7787D2D7139A85()) == 214) || func_104(unk_0x7C7787D2D7139A85()) == 218)
	{
		return 1;
	}
	if (func_329(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_330(int iParam0)
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
		case 134:
		case 135:
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
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

void func_331()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x39A01A052D9B5FF0(uLocal_1448[iVar0]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_1448[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 18))
	{
		func_345(1);
		unk_0x3B76114EC84D5812(&iLocal_1433, 18);
	}
	func_342();
	func_332();
}

void func_332()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 7))
	{
		unk_0xA1E7A40E1F56E511(&iLocal_1433, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
			if (unk_0xD56C8C2B75BF9665(iVar1))
			{
				if (iVar1 != unk_0x7C7787D2D7139A85())
				{
					if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_8, iVar0))
					{
						func_340(iVar1, 432, 0, 0);
						func_333(iVar1, func_339(iLocal_1725), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_333(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_335(iParam0))
	{
		return;
	}
	if (func_334(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_334(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0xAB2A82A2838B61B7(*uParam1) || *uParam1 == unk_0x429EE9FF15BB9033())
		{
			*uParam1 = unk_0x429EE9FF15BB9033();
			*uParam0 = unk_0x429EE9FF15BB9033();
		}
	}
	if (!unk_0xAB2A82A2838B61B7(*uParam0) || *uParam0 == unk_0x429EE9FF15BB9033())
	{
		if (bParam3)
		{
			if (!unk_0xA2BC31158C8CEFD2(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xA1E7A40E1F56E511(uParam2, iParam4);
			}
			*uParam0 = unk_0x429EE9FF15BB9033();
		}
		else
		{
			if (unk_0xA2BC31158C8CEFD2(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x3B76114EC84D5812(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x429EE9FF15BB9033())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0xAB2A82A2838B61B7(*uParam1) && !*uParam1 == unk_0x429EE9FF15BB9033())
	{
	}
	return 0;
}

int func_335(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_336())
	{
		return 1;
	}
	return 0;
}

int func_336()
{
	switch (func_338())
	{
		case 0:
			return func_337();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_337()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_338()
{
	return Global_30736;
}

int func_339(int iParam0)
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
	unk_0xE0A2E1F5E75D9DF8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_340(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_335(iParam0))
	{
		return;
	}
	if (func_334(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_341();
		}
	}
}

void func_341()
{
	Global_2416074.f_1515 = 1;
}

void func_342()
{
	if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 16))
	{
		func_86();
		func_343();
		unk_0x3B76114EC84D5812(&iLocal_1433, 16);
	}
}

void func_343()
{
	if (Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
	{
		func_344();
	}
}

void func_344()
{
	struct<28> Var0;
	
	if (unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413894 = { Var0 };
	Global_2413894.f_6 = -1;
}

void func_345(bool bParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (!func_142())
		{
			if (func_1000(unk_0x7C7787D2D7139A85(), 1, 0))
			{
				unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, 0);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, 0);
			}
			unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 1f);
			unk_0x62644D7A979A06C2(0);
			unk_0x426221D97FBAC579(1);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					unk_0xD00A04276B590461(0, 0);
				}
			}
		}
		else
		{
			if (func_1000(unk_0x7C7787D2D7139A85(), 1, 1))
			{
				unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 0);
				unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, 1);
				unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, 1);
				unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					unk_0xD00A04276B590461(1, 0);
				}
			}
			unk_0x62644D7A979A06C2(1);
			unk_0x426221D97FBAC579(0);
		}
	}
}

int func_346(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_383(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_228(&(Var0.f_69), iParam7);
	}
	return func_347(&Var0);
}

int func_347(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_358(uParam0, uParam0->f_17);
	func_357(uParam0);
	if (func_61())
	{
		func_357(uParam0);
	}
	if (func_356(uParam0->f_1))
	{
		func_349();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_349();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_348(uParam0->f_69, 128))
			{
				if (func_233(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_348(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_349()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_350();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_350()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_354(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_351(&(Global_2437549.f_3032.f_1));
}

void func_351(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xE434AB6E3DE89861())
		{
			unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x282C78036676E0C2(0);
			unk_0xAC7C2DE2DDC7AF03();
		}
		unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x81394B4515AF31C3(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
		{
			if (!Global_76846)
			{
				if (unk_0x260395BA7F0C83CB() && !func_353(0))
				{
					unk_0xCF33E56642B34516(800);
				}
			}
		}
	}
	func_352(0);
}

void func_352(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_353(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_354(var uParam0)
{
	func_355(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_355(var uParam0)
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

int func_356(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0)
{
	if (func_235(uParam0->f_1))
	{
		uParam0->f_72 = func_194();
	}
}

void func_358(var uParam0, int iParam1)
{
	if (func_235(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_1000(iParam1, 0, 1))
	{
		return;
	}
	if (func_233(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_359(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_359(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_273(iParam0) && !bParam4)
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
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_273(unk_0x7C7787D2D7139A85()) || (func_382() && func_381())) && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_380();
		if (unk_0xD4B321D9096B01FC(uVar1))
		{
			if (unk_0x7FA2061748BA645E(iVar1))
			{
				if (unk_0x74D4E16E179B8F53(iVar1) != -1)
				{
					if (func_1000(unk_0x74D4E16E179B8F53(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_378(iParam1, iParam0, 0);
							}
							else
							{
								return func_372(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_372(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_378(iParam1, iParam0, 0);
				}
				else
				{
					return func_360(0, -1, 0);
				}
			}
			else
			{
				return func_360(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_378(iParam1, iParam0, 0);
		}
		else
		{
			return func_372(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
		}
	}
	return func_372(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
}

int func_360(bool bParam0, int iParam1, bool bParam2)
{
	return func_361(unk_0x7C7787D2D7139A85(), bParam0, iParam1, bParam2);
}

int func_361(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xD56C8C2B75BF9665(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	if ((func_371() || (func_370() && func_368())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_367(iParam2, iVar0);
		}
		else
		{
			return func_367(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_366(iVar0, iParam2, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_365(1);
				}
				else
				{
					return func_365(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 20))
			{
				return func_362(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_362(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_365(1);
	}
	return func_365(0);
}

int func_362(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_364(iParam0, iParam1, iParam3);
	if (func_363(Global_4456448.f_154360, 1))
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

int func_363(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_364(int iParam0, int iParam1, int iParam2)
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
			if (!func_366(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_365(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_366(int iParam0, int iParam1, int iParam2)
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
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 0);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 1);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 2);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 4);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 5);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 6);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 8);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 9);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 10);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 12);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 13);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 14);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_364(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_368()
{
	if (func_369())
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 4);
}

bool func_369()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

bool func_370()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0);
	}
	return ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0) || Global_1654024) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_371()
{
	if (func_369() && unk_0xA51CBC95AC3A4B14())
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_375())
			{
				iVar3 = func_193(iParam0);
				if (!iVar3 == -1)
				{
					return func_191(iVar3);
				}
			}
			if ((func_374(iParam1, iParam0, iVar0, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)) || ((func_366(unk_0xC69A85EEB9CA3B95(iParam1), unk_0xC69A85EEB9CA3B95(iParam0), 0) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 23)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)))
			{
				return func_365(1);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26))
			{
				return func_373(1);
			}
			else
			{
				return func_361(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_365(1);
			}
			else
			{
				return func_361(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_193(iParam0);
	if (!iVar4 == -1)
	{
		return func_191(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_373(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_374(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
	}
	return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
}

int func_375()
{
	if (((func_172() || func_377()) || func_61()) || func_376())
	{
		return 1;
	}
	return 0;
}

bool func_376()
{
	return Global_2448961.f_19;
}

var func_377()
{
	return Global_2448961.f_16;
}

int func_378(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_375())
	{
		iVar2 = func_193(iParam1);
		if (!iVar2 == -1)
		{
			return func_191(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_361(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_21, 13))
		{
			iVar0 = func_379(iParam0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26) && !func_366(iParam0, unk_0xC69A85EEB9CA3B95(iParam1), 0))
		{
			iVar0 = func_373(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_379(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
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

var func_380()
{
	return Global_2359302.f_2;
}

bool func_381()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 4);
}

bool func_382()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

void func_383(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_384()
{
	int iVar0;
	
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		if (!func_385(1, 1, 1, 0))
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1, 6))
			{
				unk_0x3B76114EC84D5812(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_143())
		{
			if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1, 6))
			{
				unk_0x3B76114EC84D5812(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1, 6))
		{
			unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_300();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_984[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_385(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_429(unk_0x7C7787D2D7139A85(), 29))
	{
		return 0;
	}
	if (func_120(unk_0x7C7787D2D7139A85(), 21))
	{
		return 0;
	}
	if (func_120(unk_0x7C7787D2D7139A85(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xEDC68E498B715C56())
		{
			return 0;
		}
	}
	if (!func_213(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xED4D72D338501085())
		{
			return 0;
		}
	}
	if (func_428(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_427())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (func_426())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	if (func_280(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	if (func_120(unk_0x7C7787D2D7139A85(), 0) || func_120(unk_0x7C7787D2D7139A85(), 3))
	{
		return 0;
	}
	if ((func_120(unk_0x7C7787D2D7139A85(), 12) || func_120(unk_0x7C7787D2D7139A85(), 14)) || func_120(unk_0x7C7787D2D7139A85(), 13))
	{
		return 0;
	}
	if (func_419(unk_0x7C7787D2D7139A85(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_394())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_393())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_392(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_391())
	{
		return 0;
	}
	if (func_390(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if ((func_389(unk_0x7C7787D2D7139A85()) && func_388(unk_0x7C7787D2D7139A85()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_386(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_94(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_386(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_387()
{
	return Global_1676879.f_4090 != -1;
}

int func_388(int iParam0)
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_389(int iParam0)
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_390(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

int func_391()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	if (!func_1000(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_393()
{
	return Global_98721.f_346 > 0;
}

int func_394()
{
	int iVar0;
	
	iVar0 = func_104(unk_0x7C7787D2D7139A85());
	if (((func_418(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_26) || func_417(unk_0x7C7787D2D7139A85())) || func_416(unk_0x7C7787D2D7139A85())) || func_411(unk_0x7C7787D2D7139A85()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_409(unk_0x7C7787D2D7139A85()))
	{
		if (func_137(iVar0) || func_408(iVar0))
		{
			return 1;
		}
	}
	if (func_329(unk_0x7C7787D2D7139A85()))
	{
		if (func_408(iVar0))
		{
			return 1;
		}
	}
	if (func_407(unk_0x7C7787D2D7139A85()))
	{
		if (func_406(iVar0))
		{
			return 1;
		}
	}
	if (func_405(unk_0x7C7787D2D7139A85()))
	{
		if (func_404(iVar0))
		{
			return 1;
		}
	}
	if (func_403(unk_0x7C7787D2D7139A85()))
	{
		if (func_402(iVar0))
		{
			return 1;
		}
	}
	if (func_401(unk_0x7C7787D2D7139A85()))
	{
		if (func_400(iVar0))
		{
			return 1;
		}
	}
	if (func_399(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_136(iVar0))
		{
			if (func_397(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
		}
	}
	if (func_396(unk_0x7C7787D2D7139A85()))
	{
		if (func_395(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (func_398(iParam0) != func_65())
	{
		return func_398(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_398(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_399(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0x7F375072508F738F(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_65())
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)
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

int func_405(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
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

int func_407(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_408(int iParam0)
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

int func_409(int iParam0)
{
	if (func_410(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0, int iParam1)
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

int func_411(int iParam0)
{
	if (func_412(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_413(unk_0x7C7787D2D7139A85(), 0);
	}
	if (bParam1)
	{
		if (func_413(unk_0x7C7787D2D7139A85(), 0))
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

bool func_413(int iParam0, bool bParam1)
{
	if (Global_1590284 != func_65())
	{
		if (!func_415(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x7C7787D2D7139A85() != Global_1590284)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_414(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_414(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
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

int func_419(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
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
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_329(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_407(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_405(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_403(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_424(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_399(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_422(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_421(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_420(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_421(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_422(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_65())
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_426()
{
	return Global_1312873;
}

bool func_427()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 0);
}

int func_428(int iParam0)
{
	if (func_279(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_429(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

char* func_430()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_66(unk_0x7C7787D2D7139A85());
	if (iVar0 != func_65())
	{
		if (iVar0 != unk_0x7C7787D2D7139A85())
		{
			if (((func_108(iVar0, 28) || func_108(unk_0x7C7787D2D7139A85(), 28)) || func_435(iVar0)) && !func_434(iVar0))
			{
				return func_432(iVar0, 0);
			}
			if (!unk_0x77BA37DB22C66465() && !unk_0x690CD141AD7C9F01(0, -1, 1))
			{
				return func_432(iVar0, 0);
			}
		}
		uVar1 = func_431(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (unk_0x9591DE0F00127F2A(uVar1))
		{
			return func_432(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_431(var uParam0)
{
	return uParam0;
}

var func_432(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_176(iParam0, 1))
		{
			return func_433();
		}
	}
	return unk_0xD54FB72F71EFE6C4("GB_REST_ACC");
}

var func_433()
{
	return unk_0xD54FB72F71EFE6C4("GB_REST_ACCM");
}

int func_434(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (unk_0x77BA37DB22C66465())
	{
		if (unk_0x7B3E18C7DAC336C3(0))
		{
			if (unk_0xCA3736B46FE270BB(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
		if (unk_0x39FDED461BF385C3() || unk_0xE434AB6E3DE89861())
		{
			if (unk_0x7B3E18C7DAC336C3(0))
			{
				return 0;
			}
		}
		else if (unk_0x77BA37DB22C66465())
		{
			if (unk_0x7B3E18C7DAC336C3(0))
			{
				if (unk_0xCA3736B46FE270BB(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_436()
{
	return ((4 - Local_112.f_115) * Global_262145.f_15506);
}

int func_437()
{
	return ((4 - Local_112.f_115) * Global_262145.f_15505);
}

void func_438(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_624(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_623(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_622(iParam0, bParam3));
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
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_620(iParam0))
	{
		if (bParam1)
		{
			if (func_619(unk_0x7C7787D2D7139A85()) > 0)
			{
				func_618();
			}
			else
			{
				func_617();
			}
		}
		else
		{
			func_616();
		}
	}
	func_600(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_598(iParam0, uParam2, &iVar0, &iVar5);
	func_576(iParam0, uParam2, &iVar0, &iVar5);
	func_562(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_545(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = uVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_252();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_189(unk_0x7C7787D2D7139A85(), 0))
		{
			if (!func_76(unk_0x7C7787D2D7139A85(), iVar8, 1))
			{
				func_534(&iVar0, 1);
			}
		}
	}
	func_530(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_529();
		func_485(0, unk_0x0FA8183DAD2B3203(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_459(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_458(iParam0, iVar0);
		if (func_457(iParam0))
		{
			if (func_456(iParam0) > -1)
			{
				func_455(func_456(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_454(&Global_2459463, 0, 0);
	}
	if (func_123(unk_0x7C7787D2D7139A85()) || func_149(unk_0x7C7787D2D7139A85()))
	{
		func_445(iParam0);
	}
	if (func_318(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_323(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_406(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_404(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_402(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_322(iParam0))
	{
		if (func_444(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_440(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_439(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_395(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_441(func_442(unk_0x7C7787D2D7139A85()))))
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_442(int iParam0)
{
	if (func_104(iParam0) == 237 || func_104(iParam0) == 250)
	{
		return func_443(iParam0);
	}
	return -1;
}

int func_443(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_444(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_445(int iParam0)
{
	if (func_453(unk_0x7C7787D2D7139A85()) && func_452())
	{
		if (func_137(iParam0))
		{
			func_447(9639, -1);
		}
		else if (func_138(iParam0))
		{
			func_447(9641, -1);
		}
		else if (func_220(iParam0, 1))
		{
			func_447(9642, -1);
		}
		else if (func_446(iParam0))
		{
			func_447(9643, -1);
		}
	}
}

int func_446(int iParam0)
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

void func_447(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_451(iParam0, func_148(iParam1), 0);
	iVar0++;
	if (!func_450(iParam0))
	{
		func_449(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_448(iParam0, iVar0, iParam1, 1);
	}
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_148(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_148(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_148(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_148(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_148(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_148(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_148(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_148(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_148(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_148(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_148(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_148(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_148(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_148(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_148(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_148(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_148(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_148(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_148(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_148(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_148(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_148(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_148(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_148(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_148(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_148(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_148(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_148(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_148(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_148(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_148(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_148(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_148(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_148(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_148(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_450(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_451(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_452()
{
	return func_251(unk_0x7C7787D2D7139A85());
}

bool func_453(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_454(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x169A8AC9F93C2727();
		}
		else
		{
			*uParam0 = unk_0x50D85685589EFCBD();
		}
	}
	else
	{
		*uParam0 = unk_0x9B35D07DCD0F0B43();
	}
	uParam0->f_1 = 1;
}

void func_455(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!unk_0xE434AB6E3DE89861() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

int func_456(int iParam0)
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

int func_457(int iParam0)
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

void func_458(int iParam0, int iParam1)
{
	if (func_453(unk_0x7C7787D2D7139A85()) && func_452())
	{
		if (func_137(iParam0) && iParam1 > 0)
		{
			func_449(9640, (func_451(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_484();
	if (iVar5 != func_65())
	{
		func_483(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_482(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_481())
			{
				unk_0x2ACE96EE44008838(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_452())
			{
				if (!func_481())
				{
					Var7 = { func_480() };
					unk_0x6C9D0A5816B98431(iParam1, unk_0xA8C462EF7D9DC564(func_479(Var7.f_0)), func_478(Var7.f_0), iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_465())
			{
				if (!func_481())
				{
					unk_0x6C9D0A5816B98431(iParam1, unk_0xA8C462EF7D9DC564(func_479(func_464(unk_0x7C7787D2D7139A85()))), 5, iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_465())
			{
				if (!func_481())
				{
					iVar2 = func_460(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xAB824DE1EED6A559(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_481())
			{
				func_466(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0EC6A504BD3D7EA4(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_481())
			{
				func_466(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x8F6335EC176D3822(iParam1);
			}
			break;
		
		case 237:
			if (func_465())
			{
				if (!func_481())
				{
					unk_0x74CB6C09CF941DE2(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_481())
			{
				func_466(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x53FC55B55010CA0A(iParam1);
			}
			break;
		
		case 249:
			if (func_481())
			{
				func_466(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x037C8ED6248A20C2(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_481())
			{
				func_466(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x66CC1F86B0B49ECE(iParam1);
			}
			break;
		
		case 243:
			if (func_481())
			{
				func_466(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0E02BA4947E1A26A(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_481())
				{
					func_466(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_481())
			{
				func_466(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x70C95C7FFB2AA9AE(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_460(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_463(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_461(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_461(int iParam0, int iParam1)
{
	return (func_462(iParam0) * iParam1);
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_463(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_464(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_465()
{
	return func_122(unk_0x7C7787D2D7139A85());
}

void func_466(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_481())
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
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_467(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_467(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_467(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_467(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_467(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_481())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x10312E24AC503B38(func_19()) || unk_0x9F3230C03E32BA3F())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
		{
			*uParam0 = func_474(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_473(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_468(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_468(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_469(iParam0);
	}
}

void func_469(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_481())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_472(iParam0))
		{
			if (!bVar0)
			{
				unk_0x35669F69F99705F6();
			}
		}
		else if (!bVar0)
		{
			unk_0x7724338620CF87D3(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_470(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_470(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_471(&(uParam0->f_13));
	func_471(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_471(var uParam0)
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

int func_472(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_473(int iParam0, var uParam1)
{
	Global_2461338 = uParam1;
	Global_2461337 = iParam0;
}

int func_474(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_481())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = unk_0xB3EE417AD9F0CAA2();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_475(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_475(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1969967074;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = { Param0.f_65 };
	Var0.f_2.f_32 = iParam84;
	iVar35 = func_477(Var0.f_1);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_476();
		unk_0x990C4E4B3665A4D6(1, &Var0, 35, iVar35);
	}
}

void func_476()
{
	unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_477(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
	}
	return uVar0;
}

int func_478(int iParam0)
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

char* func_479(int iParam0)
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

struct<2> func_480()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_193;
}

int func_481()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

bool func_482(bool bParam0)
{
	return func_189(unk_0x7C7787D2D7139A85(), bParam0);
}

void func_483(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_484()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11;
}

int func_485(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_486(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_486(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_496(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x4625051E51BA911B(iParam1))
			{
				uVar1 = unk_0x3D464779B732760F(iParam1);
				func_492(unk_0x0E516C24C87F5D0C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_487(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_487(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_490(iParam0, 1) };
	if (iParam0 == func_489(unk_0x0FA8183DAD2B3203()))
	{
		func_488(1);
	}
	func_492(Var0, iParam1, 0, sParam2, iParam3);
}

void func_488(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_489(var uParam0)
{
	return uParam0;
}

Vector3 func_490(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x80022561D13932C8())
	{
		Var3 = { unk_0x521C180E8FDEB978(2) };
	}
	if (iParam0 == func_491(unk_0x0FA8183DAD2B3203()) && unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
	{
		Var0 = { unk_0xC12F91346EA13947(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		fVar6 = unk_0xD2809C7F7FD79247(iParam0);
		if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x16DECC52D9360F1E(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_491(var uParam0)
{
	return uParam0;
}

void func_492(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { Param0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_495(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = unk_0x169A8AC9F93C2727();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_494();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_493();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam6);
		}
	}
}

int func_493()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_494()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_495(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xD34AF93E9BCF12F0(unk_0xEB9451CD6AC51B04(), Param0, 1);
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

var func_496(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_497(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_497(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_528(unk_0x7C7787D2D7139A85()) || func_527(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_239() || func_526(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_376())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_525(uParam2))
	{
	}
	if (func_524())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_522(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_521(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_519(0, &iVar1);
					break;
				
				case 3:
					func_519(1, &iVar1);
					break;
				
				case 1:
					func_517(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
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
			func_516(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_507((func_514(unk_0x7C7787D2D7139A85(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x9DF8487FF4AABAFE(iVar1, iParam8, iParam9);
				if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_2 != -1)
				{
					func_516(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_502(iVar1);
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
				func_498((func_500(unk_0x7C7787D2D7139A85()) + iVar1));
			}
			else
			{
				func_498((func_500(unk_0x7C7787D2D7139A85()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_498(int iParam0)
{
	if (func_524())
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_5 = iParam0;
		func_499(joaat("mpply_globalxp"), iParam0);
	}
}

void func_499(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
}

int func_500(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1000(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return func_501(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_501(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_501(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_502(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_67(unk_0x7C7787D2D7139A85()) };
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(&Var0))
		{
			iVar13 = func_505(func_506(&Var0));
			if (iVar13 == 0)
			{
				func_504(&Global_1384134, iParam0);
				func_503(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_504(&Global_1384135, iParam0);
				func_503(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_504(&Global_1384136, iParam0);
				func_503(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_504(&Global_1384137, iParam0);
				func_503(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_504(&Global_1384138, iParam0);
				func_503(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_504(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_505(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_506(var uParam0)
{
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

void func_507(int iParam0, int iParam1, int iParam2)
{
	if (func_524())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_148(-1)])
				{
					unk_0x9DF8487FF4AABAFE(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_148(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_513(unk_0x7C7787D2D7139A85()))
		{
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_6 = func_511(iParam0, 1);
		}
		func_448(639, iParam0, -1, 1);
		func_449(640, func_511(iParam0, 1), -1, 1, 0);
		Global_1384279[func_148(-1)] = iParam0;
		func_508(-1109644434, 7, 0);
	}
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_510(iParam1, iParam2))
	{
		iVar0 = func_509();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_509()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_510(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_511(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_512(iParam0, 0);
}

int func_512(int iParam0, int iParam1)
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
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
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

int func_513(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_514(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_515(iParam0);
}

int func_515(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return Global_1384279[func_148(-1)];
			}
			else if (func_513(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_148(-1)];
	}
	return 0;
}

void func_516(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_451(iParam0, func_148(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_450(iParam0))
	{
		func_449(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_448(iParam0, iVar0, iParam2, 1);
	}
}

void func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
	iVar0 = 0;
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		iVar4 = unk_0x9DBE48BD26DE1888(iVar0);
		if (unk_0x2700CB8907086DF3(iVar4))
		{
			iVar5 = unk_0xD7EB9DC48246DA95(iVar4);
			if (unk_0xC69A85EEB9CA3B95(iVar5) != -1)
			{
				if (unk_0xC69A85EEB9CA3B95(iVar5) == iVar1 || func_366(unk_0xC69A85EEB9CA3B95(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x7C7787D2D7139A85())
					{
						if (func_68(unk_0x7C7787D2D7139A85(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_518(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_518(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_518(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_519(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xACF7D965CEBE5714())
		{
			iVar3 = iVar0;
			if (unk_0x2700CB8907086DF3(iVar3))
			{
				iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
				if (func_1000(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x7C7787D2D7139A85())
					{
						iVar1++;
						if (func_68(unk_0x7C7787D2D7139A85(), iVar4))
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
			if (func_1000(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x7C7787D2D7139A85())
				{
					if (func_520(unk_0x7C7787D2D7139A85(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(unk_0x7C7787D2D7139A85(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_518(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_518(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_520(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_521(int iParam0)
{
	int iVar0;
	
	if (unk_0x2909109C6CD2EDDA() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_518(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_522(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x25A1A0BF87F74E56(iParam0) > func_514(unk_0x7C7787D2D7139A85(), 1))
		{
			iParam0 = -func_514(unk_0x7C7787D2D7139A85(), 1);
		}
	}
	if (func_523(8000, 0, 0) > 0)
	{
		if (func_523(8000, 0, 0) < (iParam0 + func_514(unk_0x7C7787D2D7139A85(), 1)))
		{
			iParam0 = (func_523(8000, 0, 0) - func_514(unk_0x7C7787D2D7139A85(), 1));
		}
	}
	return iParam0;
}

int func_523(int iParam0, bool bParam1, int iParam2)
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
	return Global_290594[iParam0];
}

int func_524()
{
	return 1;
}

int func_525(var uParam0)
{
	if (unk_0x79FCE4565761C974(uParam0))
	{
		return 1;
	}
	else if (unk_0x2553916E420E8EF0(uParam0, "") || unk_0x2553916E420E8EF0(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	return func_402(func_104(iParam0));
}

bool func_527(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_528(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_529()
{
	Global_2460540 = 1;
}

void func_530(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_533(iParam0);
	iVar1 = func_532(iParam0);
	iVar2 = unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(Global_2531497.f_4898.f_263, unk_0x169A8AC9F93C2727()));
	if (func_531(iParam0) != -1)
	{
		if (iVar2 > func_531(iParam0))
		{
			iVar2 = func_531(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_531(int iParam0)
{
	if (func_220(iParam0, 0) || func_138(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_137(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_465())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_465())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_465())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_465())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_465())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_465())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_465())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_465())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_465())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_465())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_465())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_249(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_249(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_249(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_249(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_249(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_249(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_249(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_249(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_249(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_249(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_249(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_249(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_249(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_534(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_465())
		{
			if (func_482(0))
			{
				if (!func_249(0))
				{
					if (unk_0xD56C8C2B75BF9665(func_484()))
					{
						if (func_544() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_544());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_542(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_539("GB_BCUT_TICK1", func_484(), iVar0, 0, 0, 1, 1);
						}
						func_538(20);
						func_535(func_484(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_535(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1000(iParam0, 0, 1))
	{
		Var0.f_0 = -1590759069;
		Var0.f_1 = unk_0x7C7787D2D7139A85();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_537(iParam0);
		func_536(&(Var0.f_6), &(Var0.f_7));
		unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_477(iParam0));
	}
}

void func_536(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_537(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_538(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_539(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		if (unk_0x9591DE0F00127F2A(&Var1))
		{
		}
		unk_0x6C607B5286DEE8D9(sParam0);
		unk_0xEB6F6B8EBD6B6648(func_359(iParam1, -2, 1, 0, 0));
		unk_0xA89C789CC9FEF523(func_540(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xEB6F6B8EBD6B6648(iParam3);
		}
		unk_0x6A8B3CC08A759F44(iParam2);
		iVar0 = unk_0x6E617E0C74B3189D(0, 1);
		func_304(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_540(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_541(&cVar0);
}

var func_541(char[4] cParam0)
{
	return cParam0;
}

void func_542(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_543(1);
	}
	else
	{
		iVar1 = func_543(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_543(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_544()
{
	return Global_262145.f_12389;
}

void func_545(int iParam0, var uParam1, int iParam2, var uParam3)
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
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_249(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_465())
		{
			iVar17 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar17 = func_484();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar13 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_561(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_560(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x7C7787D2D7139A85())
				{
					func_559("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == unk_0x7C7787D2D7139A85())
			{
				if (iVar2 > 0)
				{
					func_558(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_556(*uParam3);
				}
				iVar6 = func_555(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_538(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xACF7D965CEBE5714())
						{
							iVar22 = iVar21;
							if (unk_0x2700CB8907086DF3(iVar22))
							{
								iVar23 = unk_0xD7EB9DC48246DA95(iVar22);
								if (func_554(iVar23))
								{
									func_546(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_538(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_546(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_548(iParam0);
	func_547(iParam0, uVar0, iParam1, iParam2);
}

void func_547(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = -1548391120;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_537(iParam0);
	func_536(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_477(iParam0));
		}
	}
}

int func_548(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_553();
	iVar0 = func_551(iParam0, iVar0);
	iVar1 = Global_1628955[func_484() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_550())
	{
		iVar0 = func_550();
	}
	if (iVar0 > func_549())
	{
		iVar0 = func_549();
	}
	return iVar0;
}

int func_549()
{
	return Global_262145.f_14944;
}

int func_550()
{
	return Global_262145.f_16119;
}

int func_551(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_619(iParam0) * func_552());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_552()
{
	return Global_262145.f_16118;
}

var func_553()
{
	return Global_262145.f_12381;
}

int func_554(int iParam0)
{
	if (unk_0xD56C8C2B75BF9665(iParam0))
	{
		if (iParam0 != unk_0x7C7787D2D7139A85())
		{
			if (func_76(iParam0, unk_0x7C7787D2D7139A85(), 0))
			{
				if (!func_108(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_555(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xD56C8C2B75BF9665(unk_0x0C98179F08C6DA4F(iVar0)))
		{
			iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
			if (!func_17(iVar2, 0) && !func_76(iVar2, unk_0x7C7787D2D7139A85(), 1))
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

void func_556(int iParam0)
{
	func_557(iParam0, 7236);
}

void func_557(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_451(iParam1, -1, 0);
	func_449(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_558(int iParam0)
{
	func_557(iParam0, 7231);
}

int func_559(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x6C607B5286DEE8D9(sParam0);
	unk_0x6A8B3CC08A759F44(iParam1);
	iVar0 = unk_0x6E617E0C74B3189D(0, 1);
	func_304(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_560(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_561(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (unk_0xBBDA792448DB5A89(iParam5) / unk_0xBBDA792448DB5A89(Param0.f_1));
	fVar2 = unk_0xBBDA792448DB5A89(iVar0);
	return unk_0xF34EE736CF047844((fVar2 * fVar1));
}

void func_562(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_249(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_465())
		{
			iVar15 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar15 = func_484();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_574(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_565(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_461(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_460(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_564(*iParam2) > 0)
			{
				if (iVar15 == unk_0x7C7787D2D7139A85())
				{
					func_559("SMTICK_RONCUT", func_564(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_564(*iParam2));
			}
			if (iVar15 == unk_0x7C7787D2D7139A85())
			{
				func_563(iVar2, iVar9);
				iVar6 = func_555(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_538(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xACF7D965CEBE5714())
						{
							iVar19 = iVar18;
							if (unk_0x2700CB8907086DF3(iVar19))
							{
								iVar20 = unk_0xD7EB9DC48246DA95(iVar19);
								if (func_554(iVar20))
								{
									func_546(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_538(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_563(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_557(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_557(iParam1, 6117);
	}
}

int func_564(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_22278))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22278);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_565(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_572())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_574(unk_0x7C7787D2D7139A85());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_567(func_568(func_571(iVar0), -1, -1));
		if (func_566(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_566(int iParam0)
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

int func_567(int iParam0)
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

int func_568(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_570(iParam0, iParam1);
	uVar2 = func_569(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_569(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_570(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

int func_571(int iParam0)
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

bool func_572()
{
	return func_573() != 0;
}

int func_573()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_260;
}

int func_574(int iParam0)
{
	if (iParam0 != func_65() && func_575(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_575(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_576(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_249(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_465())
		{
			iVar15 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar15 = func_484();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_464(iVar15);
			iVar0 = (func_597(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_593(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x7C7787D2D7139A85())
			{
				func_590(iVar16, iVar2);
				if (func_586(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_577(5);
				}
				iVar6 = func_555(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_538(108);
					}
					else
					{
						func_538(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xACF7D965CEBE5714())
						{
							iVar19 = iVar18;
							if (unk_0x2700CB8907086DF3(iVar19))
							{
								iVar20 = unk_0xD7EB9DC48246DA95(iVar19);
								if (func_554(iVar20))
								{
									func_546(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_538(112);
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

void func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_579(Global_262145.f_20560))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_579(Global_262145.f_20562))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_579(Global_262145.f_20564))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_579(Global_262145.f_20566))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_579(Global_262145.f_20568))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_579(Global_262145.f_20570))
				{
					func_559("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_579(Global_262145.f_20573))
				{
					func_559("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_579(Global_262145.f_20576))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_579(Global_262145.f_20578))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_579(Global_262145.f_20580))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_579(Global_262145.f_20582))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_579(Global_262145.f_20584))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_579(Global_262145.f_20586))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_579(Global_262145.f_20588))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_579(Global_262145.f_20590))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_578(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x6C607B5286DEE8D9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam3);
	}
	unk_0x0AC9F8E1AFCEC860(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x6E617E0C74B3189D(0, 1);
	}
	else
	{
		Global_2507671 = { func_67(unk_0x7C7787D2D7139A85()) };
		if (unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (unk_0x2553916E420E8EF0(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xE21FC82BE47E6523(iVar2, unk_0xEF4D2307E13798BF(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = unk_0x6E617E0C74B3189D(0, 1);
		}
	}
	func_304(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_583(15417, -1, -1))
			{
				func_582(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_583(15418, -1, -1))
			{
				func_582(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_583(15425, -1, -1))
			{
				func_582(15425, 1, -1, 1);
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
			if (!func_583(15405, -1, -1))
			{
				func_582(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_583(15393, -1, -1))
			{
				func_582(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_583(15409, -1, -1))
			{
				func_582(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_583(15396, -1, -1))
			{
				func_582(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_583(15412, -1, -1))
			{
				func_582(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_583(15403, -1, -1))
			{
				func_582(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_583(15389, -1, -1))
			{
				func_582(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_583(15398, -1, -1))
			{
				func_582(15398, 1, -1, 1);
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
			if (!func_583(15400, -1, -1))
			{
				func_582(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_583(15408, -1, -1))
			{
				func_582(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_583(15411, -1, -1))
			{
				func_582(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_583(15397, -1, -1))
			{
				func_582(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_583(15413, -1, -1))
			{
				func_582(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_583(15391, -1, -1))
			{
				func_582(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_583(15388, -1, -1))
			{
				func_582(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_583(15401, -1, -1))
			{
				func_582(15401, 1, -1, 1);
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
			if (!func_583(15394, -1, -1))
			{
				func_582(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_583(15406, -1, -1))
			{
				func_582(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_583(15395, -1, -1))
			{
				func_582(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_583(15410, -1, -1))
			{
				func_582(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_583(15407, -1, -1))
			{
				func_582(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_583(15414, -1, -1))
			{
				func_582(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_583(15415, -1, -1))
			{
				func_582(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_583(15399, -1, -1))
			{
				func_582(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_583(15404, -1, -1))
			{
				func_582(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_583(15392, -1, -1))
			{
				func_582(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_583(15390, -1, -1))
			{
				func_582(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_583(15402, -1, -1))
			{
				func_582(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_583(15416, -1, -1))
			{
				func_582(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
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
			if (!func_583(15426, -1, -1))
			{
				func_582(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_583(15422, -1, -1))
			{
				func_582(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_583(15423, -1, -1))
			{
				func_582(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_583(15421, -1, -1))
			{
				func_582(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_583(15427, -1, -1))
			{
				func_582(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_583(15419, -1, -1))
			{
				func_582(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_583(15420, -1, -1))
			{
				func_582(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_580(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_581())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_148(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0EC7EA43028EE330(iVar0, iParam1, iParam3);
		}
	}
}

int func_581()
{
	return 1;
	return 0;
}

int func_582(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_585(iParam0, iParam1);
	uVar2 = func_584(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_584(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_585(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_586(int iParam0)
{
	int iVar0;
	
	iVar0 = func_588(iParam0);
	return func_451(func_587(iVar0), -1, 0);
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_588(int iParam0)
{
	int iVar0;
	
	if (func_589(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_589(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_588(iParam0);
	iVar1 = func_587(iVar0);
	iVar2 = (func_451(iVar1, -1, 0) + iParam1);
	func_449(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_568(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_587(iVar0);
				iVar3 = (iVar3 + func_451(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_592(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_591(9357, iVar5, -1, 1);
	}
}

var func_591(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x49DD5185FB090323(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_592(int iParam0)
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

int func_593(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_478(iParam1);
	if (func_589(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_594(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_596(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_595(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_589(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_596(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_589(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_597(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_598(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_452())
			{
				Var0 = { func_480() };
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
				iVar7 = func_593(unk_0x7C7787D2D7139A85(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_18583);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_18582);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_555(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_18573);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_18572));
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
					func_538(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_249(0))
			{
				Var15 = { func_599(func_484()) };
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
				iVar22 = func_593(func_484(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_18583));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18622;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18623;
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

struct<2> func_599(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_600(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_122(unk_0x7C7787D2D7139A85()))
		{
			if (bParam1)
			{
				func_615();
			}
			func_614();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_122(unk_0x7C7787D2D7139A85()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_606(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_605(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_555(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_538(44);
					}
				}
				func_603(*iParam3);
				func_602();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xACF7D965CEBE5714())
				{
					iVar8 = iVar7;
					if (unk_0x2700CB8907086DF3(iVar8))
					{
						iVar9 = unk_0xD7EB9DC48246DA95(iVar8);
						if (func_554(iVar9))
						{
							func_546(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_122(unk_0x7C7787D2D7139A85()))
		{
			func_601();
		}
	}
}

void func_601()
{
	int iVar0;
	
	iVar0 = Global_2578770[func_19()];
	iVar0++;
	func_448(3667, iVar0, -1, 1);
}

void func_602()
{
	int iVar0;
	
	iVar0 = Global_2578776[func_19()];
	iVar0++;
	func_448(3666, iVar0, -1, 1);
}

void func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_448(3668, iVar0, -1, 1);
	if (func_568(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_604(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_591(7666, iVar2, -1, 1);
	}
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_605(int iParam0)
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_606(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_613(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_612(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_611(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_607(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_607(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_611(unk_0xBAC643F143880136(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_607(int iParam0)
{
	int iVar0;
	
	if (func_610(iParam0))
	{
		iVar0 = func_608(func_609(iParam0));
		return func_451(iVar0, -1, 0);
	}
	return 0;
}

int func_608(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (func_610(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_610(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_611(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_612(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_610(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_613(int iParam0)
{
	int iVar0;
	
	if (func_610(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_614()
{
	int iVar0;
	
	iVar0 = Global_2578767[func_19()];
	iVar0++;
	Global_2578767[func_19()] = iVar0;
	func_448(3665, iVar0, -1, 1);
}

void func_615()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_19()];
	iVar1 = Global_2578773[func_19()];
	iVar0++;
	iVar1++;
	Global_2578764[func_19()] = iVar0;
	Global_2578773[func_19()] = iVar1;
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_124 = iVar1;
	func_448(3663, iVar0, -1, 1);
	func_448(3664, iVar1, -1, 1);
}

void func_616()
{
	if (func_465())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_617()
{
	if (func_465())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_618()
{
	if (func_465())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_619(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_620(int iParam0)
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
		case 237:
		case 158:
			if (func_482(1) && !func_249(1))
			{
				if (func_621(func_484()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_621(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_622(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_623(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_465())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_465())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_465() && !func_452())
			{
				if (func_621(unk_0x7C7787D2D7139A85()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_452())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_624(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_625(iParam0))
	{
		if (!func_465())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_189(unk_0x7C7787D2D7139A85(), 1))
	{
		if (func_318(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_318(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_252();
	if (iVar0 != func_65())
	{
		if (func_76(unk_0x7C7787D2D7139A85(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_625(int iParam0)
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

int func_626()
{
	return (Local_112.f_115 * Global_262145.f_15014);
}

int func_627()
{
	return (Local_112.f_115 * Global_262145.f_15013);
}

void func_628(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x393E9918BC37548A())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_181(unk_0x7C7787D2D7139A85());
		Global_1675140.f_4 = func_737();
		Global_1675140.f_5 = func_736();
		if (func_128(unk_0x7C7787D2D7139A85()) || func_129(unk_0x7C7787D2D7139A85()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_732(bParam9);
		Global_1675140.f_8 = unk_0x71EC776E812C6A0A();
		Global_1675140.f_9 = func_731(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_730();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675140.f_23 = func_731(func_249(1));
		}
		Global_1675140.f_24 = func_729(unk_0x7C7787D2D7139A85());
		Global_1675140.f_28 = func_728(unk_0x7C7787D2D7139A85());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_726(iVar0);
	}
	else
	{
		iVar0 = func_104(unk_0x7C7787D2D7139A85());
	}
	if (func_318(iVar0))
	{
		Global_1674879.f_2 = func_737();
		Global_1674879.f_3 = func_736();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = unk_0x71EC776E812C6A0A();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_722(iVar0, bParam0, func_725(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_721(func_484(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_720(func_484(), iParam2);
		}
		func_718(iVar0);
	}
	else if (func_323(iVar0))
	{
		Global_1674933.f_2 = func_737();
		Global_1674933.f_3 = func_736();
		Global_1674933.f_10 = unk_0x71EC776E812C6A0A();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_716(iVar0);
	}
	else if (func_406(iVar0))
	{
		Global_1674996.f_2 = func_737();
		Global_1674996.f_3 = func_736();
		Global_1674996.f_9 = unk_0x71EC776E812C6A0A();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_730();
		Global_1674996.f_42 = func_714(func_19(), 5);
		iVar1 = unk_0x7C7787D2D7139A85();
		iVar2 = func_464(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_731((func_713(iVar1) || func_712(iVar1)));
		Global_1674996.f_30 = func_731(func_711(iVar1));
		Global_1674996.f_32 = func_731(func_710(iVar1));
		Global_1674996.f_33 = func_731(func_709(iVar1));
		Global_1674996.f_34 = func_731(func_708(iVar1));
		Global_1674996.f_35 = func_731(func_707(0, iVar1) == 1);
		Global_1674996.f_36 = func_731(func_706(iVar1));
		Global_1674996.f_37 = func_731(func_705(iVar1));
		Global_1674996.f_38 = func_731(func_704(iVar1));
		Global_1674996.f_39 = func_731(func_594(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_731(func_594(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_731(func_594(iVar1, iVar2, 1));
		if (func_703(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_702(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_700(iVar0);
	}
	else if (func_404(iVar0))
	{
		Global_1675040.f_2 = func_737();
		Global_1675040.f_3 = func_736();
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = unk_0x71EC776E812C6A0A();
		Global_1675040.f_10 = func_731(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_699(func_252());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_698();
		Global_1675040.f_29 = func_451(6107, -1, 0);
		Global_1675040.f_30 = func_451(6103, -1, 0);
		Global_1675040.f_31 = func_451(6104, -1, 0);
		Global_1675040.f_32 = func_451(6106, -1, 0);
		Global_1675040.f_33 = func_451(6105, -1, 0);
		Global_1675040.f_34 = func_451(6108, -1, 0);
		Global_1675040.f_36 = func_731(func_249(1));
		Global_1675040.f_37 = func_696();
		func_682();
		func_680(iVar0);
	}
	else if (func_402(iVar0))
	{
		Global_1675094.f_2 = func_737();
		Global_1675094.f_3 = func_736();
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = unk_0x71EC776E812C6A0A();
		Global_1675094.f_10 = func_731(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_451(6157, -1, 0);
		Global_1675094.f_25 = func_451(6162, -1, 0);
		Global_1675094.f_26 = func_451(6163, -1, 0);
		Global_1675094.f_27 = func_731((((func_679() || func_678()) || func_677()) || func_676(unk_0x7C7787D2D7139A85())));
		Global_1675094.f_28 = func_451(6164, -1, 0);
		Global_1675094.f_29 = func_731(func_675());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_737();
		Global_1675094.f_42 = func_731(func_249(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_673(iVar0);
	}
	else if (func_440(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_737();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_736();
		}
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_732(0);
		Global_1675228.f_7 = func_730();
		Global_1675228.f_9 = unk_0x71EC776E812C6A0A();
		Global_1675228.f_10 = func_731(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_484() != -1)
		{
			Global_1675228.f_17 = func_672(func_484());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_728(unk_0x7C7787D2D7139A85());
		Global_1675228.f_29 = func_731(func_671(unk_0x7C7787D2D7139A85()));
		Global_1675228.f_30 = func_731(func_670(unk_0x7C7787D2D7139A85()));
		Global_1675228.f_31 = func_669(unk_0x7C7787D2D7139A85());
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675228.f_33 = func_731(func_249(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_667(iVar0);
	}
	else if (func_444(iVar0))
	{
		Global_1675175.f_2 = func_737();
		Global_1675175.f_3 = func_736();
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_732(0);
		Global_1675175.f_9 = unk_0x71EC776E812C6A0A();
		Global_1675175.f_10 = func_731(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_728(unk_0x7C7787D2D7139A85());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_666(unk_0x7C7787D2D7139A85());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_650(unk_0x7C7787D2D7139A85(), 4, -1);
		Global_1675175.f_31 = func_669(unk_0x7C7787D2D7139A85());
		Global_1675175.f_32 = func_731(func_649(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_33 = func_731(func_648(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_34 = func_731(func_647(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_35 = func_731(func_646(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_36 = func_645(unk_0x7C7787D2D7139A85());
		Global_1675175.f_37 = func_644(unk_0x7C7787D2D7139A85());
		Global_1675175.f_39 = func_643(unk_0x7C7787D2D7139A85());
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675175.f_41 = func_731(func_249(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_641(iVar0);
	}
	else if (func_439(iVar0))
	{
		Global_1675312.f_2 = func_737();
		Global_1675312.f_3 = func_736();
		Global_1675312.f_4 = func_640(func_484());
		Global_1675312.f_5 = func_639(func_484());
		if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_730();
		Global_1675312.f_9 = unk_0x71EC776E812C6A0A();
		Global_1675312.f_10 = func_731(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_252() != -1)
		{
			Global_1675312.f_17 = func_672(func_252());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_638(unk_0x7C7787D2D7139A85());
		Global_1675312.f_27 = func_731(func_637(unk_0x7C7787D2D7139A85()));
		Global_1675312.f_28 = func_634(21, -1);
		Global_1675312.f_29 = func_731(func_633(unk_0x7C7787D2D7139A85()));
		func_631(iVar0);
	}
	else if (func_395(iVar0))
	{
		Global_1675387.f_6 = func_640(func_484());
		Global_1675387.f_7 = func_639(func_484());
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675387.f_8 = func_731(func_249(1));
		}
		Global_1675387.f_10 = func_730();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (unk_0x71EC776E812C6A0A() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_629(iVar0);
	}
	else
	{
		Global_1674861.f_6 = unk_0x71EC776E812C6A0A();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = iParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_123(unk_0x7C7787D2D7139A85()) || func_141(unk_0x7C7787D2D7139A85())) || func_149(unk_0x7C7787D2D7139A85()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_629(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_630();
}

void func_630()
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_631(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x2BCB3EBCFE5801C6(&Global_1675312);
	func_632();
}

void func_632()
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_633(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_636(iParam0);
		if (iVar1 == 0 && func_451(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_635(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_728(unk_0x7C7787D2D7139A85()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_635(int iParam0)
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_451(7207, iParam0, 0) != 0;
}

int func_636(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_637(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_638(int iParam0)
{
	if (func_104(iParam0) == 243)
	{
		return func_443(iParam0);
	}
	return -1;
}

int func_639(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_640(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_641(int iParam0)
{
	unk_0xD692448604CBDB2E(&Global_1675175);
	func_642();
}

void func_642()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
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
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
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
	Global_1675175 = { Var0 };
}

int func_643(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_644(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_645(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_646(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_647(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_648(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_649(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

int func_650(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_65() || !func_665(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_660(iParam0, iParam2);
		
		case 1:
			return func_658(iParam0, iParam2);
		
		case 3:
			return func_657(iParam0);
		
		case 2:
			return func_652(iParam0, iParam2);
		
		case 4:
			return func_651(iParam0);
		
		default:
	}
	return 0;
}

bool func_651(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_652(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_656(iParam0);
		
		case 11:
			return func_655(iParam0);
		
		case 12:
			return func_654(iParam0);
		
		case 13:
			return func_653(iParam0);
		
		default:
	}
	return 0;
}

bool func_653(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_654(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_655(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_656(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_657(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_658(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_659(iParam0);
		
		case 6:
			return func_649(iParam0);
		
		case 7:
			return func_648(iParam0);
		
		case 8:
			return func_647(iParam0);
		
		case 9:
			return func_646(iParam0);
		
		default:
	}
	return 0;
}

bool func_659(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_660(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_664(iParam0);
		
		case 1:
			return func_663(iParam0);
		
		case 2:
			return func_662(iParam0);
		
		case 3:
			return func_661(iParam0);
		
		case 4:
			return func_669(iParam0);
		
		default:
	}
	return 0;
}

bool func_661(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_662(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_663(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_664(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_665(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_666(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_650(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_650(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_650(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_650(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_667(int iParam0)
{
	unk_0x80C4EA5DD29F8179(&Global_1675228);
	func_668();
}

void func_668()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_669(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

bool func_670(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_671(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

var func_672(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_673(int iParam0)
{
	unk_0x235A09C5234D2052(&Global_1675094);
	func_674();
}

void func_674()
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
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

bool func_675()
{
	return func_451(6156, -1, 0) != 0;
}

int func_676(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_677()
{
	return func_451(6164, -1, 0) == 3;
}

bool func_678()
{
	return func_451(6164, -1, 0) == 2;
}

bool func_679()
{
	return func_451(6164, -1, 0) == 1;
}

void func_680(int iParam0)
{
	unk_0x3D70A0F6BB0C3A56(&Global_1675040);
	func_681();
}

void func_681()
{
	struct<54> Var0;
	
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
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_682()
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
		iVar2 = (iVar0 + func_693(12));
		func_692(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_684(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_683(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_683(int iParam0)
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
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_684(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7576BED9351136C1(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x393E9918BC37548A()) || (iParam0 == joaat("buffalo3") && !unk_0x393E9918BC37548A())) || (iParam0 == joaat("gauntlet2") && !unk_0x393E9918BC37548A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x393E9918BC37548A()))
	{
		if (!func_691())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x77B48D1493D695CC())
		{
			if (unk_0x100A6954526E9D29(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC095980A527DC92E(Var1.f_0))
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
		if ((((!func_690() && !func_689()) && !func_688()) && !func_687()) && !func_691())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
		{
		}
		else if (!func_688())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_686(iParam0))
		{
			return 0;
		}
	}
	if (!func_685(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_685(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_481())
	{
		return 1;
	}
	unk_0xF6DFB55D0FF92B17(&iVar0, &uVar1);
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
	if (!unk_0x83F1366905AB3447(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x71EC776E812C6A0A();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_687()
{
	return 0;
}

int func_688()
{
	return 1;
}

int func_689()
{
	return 1;
}

int func_690()
{
	if (unk_0x9742C47C6EA02281(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_691()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					iVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&iVar0, 0);
					unk_0x553DEB79071ABB59(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_692(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xB3EE417AD9F0CAA2() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_693(int iParam0)
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
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_636(iParam0);
		return func_695(iVar0);
	}
	return (func_694(iParam0, -1) * iParam0);
}

int func_694(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_412(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_418(iParam1))
			{
				return 0;
			}
			else if (func_410(iParam1, -1))
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
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049852[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 10)
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
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_696()
{
	var uVar0;
	
	uVar0 = func_697();
	if (!func_465())
	{
		if (func_484() != func_65())
		{
			uVar0 = func_729(func_484()) + 1;
		}
	}
	return uVar0;
}

int func_697()
{
	return func_729(unk_0x7C7787D2D7139A85()) + 1;
}

int func_698()
{
	return func_451(6113, -1, 0);
}

int func_699(int iParam0)
{
	if (func_189(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

void func_700(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x32DBE7FC2B8E7F17(&Global_1674996);
	func_701();
}

void func_701()
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_702(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_703(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_704(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_705(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_706(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (((((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_707(int iParam0, int iParam1)
{
	if (iParam1 == func_65())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_708(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_709(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_710(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_711(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

bool func_712(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_713(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_714(int iParam0, int iParam1)
{
	return func_451(func_715(iParam1), iParam0, 0);
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_716(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x390668B038D14C84(&Global_1674933);
	func_717();
}

void func_717()
{
	struct<63> Var0;
	
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
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_718(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x23049CCBE5022DFE(&Global_1674879);
	func_719();
}

void func_719()
{
	struct<54> Var0;
	
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
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_720(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_594(iParam0, iParam1, 2);
	bVar1 = func_594(iParam0, iParam1, 1);
	bVar2 = func_594(iParam0, iParam1, 0);
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

int func_721(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_722(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_137(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_408(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_220(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_318(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xDB1AFF9A917064AA(func_640(func_484()), func_639(func_484()), func_737(), func_736(), iVar1, iVar0);
	}
	func_724(iVar0);
	func_723(iVar0);
	return iVar0;
}

void func_723(int iParam0)
{
	int iVar0;
	
	iVar0 = func_451(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_490 = iVar0;
	func_449(3968, iVar0, -1, 1, 0);
}

void func_724(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_725(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_123(unk_0x7C7787D2D7139A85()) || func_149(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

void func_726(var uParam0)
{
	unk_0xB071C331536BE329(&Global_1675140);
	func_727();
}

void func_727()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_728(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_729(int iParam0)
{
	if (func_66(iParam0) == func_65())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_730()
{
	int iVar0;
	
	if (func_452())
	{
		return 4;
	}
	else if (func_465())
	{
		if (func_621(unk_0x7C7787D2D7139A85()))
		{
			return 8;
		}
		return 6;
	}
	if (func_249(1))
	{
		iVar0 = func_699(unk_0x7C7787D2D7139A85());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_482(1))
	{
		if (func_621(func_484()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_731(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_732(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_181(unk_0x7C7787D2D7139A85());
	}
	else
	{
		iVar0 = func_104(unk_0x7C7787D2D7139A85());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_735(unk_0x7C7787D2D7139A85());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_734(unk_0x7C7787D2D7139A85());
			if (func_441(func_442(unk_0x7C7787D2D7139A85())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_734(unk_0x7C7787D2D7139A85());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_733(unk_0x7C7787D2D7139A85());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_733(unk_0x7C7787D2D7139A85());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_733(int iParam0)
{
	if (func_104(unk_0x7C7787D2D7139A85()) == 238 || func_104(unk_0x7C7787D2D7139A85()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_734(int iParam0)
{
	if (func_104(unk_0x7C7787D2D7139A85()) == 237 || func_104(unk_0x7C7787D2D7139A85()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_735(int iParam0)
{
	if (func_181(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_736()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_737()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_738(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65();
	iVar1 = func_65();
	iVar2 = func_65();
	return func_739(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_739(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_383(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_228(&(Var0.f_69), 4);
	return func_347(&Var0);
}

int func_740(int iParam0)
{
	int iVar0;
	
	iVar0 = func_193(iParam0);
	if (iVar0 != -1)
	{
		return func_191(iVar0);
	}
	return 1;
}

char* func_741(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		uVar0 = func_431(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return uVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_120)
	{
		uVar0 = func_432(iParam0, 0);
		return uVar0;
	}
	if (((func_108(iParam0, 28) || func_108(unk_0x7C7787D2D7139A85(), 28)) || func_435(iParam0)) && !func_434(iParam0))
	{
		return func_432(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_65())
	{
		if (iVar1 != unk_0x7C7787D2D7139A85())
		{
			if (!unk_0x77BA37DB22C66465() && !unk_0x690CD141AD7C9F01(0, -1, 1))
			{
				return func_432(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_65())
	{
		uVar0 = func_431(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (unk_0x9591DE0F00127F2A(uVar0))
		{
			return func_432(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_888() && !func_299())
	{
		return;
	}
	if (!func_384())
	{
		return;
	}
	iVar0 = unk_0x7C7787D2D7139A85();
	if (func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	}
	iVar1 = func_140(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_112.f_847)))
	{
		iVar2 = (func_10() - func_756(&(Local_112.f_847), 0, 0));
		iVar3 = (func_755() - Local_112.f_115);
		func_753(iVar2);
		if (iVar2 > 30000)
		{
			func_743(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_743(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_743(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_743(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_751(0) == 0)
	{
		return;
	}
	func_750();
	func_747(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_525(sParam4))
	{
		sVar0 = sParam4;
	}
	func_744(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_744(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_746(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_745(7, iVar0);
		Global_1375006.f_4453[iVar0] = uParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = uParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = uParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_745(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_746(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

void func_747(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_746(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_745(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = iParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_749())
		{
			Global_1375006.f_1109 = 1;
		}
		if (unk_0xE434AB6E3DE89861())
		{
			iVar2 = 0;
			unk_0x419479F67BC2C70F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_748())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_748()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE434AB6E3DE89861())
	{
		unk_0x419479F67BC2C70F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_749()
{
	if (((unk_0xB859EDA9E476E45A() == 8 || unk_0xB859EDA9E476E45A() == 9) || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_750()
{
	unk_0x0AF55029F939BA65(8);
	unk_0x0AF55029F939BA65(9);
	unk_0x0AF55029F939BA65(6);
	unk_0x0AF55029F939BA65(7);
	Global_2460544 = 1;
}

int func_751(bool bParam0)
{
	if (func_752())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1000(unk_0x7C7787D2D7139A85(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_752()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 12);
}

void func_753(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 8))
	{
		func_754();
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x81995F6F93D8C987("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xA1E7A40E1F56E511(&iLocal_1434, 15);
				unk_0xA1E7A40E1F56E511(&iLocal_1434, 9);
				unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
				unk_0x597D844D285B9272(0);
				unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 11))
			{
				if (unk_0xF45B7CAEA9F06737("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xA1E7A40E1F56E511(&iLocal_1434, 11);
				}
			}
			else
			{
				unk_0xA2BC31158C8CEFD2(iLocal_1434, 11);
				if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 14))
				{
					if (unk_0x81995F6F93D8C987("APT_COUNTDOWN_30S"))
					{
						unk_0xA1E7A40E1F56E511(&iLocal_1434, 14);
					}
				}
			}
			if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 12))
					{
						unk_0x597D844D285B9272(1);
						unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
						unk_0xA1E7A40E1F56E511(&iLocal_1434, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x81995F6F93D8C987("APT_FADE_IN_RADIO"))
						{
							unk_0xDA121A208136850D("APT_COUNTDOWN_30S_KILL");
							unk_0x3B76114EC84D5812(&iLocal_1434, 9);
						}
					}
				}
			}
		}
	}
}

void func_754()
{
	if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 8))
	{
		if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 9))
		{
			if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 10))
			{
				if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 11))
				{
					if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 12))
					{
						unk_0x597D844D285B9272(1);
						unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
						unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 16))
				{
					if (unk_0x81995F6F93D8C987("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xA1E7A40E1F56E511(&iLocal_1434, 16);
					}
				}
				if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 16))
				{
					if (!unk_0xA2BC31158C8CEFD2(iLocal_1434, 13))
					{
						if (unk_0x81995F6F93D8C987("APT_FADE_IN_RADIO"))
						{
							unk_0xA1E7A40E1F56E511(&iLocal_1434, 13);
						}
					}
					if (unk_0xA2BC31158C8CEFD2(iLocal_1434, 13))
					{
						unk_0xA1E7A40E1F56E511(&iLocal_1434, 10);
					}
				}
			}
		}
	}
}

int func_755()
{
	return 4;
}

int func_756(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0);
		}
		else
		{
			return unk_0x675EE3FED67AA436(unk_0x50D85685589EFCBD(), *uParam0);
		}
	}
	return unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0);
}

void func_757()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0x7C7787D2D7139A85();
	iVar18 = unk_0x2E40EEA43EF34BD6();
	if (func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar18 = func_300();
		iVar17 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	}
	iVar19 = func_140(iVar17);
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		if (!func_384())
		{
			if (func_774("HUNT_OBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_OBJ1L"))
			{
				func_820();
			}
			if (func_774("HUNT_TOBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_DOBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_DOBJ1L"))
			{
				func_820();
			}
			return;
		}
	}
	else if (!unk_0xA2BC31158C8CEFD2(Local_984[iVar18 /*14*/].f_1, 6))
	{
		func_820();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_774("HUNT_OBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_OBJ1L"))
		{
			func_820();
		}
		if (func_774("HUNT_TOBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_DOBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_DOBJ1L"))
		{
			func_820();
		}
		return;
	}
	bVar20 = func_773() == true;
	if (iVar18 == Local_112.f_118)
	{
		if (!bVar20)
		{
			if (!func_774("HUNT_OBJ"))
			{
				func_770("HUNT_OBJ", 0);
			}
		}
		else if (!func_774("HUNT_OBJ1L"))
		{
			func_770("HUNT_OBJ1L", 0);
		}
	}
	else if (func_889() == Local_112.f_118)
	{
		if (!bVar20)
		{
			if (!func_774("HUNT_OBJ"))
			{
				func_770("HUNT_OBJ", 0);
			}
		}
		else if (!func_774("HUNT_OBJ1L"))
		{
			func_770("HUNT_OBJ1L", 0);
		}
	}
	else if (func_299())
	{
		if (Local_112.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_774("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_741(unk_0x0C98179F08C6DA4F(Local_112.f_119)), 64);
					iVar0 = func_740(unk_0x0C98179F08C6DA4F(Local_112.f_119));
					func_758("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_774("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_741(unk_0x0C98179F08C6DA4F(Local_112.f_119)), 64);
				iVar0 = func_740(unk_0x0C98179F08C6DA4F(Local_112.f_119));
				func_758("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_758(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_759(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_759(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	if (func_769(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_763();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_762();
	func_761(bParam2);
	func_760();
	return 1;
}

void func_760()
{
	unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 1);
}

void func_761(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_1312585.f_59), 0);
}

void func_762()
{
	Global_1312585.f_10 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
	Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
}

void func_763()
{
	func_765();
	func_764(0);
}

void func_764(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x393E9918BC37548A();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x169A8AC9F93C2727();
		Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_765()
{
	if (!func_768())
	{
	}
	if (func_767())
	{
		unk_0x8C952E99D90780F7(&(Global_1312585.f_12));
		func_766();
		unk_0xCC56AD222DA9A8C1();
	}
}

void func_766()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			unk_0x6A8B3CC08A759F44(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_767()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_768()
{
	if (!func_767())
	{
		return 0;
	}
	unk_0xC1A9801A23F32F8F(&(Global_1312585.f_12));
	func_766();
	return unk_0xCDD0AB887E3F6532();
}

bool func_769(char* sParam0, char* sParam1)
{
	if (!func_767())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam1))
	{
		return 0;
	}
	if (!unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam1) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

void func_770(char* sParam0, bool bParam1)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return;
	}
	if (func_771(sParam0))
	{
		return;
	}
	func_763();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_762();
	func_761(bParam1);
	func_760();
}

bool func_771(char* sParam0)
{
	if (!func_767())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_772(uParam0);
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12));
}

bool func_772(char* sParam0)
{
	if (!func_767())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

int func_773()
{
	return (4 - Local_112.f_115);
}

int func_774(char* sParam0)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (!func_767())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (unk_0xB9A31E6892C3D2C2(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return 0;
	}
	return func_771(sParam0);
}

void func_775()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_888() && !func_299())
	{
		return;
	}
	if (!func_384())
	{
		return;
	}
	iVar1 = func_65();
	iVar2 = -1;
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar1 = unk_0x7C7787D2D7139A85();
		iVar2 = unk_0x2E40EEA43EF34BD6();
	}
	else
	{
		iVar2 = func_300();
		iVar1 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 1))
	{
		iVar0 = func_140(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_112.f_118 || func_889() == Local_112.f_118)
			{
				if (func_799(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_346(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1, 0);
					if (iVar2 == unk_0x2E40EEA43EF34BD6())
					{
						func_798(1);
						func_776(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x2E40EEA43EF34BD6())
				{
					func_776(-1, 0, 0, -1, 0, 0);
				}
				func_346(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1, 0);
			}
		}
		unk_0xA1E7A40E1F56E511(&iLocal_1433, 1);
	}
}

void func_776(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_181(unk_0x7C7787D2D7139A85());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_484() != func_65())
		{
			Global_1675140.f_2 = func_640(func_484());
			Global_1675140.f_3 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = unk_0x71EC776E812C6A0A();
		Global_1675140.f_28 = func_728(unk_0x7C7787D2D7139A85());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675140.f_23 = func_731(func_249(1));
		}
	}
	else
	{
		iVar0 = func_104(unk_0x7C7787D2D7139A85());
	}
	if (iParam2 || func_318(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_137(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_408(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_220(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_446(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_484() != func_65())
		{
			Global_1674879.f_4 = func_640(func_484());
			Global_1674879.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = unk_0x71EC776E812C6A0A();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_478(iParam1);
			Global_1674879.f_41 = func_797();
			Global_1674879.f_42 = func_597(unk_0x7C7787D2D7139A85(), iParam1);
			Global_1674879.f_44 = func_721(unk_0x7C7787D2D7139A85(), iParam1);
		}
		if (!func_465() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_406(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_796(unk_0x7C7787D2D7139A85());
		}
		switch (iVar0)
		{
			case 225:
				if (func_443(unk_0x7C7787D2D7139A85()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_484() != func_65())
		{
			Global_1674996.f_4 = func_640(func_484());
			Global_1674996.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = unk_0x71EC776E812C6A0A();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_323(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_484() != func_65())
		{
			Global_1674933.f_4 = func_640(func_484());
			Global_1674933.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = unk_0x71EC776E812C6A0A();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_404(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_484() != func_65())
		{
			Global_1675040.f_4 = func_640(func_484());
			Global_1675040.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = unk_0x71EC776E812C6A0A();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_714(func_19(), 5);
		Global_1675040.f_28 = func_731(func_575(unk_0x7C7787D2D7139A85()));
		Global_1675040.f_29 = func_451(6107, -1, 0);
		Global_1675040.f_30 = func_451(6103, -1, 0);
		Global_1675040.f_31 = func_451(6104, -1, 0);
		Global_1675040.f_32 = func_451(6106, -1, 0);
		Global_1675040.f_33 = func_451(6105, -1, 0);
		Global_1675040.f_34 = func_451(6108, -1, 0);
		Global_1675040.f_7 = func_730();
		Global_1675040.f_51 = func_731(bParam4);
	}
	else if (func_402(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_484() != func_65())
		{
			Global_1675094.f_4 = func_640(func_484());
			Global_1675094.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = unk_0x71EC776E812C6A0A();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_451(6157, -1, 0);
		Global_1675094.f_25 = func_451(6162, -1, 0);
		Global_1675094.f_26 = func_451(6163, -1, 0);
		Global_1675094.f_27 = func_731((((func_679() || func_678()) || func_677()) || func_676(unk_0x7C7787D2D7139A85())));
		Global_1675094.f_28 = func_451(6164, -1, 0);
		Global_1675094.f_29 = func_731(func_675());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_730();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_441(func_442(unk_0x7C7787D2D7139A85()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_730();
		if (func_484() != func_65())
		{
			Global_1675228.f_4 = func_640(func_484());
			Global_1675228.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_484() != -1)
		{
			Global_1675228.f_17 = func_672(func_484());
		}
		Global_1675228.f_8 = unk_0x71EC776E812C6A0A();
		Global_1675228.f_28 = func_728(unk_0x7C7787D2D7139A85());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675228.f_33 = func_731(func_249(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_730();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_484() != func_65())
		{
			Global_1675175.f_4 = func_640(func_484());
			Global_1675175.f_5 = func_639(func_484());
		}
		Global_1675175.f_28 = func_728(unk_0x7C7787D2D7139A85());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_666(unk_0x7C7787D2D7139A85());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_650(unk_0x7C7787D2D7139A85(), 4, -1);
		Global_1675175.f_31 = func_669(unk_0x7C7787D2D7139A85());
		Global_1675175.f_32 = func_731(func_649(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_33 = func_731(func_648(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_34 = func_731(func_647(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_35 = func_731(func_646(unk_0x7C7787D2D7139A85()));
		Global_1675175.f_36 = func_645(unk_0x7C7787D2D7139A85());
		Global_1675175.f_37 = func_644(unk_0x7C7787D2D7139A85());
		Global_1675175.f_39 = func_643(unk_0x7C7787D2D7139A85());
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675175.f_41 = func_731(func_249(1));
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = unk_0x71EC776E812C6A0A();
		Global_1675175.f_28 = func_728(unk_0x7C7787D2D7139A85());
	}
	else if (func_439(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_443(unk_0x7C7787D2D7139A85());
		Global_1675312.f_2 = func_737();
		Global_1675312.f_3 = func_736();
		Global_1675312.f_4 = func_640(func_484());
		Global_1675312.f_5 = func_639(func_484());
		Global_1675312.f_7 = func_730();
		Global_1675312.f_8 = unk_0x71EC776E812C6A0A();
		if (func_484() != -1)
		{
			Global_1675312.f_17 = func_672(func_484());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_731(func_637(unk_0x7C7787D2D7139A85()));
		Global_1675312.f_28 = func_634(21, -1);
	}
	else if (func_395(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_640(func_484());
		Global_1675387.f_7 = func_639(func_484());
		if (func_189(unk_0x7C7787D2D7139A85(), 1))
		{
			Global_1675387.f_8 = func_731(func_249(1));
		}
		if (func_484() != -1)
		{
			Global_1675387.f_9 = func_672(func_484());
		}
		Global_1675387.f_10 = func_730();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = unk_0x71EC776E812C6A0A();
	}
	else
	{
		if (func_484() != func_65())
		{
			Global_1674861 = func_640(func_484());
			Global_1674861.f_1 = func_639(func_484());
		}
		Global_1674861.f_5 = unk_0x71EC776E812C6A0A();
		Global_1674861.f_13 = func_795();
		Global_1674861.f_15 = 0;
		if (func_482(1))
		{
			if (func_252() == func_484())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_794())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_793() || func_792()) || func_791()) || func_790()) || func_789()) || func_788(unk_0x7C7787D2D7139A85()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_786(func_787(joaat("trailersmall2"))))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_780(func_785(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_713(unk_0x7C7787D2D7139A85()) || func_712(unk_0x7C7787D2D7139A85()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_709(unk_0x7C7787D2D7139A85()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_710(unk_0x7C7787D2D7139A85()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_707(0, unk_0x7C7787D2D7139A85()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_779(unk_0x7C7787D2D7139A85(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_779(unk_0x7C7787D2D7139A85(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_778(unk_0x7C7787D2D7139A85()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_777(unk_0x7C7787D2D7139A85(), iVar2);
				if (func_594(unk_0x7C7787D2D7139A85(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_594(unk_0x7C7787D2D7139A85(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_594(unk_0x7C7787D2D7139A85(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_777(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_589(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_778(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_779(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_707(iVar0, iParam0))
			{
				*uParam2 = iVar0;
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
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_634(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_693(11));
		func_692(iVar1, &iVar0, 1);
		iVar2 = func_634(func_782(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_451(func_781(4, iVar0), -1, 0);
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

int func_781(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case joaat("mpsv_lp0_31"):
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				default:
			}
			break;
		
		case 2:
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
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("mpsv_lp0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				default:
			}
			break;
		
		case 3:
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
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("mpsv_lp0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				default:
			}
			break;
		
		case 4:
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
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
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
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
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
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("mpsv_lp0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("mpsv_lp0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("mpsv_lp0_31"):
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("mpsv_lp0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_782(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_693(iVar0) && iParam0 < func_783(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_783(int iParam0)
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
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_636(iParam0);
		return func_784(iVar0);
	}
	return (func_694(iParam0, -1) * iParam0 + 1);
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_785(int iParam0)
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

int func_786(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_692(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_451(func_781(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_788(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_789()
{
	return func_451(6542, -1, 0) != 0;
}

bool func_790()
{
	return func_451(6163, -1, 0) != 0;
}

bool func_791()
{
	return func_451(5380, -1, 0) != 0;
}

bool func_792()
{
	return func_451(3828, -1, 0) != 0;
}

bool func_793()
{
	return func_451(3223, -1, 0) != 0;
}

bool func_794()
{
	return func_451(5379, -1, 0) != 0;
}

int func_795()
{
	int iVar0;
	
	iVar0 = func_484();
	if (iVar0 != func_65())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_796(int iParam0)
{
	if (func_104(iParam0) == 225 || func_104(iParam0) == 226)
	{
		return func_443(iParam0);
	}
	return -1;
}

var func_797()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_596(unk_0x7C7787D2D7139A85(), iVar0))
		{
			unk_0xA1E7A40E1F56E511(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_798(bool bParam0)
{
	if (bParam0)
	{
		if (!func_108(unk_0x7C7787D2D7139A85(), 9))
		{
			if (func_140(unk_0x7C7787D2D7139A85()) != 0)
			{
				func_109(9);
			}
		}
	}
	else if (func_108(unk_0x7C7787D2D7139A85(), 9))
	{
		func_107(9);
	}
}

int func_799(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x3B76114EC84D5812(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_801(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_800(iParam0) };
			Global_8043 = iParam0;
			unk_0xA1E7A40E1F56E511(&Global_7356, 1);
			unk_0xA1E7A40E1F56E511(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_800(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_801(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2553916E420E8EF0(sParam14, sParam15))
	{
	}
	func_813();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
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
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x222F76006659B0EB(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_812() == 0)
	{
		func_810();
		return 0;
	}
	func_809(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (unk_0xA2BC31158C8CEFD2(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_808(0);
		func_808(2);
		func_808(1);
	}
	else
	{
		func_813();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_808(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_808(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_808(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_808(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_813();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_426())
			{
				unk_0x9964F5BBD9415AB7(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_807(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_804(1);
			func_807(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_802(iParam0, sParam1);
	return 1;
}

void func_802(int iParam0, char* sParam1)
{
	if (!func_803())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, unk_0xA8C462EF7D9DC564(sParam1), 0);
}

int func_803()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_65())
	{
		return 0;
	}
	if (func_149(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

void func_804(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_806(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar2);
								unk_0xAC7C2DE2DDC7AF03();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(Global_7362);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar7);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar8);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 8)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if ((iVar1 == 23 && unk_0x2553916E420E8EF0(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xA2BC31158C8CEFD2(Global_7357, 6))
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_805(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_805(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(uParam7))
	{
		func_168(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(iParam8))
	{
		func_168(iParam8);
	}
	if (!unk_0x9591DE0F00127F2A(iParam9))
	{
		func_168(iParam9);
	}
	if (!unk_0x9591DE0F00127F2A(iParam10))
	{
		func_168(iParam10);
	}
	if (!unk_0x9591DE0F00127F2A(iParam11))
	{
		func_168(iParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

bool func_806(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_807(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_808(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_809(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xCA3729F4C3A9E58A();
	uVar1 = unk_0x8F7802EF0E800F47();
	uVar2 = unk_0xA63165E74E9A042B();
	uVar3 = unk_0xFC6CBA5BA4E459A9();
	uVar4 = unk_0x4EBF6D59B95D29C2() + 1;
	uVar5 = unk_0x10CB21C87A35156F();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = uVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_810()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
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
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_811(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_811(struct<6> Param0, struct<6> Param6)
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

int func_812()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
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
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_811(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

void func_813()
{
	if (func_806(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_814();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_814()
{
	func_815();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_815()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_818(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_817(unk_0x0FA8183DAD2B3203());
			if (func_816(iVar0) && (!func_806(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_816(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_816(int iParam0)
{
	return iParam0 < 3;
}

int func_817(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_818(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_818(int iParam0)
{
	if (func_816(iParam0))
	{
		return func_819(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_819(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_820()
{
	if (!func_767())
	{
		return;
	}
	if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_1312585.f_9)
	{
		return;
	}
	func_763();
}

void func_821()
{
	if (func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		return;
	}
	switch (Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_9)
	{
		case 0:
			func_823();
			func_311();
			if (Local_112.f_117 == 2)
			{
				Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_9 = 2;
			}
			else if (Local_112.f_117 == 3)
			{
				Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_311();
			if (func_822())
			{
				func_754();
			}
			if (Local_112.f_117 == 3)
			{
				Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_902();
			break;
	}
}

bool func_822()
{
	return ((unk_0xA2BC31158C8CEFD2(Local_112.f_1, 1) || unk_0xA2BC31158C8CEFD2(Local_112.f_1, 3)) || unk_0xA2BC31158C8CEFD2(Local_112.f_1, 5));
}

void func_823()
{
	func_843();
	func_842();
	func_775();
	func_757();
	func_832();
	func_831();
	func_826();
	func_825();
	func_742();
	func_824();
}

void func_824()
{
}

void func_825()
{
	if (func_822())
	{
		return;
	}
	if (!func_888())
	{
		return;
	}
	if (!Global_262145.f_15006)
	{
		return;
	}
	if (Local_112.f_115 == 0)
	{
		return;
	}
}

void func_826()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_888())
	{
		return;
	}
	if (func_822())
	{
		return;
	}
	fVar4 = func_150(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1440 != iVar0)
			{
				Var1 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 0) };
				func_92(10, 0, 0, 0, 0);
				func_827(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_1440 = iVar0;
				unk_0xA1E7A40E1F56E511(&iLocal_1433, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_342();
	}
}

void func_827(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == unk_0x429EE9FF15BB9033())
		{
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return;
	}
	if (!unk_0xAB2A82A2838B61B7(Global_2413894.f_6))
	{
		Global_2413894.f_6 = unk_0x429EE9FF15BB9033();
	}
	Var0.f_6 = Global_2413894.f_6;
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
	if (func_828(unk_0x7C7787D2D7139A85()))
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
	Global_2413894 = { Var0 };
}

int func_828(int iParam0)
{
	if (((func_829(iParam0, 1) || func_131(iParam0)) || func_105(iParam0, 0)) || func_392(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_829(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_830(iParam0) != 0;
	}
	return func_279(iParam0, bParam1, 0);
}

int func_830(int iParam0)
{
	if (func_1000(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

void func_831()
{
	int iVar0;
	
	if (iLocal_1437 != Local_112.f_115)
	{
		if (func_888())
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
				{
					if (!unk_0xED4D72D338501085())
					{
						iVar0 = unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85());
						switch (Local_112.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_15003)
								{
									unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), Global_262145.f_15003, 0);
									unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_15004)
								{
									unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), Global_262145.f_15004, 0);
									unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_15005)
								{
									unk_0x60F310C72311BCA8(Global_262145.f_15005);
									unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), Global_262145.f_15005, 0);
									unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
								}
								break;
						}
						iLocal_1437 = Local_112.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1437 = Local_112.f_115;
		}
	}
}

void func_832()
{
	int iVar0;
	
	if (!func_384())
	{
		if (func_841("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return;
	}
	iVar0 = func_140(unk_0x7C7787D2D7139A85());
	if (iVar0 < 2)
	{
		if (func_841("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 2))
	{
		if (!func_840(86))
		{
			if (func_834(0, 1, 1, 1))
			{
				if (unk_0x2E40EEA43EF34BD6() == Local_112.f_118)
				{
					func_833("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_320(1);
					unk_0xA1E7A40E1F56E511(&iLocal_1433, 2);
				}
				else if (func_889() == Local_112.f_118)
				{
					func_833("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_320(1);
					unk_0xA1E7A40E1F56E511(&iLocal_1433, 2);
				}
				else if (func_299())
				{
					func_833("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_320(1);
					unk_0xA1E7A40E1F56E511(&iLocal_1433, 2);
				}
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 2))
	{
		if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 3))
		{
			if (func_834(0, 1, 1, 1))
			{
				if (!func_841("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x2E40EEA43EF34BD6() == Local_112.f_118 || func_889() == Local_112.f_118)
					{
						func_321("HUNT_HELPB", -1);
						func_320(1);
						unk_0xA1E7A40E1F56E511(&iLocal_1433, 3);
					}
				}
			}
		}
	}
}

void func_833(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam2);
	}
	unk_0x0AC9F8E1AFCEC860(sParam1);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam3);
}

int func_834(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x0945988C02AF3025())
	{
		return 0;
	}
	if (func_839())
	{
		return 0;
	}
	if (!unk_0xBF28CCACDDFF5346())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (func_427())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_279(unk_0x7C7787D2D7139A85(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_838(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (func_837())
	{
		return 0;
	}
	if (unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		return 0;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (Global_1574181)
	{
		return 0;
	}
	if (func_836())
	{
		return 0;
	}
	if (func_835())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_2541150)
	{
		return 0;
	}
	if (func_94(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

bool func_835()
{
	return Global_2448961.f_591;
}

bool func_836()
{
	return Global_2448961.f_744;
}

bool func_837()
{
	return Global_2437549.f_3032.f_578;
}

int func_838(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_839()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

bool func_840(int iParam0)
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

bool func_841(char* sParam0, char* sParam1)
{
	unk_0x1EF54B101C71E009(sParam0);
	unk_0x0AC9F8E1AFCEC860(sParam1);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_842()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_150(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_126(unk_0x7C7787D2D7139A85()))
		{
			func_125();
		}
	}
}

void func_843()
{
	if (func_143())
	{
		if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1, 1))
		{
			func_111(0);
			unk_0x3B76114EC84D5812(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_140(unk_0x7C7787D2D7139A85()) == 0)
	{
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1, 1))
	{
		if (!func_888())
		{
			if (!func_142())
			{
				if (unk_0xA2BC31158C8CEFD2(Local_112.f_1, 6))
				{
					func_111(1);
					unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_844()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_65();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_2, iVar0))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_110, iVar0))
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							if (func_889() == Local_112.f_118)
							{
								if (func_862(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_3, iVar0))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_112, iVar0))
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
				{
					if (func_861(iVar0))
					{
						unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_4, iVar0))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_112.f_111, iVar0))
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_860(iVar0);
		if (func_384())
		{
			if (!unk_0x39A01A052D9B5FF0(uLocal_1448[iVar0]))
			{
				if (!func_822())
				{
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1448[iVar0] = unk_0xADA89D4F1A58FCBA(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1));
							if (func_889() == Local_112.f_118)
							{
								unk_0x6089156CDC87FE4B(uLocal_1448[iVar0], 12);
								unk_0xD1773DD05FE2AB54(uLocal_1448[iVar0], 432);
								func_859(&(uLocal_1448[iVar0]), 6);
							}
							else
							{
								unk_0xD1773DD05FE2AB54(uLocal_1448[iVar0], 480);
								func_859(&(uLocal_1448[iVar0]), 9);
							}
							unk_0x6B29681A8280DB75(uLocal_1448[iVar0], 1);
							unk_0x2AF52DE63F9EA3D2(uLocal_1448[iVar0], 7000);
							unk_0xBC0D06064C5B5413(uLocal_1448[iVar0], 1.1f);
							unk_0x058B6969CEED705F(uLocal_1448[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					unk_0xAA2276003B2ADF1B(&(uLocal_1448[iVar0]));
				}
				else if (func_822())
				{
					unk_0xAA2276003B2ADF1B(&(uLocal_1448[iVar0]));
				}
			}
		}
		else if (unk_0x39A01A052D9B5FF0(uLocal_1448[iVar0]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_1448[iVar0]));
		}
		func_858(iVar0);
		func_857(iVar0);
		func_855(iVar0);
		switch (Local_112.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0x722688699565161D())
				{
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x7E6F0519746C2295(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x24BD9CEBA5D40F00(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x722688699565161D())
				{
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x7E6F0519746C2295(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xA2BC31158C8CEFD2(Local_112.f_108, iVar0))
										{
											unk_0x24BD9CEBA5D40F00(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x40237B62400B4BCC(Local_112.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xA2BC31158C8CEFD2(Local_112.f_108, iVar0))
											{
												unk_0x3B76114EC84D5812(&(Local_112.f_108), iVar0);
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
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x2DCF88AC859255F3(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										unk_0xDE8E5CE8855FA963(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
						{
							if (unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_851(iVar0);
										if (!unk_0x2BF5E63466422C38(uVar2))
										{
											unk_0xF0E9590A910B74BE(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x70CBCB37A00F34A2(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 0);
									unk_0xBEEBC7FC000DBE75(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x70CBCB37A00F34A2(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x70E69BBFB80BD408(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_850(iVar0, &fVar5);
									if (iVar4 != func_65())
									{
										unk_0x063B82A578F91CF2(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x23625FE58BACEBFD(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x40BF84B2C3F30631(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x40BF84B2C3F30631(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xBEEBC7FC000DBE75(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0xBEEBC7FC000DBE75(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0xA2DB82364F08360E(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x411C065ADB822CD9(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x2DCF88AC859255F3(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0xDEB0AA30ABFDCF48(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (func_888())
	{
		func_845();
	}
}

void func_845()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_846(uLocal_1694[iVar0], &(Local_1453[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_846(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		if (func_849())
		{
			Global_2437549 = unk_0x7C7787D2D7139A85();
		}
		if (bParam3)
		{
			func_848(unk_0x70D3AC024E0A9837(uParam0), uParam1, 1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_848(unk_0x70D3AC024E0A9837(uParam0), uParam1, -1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x39A01A052D9B5FF0(*uParam1))
	{
		func_847(uParam1);
	}
}

void func_847(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		unk_0xAA2276003B2ADF1B(uParam0);
		bVar0 = true;
	}
	if (unk_0x39A01A052D9B5FF0(uParam0->f_1))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_7))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_7, 0))
		{
			if (unk_0xD16F58ECC1C52CA2(uParam0->f_7))
			{
				unk_0xE780F376C4EE1889(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_848(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x7A8732CFB5113E77();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if (!unk_0xD16F58ECC1C52CA2(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xE780F376C4EE1889(iParam0, 1);
			}
			else
			{
				unk_0x07AAE308C469D4B9(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x432AB2F1478809C8(iParam0, iParam2);
			unk_0x78AA771D23BD33D0(iParam0, fParam6);
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xB37778208305A9B0(iParam0, iParam9);
		}
		unk_0x6E5905FC20A8345C(iParam0, uParam4);
		unk_0x5D4D921D98B0E72C(iParam0, uParam5);
		*uParam1 = unk_0x561AE37FE7777958(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x088577CF98F96D05(*uParam1, iParam8);
				}
				if (!unk_0x9591DE0F00127F2A(uParam7))
				{
					unk_0xD84B23397AD07105("STRING");
					if (bParam10)
					{
						unk_0xA89C789CC9FEF523(sParam7);
					}
					else
					{
						unk_0x0AC9F8E1AFCEC860(sParam7);
					}
					unk_0xC2DE1B83E9D17024(*uParam1);
				}
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 2))
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5294582CE404D3F4(iParam0, 0))
		{
			uParam1->f_1 = unk_0xD63A0ACEC4E5647D(iParam0);
			if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 3))
			{
				if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x088577CF98F96D05(uParam1->f_1, iParam8);
					}
					if (!unk_0x9591DE0F00127F2A(sParam7))
					{
						unk_0xD84B23397AD07105("STRING");
						if (bParam10)
						{
							unk_0xA89C789CC9FEF523(sParam7);
						}
						else
						{
							unk_0x0AC9F8E1AFCEC860(sParam7);
						}
						unk_0xC2DE1B83E9D17024(uParam1->f_1);
					}
					unk_0x6089156CDC87FE4B(uParam1->f_1, 7);
					unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x39A01A052D9B5FF0(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_849()
{
	return Global_1312850;
}

int func_850(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = func_65();
	fVar1 = 1E+08f;
	Var3 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar6)))
		{
			iVar7 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0x23625FE58BACEBFD(iVar7);
				if (iVar6 == Local_112.f_118 || Local_984[iVar6 /*14*/].f_10 == Local_112.f_118)
				{
					if (!unk_0x2BF5E63466422C38(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iVar8, 1), Var3);
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
	if (iVar0 != func_65())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

var func_851(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_852(iParam0);
	if (iVar1 != func_65())
	{
		uVar0 = unk_0x23625FE58BACEBFD(iVar1);
	}
	return uVar0;
}

int func_852(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	
	iVar0 = func_65();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0xACF7D965CEBE5714())
	{
		if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar3)))
		{
			iVar7 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar3));
			uVar8 = unk_0x23625FE58BACEBFD(iVar7);
			if (func_189(iVar7, 1))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_984[iVar3 /*14*/].f_1, 1))
				{
					if (func_66(iVar7) == unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Local_112.f_118)))
					{
						if (!unk_0x2BF5E63466422C38(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iVar8, 1), Var4);
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

int func_853(var uParam0)
{
	if (unk_0xDD00A9922FD2D5D5(uParam0))
	{
		return 1;
	}
	if (func_854(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_854(var uParam0)
{
	if (!unk_0x722688699565161D())
	{
		return 0;
	}
	if (!unk_0x8A7BBB98FFB32893(uParam0))
	{
		return 0;
	}
	if (func_44(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_855(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_384())
	{
		return;
	}
	if (func_140(unk_0x7C7787D2D7139A85()) < 1)
	{
		return;
	}
	if (!func_888() && !func_299())
	{
		return;
	}
	if (func_822())
	{
		return;
	}
	if (func_888())
	{
		unk_0xE0A2E1F5E75D9DF8(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xE0A2E1F5E75D9DF8(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0xA2DB82364F08360E(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0xCF230127A06D491D(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0x4D57D3E5ECE15A41(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 0);
				func_856(uVar7, uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_856(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xB10397B050DB322E(unk_0x7F375072508F738F(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0xCF230127A06D491D(2, unk_0xACE5E491FC1B0D37(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_857(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_889() != Local_112.f_118)
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	Var4 = { unk_0xACE5E491FC1B0D37(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_13), iParam0);
	}
}

void func_858(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_889() != Local_112.f_118)
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	Var4 = { unk_0xACE5E491FC1B0D37(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_889() == Local_112.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
						return;
					}
					if (func_862(uVar7))
					{
						unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_859(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		uVar0 = func_339(iParam1);
		unk_0x088577CF98F96D05(*uParam0, uVar0);
	}
}

void func_860(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_112.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0xF42AC9E0924DC59B(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x5294582CE404D3F4(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0xB8D4A2BAA78AB950(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xACE5E491FC1B0D37(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0xDF956C4106F1E9C5(Var5, &fVar1, 0, 0))
							{
								if (unk_0x01CBD71E072E9F33((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0x0BBBAC4546BFE280(unk_0x70D3AC024E0A9837(Local_112.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_861(int iParam0)
{
	if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_112.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0x812D517F863583BE(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0x812D517F863583BE(unk_0x40237B62400B4BCC(Local_112.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_862(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), uParam0))
	{
		return 1;
	}
	if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), uParam0))
	{
		return 1;
	}
	if (func_863())
	{
		if (unk_0xF1B72CE19F769A5F(unk_0x7C7787D2D7139A85(), &uVar0))
		{
			if (unk_0x4625051E51BA911B(uVar0))
			{
				uVar1 = unk_0x3D464779B732760F(iVar0);
				if (unk_0xD4B321D9096B01FC(uVar1))
				{
					if (!unk_0xF4B969E0807E76C7(iVar1, 0))
					{
						if (unk_0x5294582CE404D3F4(iVar1, 0))
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

bool func_863()
{
	return Global_1574401;
}

void func_864()
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_0 != 4)
	{
		iVar1 = unk_0x0C98179F08C6DA4F(iLocal_1436);
		if (unk_0xD56C8C2B75BF9665(iVar1))
		{
			if (unk_0xA890E17DFBBB3192(iVar1))
			{
				if (!func_822())
				{
					if (!func_888())
					{
						if (func_299())
						{
							if (func_189(iVar1, 1))
							{
								iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Local_112.f_118));
								if (func_76(iVar1, iVar0, 1))
								{
									if (!unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_8, iLocal_1436))
									{
										func_340(iVar1, 432, 1, 0);
										func_333(iVar1, func_339(iLocal_1725), 1, 0);
										unk_0xA1E7A40E1F56E511(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_8), iLocal_1436);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_8, iLocal_1436))
			{
				func_340(iVar1, 432, 0, 0);
				func_333(iVar1, func_339(iLocal_1725), 0, 0);
				unk_0x3B76114EC84D5812(&(Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_8), iLocal_1436);
			}
		}
	}
	iLocal_1436++;
	if (iLocal_1436 >= 32)
	{
		iLocal_1436 = 0;
	}
}

int func_865(bool bParam0)
{
	if (func_868(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_252() == func_65() || !func_1000(func_252(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_397(unk_0x7C7787D2D7139A85()))
	{
		if (func_867(unk_0x7C7787D2D7139A85()) && func_866())
		{
			return 1;
		}
	}
	return 0;
}

int func_866()
{
	switch (func_330(func_388(unk_0x7C7787D2D7139A85())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_867(int iParam0)
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_868(bool bParam0)
{
	bool bVar0;
	
	if (!func_482(1))
	{
		bVar0 = false;
		if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 != func_65())
		{
			if (func_1000(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 4 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 8) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_139(func_104(unk_0x7C7787D2D7139A85())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_538(31);
				if (func_318(func_104(unk_0x7C7787D2D7139A85())))
				{
					func_538(81);
				}
				if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 != func_65() && unk_0xD56C8C2B75BF9665(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_359(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_251(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57))
					{
						func_538(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_869()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1694[iVar0] = Local_112.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_870()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x2E40EEA43EF34BD6() == Local_112.f_118 || func_889() == Local_112.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				unk_0xFC42FD48CE7A6EA5(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_1), unk_0x7C7787D2D7139A85(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0xFC42FD48CE7A6EA5(unk_0x70D3AC024E0A9837(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x7C7787D2D7139A85(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_871()
{
	if (Local_112.f_118 > -1)
	{
		iLocal_1725 = func_740(unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Local_112.f_118)));
	}
}

void func_872(float fParam0)
{
	float fVar0;
	
	if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_336())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && unk_0x01CBD71E072E9F33(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = unk_0x429EE9FF15BB9033();
}

void func_873(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 != iParam0)
	{
		func_887(-1);
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 = iParam0;
		if (func_886() != -1)
		{
			func_885(-1);
		}
		if (func_884() != -1)
		{
			func_883(-1);
		}
		func_882(iParam2);
		func_880(iParam0);
		if (!func_115(iParam0))
		{
			fVar0 = func_114(iParam0);
			if (fVar0 != 1f)
			{
				func_872(fVar0);
				unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_118(iParam0) || iParam3)
		{
			if (func_116(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x60F310C72311BCA8(0);
				if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
				{
					unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
					unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
				}
				unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 0);
			}
			else if (unk_0xD13C2E5A700836D1() < 5)
			{
				unk_0xB7F4DA52DE3AAF24(1f);
				unk_0x60F310C72311BCA8(5);
			}
		}
		if (func_142())
		{
			func_109(27);
		}
		if (bParam1)
		{
			if (!func_143())
			{
				func_111(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 1) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 4)) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 0))
			{
				func_538(6);
			}
			func_879();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x31A175F9EC8E421C(3, 0);
			unk_0x31A175F9EC8E421C(5, 0);
		}
		if (func_131(unk_0x7C7787D2D7139A85()) && func_123(unk_0x7C7787D2D7139A85()))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 8);
		}
		func_875();
		if (func_874(iParam0))
		{
			unk_0x31A175F9EC8E421C(3, 0);
			unk_0x31A175F9EC8E421C(5, 0);
			unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_874(int iParam0)
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

void func_875()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_878();
	iVar2 = func_66(unk_0x7C7787D2D7139A85());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
		if (unk_0xD56C8C2B75BF9665(iVar1))
		{
			if (func_76(iVar1, iVar2, 1) || func_876(iVar1, unk_0x7C7787D2D7139A85()))
			{
				unk_0xC732CE96035B57B9(unk_0x7C7787D2D7139A85(), iVar1, uVar3);
				unk_0xC732CE96035B57B9(iVar1, unk_0x7C7787D2D7139A85(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_876(int iParam0, int iParam1)
{
	if (func_189(iParam0, 1) && func_189(iParam1, 1))
	{
		return (func_877(iParam0) == func_66(iParam1) || func_877(iParam1) == func_66(iParam0));
	}
	return 0;
}

int func_877(int iParam0)
{
	if (func_189(iParam0, 1))
	{
		return Global_1628955[func_66(iParam0) /*614*/].f_11.f_484;
	}
	return func_65();
}

int func_878()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_484();
	if (iVar0 != func_65())
	{
		if (func_1000(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_879()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 1))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 4))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 4);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 6))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 6);
	}
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 0);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 2);
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		unk_0x60F310C72311BCA8(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_451(3791, -1, 0);
	iVar1 = func_881(iParam0);
	if (iVar1 != -1)
	{
		unk_0xA1E7A40E1F56E511(&iVar0, iVar1);
		func_449(3791, iVar0, -1, 1, 0);
	}
}

int func_881(int iParam0)
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

void func_882(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_883(int iParam0)
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_884()
{
	return Global_2531497.f_4898.f_338;
}

void func_885(int iParam0)
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_886()
{
	return Global_2531497.f_4898.f_337;
}

void func_887(int iParam0)
{
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_32 = iParam0;
}

int func_888()
{
	int iVar0;
	
	iVar0 = func_889();
	if (iVar0 > -1)
	{
		if (Local_112.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_889()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_65();
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = unk_0x2E40EEA43EF34BD6();
		iVar1 = unk_0x7C7787D2D7139A85();
	}
	else
	{
		iVar0 = func_300();
		iVar1 = Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_735;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_984[iVar0 /*14*/].f_10 != -1)
	{
		return Local_984[iVar0 /*14*/].f_10;
	}
	if (func_122(iVar1))
	{
		Local_984[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_112.f_118)
		{
			func_798(1);
		}
	}
	else if (func_189(iVar1, 1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 != func_65())
		{
			if (unk_0xA890E17DFBBB3192(iVar2))
			{
				Local_984[iVar0 /*14*/].f_10 = unk_0x932F91FB8ED4D272(iVar2);
			}
		}
	}
	return Local_984[iVar0 /*14*/].f_10;
}

int func_890()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x8A7BBB98FFB32893(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
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
		if (func_34(iVar0))
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

int func_891()
{
	return Local_112.f_0;
}

int func_892(int iParam0)
{
	return Local_984[iParam0 /*14*/];
}

int func_893()
{
	var uVar0;
	
	func_898(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_897())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_896())
	{
		return 1;
	}
	if (func_895(159))
	{
		if (!func_894())
		{
			return 1;
		}
	}
	if (func_895(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_336() != 0)
	{
		if (unk_0x222F76006659B0EB(func_336()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_894()
{
	return Global_2448961.f_598;
}

int func_895(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_896()
{
	return Global_2458999;
}

bool func_897()
{
	return Global_2448961.f_593;
}

void func_898(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_899(iVar0);
					break;
				
				case -498955166:
					unk_0x3C1EC42A2CC175C5(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_899(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_1000(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_900(uVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_900(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(iParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(iParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
				{
					unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(iParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_901()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_902()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x7C7787D2D7139A85(), 0))
	{
		if (!unk_0xA2BC31158C8CEFD2(iLocal_1433, 6))
		{
			if (unk_0x393E9918BC37548A())
			{
				if (func_888() || func_299())
				{
					func_628(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0xA1E7A40E1F56E511(&iLocal_1433, 6);
				}
			}
		}
		uVar0 = Local_112.f_115;
		uVar1 = Local_112.f_121;
		iVar2 = -1;
		if (unk_0x393E9918BC37548A())
		{
			iVar2 = Local_984[unk_0x2E40EEA43EF34BD6() /*14*/].f_11;
		}
		func_948(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x393E9918BC37548A())
		{
			if (unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203()) == iLocal_1438)
			{
				unk_0xDB889DCC8B0139E6(unk_0x0FA8183DAD2B3203(), iLocal_1439);
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 18))
	{
		func_345(1);
		unk_0x3B76114EC84D5812(&iLocal_1433, 18);
	}
	func_947();
	if (Local_112.f_119 != -1)
	{
		if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 5))
		{
			if (unk_0xD56C8C2B75BF9665(unk_0x0C98179F08C6DA4F(Local_112.f_119)))
			{
			}
		}
	}
	if (func_81(0))
	{
		func_80(0);
	}
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0x722688699565161D())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xA2BC31158C8CEFD2(Local_112.f_871, iVar3))
				{
					unk_0x9E64FD43AF331B00(Local_112.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(iLocal_1433, 17))
	{
		unk_0x60F310C72311BCA8(iLocal_1727);
		unk_0x3B76114EC84D5812(&iLocal_1433, 17);
	}
	func_342();
	unk_0xA1E7A40E1F56E511(&iLocal_1434, 8);
	func_754();
	unk_0xFCFC095CA91554D8(1);
	func_798(0);
	func_904(1, 0);
	unk_0x60F310C72311BCA8(5);
	func_332();
	func_903();
}

void func_903()
{
	unk_0x9C9E32388A7886A2();
}

void func_904(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 167 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 168)
	{
		func_945();
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 4);
	}
	if ((func_452() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 190 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 192)
		{
			func_927(unk_0x7C7787D2D7139A85(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 164 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 208) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 250) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 237)
	{
		unk_0x31A175F9EC8E421C(3, 1);
		unk_0x31A175F9EC8E421C(5, 1);
	}
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 = -1;
		if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 14) && !func_131(unk_0x7C7787D2D7139A85()))
		{
			func_111(0);
		}
	}
	else if (func_925(unk_0x7C7787D2D7139A85()) != -1)
	{
		func_887(-1);
	}
	func_924(func_65());
	if (func_81(16))
	{
		func_80(16);
	}
	func_921(0);
	func_882(-1);
	func_920();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_919(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_917(iVar1);
		iVar1++;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 0))
	{
		unk_0xB7F4DA52DE3AAF24(1f);
		unk_0x60F310C72311BCA8(5);
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 0);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 5))
	{
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_325();
	if ((func_219(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_916(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_137(iVar2))
	{
		func_913(-1, 1);
	}
	else if (((((func_324(iVar2) || func_912(iVar2)) || func_911(iVar2)) || func_406(iVar2)) || func_404(iVar2)) || func_402(iVar2))
	{
	}
	else
	{
		func_913(-1, 1);
	}
	func_107(19);
	func_107(20);
	func_107(21);
	func_107(22);
	func_107(27);
	func_80(3);
	func_80(4);
	func_80(7);
	func_910();
	if (func_123(unk_0x7C7787D2D7139A85()))
	{
		func_798(0);
	}
	func_107(29);
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 = func_65();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_82();
	}
	if (!func_131(unk_0x7C7787D2D7139A85()))
	{
		func_106();
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 6))
	{
		unk_0x31A175F9EC8E421C(3, 1);
		unk_0x31A175F9EC8E421C(5, 1);
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 6);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 7))
	{
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 7);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 8))
	{
		func_909("IMPEXP_SELFDES", 0);
		func_907("IMPEXP_SELFDES");
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 8);
	}
	func_905(iVar2, 0);
}

void func_905(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 9))
		{
			unk_0x7D17F1A2E0EEDBB9(func_906(iParam0));
			unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 9);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 9))
	{
		unk_0x8E3496DF5BF7F24D(func_906(iParam0));
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 9);
	}
}

char* func_906(int iParam0)
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

void func_907(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x79FCE4565761C974(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x2553916E420E8EF0(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_813();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_908(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x351DF03E8250173C(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_908(int iParam0)
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_909(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x79FCE4565761C974(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x2553916E420E8EF0(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_910()
{
	if (func_126(unk_0x7C7787D2D7139A85()))
	{
		func_107(25);
	}
}

int func_911(int iParam0)
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

int func_912(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_913(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_325();
	}
	if (iParam0 > 0)
	{
		if (func_484() != func_65())
		{
			if (func_398(unk_0x7C7787D2D7139A85()) == unk_0x7C7787D2D7139A85())
			{
				Global_2509053.f_93[func_915(iParam0)] = 1;
			}
		}
		iVar0 = func_915(159);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(157);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(148);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(164);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(142);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(152);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(166);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(170);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(173);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(179);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(200);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(201);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(182);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(183);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(185);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(186);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(180);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(195);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(197);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(198);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(207);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(208);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(209);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(214);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(215);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(216);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(217);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(218);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(219);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(220);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(221);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_914(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_108(unk_0x7C7787D2D7139A85(), 19) && !func_108(unk_0x7C7787D2D7139A85(), 20)) && !func_108(unk_0x7C7787D2D7139A85(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_8(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_756(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_915(int iParam0)
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

void func_916(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_325();
	}
	if (iParam0 > 0)
	{
		if (func_484() != func_65())
		{
			Global_2509053.f_93[func_915(iParam0)] = 1;
		}
		iVar0 = func_915(155);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(163);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(160);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(153);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(162);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(154);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(171);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(172);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(199);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(194);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(193);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(210);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(205);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(189);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(211);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_917(int iParam0)
{
	if (!func_28(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_337[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_918() };
	}
	if (!func_28(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_324[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_918() };
	}
}

Vector3 func_918()
{
	struct<3> Var0;
	
	return Var0;
}

void func_919(int iParam0)
{
	if (!func_28(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_150[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_918() };
	}
	if (!func_28(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_125[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_918() };
	}
}

void func_920()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_65();
	if (unk_0xA2BC31158C8CEFD2(Global_1573343, 3))
	{
		unk_0x3B76114EC84D5812(&Global_1573343, 3);
	}
}

void func_921(bool bParam0)
{
	if (bParam0)
	{
		if (!func_429(unk_0x7C7787D2D7139A85(), 14))
		{
			func_923(14);
		}
	}
	else if (func_429(unk_0x7C7787D2D7139A85(), 14))
	{
		func_922(14);
	}
}

void func_922(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_5), iParam0);
}

void func_923(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_5), iParam0);
}

void func_924(int iParam0)
{
	if (func_122(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x7C7787D2D7139A85() != iParam0)
		{
			if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_65())
				{
				}
			}
		}
	}
}

int func_925(int iParam0)
{
	if (func_926(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_926(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_927(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_596(iParam0, iParam1) && func_944(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		func_931(iVar0, bParam2, bParam3);
		func_928(iVar0, 1);
	}
}

void func_928(int iParam0, int iParam1)
{
	if (!func_930(iParam0))
	{
		return;
	}
	func_582(func_929(iParam0), iParam1, -1, 1);
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = iParam1;
}

int func_929(int iParam0)
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

bool func_930(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_931(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_777(unk_0x7C7787D2D7139A85(), iParam0);
	if (!bParam1)
	{
		func_943(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_942(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_941(iParam0, 0, bParam2);
	}
	else if (func_939(iParam0, bParam2))
	{
		iVar0 = func_938(iVar2, 0);
		iVar3 = func_721(unk_0x7C7787D2D7139A85(), iVar2);
		iVar4 = func_937(iVar2, bParam2);
		iVar5 = func_938(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_936(iVar2) && func_935(unk_0x7C7787D2D7139A85(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_943(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_934(unk_0x7C7787D2D7139A85(), iVar2) > 0)
		{
			func_933(iParam0, (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_937(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_938(iVar2, bParam2) / func_934(unk_0x7C7787D2D7139A85(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_936(iVar2) && func_935(unk_0x7C7787D2D7139A85(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_932(unk_0x7C7787D2D7139A85(), iVar2, iVar0, bParam2);
}

void func_932(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return;
	}
	if (func_589(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_933(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_934(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_935(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1) && func_936(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_936(int iParam0)
{
	return func_478(iParam0) == 5;
}

int func_937(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_478(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_938(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_478(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_594(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_935(unk_0x7C7787D2D7139A85(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_939(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_583(15384, -1, -1);
	}
	return func_583(func_940(iParam0), -1, -1);
}

int func_940(int iParam0)
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

void func_941(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_582(15384, iParam1, -1, 1);
		return;
	}
	func_582(func_940(iParam0), iParam1, -1, 1);
}

int func_942(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_777(unk_0x7C7787D2D7139A85(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_936(iVar1))
	{
		if (func_935(unk_0x7C7787D2D7139A85(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_943(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_944(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_596(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_945()
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 28);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 29);
	func_946(24);
}

void func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_947()
{
	unk_0x7A9453C2EDBAFB80(iLocal_1438);
}

void func_948(var uParam0, var uParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x0037AFCBDC61F351();
	Var1.f_0 = Global_1674861;
	Var1.f_1 = Global_1674861.f_1;
	Var1.f_2 = Global_1674861.f_2;
	Var1.f_3 = Global_1674861.f_3;
	Var1.f_4 = Global_1674861.f_4;
	Var1.f_5 = Global_1674861.f_5;
	Var1.f_6 = Global_1674861.f_6;
	Var1.f_7 = Global_1674861.f_7;
	Var1.f_8 = Global_1674861.f_8;
	Var1.f_9 = Global_1674861.f_9;
	Var1.f_10 = Global_1674861.f_10;
	Var1.f_11 = Global_1674861.f_11;
	Var1.f_12 = Global_1674861.f_12;
	Var1.f_13 = Global_1674861.f_14;
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0x2553916E420E8EF0(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674861.f_15;
			Var15.f_15 = Global_1674861.f_16;
			Var15.f_16 = Global_1674861.f_17;
			unk_0x2236E37E3775DE6E(&Var15);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674861.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xBE901BDD5D7453B9(&Var32);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674861.f_15;
			Var49.f_15 = uParam0;
			unk_0x080D7808DF878F8E(&Var49);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674861.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x8364FE204D8FCE10(&Var65);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674861.f_15;
			Var82.f_15 = uParam0;
			unk_0xA91BE9870FCAE596(&Var82);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674861.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0x92E586CEE803537A(&Var98);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674861.f_15;
			unk_0xA08214A3076A2A32(&Var116);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674861.f_15;
			unk_0x32BCF8CB3FE7C46C(&Var134);
		}
		else if (unk_0x2553916E420E8EF0(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674861.f_15;
			unk_0xF7BAED32358C2FB9(&Var153);
		}
	}
	func_949();
}

void func_949()
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_950(struct<21> Param0)
{
	func_998(func_999(Param0.f_0), Param0);
	unk_0x98B3F83A2664256A(16);
	unk_0xA019A9258930EC41(8);
	func_997(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&Local_112, 872);
	unk_0xFF584A1B7842F821(&Local_984, 449);
	if (!func_996())
	{
		func_902();
	}
	if (unk_0x393E9918BC37548A())
	{
		unk_0x50E03C7D74E352C4(0);
		if (unk_0x722688699565161D())
		{
		}
		func_993();
		func_951(0, 0, 0);
		Local_984[unk_0x2E40EEA43EF34BD6() /*14*/] = 0;
	}
	else
	{
		func_902();
	}
}

void func_951(int iParam0, int iParam1, bool bParam2)
{
	func_992();
	if (func_397(unk_0x7C7787D2D7139A85()))
	{
		func_954(1);
	}
	if ((iParam0 != 0 && unk_0xD56C8C2B75BF9665(iParam1)) && func_953(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xA1E7A40E1F56E511(&Global_1674847, 0);
				break;
			}
	}
	if (!func_465() && !func_189(unk_0x7C7787D2D7139A85(), 1))
	{
		if (func_146())
		{
			func_110(3);
		}
	}
	func_110(4);
	if (func_482(0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 = func_484();
	}
	if (func_318(iParam0))
	{
		func_719();
		Global_1674879.f_18 = func_699(func_252());
	}
	else if (func_323(func_925(unk_0x7C7787D2D7139A85())))
	{
		func_717();
		Global_1674933.f_18 = func_699(func_252());
	}
	if (bParam2)
	{
		if (!func_143())
		{
			func_111(1);
		}
	}
	func_952();
}

void func_952()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_65();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_953(int iParam0, bool bParam1)
{
	return func_76(unk_0x7C7787D2D7139A85(), iParam0, bParam1);
}

void func_954(bool bParam0)
{
	int iVar0;
	
	func_946(33);
	func_946(34);
	func_946(35);
	func_946(36);
	func_946(37);
	func_946(38);
	func_946(39);
	func_946(40);
	func_946(43);
	func_946(41);
	func_946(54);
	func_946(42);
	func_946(47);
	func_991(23);
	func_991(24);
	func_946(92);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 2);
	func_990();
	func_985();
	func_980();
	func_975();
	func_964();
	func_960();
	func_956();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_955(3))
	{
		func_991(3);
	}
	else if (func_955(4))
	{
		func_991(4);
	}
	else if (func_955(5))
	{
		func_991(5);
	}
	else if (func_955(6))
	{
		func_991(6);
	}
	else if (func_955(7))
	{
		func_991(7);
	}
	else if (((((((((((((((((func_955(0) || func_955(1)) || func_955(2)) || func_955(8)) || func_955(9)) || func_955(10)) || func_955(11)) || func_955(12)) || func_955(13)) || func_955(14)) || func_955(15)) || func_955(16)) || func_955(17)) || func_955(18)) || func_955(19)) || func_955(20)) || func_955(21)) || func_955(22))
	{
		func_991(8);
		func_991(0);
		func_991(1);
		func_991(2);
		func_991(9);
		func_991(10);
		func_991(11);
		func_991(12);
		func_991(13);
		func_991(14);
		func_991(15);
		func_991(16);
		func_991(17);
		func_991(18);
		func_991(19);
		func_991(20);
		func_991(21);
		func_991(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_955(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_956()
{
	if (func_958())
	{
		func_957(0);
		func_957(1);
		func_957(2);
		func_957(3);
	}
}

void func_957(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_958()
{
	if (((func_959(0) || func_959(1)) || func_959(2)) || func_959(3))
	{
		return 1;
	}
	return 0;
}

bool func_959(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_960()
{
	if (func_962())
	{
		func_961(4);
		func_961(5);
		func_961(6);
		func_961(7);
	}
}

void func_961(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_962()
{
	if (((func_963(4) || func_963(5)) || func_963(6)) || func_963(7))
	{
		return 1;
	}
	return 0;
}

bool func_963(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_964()
{
	int iVar0;
	
	if (func_974())
	{
		func_973(8);
		func_973(9);
		func_973(10);
		func_973(12);
		func_973(13);
		func_973(14);
		func_973(19);
		func_973(20);
		func_973(21);
		func_973(22);
		func_973(23);
		func_973(24);
		func_973(25);
		func_973(26);
		func_973(15);
		func_973(16);
		func_973(17);
		func_973(18);
		func_973(35);
		func_973(45);
		func_973(46);
		if (func_972(11))
		{
			func_973(11);
			iVar0 = func_451(7226, -1, 0);
			unk_0xA1E7A40E1F56E511(&iVar0, 2);
			func_449(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_972(48))
	{
		if (func_970(151, 3))
		{
			func_968(151, 3);
		}
		func_973(48);
	}
	if (func_972(49))
	{
		if (func_970(152, 3))
		{
			func_968(152, 3);
		}
		func_973(49);
	}
	if (func_972(50))
	{
		if (func_970(153, 3))
		{
			func_968(153, 3);
		}
		func_973(50);
	}
	if (func_972(51))
	{
		if (func_970(func_965(), 3))
		{
			func_968(func_965(), 3);
		}
		func_973(51);
	}
}

int func_965()
{
	if (func_967())
	{
		func_966(154, Global_19486, 1);
	}
	return 154;
}

void func_966(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_967()
{
	int iVar0;
	
	iVar0 = func_66(unk_0x7C7787D2D7139A85());
	if (((iVar0 != unk_0x7C7787D2D7139A85() && iVar0 != func_65()) && unk_0xD56C8C2B75BF9665(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_968(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_969(iParam0, iVar0, 0);
			func_966(iParam0, iVar0, 0);
		}
	}
}

void func_969(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_970(int iParam0, int iParam1)
{
	if (func_971(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_974()
{
	if (((((((((((((((((((((func_972(8) || func_972(9)) || func_972(10)) || func_972(12)) || func_972(11)) || func_972(13)) || func_972(14)) || func_972(19)) || func_972(20)) || func_972(21)) || func_972(22)) || func_972(23)) || func_972(24)) || func_972(25)) || func_972(26)) || func_972(15)) || func_972(16)) || func_972(17)) || func_972(18)) || func_972(35)) || func_972(45)) || func_972(46))
	{
		return 1;
	}
	return 0;
}

void func_975()
{
	if (func_979())
	{
		func_978(0);
		func_978(1);
		func_978(2);
		func_978(3);
		func_978(4);
		func_978(5);
		if (func_977(32))
		{
			if (func_970(func_976(), 3))
			{
				func_968(func_976(), 3);
			}
			func_978(32);
		}
	}
}

int func_976()
{
	if (func_967())
	{
		func_966(12, Global_19486, 1);
	}
	return 12;
}

bool func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_978(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_979()
{
	if ((((func_977(1) || func_977(0)) || func_977(2)) || func_977(4)) || func_977(5))
	{
		return 1;
	}
	return 0;
}

void func_980()
{
	if (func_984())
	{
		func_983(0);
		func_983(1);
		func_983(2);
		func_983(3);
		func_983(4);
		func_983(5);
		func_983(6);
		func_983(7);
		if (func_982(8))
		{
			func_983(8);
		}
		if (func_982(15))
		{
			if (func_970(func_981(), 3))
			{
				func_968(func_981(), 3);
			}
			func_983(15);
		}
	}
}

int func_981()
{
	if (func_967())
	{
		func_966(20, Global_19486, 1);
	}
	return 20;
}

bool func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_984()
{
	if ((((((((func_982(0) || func_982(1)) || func_982(2)) || func_982(3)) || func_982(4)) || func_982(5)) || func_982(6)) || func_982(7)) || func_982(8))
	{
		return 1;
	}
	return 0;
}

void func_985()
{
	if (func_989())
	{
		func_988(0);
		func_988(1);
		func_988(2);
		func_988(3);
		func_988(4);
		func_988(5);
		func_988(6);
		func_988(7);
		func_988(8);
		func_988(9);
		func_988(10);
		func_988(11);
		func_988(12);
		if (func_987(13))
		{
			if (func_970(func_986(), 3))
			{
				func_968(func_986(), 3);
			}
			func_988(13);
		}
	}
}

int func_986()
{
	if (func_967())
	{
		func_966(76, Global_19486, 1);
	}
	return 76;
}

bool func_987(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_989()
{
	if ((((((((((((func_987(0) || func_987(1)) || func_987(2)) || func_987(3)) || func_987(4)) || func_987(5)) || func_987(6)) || func_987(7)) || func_987(8)) || func_987(9)) || func_987(10)) || func_987(11)) || func_987(12))
	{
		return 1;
	}
	return 0;
}

void func_990()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_991(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_992()
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

void func_993()
{
	int iVar0;
	int iVar1;
	
	unk_0x8CBD7ED64E4A522F("relHeadHunterPlayer", &iLocal_1438);
	iVar0 = unk_0x555CE7C4EC845E9D(unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0x9B54A3CCAAB4F5FB(5, Global_1574964[iVar1], iLocal_1438);
		unk_0x9B54A3CCAAB4F5FB(5, iLocal_1438, Global_1574964[iVar1]);
		unk_0x9B54A3CCAAB4F5FB(1, Global_1574964[iVar1], Global_1575009);
		unk_0x9B54A3CCAAB4F5FB(1, Global_1575009, Global_1574964[iVar1]);
		unk_0x9B54A3CCAAB4F5FB(iVar0, iLocal_1438, joaat("COP"));
		unk_0x9B54A3CCAAB4F5FB(iVar0, joaat("COP"), iLocal_1438);
		unk_0x9B54A3CCAAB4F5FB(1, iLocal_1438, Global_1575012[5]);
		unk_0x9B54A3CCAAB4F5FB(1, Global_1575012[5], iLocal_1438);
		unk_0x9B54A3CCAAB4F5FB(1, iLocal_1438, Global_1574997);
		unk_0x9B54A3CCAAB4F5FB(1, Global_1574997, iLocal_1438);
		iVar1++;
	}
	unk_0x9B54A3CCAAB4F5FB(5, iLocal_1438, Global_1575009);
	unk_0x9B54A3CCAAB4F5FB(5, Global_1575009, iLocal_1438);
	unk_0x9B54A3CCAAB4F5FB(1, 2017343592, Global_1575009);
	unk_0x9B54A3CCAAB4F5FB(5, 2017343592, iLocal_1438);
	func_995(1, &Global_1575009);
	func_994(&Global_1575009);
	func_994(&iLocal_1438);
}

void func_994(int iParam0)
{
	unk_0x9B54A3CCAAB4F5FB(1, -1865950624, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, -1865950624);
	unk_0x9B54A3CCAAB4F5FB(1, 296331235, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, 296331235);
	unk_0x9B54A3CCAAB4F5FB(1, 1166638144, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, 1166638144);
	unk_0x9B54A3CCAAB4F5FB(1, 2037579709, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, 2037579709);
	unk_0x9B54A3CCAAB4F5FB(1, 2017343592, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, 2017343592);
	unk_0x9B54A3CCAAB4F5FB(1, -1821475077, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, -1821475077);
	unk_0x9B54A3CCAAB4F5FB(1, 1782292358, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, 1782292358);
	unk_0x9B54A3CCAAB4F5FB(1, -1033021910, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, -1033021910);
	unk_0x9B54A3CCAAB4F5FB(1, -1285976420, *iParam0);
	unk_0x9B54A3CCAAB4F5FB(1, *iParam0, -1285976420);
}

void func_995(int iParam0, var uParam1)
{
	unk_0x9B54A3CCAAB4F5FB(iParam0, joaat("COP"), *uParam1);
	unk_0x9B54A3CCAAB4F5FB(iParam0, *uParam1, joaat("COP"));
	unk_0x9B54A3CCAAB4F5FB(iParam0, joaat("army"), *uParam1);
	unk_0x9B54A3CCAAB4F5FB(iParam0, *uParam1, joaat("army"));
	unk_0x9B54A3CCAAB4F5FB(iParam0, -183807561, *uParam1);
	unk_0x9B54A3CCAAB4F5FB(iParam0, *uParam1, -183807561);
}

int func_996()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x393E9918BC37548A())
		{
			return 0;
		}
		if (unk_0x7A22E0DA3B8BAF4B())
		{
			return 1;
		}
		if (func_897())
		{
			return 0;
		}
		if (func_895(157))
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

int func_997(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_903();
			}
			else
			{
				return 0;
			}
		}
		if (!func_849())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_903();
					}
					else
					{
						return 0;
					}
				}
				if (func_897())
				{
					if (!bParam2)
					{
						func_903();
					}
					else
					{
						return 0;
					}
				}
				if (func_895(157))
				{
					if (!bParam2)
					{
						func_903();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xA2E986F74092E569())
			{
				if (!bParam2)
				{
					func_903();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x306B26A377F9A5BE();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			if (!bParam2)
			{
				func_903();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xA2E986F74092E569())
	{
		if (!bParam2)
		{
			func_903();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_998(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x393E9918BC37548A())
	{
		func_903();
	}
	unk_0x4CF6FBF2580A447D(uParam0, 0, Param1.f_16);
}

int func_999(int iParam0)
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
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
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
		
		case 126:
			return 32;
		
		case 127:
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
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

int func_1000(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

