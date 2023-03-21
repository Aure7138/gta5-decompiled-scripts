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
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<872> Local_122 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_994[32];
	int iLocal_1443 = 0;
	int iLocal_1444 = 0;
	int iLocal_1445 = 0;
	int iLocal_1446 = 0;
	int iLocal_1447 = 0;
	int iLocal_1448 = 0;
	int iLocal_1449 = 0;
	int iLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458[4] = { 0, 0, 0, 0 };
	struct<8> Local_1463[30];
	var uLocal_1704[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1735 = 0;
	var uLocal_1736 = 0;
	int iLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
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
	fLocal_97 = -0.05f;
	fLocal_98 = 0.92f;
	fLocal_99 = 1.94f;
	fLocal_100 = 2.99f;
	fLocal_101 = 3.7f;
	Local_103 = { -0.4f, 0.96f, 0.85f };
	fLocal_106 = 0.95f;
	Local_107 = { 0f, 2f, 2.5f };
	fLocal_110 = 1.75f;
	Local_111 = { 0f, 0f, 120f };
	fLocal_114 = 35.5f;
	iLocal_1450 = -1;
	if (unk_0x27CA09C6DFAB1E79() && func_853(unk_0x3D35F9864E4640B1(), 0, 1))
	{
		func_824(ScriptParam_0);
	}
	else
	{
		func_776();
	}
	while (true)
	{
		func_775();
		if (func_767())
		{
			func_776();
		}
		Global_1779220.f_2 = Local_122.f_863;
		Global_1779220.f_3 = Local_122.f_864;
		switch (func_766(unk_0x43B24C247F35B6BC()))
		{
			case 0:
				if (func_765() == 1)
				{
					if (func_764())
					{
						func_763();
						if (func_762())
						{
							func_747(166, 1, -1, 0);
							unk_0x438B2E6B2BAD6A0D(3);
							func_746(0f);
							iLocal_1449 = unk_0x834C6A3950A9090B(unk_0x0031992CA618A445());
							unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_1448);
						}
						else
						{
							func_747(166, 0, -1, 0);
						}
						func_745();
						func_744();
						func_743();
						Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 1;
					}
				}
				else if (func_765() == 4)
				{
					Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_740(1))
				{
					Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 2;
				}
				if (func_765() == 1)
				{
					func_739();
					func_719();
					func_696();
					func_287();
					func_278();
					if (func_762() || func_276())
					{
						func_135(&(Global_1344830.f_531), &Global_1344830, 26, &(Global_1344830.f_1), &(Global_1344830.f_114), -1, 0);
					}
					func_73();
				}
				else if (func_765() == 4)
				{
					Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 3;
					func_70();
				}
				func_69();
				break;
			
			case 3:
				func_68(&(Local_122.f_845));
				if (func_67(&(Local_122.f_845)))
				{
					Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 4;
			
			case 4:
				func_776();
				break;
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			switch (func_765())
			{
				case 0:
					func_65();
					func_64();
					if (func_25())
					{
						unk_0x2462B56C1A432B47(&(Local_122.f_863), &(Local_122.f_864));
						Local_122.f_0 = 1;
						Local_122.f_118 = unk_0x43B24C247F35B6BC();
						Local_122.f_119 = unk_0x3D35F9864E4640B1();
						func_747(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_122.f_0 = 4;
					}
					else if (func_1())
					{
						Local_122.f_0 = 4;
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
	if (Global_2501777.f_4867.f_24)
	{
		Global_2501777.f_4867.f_24 = 0;
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
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 2))
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
	switch (Local_122.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 1))
			{
				Local_122.f_117 = 2;
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
			{
				Local_122.f_117 = 2;
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
	if (!unk_0x2A3398C6222EB190(Local_122.f_1, 6))
	{
		if (!func_8(&(Local_122.f_849)))
		{
			func_7(&(Local_122.f_849), 0, 0);
		}
		else if (func_6(&(Local_122.f_849), 500, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 6);
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
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
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
	if (!func_8(&(Local_122.f_847)))
	{
		func_7(&(Local_122.f_847), 0, 0);
	}
	else if (func_6(&(Local_122.f_847), func_10(), 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_14134;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEF0CB8FF125B9F9C())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_122.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_122.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
							{
								Local_122.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_122.f_2[iVar0 /*26*/] == 1)
						{
							Local_122.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_122.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_122.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0x2A3398C6222EB190(Local_122.f_109, iVar0))
										{
											unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_108), iVar0);
											Local_122.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x2A3398C6222EB190(Local_122.f_110, iVar0))
										{
											unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_108), iVar0);
											Local_122.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x2A3398C6222EB190(Local_122.f_111, iVar0))
										{
											unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_108), iVar0);
											Local_122.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0x2A3398C6222EB190(Local_122.f_112, iVar0))
										{
											Local_122.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_122.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_122.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1)))
							{
								Local_122.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_122.f_2[iVar0 /*26*/].f_2))
								{
									Local_122.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0x2A3398C6222EB190(Local_122.f_112, iVar0))
								{
									Local_122.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_122.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x2A3398C6222EB190(Local_122.f_110, iVar0))
							{
								Local_122.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x2A3398C6222EB190(Local_122.f_111, iVar0))
							{
								Local_122.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_122.f_2[iVar0 /*26*/].f_24)
						{
							Local_122.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_122.f_2[iVar0 /*26*/].f_25)
						{
							Local_122.f_2[iVar0 /*26*/].f_17 = 6;
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
				switch (Local_122.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_122.f_2[iVar0 /*26*/] == 0)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_122.f_2[iVar0 /*26*/] == 2)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_122.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_122.f_2[iVar0 /*26*/].f_17 == 3 || Local_122.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_122.f_2[iVar0 /*26*/].f_24)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_122.f_2[iVar0 /*26*/].f_17 == 3 || Local_122.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_122.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
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
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return !func_13(unk_0xD7E2A160FD5DEEE1(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x7A6C051038031EFA(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
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
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_122.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_116), iVar0);
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
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			iVar1 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xA2A739A5B0AF6AEC(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
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
	if (Global_1312833[iVar1] == 1)
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
	
	if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_122.f_2[iParam0 /*26*/].f_3[iVar0]))
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
	if (Local_122.f_0 != 4)
	{
		iLocal_1445 = 0;
		while (iLocal_1445 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iLocal_1445)))
			{
				iVar3 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iLocal_1445));
				if (!func_17(iVar3, 0))
				{
					if (func_853(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1445);
					func_23(iLocal_1445);
					if (!unk_0x2A3398C6222EB190(Local_122.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0x2A3398C6222EB190(Local_122.f_1, 1) || unk_0x2A3398C6222EB190(Local_122.f_1, 3)) || unk_0x2A3398C6222EB190(Local_122.f_1, 5))
							{
								if (!unk_0x2A3398C6222EB190(Local_994[iLocal_1445 /*14*/].f_1, 4))
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
			else if (!unk_0x2A3398C6222EB190(Local_122.f_1, 5))
			{
				if (Local_122.f_118 > -1)
				{
					if (iLocal_1445 == Local_122.f_118)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 5);
					}
				}
			}
			iLocal_1445++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_122.f_115 != iVar0)
		{
			Local_122.f_115 = iVar0;
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 1);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 2);
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
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_113, iVar0))
			{
				if (!func_8(&(Local_122.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_122.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_122.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_113), iVar0);
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
		if (!unk_0x2A3398C6222EB190(Local_122.f_109, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_109), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_110, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_110), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_112, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_112), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_111, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_111), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_122.f_113, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_113), iVar0);
			}
			else if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_113), iVar0);
			}
		}
		if (Local_122.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_122.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_12, iVar0))
				{
					Local_122.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_122.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0x2A3398C6222EB190(Local_994[iParam0 /*14*/].f_13, iVar0))
				{
					Local_122.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0x2A3398C6222EB190(Local_122.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_122.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xA2A739A5B0AF6AEC(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2), unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iParam0)), 1);
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_114), iParam0);
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
	
	iVar0 = Local_122.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_122.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]))
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
	
	iVar0 = Local_122.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_122.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_122.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_122.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0x9447D7F8254F01B6(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0x2A3398C6222EB190(Local_122.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x963AAB0E6FFD7E02(Var3, 10f, 1, 0, 0, 1);
							unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, uVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0xDD73FD47AE17361B(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x4D843768938087D4(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1448);
							unk_0x5CBEDEFFD7D137BD(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0x75C57ED2D557CF95(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
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
	float fVar1;
	
	if (!unk_0x9447D7F8254F01B6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE882E0C18562237F(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x5129A9193468FF77(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x23812D401DEBDCBC(uVar0);
	Global_2501777.f_5805 = uVar0;
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (bParam15)
		{
			unk_0x39F4D36D9852AC7E(uVar0, 1);
		}
		unk_0x583AB626B1CF33F0(uVar0, iParam10);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam8)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
			else
			{
				unk_0x84143EEA447C3060(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
			}
		}
		unk_0x5028E664ECBD1407(iVar0, iParam9);
		unk_0xD19E428259B86D65(iVar0, 1);
		if (bParam12)
		{
			unk_0x1F9198D3132F6E4C(iVar0);
			unk_0x4E546CD1861E7F46(iVar0, 5, 5, 1f);
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
	unk_0xBE91026C1FC72180(iParam0);
	return unk_0x772F801619C83779(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_122.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_122.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_122.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
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
	
	iVar1 = Local_122.f_2[iParam0 /*26*/];
	iVar2 = Local_122.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_122.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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
	
	if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_122.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_122.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x163F08900ED3E103(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), Local_122.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574743);
											unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1448);
											unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
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
					if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x163F08900ED3E103(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_122.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_122.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_122.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, uVar8, 1, 1, 1))
									{
										unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574743);
										unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1448);
										unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										unk_0x541B678DB67C7CF0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										unk_0xF5A766CC3A8142D0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										unk_0xA84451B91C2933E5(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xB3AC5619AC4F84DC(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										iVar3 = func_38();
										unk_0x845D37CEF8F0ABAF(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										uVar4 = func_37();
										unk_0x51290C3265C3BD04(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0xC6DB45FDC2DEA72F(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
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
	return unk_0xF2DB717A73826179(Global_262145.f_14142);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_14141;
}

int func_39(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	iVar0 = unk_0x5618B819E5B9C053(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xC191BE4D610C22BA(iVar0);
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(iVar0, iParam9);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam7)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(uParam1))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
		if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
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
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		unk_0xED8E0F2F3151048A(uParam0);
		return unk_0xA02DD6B5C8C02298(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_122.f_2[iParam0 /*26*/] == 0 || Local_122.f_2[iParam0 /*26*/] == 2);
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
	switch (Local_122.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
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
	
	switch (Local_122.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_122.f_2[iParam0 /*26*/].f_11;
				if (unk_0x9447D7F8254F01B6(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_122.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_122.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_122.f_2[iParam0 /*26*/].f_2), iVar0, Local_122.f_2[iParam0 /*26*/].f_13, Local_122.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0x4D843768938087D4(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xDD73FD47AE17361B(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x56B418F469976565(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_2), 1, iLocal_1448);
								unk_0xC587296050B2CA93(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 0);
								unk_0x5CBEDEFFD7D137BD(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 0, 0);
								unk_0xCFC7B014BB928D6D(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1, 1);
								unk_0x9DFCC19370F919F3(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x467890D29D1877A3(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x75C57ED2D557CF95(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 0);
								unk_0xB3460ED1DE6509A8(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x163F08900ED3E103(1))
					{
						iVar1 = Local_122.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_122.f_2[iParam0 /*26*/].f_1), Local_122.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), Global_1574743);
								unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, iLocal_1448);
								unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x163F08900ED3E103(1))
				{
					iVar1 = Local_122.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_122.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_122.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_122.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_122.f_2[iParam0 /*26*/].f_13, Local_122.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), Global_1574743);
								unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, iLocal_1448);
								unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x163F08900ED3E103(1))
				{
					iVar1 = Local_122.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &Var2, &uVar5, &uVar6))
							{
								Local_122.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_122.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_122.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(Var2);
							}
						}
						if (!func_28(Local_122.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_122.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_122.f_2[iParam0 /*26*/].f_13, Local_122.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), Global_1574743);
								unk_0x691386A8C3FAEB92(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, iLocal_1448);
								unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x541B678DB67C7CF0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 42, 1);
								unk_0xF5A766CC3A8142D0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 11, 1);
								unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 44, 1);
								unk_0xA84451B91C2933E5(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								unk_0xB3AC5619AC4F84DC(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), Local_122.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 132, 1);
								unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 281, 1);
								iVar7 = func_49();
								unk_0x845D37CEF8F0ABAF(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), iVar7);
								unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), iVar7);
								uVar8 = func_48();
								unk_0x51290C3265C3BD04(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), uVar8);
								unk_0xBCEFFDCF42E59903(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0xCFC7B014BB928D6D(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1, 1);
								unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_107), iParam0);
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
	return unk_0xF2DB717A73826179(Global_262145.f_14140);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_14139;
}

float func_50(int iParam0)
{
	if (func_28(Local_122.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
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
			if (!unk_0x2A3398C6222EB190(Local_122.f_871, iVar1))
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
		Local_122.f_865[iVar0] = unk_0x765BE154A2FACB3E(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_122.f_865[iVar0] = unk_0x765BE154A2FACB3E(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_122.f_865[iVar0] = unk_0x765BE154A2FACB3E(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_122.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x3AF262D7332EEDF5(0, Local_122.f_122);
			if (!func_28(Local_122.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_122.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_122.f_123[iVar0 /*36*/] };
					*uParam2 = Local_122.f_123[iVar0 /*36*/].f_3;
					Local_122.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x3AF262D7332EEDF5(0, Local_122.f_122);
			if (!func_28(Local_122.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_122.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_122.f_123[iVar0 /*36*/] };
					*uParam2 = Local_122.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_122.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x3AF262D7332EEDF5(0, 10);
			if (!func_28(Local_122.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_122.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_122.f_484[iVar0 /*36*/] };
					*uParam2 = Local_122.f_484[iVar0 /*36*/].f_3;
					Local_122.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404997.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x736668867F457F94(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xDE23154833E5D069(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xDE23154833E5D069(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDC9A6EA41577EFB6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam13)
	{
		if (unk_0x9DC4BF239830A808(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (fParam14 > 0f)
	{
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
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
	Global_2404997.f_2++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_853(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x1410333E912D4EC6(func_56(unk_0x3D35F9864E4640B1()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xAD2B8127B12C130D(Param0, fParam3))
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
		if (func_853(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2422142[iVar1 /*399*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x1410333E912D4EC6(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam8 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x1410333E912D4EC6(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_853(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_56(iVar1), Param0, 1) < fParam3)
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
	if (func_63(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_62(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_59(unk_0x3D35F9864E4640B1(), iParam0))
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
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_60();
}

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0, int iParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_62(iParam0) };
		Global_2488588 = { func_62(iParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
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
	Local_122.f_2[0 /*26*/] = 2;
	Local_122.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_122.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_122.f_2[1 /*26*/] = 2;
	Local_122.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_122.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_122.f_2[2 /*26*/] = 0;
	Local_122.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_122.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_122.f_2[3 /*26*/] = 0;
	Local_122.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_122.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_65()
{
	func_66();
	if (Local_122.f_122 == 0)
	{
		if (Local_122.f_121 == 0)
		{
			Local_122.f_122 = 10;
		}
		else
		{
			Local_122.f_122 = 9;
		}
	}
	if (unk_0x2A3398C6222EB190(Local_122.f_1, 4))
	{
		return;
	}
	switch (Local_122.f_121)
	{
		case 0:
			Local_122.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_122.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_122.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_122.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_122.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_122.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_122.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_122.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_122.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_122.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_122.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_122.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_122.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_122.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_122.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_122.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_122.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_122.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_122.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_122.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_122.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_122.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_122.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_122.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_122.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_122.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_122.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_122.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_122.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_122.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_122.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_122.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_122.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_122.f_123[6 /*36*/].f_14[2] = 180f;
			Local_122.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_122.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_122.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_122.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_122.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_122.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_122.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_122.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_122.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_122.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_122.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_122.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_122.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_122.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_122.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_122.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_122.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_122.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_122.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_122.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_122.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_122.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_122.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_122.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_122.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_122.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_122.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_122.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_122.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_122.f_484[0 /*36*/].f_3 = 179.583f;
			Local_122.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_122.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_122.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_122.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_122.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_122.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_122.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_122.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_122.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_122.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_122.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_122.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_122.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_122.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_122.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_122.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_122.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_122.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_122.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_122.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_122.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_122.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_122.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_122.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_122.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_122.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_122.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_122.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_122.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_122.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_122.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_122.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_122.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_122.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_122.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_122.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_122.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_122.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_122.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_122.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_122.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_122.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_122.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_122.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_122.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_122.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_122.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_122.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_122.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_122.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_122.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_122.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_122.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_122.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_122.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_122.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_122.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_122.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_122.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_122.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_122.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_122.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_122.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_122.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_122.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_122.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_122.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_122.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_122.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_122.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_122.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_122.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_122.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_122.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_122.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_122.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_122.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_122.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_122.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_122.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_122.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_122.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_122.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_122.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_122.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_122.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_122.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_122.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_122.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Local_122.f_1), 4);
}

var func_66()
{
	if (Local_122.f_121 != -1)
	{
		return Local_122.f_121;
	}
	if (Local_122.f_121 == -1)
	{
		if (unk_0x34FC7E1B0DE4E190(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0)) == joaat("City"))
		{
			Local_122.f_121 = 0;
		}
		else
		{
			Local_122.f_121 = 1;
		}
	}
	return Local_122.f_121;
}

int func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= 1000)
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
		if (unk_0xEF0CB8FF125B9F9C())
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
	
	if (Local_122.f_119 != -1)
	{
		iVar0 = unk_0xA7871E29B06DA901(Local_122.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_60())
				{
					if (iVar2 == iVar0 || func_71(iVar2, iVar0, 1))
					{
						unk_0x85F49C37BE784CD7(5, Global_1574701[iVar1], Global_1574743);
						unk_0x85F49C37BE784CD7(5, Global_1574743, Global_1574701[iVar1]);
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
		if (Global_1623799[iParam0 /*488*/].f_11 != func_60())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
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
			if (Global_1623799[iParam0 /*488*/].f_11 != func_60())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
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
	
	if (func_762())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_134(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_133(unk_0x3D35F9864E4640B1()))
		{
			if (!func_127())
			{
				func_123(0);
				unk_0xE8AFE63721D00A2E(0);
				unk_0xCD7E92DE2BFA0B0D(&uLocal_1443, 18);
			}
		}
	}
	if (Local_122.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			Var0 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_74(166, Var0, &uLocal_1736, 1140457472, 1144750080, 0);
	}
}

void func_74(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_122(unk_0x3D35F9864E4640B1()) && !func_121(unk_0x3D35F9864E4640B1())) && !unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8)) && (func_120(unk_0x3D35F9864E4640B1()) || func_119(unk_0x3D35F9864E4640B1())))
	{
		return;
	}
	Global_1779211 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Param1);
	func_115(iParam0, fVar0);
	if (unk_0x957E53BB191CB24D() && unk_0xA095EFC51C188A82() == 15)
	{
		if (func_114(unk_0x3D35F9864E4640B1()) || func_112(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0xA7D65AEDCF363C6A(1344549371))
			{
				unk_0x72FE4F9355DA095B(1344549371);
			}
		}
		else if (unk_0xA7D65AEDCF363C6A(1344549371))
		{
			unk_0x812DD153A22D0357(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_111(unk_0x3D35F9864E4640B1(), 21))
		{
			func_110(Param1, 1, 0);
		}
		if (!*uParam4 && func_853(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 1;
			if (func_109(iParam0))
			{
				unk_0x15007EAE63C7ECCF(func_108(iParam0));
				if (func_107(iParam0, -1))
				{
					unk_0x438B2E6B2BAD6A0D(0);
					if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
					{
						unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 1);
						unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				fVar1 = func_105(iParam0);
				if (fVar1 != 1f)
				{
					func_746(fVar1);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
				}
			}
			if (!Global_2391044)
			{
				if (func_104(iParam0) && func_114(unk_0x3D35F9864E4640B1()))
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
			if (func_99(unk_0x3D35F9864E4640B1(), 19))
			{
				func_98(19);
			}
		}
		if (*uParam4 && func_853(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 0;
			if (func_109(iParam0))
			{
				if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
				{
					unk_0x15007EAE63C7ECCF(1f);
					unk_0x438B2E6B2BAD6A0D(5);
					unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
				}
			}
			if (func_106(iParam0))
			{
				func_97();
				unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
			}
			if (iParam7 && !func_122(unk_0x3D35F9864E4640B1()))
			{
				if (func_95(unk_0x3D35F9864E4640B1()) != 152)
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
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_29), iParam0);
}

bool func_76(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_29, iParam0);
}

void func_77()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_24), &Global_2408969, 2);
	unk_0x44666CF18D6E211C(&(Global_2404997.f_26), &Global_2408971, 17);
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
	Global_2404997.f_22 = iParam0;
	Global_2404997.f_23 = iParam1;
}

void func_80(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_43), &Global_2408988, 315);
	}
	else
	{
		Global_2404997.f_43 = { Global_2408988 };
		Global_2404997.f_43.f_49 = { Global_2408988.f_49 };
		Global_2404997.f_43.f_52 = Global_2408988.f_52;
		Global_2404997.f_43.f_53 = Global_2408988.f_53;
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
	
	if (Global_2404997.f_480.f_1 == unk_0xFFDE6A3A0108B7CB())
	{
		Global_2404997.f_480 = { Var0 };
	}
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		Global_2404997.f_679 = 0;
	}
	else
	{
		Global_2404997.f_679 = 1;
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
		Global_2404997.f_680.f_515 = unk_0xFFDE6A3A0108B7CB();
		Global_2404997.f_680.f_504 = iParam1;
		Global_2404997.f_680.f_505 = iParam2;
		Global_2404997.f_680.f_506 = iParam10;
		func_88();
		func_87(8, 0, 0, 0, 0);
		Global_2404997.f_680.f_507 = iParam11;
		Global_2404997.f_680.f_510 = iParam3;
		Global_2404997.f_680.f_511 = iParam4;
		Global_2404997.f_680.f_508 = iParam5;
		Global_2404997.f_680.f_509 = iParam6;
		Global_2404997.f_680.f_512 = iParam7;
		Global_2404997.f_680.f_513 = iParam8;
		Global_2404997.f_680.f_514 = iParam9;
		Global_2404997.f_1713 = 1;
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
		Global_2404997.f_1713 = 0;
		Global_2404997.f_1712 = 0;
	}
}

void func_85()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_680), &(Global_2404997.f_1196), 516);
	Global_2404997.f_480 = { Global_2404997.f_486 };
	if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		Global_2404997.f_1712 = 0;
	}
}

int func_86()
{
	if ((Global_2404997.f_1712 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_1196.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_1196.f_515))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411761 = 0;
	}
	Global_2404997.f_480 = iParam0;
	Global_2404997.f_480.f_1 = unk_0xFFDE6A3A0108B7CB();
	Global_2404997.f_480.f_2 = iParam1;
	Global_2404997.f_480.f_3 = iParam2;
	Global_2404997.f_480.f_4 = iParam3;
	Global_2404997.f_480.f_5 = iParam4;
}

void func_88()
{
	if (func_91() && !func_86())
	{
		func_90();
	}
	func_89();
	Global_2404997.f_680 = 0;
}

void func_89()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404997.f_680.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_90()
{
	if (func_86())
	{
		if (Global_2404997.f_680.f_515 == Global_2404997.f_1196.f_515)
		{
			return;
		}
	}
	if (!unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_1196), &(Global_2404997.f_680), 516);
		Global_2404997.f_486 = { Global_2404997.f_480 };
		Global_2404997.f_1712 = 1;
	}
}

int func_91()
{
	if ((Global_2404997.f_1713 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_680.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_358), &Global_2409303, 121);
}

void func_93()
{
	func_94();
	Global_2404997.f_2172 = 0;
}

void func_94()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404997.f_2173[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && Global_2501777.f_4862 < 1f)
		{
			return;
		}
	}
	Global_2501777.f_4863 = -1;
	Global_2501777.f_4862 = 1f;
}

void func_98(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

void func_100(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

void func_101(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_102(int iParam0)
{
	if (func_103() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391044)
	{
		return;
	}
	Global_2391044 = iParam0;
	Global_2391046 = 0;
	Global_2391047 = 0;
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
		case 229:
		case 230:
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

void func_110(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404997.f_43.f_49 = { Param0 };
	Global_2404997.f_43.f_52 = iParam3;
	Global_2404997.f_43.f_53 = iParam4;
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
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
		if (Global_1623799[iParam0 /*488*/].f_11 != func_60())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
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
	if (!func_117(unk_0x3D35F9864E4640B1()))
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
			return Global_262145.f_11711;
		
		case 142:
			return Global_262145.f_11699;
		
		case 157:
			return Global_262145.f_11666;
		
		case 159:
			return Global_262145.f_11649;
		
		case 162:
			return Global_262145.f_11760;
		
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
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 7);
	}
	return 0;
}

bool func_121(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 2);
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/] != -1;
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!func_133(unk_0x3D35F9864E4640B1()))
	{
		if (iParam0 || func_124(unk_0x3D35F9864E4640B1()) != 0)
		{
			func_100(20);
			if (func_122(unk_0x3D35F9864E4640B1()))
			{
				if (!unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
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
	bVar1 = ((func_122(iParam0) && !func_121(iParam0)) && !unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8));
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
	if (Global_2501777.f_4867.f_33 != iVar0)
	{
		Global_2501777.f_4867.f_33 = iVar0;
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
	if ((func_99(unk_0x3D35F9864E4640B1(), 21) || func_99(unk_0x3D35F9864E4640B1(), 22)) || func_130())
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
	if (func_96(unk_0x3D35F9864E4640B1(), 0))
	{
		if ((func_126() && !func_129()) || func_111(unk_0x3D35F9864E4640B1(), 21))
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
	return func_131(292, -1);
}

int func_131(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
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
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
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
	Var3 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_122.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_122.f_2[iVar2 /*26*/].f_1))
				{
					Var6 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iVar2 /*26*/].f_1), 1) };
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
	struct<2> Var57;
	
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
		if (func_218(uParam1, iParam2, uParam3, Global_1574110, 0, func_271()))
		{
			func_217(1);
			if ((!func_215() && !func_213()) || unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
			{
				if (func_212())
				{
					func_209();
				}
				else
				{
					unk_0x661705F074A804D1(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_208(1);
						Global_1574110 = 0;
						iVar54 = -1;
						if (Global_1574293 != 1)
						{
							func_207(uParam1);
							if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
							{
								unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
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
								if (func_853(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((unk_0x09C68D317F1B5143(iVar35, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar35 /*399*/].f_245 != -1) || func_206(iVar35))
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
						if (!func_202(unk_0x3D35F9864E4640B1(), 0) && func_95(unk_0x3D35F9864E4640B1()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_200())
							{
								if (func_853(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
								}
								else
								{
									iVar35 = func_60();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_199(iVar35) && func_194(iVar35, iParam2)) && func_853(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
								Var38 = { func_189(iVar35) };
								if (iVar35 == unk_0x3D35F9864E4640B1())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x06D7899D9C1F422F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
								iVar37 = func_183(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7EBBB7725601519D(iVar37);
								}
								Global_1574110++;
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
									if (!func_200())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_178(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_177(iParam5, 1, 0, 0), 16);
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_170(iParam5))
								{
									func_169(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_169(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xCD7E92DE2BFA0B0D(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xA7871E29B06DA901(iVar52);
							if (func_853(iVar35, 0, 1) && !unk_0x2A3398C6222EB190(iVar49, iVar35))
							{
								iVar35 = unk_0xA7871E29B06DA901(iVar52);
							}
							else
							{
								iVar35 = func_60();
							}
							if (func_199(iVar35))
							{
								if (func_853(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
									Var38 = { func_189(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_62(iVar35) };
									iVar37 = func_183(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7EBBB7725601519D(iVar37);
									}
									Global_1574110++;
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
									func_149(iVar35, unk_0x06D7899D9C1F422F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							func_146(uParam3, uParam1);
						}
						func_145(&(uParam3->f_21));
						func_144();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 7))
						{
							func_143(uParam3, uParam1);
							func_142(uParam1, 0, 1);
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 7);
						}
						func_143(uParam3, uParam1);
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 11);
						}
						if (func_138(uParam3))
						{
							Global_1574293 = 1;
						}
						func_136(uParam3);
						if (Global_1574293 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574293 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x77FA56883245AD26(*uParam1))
					{
						unk_0x38C75B31337B3454(7);
						unk_0x45822700F324A838(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x38C75B31337B3454(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_144();
			func_208(0);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
			}
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 10))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x26742F01C78031C2();
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
		if (Global_1574293 != 2)
		{
			Global_1574293 = 2;
		}
	}
	else
	{
		switch (Global_1574293)
		{
			case 0:
				Global_1574293 = 1;
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
	iVar15 = unk_0xA7871E29B06DA901(uParam0->f_37);
	if (iVar15 != func_60() && func_853(iVar15, 0, 1))
	{
		Var2 = { func_62(iVar15) };
		iVar1 = func_141(uParam0, uParam0->f_37);
		if (func_140(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_139(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0xFAF1C1B430374114(&Var2))
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
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0x07D2F212D68B29BB(&Var2))
						{
							iVar16 = 1;
							func_139(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x07D2F212D68B29BB(&Var2))
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
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

var func_141(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEBD23F68B1A617FC(*uParam0, "COLLAPSE"))
	{
		unk_0xE8240315678FDE8E(iParam1);
		unk_0x1C703A54AB4B12F6();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x1C703A54AB4B12F6();
		}
	}
}

void func_143(var uParam0, var uParam1)
{
	if (!unk_0x2A3398C6222EB190(uParam0->f_33, 10))
	{
		unk_0xEBD23F68B1A617FC(*uParam1, "SET_HIGHLIGHT");
		unk_0x32F9127910F63DFA(uParam0->f_35);
		unk_0x1C703A54AB4B12F6();
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_33), 10);
	}
}

void func_144()
{
	if (Global_1574293 != 0)
	{
		Global_1574293 = 0;
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
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (iVar2 != func_60())
		{
			if (func_853(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_148(uParam0->f_38[iVar0 /*2*/], 0);
					func_147(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1593076[iVar0 /*647*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_ICON"))
		{
			unk_0x32F9127910F63DFA(iParam1);
			unk_0x32F9127910F63DFA(iParam2);
			if (iParam2 == 65)
			{
				unk_0x32F9127910F63DFA(iParam3);
			}
			unk_0x1C703A54AB4B12F6();
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
		if (Global_1574112)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEBD23F68B1A617FC(*uParam2, sVar1))
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0x32F9127910F63DFA(iParam10);
			}
			func_166(sParam1);
			unk_0x32F9127910F63DFA(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_166("");
			}
			else
			{
				unk_0x32F9127910F63DFA(65);
			}
			unk_0x32F9127910F63DFA(-1);
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
			unk_0x58F4B3BE2B4DE520(sParam9);
			unk_0x58F4B3BE2B4DE520(sParam9);
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
			unk_0x1C703A54AB4B12F6();
		}
	}
}

bool func_150(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 6);
}

bool func_151(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 5);
}

void func_152(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
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
		unk_0x32F9127910F63DFA(121);
	}
	else if (func_159(iParam1))
	{
		unk_0x32F9127910F63DFA(122);
	}
	else
	{
		if (func_155())
		{
			uParam0->f_36 = 0;
		}
		unk_0xE8240315678FDE8E(uParam0->f_36);
	}
}

int func_155()
{
	if (unk_0xF4F91CD09D59F42E())
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
	return Global_2445582.f_12;
}

int func_157()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		return func_156();
	}
	return func_158(Global_1641087.f_96810);
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
		if (Global_262145.f_5143[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0)
{
	if ((func_853(iParam0, 0, 1) && func_163()) && func_160(iParam0, 1))
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
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_60() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 != func_60())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_60())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	if (func_122(unk_0x3D35F9864E4640B1()) || func_164())
	{
		return 0;
	}
	return 1;
}

int func_164()
{
	switch (func_95(unk_0x3D35F9864E4640B1()))
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
		if (func_853(iParam0, 0, 1))
		{
			return func_113(iParam0);
		}
	}
	if ((func_853(iParam0, 0, 1) && func_163()) && func_162(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
}

int func_167()
{
	int iVar0;
	
	if (Global_1574112)
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
	if (Global_1574112)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_169(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_168() && iParam3 < func_167())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574112)
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
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x77FA56883245AD26(*uParam1))
		{
			if (unk_0xEBD23F68B1A617FC(*uParam1, sVar1))
			{
				unk_0x32F9127910F63DFA(iParam3);
				if (unk_0x2A3398C6222EB190(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_166("");
				}
				else
				{
					unk_0x32F9127910F63DFA(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					func_152(sParam16);
				}
				else
				{
					func_166(&(uParam2->f_1));
				}
				unk_0x32F9127910F63DFA(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_166("");
				}
				else
				{
					unk_0x32F9127910F63DFA(65);
				}
				if (iParam12 == 1)
				{
					unk_0x32F9127910F63DFA(iVar0);
				}
				else
				{
					unk_0x32F9127910F63DFA(-1);
				}
				if (func_200())
				{
					func_166("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 5 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 7 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_TWO_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 8 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5E66471E79E6D3ED(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x96577CAA1D1E72DB(iParam10);
					}
					unk_0x7C8A7ECFBAD2C8C4(&(uParam2->f_104));
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
					unk_0xCA44A68ABB26D497(iParam10, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
					else
					{
						unk_0x9BC6C9E77AAC792E("FM_NG_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
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
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam14, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (fParam13 != -1f)
				{
					unk_0x9BC6C9E77AAC792E("NUMBER");
					unk_0x5E66471E79E6D3ED(fParam13, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam10 != -1)
				{
					unk_0x32F9127910F63DFA(iParam10);
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
				if (iParam12 == 1 || unk_0x0BD3CCFB6C6CFA91(sParam8))
				{
					func_166("");
					func_166("");
				}
				else
				{
					unk_0x58F4B3BE2B4DE520(sParam8);
					unk_0x58F4B3BE2B4DE520(sParam8);
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
				unk_0x1C703A54AB4B12F6();
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
	return Global_1623799[iParam0 /*488*/].f_11 != func_60();
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
	return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_175(int iParam0)
{
	if (!iParam0 == func_60())
	{
		if (func_171(iParam0, 1))
		{
			return Global_2416331.f_1947.f_11[func_61(iParam0)];
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
			if (unk_0xE42DE35DC4399ED5())
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
			if (unk_0xE42DE35DC4399ED5())
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
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_181(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xE42DE35DC4399ED5())
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
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_853(iParam0, 0, 1))
	{
		return;
	}
	if (func_186(iParam0) != -1)
	{
		return;
	}
	if (Global_1366023)
	{
		if (iParam0 == Global_1366023.f_1)
		{
			return;
		}
	}
	if (func_185(iParam0))
	{
		return;
	}
	if (Global_1366061 >= 32)
	{
		return;
	}
	Global_1366028[Global_1366061] = iParam0;
	Global_1366061++;
	if (bParam1)
	{
	}
}

int func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366061)
	{
		if (Global_1366028[iVar0] == iParam0)
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
	
	if (!func_853(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1366021 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366021)
	{
		if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1366021)
	{
		return;
	}
	if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1365860[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
			unk_0x24EBBC5B25484B08(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1366021)
	{
		Global_1365860[iVar32 /*5*/] = { Global_1365860[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_188(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_60();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

struct<4> func_189(int iParam0)
{
	struct<4> Var0;
	
	if (func_853(iParam0, 0, 1))
	{
		Global_2488575 = { func_62(iParam0) };
		if (unk_0x9D3EA2635512FD6B())
		{
			if (func_140(Global_2488575))
			{
				if (!unk_0xEFDB3CCA382D116E(&Global_2488575))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4C69E6D9E2ED0169(0))
		{
			return Var0;
		}
		if (func_193(&Global_2488575))
		{
			Global_2488505 = { func_191(iParam0) };
			func_190(&Global_2488505, &Var0);
		}
	}
	return Var0;
}

void func_190(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

struct<35> func_191(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_192(iParam0))
	{
		return Global_1312885[unk_0x3D35F9864E4640B1() /*35*/];
	}
	Var0 = { func_62(iParam0) };
	unk_0x7838EB8661A32D68(&Var13, 35, &Var0);
	return Var13;
}

int func_192(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
{
	if (unk_0xED5FFF2E0422067E())
	{
		if (unk_0x1AE803DF5F9B30C9() && unk_0xF3F1AD16A136B115(uParam0))
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
	if ((!func_195(iParam0) && Global_2422142[iParam0 /*399*/].f_245 == -1) && !func_206(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (func_853(iParam0, 0, 1))
	{
		if (func_853(unk_0x3D35F9864E4640B1(), 0, 1))
		{
			if (unk_0x09C68D317F1B5143(iParam0, unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 22);
}

bool func_197(int iParam0)
{
	if (func_121(iParam0))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10) || unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9));
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
		if (unk_0x2A3398C6222EB190(Global_1593076[iVar0 /*647*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_200()
{
	switch (func_95(unk_0x3D35F9864E4640B1()))
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
	switch (func_201(unk_0x3D35F9864E4640B1()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(unk_0x3D35F9864E4640B1()))
	{
		switch (func_95(unk_0x3D35F9864E4640B1()))
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
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 && func_203(Global_1623799[iParam0 /*488*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1)
	{
		if (func_203(Global_1623799[iParam0 /*488*/].f_11.f_31))
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
		if (func_853(unk_0xA7871E29B06DA901(iVar0), 0, 1))
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((unk_0x09C68D317F1B5143(iVar1, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar1 /*399*/].f_245 != -1) || func_206(iVar1))
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
	return Global_1593076[iParam0 /*647*/].f_189 != 0;
}

void func_207(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x32F9127910F63DFA(0);
		unk_0x1C703A54AB4B12F6();
	}
}

void func_208(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1354562.f_2 == 0)
		{
			Global_1354562.f_2 = 1;
		}
	}
	else if (Global_1354562.f_2 == 1)
	{
		Global_1354562.f_2 = 0;
	}
}

void func_209()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
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
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_211()
{
	return Global_2434915.f_2484[0 /*76*/].f_1 != 0;
}

int func_212()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0) && func_211())
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1) && func_211())
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (func_211())
	{
		if (func_214(Global_2434915.f_2484[0 /*76*/].f_1))
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
		if (func_216(Global_2434915.f_2484[0 /*76*/].f_1))
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
	if (Global_1354562.f_1 != Global_1354562)
	{
		Global_1354562.f_1 = Global_1354562;
	}
	if (Global_1354562 != iParam0)
	{
		Global_1354562 = iParam0;
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
			if (func_267() > 0 && Global_1574112)
			{
				unk_0xC8E49AC936A8E11E();
				unk_0x4288569892059474(fVar7);
				unk_0xBD1C47D856010F09(18);
				if (unk_0x068C69D0643C4B95())
				{
					unk_0x390920286F8D4571();
				}
				unk_0xBD1C47D856010F09(10);
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
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
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
		if (unk_0x068C69D0643C4B95())
		{
			unk_0x390920286F8D4571();
		}
		unk_0xBD1C47D856010F09(10);
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
					unk_0xC8E49AC936A8E11E();
				}
				unk_0xBD1C47D856010F09(18);
			}
			if (!unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_247();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xC8E49AC936A8E11E();
					}
					unk_0xBD1C47D856010F09(18);
				}
				unk_0x4288569892059474(fVar7);
				if (func_248(bVar6, uParam0, 0))
				{
					func_207(uParam0);
					uVar4 = func_245(iParam1, &(Global_1641087.f_96817), bParam4);
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
						uParam2->f_34 = Global_1574111;
						func_240(uParam0, uVar4, &Var0, 1, -1, Global_1574111, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574111;
						func_240(uParam0, uVar4, "", 0, -1, Global_1574111, 1);
					}
					else
					{
						iVar8 = func_219(iParam1);
						func_240(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				Global_1574110 = uParam3;
				Global_1574109 = 1;
				unk_0x4288569892059474(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574111)
					{
						unk_0xD804ACF2A7171150(&(uParam2->f_33), 0);
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
			if (func_222(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 20;
			}
			if (func_221(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_220(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_220(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_221(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_222(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_223()
{
	return Global_1641087.f_1 == 0;
}

void func_224(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_152(sParam1);
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_225()
{
	switch (func_95(unk_0x3D35F9864E4640B1()))
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
	switch (func_95(unk_0x3D35F9864E4640B1()))
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
			if (func_227(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_173))
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
	return func_160(unk_0x3D35F9864E4640B1(), bParam0);
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
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34;
}

bool func_232()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148;
}

void func_233(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(uParam2))
		{
			func_152(uParam1);
		}
		else if (func_201(unk_0x3D35F9864E4640B1()) == 133)
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT_C");
			unk_0x7C8A7ECFBAD2C8C4(uParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_152("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0x3D35F9864E4640B1());
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
	if (func_201(unk_0x3D35F9864E4640B1()) == 133)
	{
		return Global_2501777.f_4788;
	}
	return -1;
}

bool func_236()
{
	return Global_1592949;
}

char* func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = func_201(unk_0x3D35F9864E4640B1());
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
	return Global_2501777.f_4791;
}

int func_239()
{
	if (func_201(unk_0x3D35F9864E4640B1()) == 132)
	{
		return Global_2501777.f_4786;
	}
	return -1;
}

void func_240(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_166(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x9BC6C9E77AAC792E(uParam1);
			unk_0x96577CAA1D1E72DB(iParam5);
			unk_0xCC5EB3A492FB7D4B();
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
			unk_0x9BC6C9E77AAC792E("LBD_DPD_CNT");
			unk_0x96577CAA1D1E72DB(iVar0);
			unk_0x96577CAA1D1E72DB(iVar1);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_152(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (func_241(unk_0x3D35F9864E4640B1()))
			{
				unk_0x32F9127910F63DFA(166);
			}
		}
		unk_0x1C703A54AB4B12F6();
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
	return Global_1574112;
}

struct<4> func_243(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_244(unk_0x3D35F9864E4640B1()) || func_220(unk_0x3D35F9864E4640B1()))
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
			StringIntConCat(&Var0, Global_1641087.f_32, 16);
			break;
	}
	if (func_155() && unk_0xF4F91CD09D59F42E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1641087.f_32, 16);
	}
	return Var0;
}

bool func_244(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

char* func_245(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_155() || unk_0x0BD3CCFB6C6CFA91(uParam1)))
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
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		if (Global_1574311 == 1)
		{
			Global_1574311 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
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
	if (unk_0x1C44989578E5E069())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x942DDEDA3276C878())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE11EF9B6E7CA5736())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xFCD198727E4728B4())
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
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_matchmaking_card");
	}
	return unk_0x77FA56883245AD26(*uParam1);
}

void func_249(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD804ACF2A7171150(&(uParam1->f_33), 7);
	Global_1574110 = 0;
	func_144();
	Global_1574109 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_145(&(uParam1->f_19));
		}
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0x7F165E259CFAC8B8(uParam0);
	}
	if (unk_0x2A3398C6222EB190(uParam1->f_33, 0))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_33), 0);
	}
	unk_0x4288569892059474(0f);
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
	if (Global_2501777.f_4500)
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	else if (!func_256(unk_0x3D35F9864E4640B1(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_255(1) || func_253(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (func_251(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (Global_1767043)
	{
		return 0;
	}
	if (func_76(0))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (Global_1348150)
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
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_252()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_253(bool bParam0)
{
	if (unk_0x220490B94EE0AB33())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (func_254(unk_0x0031992CA618A445()))
			{
				if (unk_0x9148803485DEDF45(0, 25) || unk_0x9148803485DEDF45(0, 68))
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
	if (unk_0x9148803485DEDF45(0, 19) || (!bParam0 && unk_0x59ABF4F2C485FC38(0, 19)))
	{
		return 1;
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (((unk_0x9148803485DEDF45(0, 166) || unk_0x9148803485DEDF45(0, 167)) || unk_0x9148803485DEDF45(0, 168)) || unk_0x9148803485DEDF45(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x59ABF4F2C485FC38(0, 166) || unk_0x59ABF4F2C485FC38(0, 167)) || unk_0x59ABF4F2C485FC38(0, 168)) || unk_0x59ABF4F2C485FC38(0, 169))
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
	
	if (unk_0x7C3C875B4842517A())
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			unk_0x1306828A757A10AC(iParam0, &iVar0, 1);
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
	if (Global_1593076[iParam0 /*647*/] == -1)
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
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

bool func_259()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

bool func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
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
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
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
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 5;
}

bool func_266()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_267()
{
	return Global_1354565.f_68;
}

int func_268()
{
	if (Global_1574111 > 16)
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
	fVar1 = (1f - (1f - unk_0xFBBE93DE05521B5C()));
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
	if (func_272(unk_0x3D35F9864E4640B1()))
	{
		return Global_1316427;
	}
	return 0;
}

int func_272(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0xD629F5D6E3CE15E2(iParam0);
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
	if (func_197(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_236())
	{
		return 1;
	}
	if (func_122(unk_0x3D35F9864E4640B1()))
	{
		switch (func_201(unk_0x3D35F9864E4640B1()))
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
				if (!func_274(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_274(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_274(unk_0x3D35F9864E4640B1()))
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
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 4);
}

int func_275(int iParam0)
{
	if ((iParam0 == 26 && func_122(unk_0x3D35F9864E4640B1())) && !func_133(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_96(unk_0x3D35F9864E4640B1(), 0) && func_133(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
		if (func_124(unk_0x3D35F9864E4640B1()) == 3)
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
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = unk_0x43B24C247F35B6BC();
	}
	else
	{
		iVar0 = func_277();
	}
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Local_994[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (unk_0x80BA8E3CC61A8625(iVar1))
	{
		if (unk_0x532CFF8D6B65E42F(iVar1))
		{
			iVar2 = unk_0x3DAB36F6FA9328A6(iVar1);
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
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
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
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 4)
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_113, iVar29))
			{
				if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_6, iVar29))
				{
					if (unk_0x76B3C79DE564AFC6(Var0.f_0))
					{
						if (unk_0x036E1D5EA494CEB2(Var0.f_0))
						{
							if (!unk_0x2A3398C6222EB190(Local_122.f_109, iVar29))
							{
								if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_5, iVar29))
								{
									if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar29 /*26*/].f_2))
									{
										if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar29 /*26*/].f_2)))
										{
											if (unk_0x89C1AD6422029361(Var0.f_0) == unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar29 /*26*/].f_2))
											{
												if (unk_0x76B3C79DE564AFC6(Var0.f_1))
												{
													if (unk_0x269F274F1955DE87(Var0.f_1))
													{
														if (unk_0x4849801147A2BA1E(Var0.f_1) == unk_0x0031992CA618A445())
														{
															if (func_763() == Local_122.f_118)
															{
																unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_5), iVar29);
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
						else if (unk_0x269F274F1955DE87(Var0.f_0))
						{
							iVar11 = unk_0x4849801147A2BA1E(Var0.f_0);
							if (iVar11 == unk_0xECB7D3275586261E(Local_122.f_2[iVar29 /*26*/].f_1))
							{
								if (unk_0x76B3C79DE564AFC6(Var0.f_1))
								{
									if (unk_0x269F274F1955DE87(Var0.f_1))
									{
										iVar10 = unk_0x4849801147A2BA1E(Var0.f_1);
										if (unk_0x972B5786EA49FE1A(iVar10))
										{
											iVar13 = unk_0x46E9A8D99AF6D7BC(iVar10);
											if (unk_0x532CFF8D6B65E42F(iVar13))
											{
												if (Var0.f_3)
												{
													if (iVar13 == unk_0x3D35F9864E4640B1())
													{
														Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_11++;
														unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_6), iVar29);
														Var15.f_2 = 1117734497;
														Var15.f_10 = unk_0x3D35F9864E4640B1();
														func_285(Var15, func_286(0));
														func_280("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7, iVar29))
											{
												if (Var0.f_3)
												{
													iVar13 = unk_0x46E9A8D99AF6D7BC(iVar10);
													unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7), iVar29);
												}
											}
										}
										else if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7), iVar29);
											}
										}
									}
									else if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7, iVar29))
									{
										if (Var0.f_3)
										{
											unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7), iVar29);
										}
									}
								}
								else if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7, iVar29))
								{
									if (Var0.f_3)
									{
										unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_7), iVar29);
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
		if (!func_99(unk_0x3D35F9864E4640B1(), 20))
		{
			if (unk_0x76B3C79DE564AFC6(Var0.f_0))
			{
				if (unk_0x269F274F1955DE87(Var0.f_0))
				{
					iVar11 = unk_0x4849801147A2BA1E(Var0.f_0);
					if (unk_0x972B5786EA49FE1A(iVar11))
					{
						iVar12 = unk_0x46E9A8D99AF6D7BC(iVar11);
						if (unk_0x76B3C79DE564AFC6(Var0.f_1))
						{
							if (unk_0x269F274F1955DE87(Var0.f_1))
							{
								iVar10 = unk_0x4849801147A2BA1E(Var0.f_1);
								if (unk_0x972B5786EA49FE1A(iVar10))
								{
									iVar13 = unk_0x46E9A8D99AF6D7BC(iVar10);
									if (iVar13 == unk_0x3D35F9864E4640B1())
									{
										if (unk_0x532CFF8D6B65E42F(iVar12))
										{
											if (func_171(iVar12, 1))
											{
												if (Local_122.f_118 > -1)
												{
													iVar14 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_122.f_118));
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
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_281(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_281(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_284() || !unk_0xF4F91CD09D59F42E()) || !func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_282(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_283(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_284()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

void func_285(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1021925946;
	Param0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam14 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam14);
	}
}

int func_286(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
			if (func_853(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar2);
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
	
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0x2A3398C6222EB190(uLocal_1443, 14))
		{
			unk_0xD804ACF2A7171150(&iLocal_1443, 14);
		}
		return;
	}
	iVar0 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (!unk_0x2A3398C6222EB190(iLocal_1443, 14))
	{
		if (Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1 != 0)
		{
			Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1 = 0;
		}
		unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 14);
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1443, 15))
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 15);
		func_695();
	}
	if (unk_0x80BA8E3CC61A8625(iVar0))
	{
		if (unk_0x532CFF8D6B65E42F(iVar0))
		{
			uVar1 = unk_0x3DAB36F6FA9328A6(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_994[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_655();
					func_637();
					func_622();
					break;
				
				case 2:
					func_288();
					break;
				
				case 3:
					func_776();
					break;
				}
			}
	}
}

void func_288()
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
	iVar17 = unk_0x43B24C247F35B6BC();
	iVar18 = unk_0x3D35F9864E4640B1();
	if (func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar17 = func_277();
		iVar18 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (!unk_0x2A3398C6222EB190(Local_994[iVar17 /*14*/].f_1, 4))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1443, 9))
		{
			if (unk_0x2A3398C6222EB190(Local_122.f_1, 1))
			{
				if (iVar17 == Local_122.f_118 || func_763() == Local_122.f_118)
				{
					if (func_124(iVar18) >= 2)
					{
						sVar19 = func_621(iVar18);
						iVar20 = func_620(iVar18);
						func_618(87, "GB_WINNER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
					}
					if (iVar18 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
						{
							func_563(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
						}
						Var0.f_0 = func_562();
						Var0.f_1 = func_561();
						func_389(166, 1, &Var0, 0);
						unk_0x742F5A1F59CA4BC0(iVar18);
						iLocal_1737 = unk_0x58288C08A90CC7D0();
						unk_0x438B2E6B2BAD6A0D(0);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 17);
						func_7(&uLocal_1738, 0, 0);
					}
				}
				else if (func_276())
				{
					if (func_171(iVar18, 1))
					{
						if (func_124(iVar18) >= 2)
						{
							sVar19 = func_621(unk_0xA7871E29B06DA901(Local_122.f_119));
							iVar20 = func_620(unk_0xA7871E29B06DA901(Local_122.f_119));
							func_618(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (iVar18 == unk_0x3D35F9864E4640B1())
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
							{
								func_563(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
							}
							if (func_117(iVar18))
							{
								Var0.f_0 = func_388();
								Var0.f_1 = func_387();
							}
							func_389(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_124(iVar18) >= 2)
						{
							sVar19 = func_621(unk_0xA7871E29B06DA901(Local_122.f_119));
							iVar20 = func_620(unk_0xA7871E29B06DA901(Local_122.f_119));
							func_618(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
						}
						if (iVar18 == unk_0x3D35F9864E4640B1())
						{
							if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
							{
								func_563(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
							}
							if (func_117(iVar18))
							{
								Var0.f_0 = func_388();
								Var0.f_1 = func_387();
							}
							func_389(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 9);
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_1, 3))
			{
				iVar21 = (4 - Local_122.f_115);
				if (iVar17 == Local_122.f_118 || func_763() == Local_122.f_118)
				{
					if (func_124(iVar18) >= 2)
					{
						sVar19 = func_381();
						iVar20 = func_620(iVar18);
						func_618(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar19, iVar20, 0, -1, -1, -1, 2, -1);
					}
					if (iVar18 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
						{
							func_563(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
						}
						Var0.f_0 = func_562();
						Var0.f_1 = func_561();
						func_389(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_124(iVar18) >= 2)
					{
						sVar19 = func_621(unk_0xA7871E29B06DA901(Local_122.f_119));
						iVar20 = func_620(unk_0xA7871E29B06DA901(Local_122.f_119));
						if (iVar21 == 1)
						{
							func_618(87, "GB_WINNER", "BIGM_HUN1S", sVar19, iVar20, 0, iVar21, -1, -1, 2, -1);
						}
						else if (iVar21 > 1)
						{
							func_618(87, "GB_WINNER", "BIGM_HUNRS", sVar19, iVar20, 0, iVar21, -1, -1, 2, -1);
						}
					}
					if (iVar18 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
						{
							func_563(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
						}
						if (func_117(iVar18))
						{
							Var0.f_0 = func_388();
							Var0.f_1 = func_387();
						}
						func_389(166, 1, &Var0, 0);
						unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 9);
			}
			else if (unk_0x2A3398C6222EB190(Local_122.f_1, 5))
			{
				if (func_352())
				{
					if (func_762())
					{
						if (func_124(iVar18) >= 2)
						{
						}
					}
					else if (func_124(iVar18) >= 2)
					{
						func_320(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar18 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
					{
						func_563(0, 8, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
					}
					func_389(166, 0, &Var0, 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 9);
			}
		}
		if (unk_0x2A3398C6222EB190(iLocal_1443, 9))
		{
			func_695();
			if (!unk_0x2A3398C6222EB190(uLocal_1444, 8))
			{
				func_307();
				func_70();
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 8);
			}
			if (!unk_0x2A3398C6222EB190(iLocal_1443, 10))
			{
			}
			if (func_289(&uLocal_1451, 0, 0))
			{
				if (iVar17 == unk_0x43B24C247F35B6BC())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 4);
				}
			}
			else if (unk_0x2A3398C6222EB190(iLocal_1443, 17))
			{
				if (func_6(&uLocal_1738, 10000, 0))
				{
					unk_0x438B2E6B2BAD6A0D(iLocal_1737);
					unk_0xD804ACF2A7171150(&iLocal_1443, 17);
				}
			}
		}
	}
}

int func_289(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_100(29);
	if ((*uParam0 > 0 && !func_211()) && func_124(unk_0x3D35F9864E4640B1()) != 0)
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 2);
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 0);
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
					unk_0x8C361F37C04084F4(1);
				}
				func_302(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
				unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 2);
				func_302(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
			unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_290(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

char* func_291(int iParam0)
{
	if (((func_294(unk_0x3D35F9864E4640B1()) || func_293(unk_0x3D35F9864E4640B1())) || func_229()) || iParam0)
	{
		if (func_293(unk_0x3D35F9864E4640B1()))
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
	return Global_1639417;
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
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148 && func_162(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34, 1))
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
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0))
	{
		if ((((((((((!unk_0x90EEDEFFBABEF36F() && !unk_0x2A3398C6222EB190(Global_2501777.f_773, 2)) && func_853(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x5114FCEE2A997B95()) && !func_99(unk_0x3D35F9864E4640B1(), 22)) && func_124(unk_0x3D35F9864E4640B1()) != 0) && !func_300(func_301())) && !func_294(unk_0x3D35F9864E4640B1())) && !func_299(func_95(unk_0x3D35F9864E4640B1())))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 1);
			func_298(func_291(iParam0), -1);
			func_297(1);
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 0);
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
		unk_0x18F1BFAF88AC511B(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_298(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam1);
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
	
	uVar0 = unk_0x49CAADAD1ABAB70A();
	if (unk_0xB3404E397FF56B3B(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_303()
{
	Global_2456642 = 1;
}

int func_304()
{
	if (((((((func_95(unk_0x3D35F9864E4640B1()) == 170 || func_95(unk_0x3D35F9864E4640B1()) == 219) || func_95(unk_0x3D35F9864E4640B1()) == 221) || func_95(unk_0x3D35F9864E4640B1()) == 220) || func_95(unk_0x3D35F9864E4640B1()) == 216) || func_95(unk_0x3D35F9864E4640B1()) == 215) || func_95(unk_0x3D35F9864E4640B1()) == 214) || func_95(unk_0x3D35F9864E4640B1()) == 218)
	{
		return 1;
	}
	if (func_305(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_853(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
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
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
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
		if (unk_0xA761A0B6072010C8(uLocal_1458[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1458[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x2A3398C6222EB190(iLocal_1443, 18))
	{
		func_319(1);
		unk_0xD804ACF2A7171150(&iLocal_1443, 18);
	}
	func_316();
	func_308();
}

void func_308()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A3398C6222EB190(iLocal_1443, 7))
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (unk_0x80BA8E3CC61A8625(iVar1))
			{
				if (iVar1 != unk_0x3D35F9864E4640B1())
				{
					if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_8, iVar0))
					{
						func_314(iVar1, 432, 0);
						func_309(iVar1, func_313(iLocal_1735), 0);
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
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_310(iParam0))
	{
		if (bParam2)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = unk_0xFFDE6A3A0108B7CB();
			Global_2415153.f_444[iVar0] = uParam1;
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = -1;
		}
	}
}

int func_310(int iParam0)
{
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_609[iParam0]) || Global_2415153.f_609[iParam0] == unk_0xFFDE6A3A0108B7CB())
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
	unk_0xB922891BFD232C45(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
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
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_311())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_576[iParam0]) || Global_2415153.f_576[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam2)
		{
			if (!unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_315();
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_411[iVar0] = uVar1;
			Global_2415153.f_576[iParam0] = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_315();
			}
			unk_0xD804ACF2A7171150(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_576[iParam0] = -1;
		}
	}
}

void func_315()
{
	Global_2415153.f_1004 = 1;
}

void func_316()
{
	if (unk_0x2A3398C6222EB190(iLocal_1443, 16))
	{
		func_81();
		func_317();
		unk_0xD804ACF2A7171150(&iLocal_1443, 16);
	}
}

void func_317()
{
	if (Global_2412974.f_6 == unk_0xFFDE6A3A0108B7CB())
	{
		func_318();
	}
}

void func_318()
{
	struct<27> Var0;
	
	if (unk_0xE2F358F9F113BDF1(Global_2412974.f_6))
	{
		if (!Global_2412974.f_6 == unk_0xFFDE6A3A0108B7CB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412974 = { Var0 };
	Global_2412974.f_6 = -1;
}

void func_319(bool bParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (!func_126())
		{
			if (func_853(unk_0x3D35F9864E4640B1(), 1, 0))
			{
				unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 342, 0);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 122, 0);
			}
			unk_0xBE81A0FD72EB3284(unk_0x3D35F9864E4640B1(), 1f);
			unk_0x62503A82AC79FF89(0);
			unk_0xE8AFE63721D00A2E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0x5C72983073515174(0, 0);
				}
			}
		}
		else
		{
			if (func_853(unk_0x3D35F9864E4640B1(), 1, 1))
			{
				unk_0x8F39F46EB434FA61(unk_0x0031992CA618A445(), 0);
				unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 342, 1);
				unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 122, 1);
				unk_0xBE81A0FD72EB3284(unk_0x3D35F9864E4640B1(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x5C72983073515174(1, 0);
				}
			}
			unk_0x62503A82AC79FF89(1);
			unk_0xE8AFE63721D00A2E(0);
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
	func_351(iParam0, &Var0, -1, sParam2, sParam1);
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
		if (Global_2434915.f_2790)
		{
			return 0;
		}
	}
	func_331(uParam0, uParam0->f_16);
	func_330(uParam0);
	if (func_329(uParam0->f_1))
	{
		func_322();
		if (Global_2434915.f_2484[0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434915.f_2484[0 /*76*/].f_1 == 13 || Global_2434915.f_2484[0 /*76*/].f_1 == 53) || Global_2434915.f_2484[0 /*76*/].f_1 == 54) || Global_2434915.f_2484[0 /*76*/].f_1 == 58)
		{
			Global_2434915.f_2484[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434915.f_2484[iVar0 + 1 /*76*/] = { Global_2434915.f_2484[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434915.f_2484[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/] = { *uParam0 };
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 1);
				Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_214(Global_2434915.f_2484[iVar0 /*76*/].f_1))
				{
					Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
					unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
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
	
	if (Global_2434915.f_2791)
	{
		return;
	}
	if (!Global_71053)
	{
		Global_71053 = 1;
		bVar0 = true;
	}
	func_323();
	if (bVar0)
	{
		Global_71053 = 0;
	}
}

void func_323()
{
	Global_2434915.f_2792 = 0;
	Global_2434915.f_2792.f_578 = 0;
	func_327(&(Global_2434915.f_2792.f_1));
	Global_2434915.f_2792.f_1.f_1 = 0;
	func_324(&(Global_2434915.f_2792.f_1));
}

void func_324(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x7F165E259CFAC8B8(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(0);
			unk_0x1C703A54AB4B12F6();
		}
		unk_0x7F165E259CFAC8B8(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xCF304E352457AD63(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71053)
	{
		if (!unk_0xE33BF8B30BC14A7C(unk_0xED1168B8D2D313FA()))
		{
			if (!Global_71054)
			{
				if (unk_0x5114FCEE2A997B95() && !func_326(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_325(0);
}

void func_325(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

bool func_326(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
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
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1641087.f_92322[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_251(unk_0x3D35F9864E4640B1()) || (func_350() && func_349())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
	{
		uVar1 = func_348();
		if (unk_0x76B3C79DE564AFC6(uVar1))
		{
			if (unk_0x972B5786EA49FE1A(iVar1))
			{
				if (unk_0x46E9A8D99AF6D7BC(iVar1) != -1)
				{
					if (func_853(unk_0x46E9A8D99AF6D7BC(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
						{
							if (Global_1641087.f_92322[iParam1] != -1)
							{
								return func_346(iParam1, iParam0, 0);
							}
							else
							{
								return func_340(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_340(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
			{
				if (Global_1641087.f_92322[iParam1] != -1)
				{
					return func_346(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
	{
		if (Global_1641087.f_92322[iParam1] != -1)
		{
			return func_346(iParam1, iParam0, 0);
		}
		else
		{
			return func_340(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
		}
	}
	return func_340(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_333(bool bParam0, int iParam1, bool bParam2)
{
	return func_334(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_334(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x80BA8E3CC61A8625(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_339(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
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
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
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
	if (func_336(Global_1641087.f_96810))
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
		if (iParam0 == Global_262145.f_8333[iVar0])
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
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
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
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1593076[iVar2 /*647*/] == 148)
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
			if ((func_342(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_339(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
			{
				return func_338(1);
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
			{
				return func_341(1);
			}
			else
			{
				return func_334(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
			{
				return func_338(1);
			}
			else
			{
				return func_334(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574292 && Global_1573831.f_14 == iParam0)
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
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
	}
	return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_343()
{
	if ((func_156() || func_345()) || func_344())
	{
		return 1;
	}
	return 0;
}

var func_344()
{
	return Global_2445582.f_14;
}

var func_345()
{
	return Global_2445582.f_13;
}

int func_346(int iParam0, int iParam1, bool bParam2)
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
	if (Global_1641087.f_92322[iParam0] != -1 && Global_1641087.f_92322[iParam0] <= 4)
	{
		if (Global_1641087.f_92322[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1641087.f_92322[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1641087.f_92322[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1641087.f_92322[iParam0] == 4)
		{
			if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 29))
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
			iVar0 = Global_1641087.f_92322[iParam0];
		}
	}
	else
	{
		iVar0 = func_334(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
	{
		iVar0 = func_347(iParam0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_347(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1641087.f_116131;
			break;
		
		case 1:
			iVar0 = Global_1641087.f_116132;
			break;
		
		case 2:
			iVar0 = Global_1641087.f_116133;
			break;
		
		case 3:
			iVar0 = Global_1641087.f_116134;
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

var func_348()
{
	return Global_2359302.f_2;
}

bool func_349()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_350()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

void func_351(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_352()
{
	int iVar0;
	
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		if (!func_353(1, 1))
		{
			if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1, 6))
			{
				unk_0xD804ACF2A7171150(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_127())
		{
			if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1, 6))
			{
				unk_0xD804ACF2A7171150(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1, 6))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_277();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_994[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_353(bool bParam0, bool bParam1)
{
	if (func_380(unk_0x3D35F9864E4640B1(), 29))
	{
		return 0;
	}
	if (func_111(unk_0x3D35F9864E4640B1(), 21))
	{
		return 0;
	}
	if (unk_0x12F270E0E3ED8AA1())
	{
		return 0;
	}
	if (!func_196(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x30758DD2AA5FF762())
		{
			return 0;
		}
	}
	if (func_379(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (func_377())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		return 0;
	}
	if (func_257(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!func_261())
	{
		return 0;
	}
	if (func_111(unk_0x3D35F9864E4640B1(), 0) || func_111(unk_0x3D35F9864E4640B1(), 3))
	{
		return 0;
	}
	if ((func_111(unk_0x3D35F9864E4640B1(), 12) || func_111(unk_0x3D35F9864E4640B1(), 14)) || func_111(unk_0x3D35F9864E4640B1(), 13))
	{
		return 0;
	}
	if (func_376(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
	{
		if (!func_359())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_358())
		{
			return 0;
		}
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (func_357(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (func_355(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (func_354(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_270.f_4 != 0 || Global_2422142[iParam0 /*399*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 14))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11))
	{
		return 1;
	}
	return 0;
}

int func_356()
{
	if (Global_2595735.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)
{
	if (!func_853(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_35;
}

bool func_358()
{
	return Global_92814.f_310 > 0;
}

int func_359()
{
	int iVar0;
	
	iVar0 = func_95(unk_0x3D35F9864E4640B1());
	if (((func_375(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16) || func_374(unk_0x3D35F9864E4640B1())) || func_373(unk_0x3D35F9864E4640B1())) || func_368(unk_0x3D35F9864E4640B1()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_366(unk_0x3D35F9864E4640B1()))
	{
		if (func_365(iVar0) || func_364(iVar0))
		{
			return 1;
		}
	}
	if (func_305(unk_0x3D35F9864E4640B1()))
	{
		if (func_364(iVar0))
		{
			return 1;
		}
	}
	if (func_363(unk_0x3D35F9864E4640B1()))
	{
		if (func_362(iVar0))
		{
			return 1;
		}
	}
	if (func_361(unk_0x3D35F9864E4640B1()))
	{
		if (func_360(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)
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

int func_361(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_853(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_362(int iParam0)
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

int func_363(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_853(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
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

int func_365(int iParam0)
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

int func_366(int iParam0)
{
	if (func_367(Global_1593076[iParam0 /*647*/].f_259.f_16, -1))
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
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

int func_368(int iParam0)
{
	if (func_369(Global_1593076[iParam0 /*647*/].f_259.f_16, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_370(unk_0x3D35F9864E4640B1(), 0);
	}
	if (bParam1)
	{
		if (func_370(unk_0x3D35F9864E4640B1(), 0))
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

bool func_370(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_60())
	{
		if (!func_372(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_371(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_371(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 9);
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_60())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 2);
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_853(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (func_853(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_306(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
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

int func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (Global_1593076[iParam0 /*647*/].f_259.f_16 > 0)
	{
		if (bParam1)
		{
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
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
		if (func_374(iParam0))
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
		if (func_373(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_363(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_361(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_377()
{
	return Global_1312853;
}

bool func_378()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_379(int iParam0)
{
	if (func_256(iParam0, 1))
	{
		if (Global_1593076[iParam0 /*647*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_380(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_5, iParam1);
}

char* func_381()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(unk_0x3D35F9864E4640B1());
	if (iVar0 != func_60())
	{
		if (iVar0 != unk_0x3D35F9864E4640B1())
		{
			if (((func_99(iVar0, 28) || func_99(unk_0x3D35F9864E4640B1(), 28)) || func_386(iVar0)) && !func_385(iVar0))
			{
				return func_383(iVar0, 0);
			}
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_383(iVar0, 0);
			}
		}
		uVar1 = func_382(&(Global_1623799[iVar0 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(uVar1))
		{
			return func_383(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_382(var uParam0)
{
	return uParam0;
}

var func_383(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_160(iParam0, 1))
		{
			return func_384();
		}
	}
	return unk_0xC0D54565FC1032F4("GB_REST_ACC");
}

var func_384()
{
	return unk_0xC0D54565FC1032F4("GB_REST_ACCM");
}

int func_385(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
	if (unk_0x43F4A6D2081CC5ED() || unk_0x20551D6D924ED04B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			return 0;
		}
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_387()
{
	return ((4 - Local_122.f_115) * Global_262145.f_14638);
}

int func_388()
{
	return ((4 - Local_122.f_115) * Global_262145.f_14637);
}

void func_389(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> Var14;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	func_559(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17397);
		}
		else
		{
			iVar1 = (iVar1 + func_558(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_557(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17396);
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
	if (func_555(iParam0))
	{
		if (bParam1)
		{
			if (func_554(unk_0x3D35F9864E4640B1()) > 0)
			{
				func_553();
			}
			else
			{
				func_552();
			}
		}
		else
		{
			func_551();
		}
	}
	func_535(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_533(iParam0, uParam2, &iVar0, &iVar5);
	func_511(iParam0, uParam2, &iVar0, &iVar5);
	func_485(iParam0, uParam2, &iVar0, &iVar5, &iVar6);
	if (iParam0 == 168)
	{
		Global_2501777.f_4867.f_195 = uVar4;
	}
	else
	{
		Global_2501777.f_4867.f_195 = iVar5;
	}
	iVar7 = func_231();
	if (iVar7 != func_60() && iParam0 != 148)
	{
		if (func_171(unk_0x3D35F9864E4640B1(), 0))
		{
			if (!func_71(unk_0x3D35F9864E4640B1(), iVar7, 1))
			{
				func_473(&iVar0, 1);
			}
		}
	}
	func_470(iParam0, &iVar8, &iVar9);
	iVar1 = (iVar1 + iVar8);
	iVar0 = (iVar0 + iVar9);
	if (iVar1 > 0)
	{
		Global_1779220.f_10 = iVar1;
		func_469();
		func_427(0, unk_0x0031992CA618A445(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1779220.f_9 = iVar0;
		iVar12 = func_426();
		if (iVar12 != func_60())
		{
			func_425(iVar12, &iVar10, &iVar11);
		}
		bVar13 = !func_424(1);
		if (iParam0 == 168)
		{
			if (!func_423())
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_422())
			{
				if (!func_423())
				{
					Var14 = { func_421() };
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_420(Var14.f_0)), func_419(Var14.f_0), iVar5);
				}
			}
			else if (func_423())
			{
				func_410(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_2602788[iVar16 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar16 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar16 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_409())
			{
				if (!func_423())
				{
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_420(func_408(unk_0x3D35F9864E4640B1()))), 5, iVar5);
				}
			}
			else if (func_423())
			{
				func_410(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_2602788[iVar17 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar17 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar17 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_409())
			{
				if (!func_423())
				{
					iVar18 = func_404(uParam2->f_16, iVar5);
					unk_0x6B7E4FB50D5F3D65(iVar0, iVar5, iVar6, iVar18, uParam2->f_16);
				}
			}
			else if (func_423())
			{
				func_410(463142405, iVar0, &iVar19, 0, 1, 0);
				Global_2602788[iVar19 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar19 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar19 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0xDEE612F2D71B0308(iVar10, iVar11, iVar0, bVar13);
			}
		}
		else if (func_423())
		{
			func_410(-856006867, iVar0, &iVar20, 0, 1, 0);
			Global_2602788[iVar20 /*80*/].f_8.f_54 = iVar10;
			Global_2602788[iVar20 /*80*/].f_8.f_55 = iVar11;
			Global_2602788[iVar20 /*80*/].f_8.f_56 = bVar13;
		}
		else
		{
			unk_0x0BF2AFDC28BCEDE4(iVar10, iVar11, iVar0, bVar13);
		}
		func_403(iParam0, iVar0);
		if (func_402(iParam0))
		{
			if (func_401(iParam0) > -1)
			{
				func_400(func_401(iParam0), iVar0);
			}
		}
		Global_2457299 = iVar0;
		func_399(&Global_2455573, 0, 0);
	}
	if (func_114(unk_0x3D35F9864E4640B1()) || func_133(unk_0x3D35F9864E4640B1()))
	{
		func_390(iParam0);
	}
	if (func_295(iParam0))
	{
		Global_1779238.f_13 = iVar0;
		Global_1779238.f_14 = iVar1;
	}
	if (func_299(iParam0))
	{
		Global_1779291.f_13 = iVar0;
		Global_1779291.f_14 = iVar1;
	}
	if (func_362(iParam0))
	{
		Global_1779353.f_12 = iVar0;
		Global_1779353.f_13 = iVar1;
	}
	if (func_360(iParam0))
	{
		Global_1779396.f_12 = iVar0;
		Global_1779396.f_13 = iVar1;
	}
}

void func_390(int iParam0)
{
	if (func_398(unk_0x3D35F9864E4640B1()) && func_422())
	{
		if (func_365(iParam0))
		{
			func_393(6801, -1);
		}
		else if (func_392(iParam0))
		{
			func_393(6803, -1);
		}
		else if (func_204(iParam0, 1))
		{
			func_393(6804, -1);
		}
		else if (func_391(iParam0))
		{
			func_393(6805, -1);
		}
	}
}

int func_391(int iParam0)
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

int func_392(int iParam0)
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

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_397(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_396(iParam0))
	{
		func_395(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_394(iParam0, iVar0, iParam1, 1);
	}
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_132(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_132(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_132(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_132(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_132(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_132(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_132(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_132(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_132(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_132(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_132(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_132(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_132(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_132(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_132(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_132(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_396(int iParam0)
{
	if (Global_1364938)
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
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
				return 1;
				break;
			}
	}
	return 0;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_398(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_99, 14);
}

void func_399(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

void func_400(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2501777.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5979)
		{
			iParam1 = Global_262145.f_5979;
		}
		Global_2501777.f_273 = iParam1;
		Global_2501777.f_274 = 0;
	}
}

int func_401(int iParam0)
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

int func_402(int iParam0)
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

void func_403(int iParam0, int iParam1)
{
	if (func_398(unk_0x3D35F9864E4640B1()) && func_422())
	{
		if (func_365(iParam0) && iParam1 > 0)
		{
			func_395(6802, (func_397(6802, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_404(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_407(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_405(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_405(int iParam0, int iParam1)
{
	return (func_406(iParam0) * iParam1);
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21320;
		
		case 0:
			return Global_262145.f_21321;
		
		case 1:
			return Global_262145.f_21322;
		
		case 2:
			return Global_262145.f_21323;
		
		case 3:
			return Global_262145.f_21324;
		
		case 4:
			return Global_262145.f_21325;
		
		case 5:
			return Global_262145.f_21326;
		
		case 6:
			return Global_262145.f_21327;
		
		case 7:
			return Global_262145.f_21328;
		
		default:
	}
	return 0;
}

float func_407(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21330);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_408(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_259.f_154[5 /*12*/];
}

bool func_409()
{
	return func_113(unk_0x3D35F9864E4640B1());
}

void func_410(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_423())
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
				func_411(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_411(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_411(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_423())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_19()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_2602788[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xF4CA95098478E685(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar4))
		{
			*uParam0 = func_418(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2602788[*uParam0 /*80*/].f_69 = 1;
					Global_2602788[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_2603312 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2603324 = 1;
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_417(1, iParam4);
			Global_2603324 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_412(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_412(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_413(iParam0);
	}
}

void func_413(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_423())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_416(iParam0))
		{
			if (!bVar0)
			{
				unk_0x25AE737F7DFF42F9();
			}
		}
		else if (!bVar0)
		{
			unk_0xC03328D5D07806F1(Global_2602788[iParam0 /*80*/]);
		}
		func_414(&(Global_2602788[iParam0 /*80*/]));
	}
}

void func_414(var uParam0)
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
	func_415(&(uParam0->f_8.f_3));
	func_415(&(uParam0->f_8.f_16));
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

void func_415(var uParam0)
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

int func_416(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_417(int iParam0, var uParam1)
{
	Global_2457433 = uParam1;
	Global_2457432 = iParam0;
}

int func_418(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2602788[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_423())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2602788[iVar0 /*80*/].f_2 = 1;
			Global_2602788[iVar0 /*80*/].f_1 = uParam5;
			Global_2602788[iVar0 /*80*/].f_3 = uParam1;
			Global_2602788[iVar0 /*80*/].f_4 = uParam2;
			Global_2602788[iVar0 /*80*/].f_7 = uParam3;
			Global_2602788[iVar0 /*80*/].f_5 = 0;
			Global_2602788[iVar0 /*80*/] = iParam0;
			Global_2602788[iVar0 /*80*/].f_6 = iParam4;
			Global_2602788[iVar0 /*80*/].f_72 = uParam8;
			Global_2602788[iVar0 /*80*/].f_71 = uParam7;
			Global_2602788[iVar0 /*80*/].f_74 = iParam9;
			Global_2602788[iVar0 /*80*/].f_73 = 0;
			Global_2602788[iVar0 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			Global_2602788[iVar0 /*80*/].f_79 = 0;
			Global_2603312 = 0;
			if (bParam6)
			{
				Global_2602788[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_419(int iParam0)
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

char* func_420(int iParam0)
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

struct<2> func_421()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_185;
}

bool func_422()
{
	return func_230(unk_0x3D35F9864E4640B1());
}

int func_423()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

bool func_424(bool bParam0)
{
	return func_171(unk_0x3D35F9864E4640B1(), bParam0);
}

void func_425(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1623799[iParam0 /*488*/].f_11.f_7[0];
	*uParam2 = Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_426()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

int func_427(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_428(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_428(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_438(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x76B3C79DE564AFC6(iParam1))
		{
			if (unk_0x269F274F1955DE87(iParam1))
			{
				uVar1 = unk_0x4849801147A2BA1E(iParam1);
				func_434(unk_0x616B55A822407A37(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_429(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_429(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_432(iParam0, 1) };
	if (iParam0 == func_431(unk_0x0031992CA618A445()))
	{
		func_430(1);
	}
	func_434(Var0, iParam1, 0, sParam2, iParam3);
}

void func_430(int iParam0)
{
	Global_2434915.f_1667 = iParam0;
}

int func_431(var uParam0)
{
	return uParam0;
}

Vector3 func_432(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x5B7BE6094290038A())
	{
		Var3 = { unk_0x74C3D05EEC4C701E(2) };
	}
	if (iParam0 == func_433(unk_0x0031992CA618A445()) && unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
	{
		Var0 = { unk_0xCD59EF1D7098A4B4(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		fVar6 = unk_0x69F9721375CE60CF(iParam0);
		if (unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x261E7847B591A8DC(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_433(var uParam0)
{
	return uParam0;
}

void func_434(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434915.f_1066[iVar0 /*30*/].f_6 == 0 || Global_2434915.f_1066[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434915.f_1066[iVar1 /*30*/] = { Param0 };
			Global_2434915.f_1066[iVar1 /*30*/].f_6 = 1;
			Global_2434915.f_1066[iVar1 /*30*/].f_4 = func_437(Global_2434915.f_1066[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434915.f_1066[iVar1 /*30*/].f_7 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1066[iVar1 /*30*/].f_3 = iParam3;
			Global_2434915.f_1066[iVar1 /*30*/].f_8 = iParam4;
			Global_2434915.f_1066[iVar1 /*30*/].f_9 = func_436();
			Global_2434915.f_1066[iVar1 /*30*/].f_10 = func_435();
			StringCopy(&(Global_2434915.f_1066[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434915.f_1066[iVar1 /*30*/].f_26 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam6);
		}
	}
}

int func_435()
{
	if (Global_2434915.f_1667)
	{
		Global_2434915.f_1667 = 0;
		return 1;
	}
	Global_2434915.f_1667 = 0;
	return 0;
}

var func_436()
{
	var uVar0;
	
	uVar0 = Global_2434915.f_1669;
	Global_2434915.f_1669 = 1;
	return uVar0;
}

float func_437(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x1410333E912D4EC6(unk_0x98FACB31378E99D1(), Param0, 1);
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

var func_438(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_439(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_439(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_468(unk_0x3D35F9864E4640B1()) || func_467(unk_0x3D35F9864E4640B1()))
	{
		if (Global_262145.f_8836 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8836;
		}
	}
	else if (Global_262145.f_6030 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6030;
	}
	if (func_466(uParam2))
	{
	}
	if (func_465())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_463(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_462(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_460(0, &iVar1);
					break;
				
				case 3:
					func_460(1, &iVar1);
					break;
				
				case 1:
					func_458(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1788555)
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
			func_457(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_449((func_456(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
				{
					func_457(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_444(iVar1);
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
				func_440((func_442(unk_0x3D35F9864E4640B1()) + iVar1));
			}
			else
			{
				func_440((func_442(unk_0x3D35F9864E4640B1()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_440(int iParam0)
{
	if (func_465())
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
		func_441(joaat("mpply_globalxp"), iParam0);
	}
}

void func_441(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, 1);
	}
}

int func_442(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_853(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return func_443(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_5;
			}
		}
		else
		{
			return func_443(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_444(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_62(unk_0x3D35F9864E4640B1()) };
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(&Var0))
		{
			iVar13 = func_447(func_448(&Var0));
			if (iVar13 == 0)
			{
				func_446(&Global_1364944, iParam0);
				func_445(joaat("mpply_crew_local_xp_0"), Global_1364944);
			}
			else if (iVar13 == 1)
			{
				func_446(&Global_1364945, iParam0);
				func_445(joaat("mpply_crew_local_xp_1"), Global_1364945);
			}
			else if (iVar13 == 2)
			{
				func_446(&Global_1364946, iParam0);
				func_445(joaat("mpply_crew_local_xp_2"), Global_1364946);
			}
			else if (iVar13 == 3)
			{
				func_446(&Global_1364947, iParam0);
				func_445(joaat("mpply_crew_local_xp_3"), Global_1364947);
			}
			else if (iVar13 == 4)
			{
				func_446(&Global_1364948, iParam0);
				func_445(joaat("mpply_crew_local_xp_4"), Global_1364948);
			}
		}
	}
}

void func_445(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1364939 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1364942 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1364943 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1364944 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1364945 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1364946 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1364947 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1364948 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1364949 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1364950 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1364951 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1364952 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1364953 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1364954 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1364955 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_446(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_447(int iParam0)
{
	if (iParam0 == Global_1364939)
	{
		return 0;
	}
	else if (iParam0 == Global_1364940)
	{
		return 1;
	}
	else if (iParam0 == Global_1364941)
	{
		return 2;
	}
	else if (iParam0 == Global_1364942)
	{
		return 3;
	}
	else if (iParam0 == Global_1364943)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_448(var uParam0)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(uParam0))
		{
			return Global_2455041;
		}
	}
	return Global_2455041;
}

void func_449(int iParam0, int iParam1, int iParam2)
{
	if (func_465())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1365059[func_132(-1)])
				{
					unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1365059[func_132(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_455(unk_0x3D35F9864E4640B1()))
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_453(iParam0, 1);
		}
		func_394(636, iParam0, -1, 1);
		func_395(637, func_453(iParam0, 1), -1, 1, 0);
		Global_1365059[func_132(-1)] = iParam0;
		func_450(7, 0);
	}
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_452(iParam0, iParam1))
	{
		iVar0 = func_451();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_451()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2455018[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_452(int iParam0, var uParam1)
{
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_453(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_454(iParam0, 0);
}

int func_454(int iParam0, int iParam1)
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
		if (Global_283571[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_283571[iVar3] < iParam0)
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

int func_455(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_1, iParam0);
	}
	return 1;
}

int func_456(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return Global_1365059[func_132(-1)];
			}
			else if (func_455(iParam0))
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1365059[func_132(-1)];
	}
	return 0;
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_397(iParam0, func_132(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_396(iParam0))
	{
		func_395(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_394(iParam0, iVar0, iParam2, 1);
	}
}

void func_458(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		iVar4 = unk_0xDF6AF3C6DAF25A51(iVar0);
		if (unk_0xA3C5F17FDDF2701D(iVar4))
		{
			iVar5 = unk_0x3F3ED1FF7CF1C641(iVar4);
			if (unk_0xB5E2A107E006EC7A(iVar5) != -1)
			{
				if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_339(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3D35F9864E4640B1())
					{
						if (func_63(unk_0x3D35F9864E4640B1(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_459(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_459(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_459(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_460(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x32C41AA379415932())
		{
			iVar3 = iVar0;
			if (unk_0xA3C5F17FDDF2701D(iVar3))
			{
				iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
				if (func_853(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3D35F9864E4640B1())
					{
						iVar1++;
						if (func_63(unk_0x3D35F9864E4640B1(), iVar4))
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
			if (func_853(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3D35F9864E4640B1())
				{
					if (func_461(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_63(unk_0x3D35F9864E4640B1(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_459(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_459(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_461(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_462(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DB8DA6E03DC888B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_459(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_463(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x0C58CE21DE9AD283(iParam0) > func_456(unk_0x3D35F9864E4640B1()))
		{
			iParam0 = -func_456(unk_0x3D35F9864E4640B1());
		}
	}
	if (func_464(8000, 0, 0) > 0)
	{
		if (func_464(8000, 0, 0) < (iParam0 + func_456(unk_0x3D35F9864E4640B1())))
		{
			iParam0 = (func_464(8000, 0, 0) - func_456(unk_0x3D35F9864E4640B1()));
		}
	}
	return iParam0;
}

int func_464(int iParam0, bool bParam1, int iParam2)
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
	return Global_283571[iParam0];
}

int func_465()
{
	return 1;
}

int func_466(var uParam0)
{
	if (unk_0x996B09F758C57FBE(uParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(uParam0, "") || unk_0xB3404E397FF56B3B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_467(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_468(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

void func_469()
{
	Global_2456641 = 1;
}

void func_470(int iParam0, var uParam1, var uParam2)
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
	iVar0 = func_472(iParam0);
	iVar1 = func_471(iParam0);
	iVar2 = unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(Global_2501777.f_4867.f_82, unk_0x898811EA80D35DE2()));
	if (iParam0 == 229)
	{
		if (iVar2 > Global_262145.f_21221)
		{
			iVar2 = Global_262145.f_21221;
		}
	}
	else if (iParam0 == 230)
	{
		if (iVar2 > Global_262145.f_21317)
		{
			iVar2 = Global_262145.f_21317;
		}
	}
	else if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_20071)
		{
			iVar2 = Global_262145.f_20071;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_20051)
		{
			iVar2 = Global_262145.f_20051;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_20063)
		{
			iVar2 = Global_262145.f_20063;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17599)
		{
			iVar2 = Global_262145.f_17599;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17600)
		{
			iVar2 = Global_262145.f_17600;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17598)
		{
			iVar2 = Global_262145.f_17598;
		}
	}
	else if (func_365(iParam0))
	{
		if (iVar2 > Global_262145.f_17601)
		{
			iVar2 = Global_262145.f_17601;
		}
	}
	else if (func_204(iParam0, 0) || func_392(iParam0))
	{
		if (iVar2 > Global_262145.f_17602)
		{
			iVar2 = Global_262145.f_17602;
		}
	}
	else if (iVar2 > Global_262145.f_11584)
	{
		iVar2 = Global_262145.f_11584;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11675;
		
		case 152:
			return Global_262145.f_11710;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11698;
		
		case 157:
			return Global_262145.f_11665;
		
		case 159:
			return Global_262145.f_11648;
		
		case 164:
			return Global_262145.f_11688;
		
		case 160:
			return Global_262145.f_11738;
		
		case 162:
			return Global_262145.f_11758;
		
		case 163:
			return Global_262145.f_11723;
		
		case 154:
			return Global_262145.f_11793;
		
		case 155:
			return Global_262145.f_11783;
		
		case 153:
			return Global_262145.f_11747;
		
		case 170:
			return Global_262145.f_14115;
		
		case 171:
			return Global_262145.f_14174;
		
		case 172:
			return Global_262145.f_14192;
		
		case 173:
			return Global_262145.f_14133;
		
		case 166:
			return Global_262145.f_14148;
		
		case 167:
			return Global_262145.f_14239;
		
		case 169:
			return Global_262145.f_14211;
		
		case 168:
			return Global_262145.f_14204;
		
		case 179:
			return Global_262145.f_17481;
		
		case 180:
			return Global_262145.f_17260;
		
		case 182:
			return Global_262145.f_17260;
		
		case 183:
			return Global_262145.f_17260;
		
		case 185:
			return Global_262145.f_17260;
		
		case 186:
			return Global_262145.f_17260;
		
		case 189:
			return Global_262145.f_17481;
		
		case 190:
			return Global_262145.f_17136;
		
		case 191:
			return Global_262145.f_17227;
		
		case 192:
			return Global_262145.f_17021;
		
		case 193:
			return Global_262145.f_17481;
		
		case 194:
			return Global_262145.f_17481;
		
		case 195:
			return Global_262145.f_17260;
		
		case 197:
			return Global_262145.f_17260;
		
		case 198:
			return Global_262145.f_17260;
		
		case 199:
			return Global_262145.f_17481;
		
		case 200:
			return Global_262145.f_17481;
		
		case 201:
			return Global_262145.f_17481;
		
		case 205:
			return Global_262145.f_17481;
		
		case 207:
			return Global_262145.f_17260;
		
		case 208:
			return Global_262145.f_17260;
		
		case 209:
			return Global_262145.f_17260;
		
		case 210:
			return Global_262145.f_17481;
		
		case 211:
			return Global_262145.f_17481;
		
		case 214:
			return Global_262145.f_18277;
		
		case 215:
			return Global_262145.f_18279;
		
		case 216:
			return Global_262145.f_18281;
		
		case 217:
			return Global_262145.f_18283;
		
		case 218:
			return Global_262145.f_18285;
		
		case 219:
			return Global_262145.f_18287;
		
		case 220:
			return Global_262145.f_18289;
		
		case 221:
			return Global_262145.f_18291;
		
		case 225:
			if (func_424(0) || func_228(0))
			{
				return Global_262145.f_20073;
			}
			break;
		
		case 226:
			if (func_424(0) || func_228(0))
			{
				return Global_262145.f_20053;
			}
			break;
		
		case 227:
			if (func_424(0) || func_228(0))
			{
				return Global_262145.f_20065;
			}
			break;
		
		case 229:
			if (func_424(0) || func_228(0))
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 230:
			if (func_424(0) || func_228(0))
			{
				return Global_262145.f_21319;
			}
			break;
	}
	return 0;
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11674;
		
		case 152:
			return Global_262145.f_11709;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11697;
		
		case 157:
			return Global_262145.f_11664;
		
		case 159:
			return Global_262145.f_11647;
		
		case 164:
			return Global_262145.f_11687;
		
		case 160:
			return Global_262145.f_11737;
		
		case 162:
			return Global_262145.f_11757;
		
		case 163:
			return Global_262145.f_11722;
		
		case 154:
			return Global_262145.f_11792;
		
		case 155:
			return Global_262145.f_11782;
		
		case 153:
			return Global_262145.f_11746;
		
		case 170:
			return Global_262145.f_14114;
		
		case 171:
			return Global_262145.f_14173;
		
		case 172:
			return Global_262145.f_14191;
		
		case 173:
			return Global_262145.f_14132;
		
		case 166:
			return Global_262145.f_14147;
		
		case 179:
			return Global_262145.f_17480;
		
		case 180:
			return Global_262145.f_17259;
		
		case 182:
			return Global_262145.f_17259;
		
		case 183:
			return Global_262145.f_17259;
		
		case 185:
			return Global_262145.f_17259;
		
		case 186:
			return Global_262145.f_17259;
		
		case 189:
			return Global_262145.f_17480;
		
		case 193:
			return Global_262145.f_17480;
		
		case 194:
			return Global_262145.f_17480;
		
		case 195:
			return Global_262145.f_17259;
		
		case 197:
			return Global_262145.f_17259;
		
		case 198:
			return Global_262145.f_17259;
		
		case 199:
			return Global_262145.f_17480;
		
		case 200:
			return Global_262145.f_17480;
		
		case 201:
			return Global_262145.f_17480;
		
		case 205:
			return Global_262145.f_17480;
		
		case 207:
			return Global_262145.f_17259;
		
		case 208:
			return Global_262145.f_17259;
		
		case 209:
			return Global_262145.f_17259;
		
		case 210:
			return Global_262145.f_17480;
		
		case 211:
			return Global_262145.f_17480;
		
		case 190:
			if (!func_409())
			{
				return Global_262145.f_17135;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_409())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_409())
			{
				return Global_262145.f_17020;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18276;
		
		case 215:
			return Global_262145.f_18278;
		
		case 216:
			return Global_262145.f_18280;
		
		case 217:
			return Global_262145.f_18282;
		
		case 218:
			return Global_262145.f_18284;
		
		case 219:
			return Global_262145.f_18286;
		
		case 220:
			return Global_262145.f_18288;
		
		case 221:
			return Global_262145.f_18290;
		
		case 225:
			if (func_228(0))
			{
				return Global_262145.f_20072;
			}
			break;
		
		case 226:
			if (func_228(0))
			{
				return Global_262145.f_20052;
			}
			break;
		
		case 227:
			if (func_228(0))
			{
				return Global_262145.f_20064;
			}
			break;
		
		case 229:
			if (func_228(0))
			{
				return Global_262145.f_21222;
			}
			break;
		
		case 230:
			if (func_228(0))
			{
				return Global_262145.f_21318;
			}
			break;
	}
	return 0;
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_409())
		{
			if (func_424(0))
			{
				if (!func_228(0))
				{
					if (unk_0x80BA8E3CC61A8625(func_426()))
					{
						if (func_484() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_484());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_482(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_479("GB_BCUT_TICK1", func_426(), iVar0, 0, 0, 1, 1);
						}
						func_478(20);
						func_474(func_426(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_474(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_853(iParam0, 0, 1))
	{
		Var0.f_0 = -1983770473;
		Var0.f_1 = unk_0x3D35F9864E4640B1();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_477(iParam0);
		func_476(&(Var0.f_6), &(Var0.f_7));
		unk_0xBD257D33BCFA529A(1, &Var0, 8, func_475(iParam0));
	}
}

var func_475(int iParam0)
{
	var uVar0;
	
	unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
	return uVar0;
}

void func_476(var uParam0, var uParam1)
{
	*uParam0 = Global_1639417.f_9;
	*uParam1 = Global_1639417.f_10;
}

var func_477(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_430;
}

void func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

int func_479(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var1))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		unk_0xDBB8FCB00B701798(func_332(iParam1, -2, 1, 0));
		unk_0x50B3C23D0902259F(func_480(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xDBB8FCB00B701798(iParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam2);
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		func_281(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_480(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_481(&cVar0);
}

var func_481(char[4] cParam0)
{
	return cParam0;
}

void func_482(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_483(1);
	}
	else
	{
		iVar1 = func_483(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_483(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11579;
}

int func_484()
{
	return Global_262145.f_11578;
}

void func_485(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_228(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_409())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_426();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_509(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_500(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_405(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_404(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_499(*iParam2) > 0)
			{
				if (iVar15 == unk_0x3D35F9864E4640B1())
				{
					func_498("SMTICK_RONCUT", func_499(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_499(*iParam2));
			}
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_496(iVar2, iVar9);
				iVar6 = func_495(&uVar5);
				iVar7 = Global_262145.f_21336;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21335));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_478(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_494(iVar20))
								{
									func_486(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21269;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21270;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_478(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_488(iParam0);
	func_487(iParam0, uVar0, iParam1, iParam2);
}

void func_487(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1095396841;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_477(iParam0);
	func_476(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_60())
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			unk_0xBD257D33BCFA529A(1, &Var0, 8, func_475(iParam0));
		}
	}
}

int func_488(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_493();
	iVar0 = func_491(iParam0, iVar0);
	iVar1 = Global_1623799[func_426() /*488*/].f_11.f_369;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14075));
	if (iVar0 < func_490())
	{
		iVar0 = func_490();
	}
	if (iVar0 > func_489())
	{
		iVar0 = func_489();
	}
	return iVar0;
}

int func_489()
{
	return Global_262145.f_14076;
}

int func_490()
{
	return Global_262145.f_15251;
}

int func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_554(iParam0) * func_492());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_492()
{
	return Global_262145.f_15250;
}

var func_493()
{
	return Global_262145.f_11570;
}

int func_494(int iParam0)
{
	if (unk_0x80BA8E3CC61A8625(iParam0))
	{
		if (iParam0 != unk_0x3D35F9864E4640B1())
		{
			if (func_71(iParam0, unk_0x3D35F9864E4640B1(), 0))
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

int func_495(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(iVar0)))
		{
			iVar2 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_17(iVar2, 0) && !func_71(iVar2, unk_0x3D35F9864E4640B1(), 1))
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

void func_496(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_497(iParam0, 6095);
	}
	if (iParam1 > 0)
	{
		func_497(iParam0, 6095);
	}
}

void func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_397(iParam1, -1, 0);
	func_395(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_498(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x96577CAA1D1E72DB(iParam1);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_281(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_499(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21303);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21304))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21304);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_507())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_509(unk_0x3D35F9864E4640B1());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_502(func_503(func_506(iVar0), -1, -1));
		if (func_501(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_501(int iParam0)
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

int func_502(int iParam0)
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

int func_503(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_505(iParam0, iParam1);
	uVar2 = func_504(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_505(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

int func_506(int iParam0)
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

bool func_507()
{
	return func_508() != 0;
}

int func_508()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235;
}

int func_509(int iParam0)
{
	if (iParam0 != func_60() && func_510(iParam0))
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235.f_3;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (iParam0 != func_60())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235 != 0;
	}
	return 0;
}

void func_511(int iParam0, var uParam1, int iParam2, var uParam3)
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
		if (func_409())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_426();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_408(iVar15);
			iVar0 = (func_532(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_528(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20055));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20054));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_525(iVar16, iVar2);
				if (func_521(iVar16) >= Global_262145.f_19608 || iVar2 >= Global_262145.f_19608)
				{
					func_512(5);
				}
				iVar6 = func_495(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20057);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20056));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_478(108);
					}
					else
					{
						func_478(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_494(iVar20))
								{
									func_486(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20058;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20059;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_478(112);
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

void func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19596)
			{
				if (func_514(Global_262145.f_19597))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19598)
			{
				if (func_514(Global_262145.f_19599))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19600)
			{
				if (func_514(Global_262145.f_19601))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19602)
			{
				if (func_514(Global_262145.f_19603))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19604)
			{
				if (func_514(Global_262145.f_19605))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19606)
			{
				if (func_514(Global_262145.f_19607))
				{
					func_498("CLOTHAWDSTRAP3", Global_262145.f_19608, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19609)
			{
				if (func_514(Global_262145.f_19610))
				{
					func_498("CLOTHAWDSTRAP5", Global_262145.f_19739, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19612)
			{
				if (func_514(Global_262145.f_19613))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19614)
			{
				if (func_514(Global_262145.f_19615))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19616)
			{
				if (func_514(Global_262145.f_19617))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19618)
			{
				if (func_514(Global_262145.f_19619))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19620)
			{
				if (func_514(Global_262145.f_19621))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19622)
			{
				if (func_514(Global_262145.f_19623))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19624)
			{
				if (func_514(Global_262145.f_19625))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19626)
			{
				if (func_514(Global_262145.f_19627))
				{
					func_513("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_513(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam3);
	}
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	else
	{
		Global_2488575 = { func_62(unk_0x3D35F9864E4640B1()) };
		if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
		{
			iVar1 = 0;
			if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2488505.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xAC2E222FB9C25D52(iVar2, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar1, 0, Global_2488505, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), Global_1314010, Global_1314011, Global_1314012);
		}
		else
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
	}
	func_281(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_518(15417, -1, -1))
			{
				func_517(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_518(15418, -1, -1))
			{
				func_517(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_518(15425, -1, -1))
			{
				func_517(15425, 1, -1, 1);
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
			if (!func_518(15405, -1, -1))
			{
				func_517(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_518(15393, -1, -1))
			{
				func_517(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_518(15409, -1, -1))
			{
				func_517(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_518(15396, -1, -1))
			{
				func_517(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_518(15412, -1, -1))
			{
				func_517(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_518(15403, -1, -1))
			{
				func_517(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_518(15389, -1, -1))
			{
				func_517(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_518(15398, -1, -1))
			{
				func_517(15398, 1, -1, 1);
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
			if (!func_518(15400, -1, -1))
			{
				func_517(15400, 1, -1, 1);
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
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_518(15408, -1, -1))
			{
				func_517(15408, 1, -1, 1);
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
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_518(15411, -1, -1))
			{
				func_517(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_518(15397, -1, -1))
			{
				func_517(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_518(15413, -1, -1))
			{
				func_517(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_518(15391, -1, -1))
			{
				func_517(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_518(15388, -1, -1))
			{
				func_517(15388, 1, -1, 1);
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
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_518(15401, -1, -1))
			{
				func_517(15401, 1, -1, 1);
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
			if (!func_518(15394, -1, -1))
			{
				func_517(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_518(15406, -1, -1))
			{
				func_517(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_518(15395, -1, -1))
			{
				func_517(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_518(15410, -1, -1))
			{
				func_517(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_518(15407, -1, -1))
			{
				func_517(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_518(15414, -1, -1))
			{
				func_517(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_518(15415, -1, -1))
			{
				func_517(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_518(15399, -1, -1))
			{
				func_517(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_518(15404, -1, -1))
			{
				func_517(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_518(15392, -1, -1))
			{
				func_517(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_518(15390, -1, -1))
			{
				func_517(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_518(15402, -1, -1))
			{
				func_517(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_518(15416, -1, -1))
			{
				func_517(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_131(209, -1))
			{
				func_515(209, 1, -1, 1);
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
			if (!func_518(15426, -1, -1))
			{
				func_517(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_518(15422, -1, -1))
			{
				func_517(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_518(15423, -1, -1))
			{
				func_517(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_518(15421, -1, -1))
			{
				func_517(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_518(15427, -1, -1))
			{
				func_517(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_518(15419, -1, -1))
			{
				func_517(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_518(15420, -1, -1))
			{
				func_517(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_515(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_516())
	{
		iVar0 = Global_2534367[iParam0 /*3*/][func_132(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x356621BE3FFD87C4(iVar0, iParam1, iParam3);
		}
	}
}

int func_516()
{
	return 1;
	return 0;
}

int func_517(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_518(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_520(iParam0, iParam1);
	uVar2 = func_519(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_519(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_520(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

int func_521(int iParam0)
{
	int iVar0;
	
	iVar0 = func_523(iParam0);
	return func_397(func_522(iVar0), -1, 0);
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3930;
		
		case 1:
			return 3931;
		
		case 2:
			return 3932;
		
		case 3:
			return 3933;
		
		case 4:
			return 3934;
		
		case 5:
			return 5435;
		
		default:
	}
	return 3930;
}

int func_523(int iParam0)
{
	int iVar0;
	
	if (func_524(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_524(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_523(iParam0);
	iVar1 = func_522(iVar0);
	iVar2 = (func_397(iVar1, -1, 0) + iParam1);
	func_395(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_503(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
			{
				iVar1 = func_522(iVar0);
				iVar3 = (iVar3 + func_397(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_527(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_526(9357, iVar5, -1, 1);
	}
}

var func_526(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_527(int iParam0)
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

int func_528(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_419(iParam1);
	if (func_524(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16080;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16085);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16090);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16079;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16084);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16089);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16078;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16083);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16088);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16076;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16081);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16086);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16077;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16082);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16087);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20080;
				if (func_529(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20082);
				}
				if (func_529(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20081);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_529(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_531(iParam0, iParam1))
	{
		iVar0 = func_530(iParam0, iParam1);
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_524(iParam1) && iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_531(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_524(iParam1) && iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_524(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_533(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_422())
			{
				Var0 = { func_421() };
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
				iVar7 = func_528(unk_0x3D35F9864E4640B1(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17710);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17709);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_495(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17700);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17699));
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
					func_478(86);
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (func_228(0))
			{
				Var15 = { func_534(func_426()) };
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
				iVar22 = func_528(func_426(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17710));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17709));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17749;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17750;
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

struct<2> func_534(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_185;
}

void func_535(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_113(unk_0x3D35F9864E4640B1()))
		{
			if (bParam1)
			{
				func_550();
			}
			func_549();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_113(unk_0x3D35F9864E4640B1()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_541(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_540(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_495(&uVar2);
					iVar4 = Global_262145.f_15261;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14470));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_478(44);
					}
				}
				func_538(*iParam3);
				func_537();
				Global_2501777.f_4867.f_194 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x32C41AA379415932())
				{
					iVar8 = iVar7;
					if (unk_0xA3C5F17FDDF2701D(iVar8))
					{
						iVar9 = unk_0x3F3ED1FF7CF1C641(iVar8);
						if (func_494(iVar9))
						{
							func_486(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_113(unk_0x3D35F9864E4640B1()))
		{
			func_536();
		}
	}
}

void func_536()
{
	int iVar0;
	
	iVar0 = Global_2536235[func_19()];
	iVar0++;
	func_394(3654, iVar0, -1, 1);
}

void func_537()
{
	int iVar0;
	
	iVar0 = Global_2536241[func_19()];
	iVar0++;
	func_394(3653, iVar0, -1, 1);
}

void func_538(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2536244[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_394(3655, iVar0, -1, 1);
	if (func_503(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_539(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_526(7666, iVar2, -1, 1);
	}
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15394;
			break;
		
		case 2:
			return Global_262145.f_15395;
			break;
		
		case 3:
			return Global_262145.f_15396;
			break;
		
		case 4:
			return Global_262145.f_15397;
			break;
		
		case 5:
			return Global_262145.f_15398;
			break;
		
		case 6:
			return Global_262145.f_15399;
			break;
		
		case 7:
			return Global_262145.f_15400;
			break;
		
		case 8:
			return Global_262145.f_15401;
			break;
		
		case 9:
			return Global_262145.f_15402;
			break;
		
		case 10:
			return Global_262145.f_15403;
			break;
		
		case 11:
			return Global_262145.f_15404;
			break;
		
		case 12:
			return Global_262145.f_15405;
			break;
		
		case 13:
			return Global_262145.f_15406;
			break;
		
		case 14:
			return Global_262145.f_15407;
			break;
		
		case 15:
			return Global_262145.f_15408;
			break;
		
		case 16:
			return Global_262145.f_15409;
			break;
		
		case 17:
			return Global_262145.f_15410;
			break;
		
		case 18:
			return Global_262145.f_15411;
			break;
		
		case 19:
			return Global_262145.f_15412;
			break;
		
		case 20:
			return Global_262145.f_15413;
			break;
		
		case 21:
			return Global_262145.f_15414;
			break;
		
		case 22:
			return Global_262145.f_15415;
			break;
		
		case 23:
			return Global_262145.f_15416;
			break;
		
		case 24:
			return Global_262145.f_15417;
			break;
	}
	return 0;
}

var func_540(int iParam0)
{
	if (iParam0 >= Global_262145.f_14448)
	{
		return Global_262145.f_14469;
	}
	else if (iParam0 >= Global_262145.f_14447)
	{
		return Global_262145.f_14468;
	}
	else if (iParam0 >= Global_262145.f_14446)
	{
		return Global_262145.f_14467;
	}
	else if (iParam0 >= Global_262145.f_14445)
	{
		return Global_262145.f_14466;
	}
	else if (iParam0 >= Global_262145.f_14444)
	{
		return Global_262145.f_14465;
	}
	else if (iParam0 >= Global_262145.f_14443)
	{
		return Global_262145.f_14464;
	}
	else if (iParam0 >= Global_262145.f_14442)
	{
		return Global_262145.f_14463;
	}
	else if (iParam0 >= Global_262145.f_14441)
	{
		return Global_262145.f_14462;
	}
	else if (iParam0 >= Global_262145.f_14440)
	{
		return Global_262145.f_14461;
	}
	else if (iParam0 >= Global_262145.f_14439)
	{
		return Global_262145.f_14460;
	}
	else if (iParam0 >= Global_262145.f_14438)
	{
		return Global_262145.f_14459;
	}
	else if (iParam0 >= Global_262145.f_14437)
	{
		return Global_262145.f_14458;
	}
	else if (iParam0 >= Global_262145.f_14436)
	{
		return Global_262145.f_14457;
	}
	else if (iParam0 >= Global_262145.f_14435)
	{
		return Global_262145.f_14456;
	}
	else if (iParam0 >= Global_262145.f_14434)
	{
		return Global_262145.f_14455;
	}
	else if (iParam0 >= Global_262145.f_14433)
	{
		return Global_262145.f_14454;
	}
	else if (iParam0 >= Global_262145.f_14432)
	{
		return Global_262145.f_14453;
	}
	else if (iParam0 >= Global_262145.f_14431)
	{
		return Global_262145.f_14452;
	}
	else if (iParam0 >= Global_262145.f_14430)
	{
		return Global_262145.f_14451;
	}
	else if (iParam0 >= Global_262145.f_14429)
	{
		return Global_262145.f_14450;
	}
	return Global_262145.f_14449;
}

int func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_548(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_547(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_546(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_542(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_542(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_546(unk_0x3AF262D7332EEDF5(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_542(int iParam0)
{
	int iVar0;
	
	if (func_545(iParam0))
	{
		iVar0 = func_543(func_544(iParam0));
		return func_397(iVar0, -1, 0);
	}
	return 0;
}

int func_543(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3633;
	}
	else if (iParam0 == 1)
	{
		return 3634;
	}
	else if (iParam0 == 2)
	{
		return 3635;
	}
	else if (iParam0 == 3)
	{
		return 3636;
	}
	else if (iParam0 == 4)
	{
		return 3637;
	}
	return 3633;
}

int func_544(int iParam0)
{
	int iVar0;
	
	if (func_545(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_545(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_546(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14648;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14646;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14650;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14644;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14642;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14652;
	}
	return 0;
}

int func_547(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_545(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1780558[iVar0] == iParam1 && Global_1780565[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_548(int iParam0)
{
	int iVar0;
	
	if (func_545(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_549()
{
	int iVar0;
	
	iVar0 = Global_2536232[func_19()];
	iVar0++;
	Global_2536232[func_19()] = iVar0;
	func_394(3652, iVar0, -1, 1);
}

void func_550()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2536229[func_19()];
	iVar1 = Global_2536238[func_19()];
	iVar0++;
	iVar1++;
	Global_2536229[func_19()] = iVar0;
	Global_2536238[func_19()] = iVar1;
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_104 = iVar1;
	func_394(3650, iVar0, -1, 1);
	func_394(3651, iVar1, -1, 1);
}

void func_551()
{
	if (func_409())
	{
		Global_2446355.f_3066.f_134 = 0;
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
	}
}

void func_552()
{
	if (func_409())
	{
		if (Global_2446355.f_3066.f_134 < 10)
		{
			Global_2446355.f_3066.f_134++;
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

void func_553()
{
	if (func_409())
	{
		if (Global_2446355.f_3066.f_134 > 0)
		{
			Global_2446355.f_3066.f_134 = (Global_2446355.f_3066.f_134 - 1);
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

int func_554(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_27;
}

int func_555(int iParam0)
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
			if (func_424(1) && !func_228(1))
			{
				if (func_556(func_426()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_556(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 26);
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11695) * Global_262145.f_11700));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11645) * Global_262145.f_11650));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11672) * Global_262145.f_11676));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11685) * Global_262145.f_11689));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11707) * Global_262145.f_11712));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11869) * Global_262145.f_11870));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11875) * Global_262145.f_11876));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11873) * Global_262145.f_11874));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11867) * Global_262145.f_11868));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11871) * Global_262145.f_11872));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11865) * Global_262145.f_11866));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14171;
		
		case 172:
			return Global_262145.f_14187;
		
		case 173:
			return Global_262145.f_14130;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17404;
		
		case 180:
			return Global_262145.f_17280;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17288;
		
		case 185:
			return Global_262145.f_17297;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17492;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17509;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17357;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17540;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17418;
		
		case 205:
			return Global_262145.f_17527;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17385;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17522;
		
		case 211:
			return Global_262145.f_17486;
		
		case 214:
			return Global_262145.f_18026;
		
		case 215:
			return Global_262145.f_18036;
		
		case 216:
			return Global_262145.f_18046;
		
		case 217:
			return Global_262145.f_18055;
		
		case 218:
			return Global_262145.f_18064;
		
		case 219:
			return Global_262145.f_18080;
		
		default:
	}
	return 0;
}

int func_558(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11696) * Global_262145.f_11701));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11646) * Global_262145.f_11651));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11673) * Global_262145.f_11677));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11686) * Global_262145.f_11690));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11708) * Global_262145.f_11713));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11745) * Global_262145.f_11748));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11791) * Global_262145.f_11794));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11781) * Global_262145.f_11784));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11736) * Global_262145.f_11739));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11756) * Global_262145.f_11761));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11721) * Global_262145.f_11724));
		
		case 170:
			return Global_262145.f_14113;
		
		case 171:
			return Global_262145.f_14172;
		
		case 172:
			return Global_262145.f_14188;
		
		case 173:
			return Global_262145.f_14131;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16208;
		
		case 168:
			return Global_262145.f_16207;
		
		case 179:
			return Global_262145.f_17405;
		
		case 180:
			return Global_262145.f_17281;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17289;
		
		case 185:
			return Global_262145.f_17298;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17493;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17510;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17358;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17541;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17419;
		
		case 205:
			return Global_262145.f_17528;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17386;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17523;
		
		case 211:
			return Global_262145.f_17487;
		
		case 214:
			return Global_262145.f_18027;
		
		case 215:
			return Global_262145.f_18037;
		
		case 216:
			return Global_262145.f_18047;
		
		case 217:
			return Global_262145.f_18056;
		
		case 218:
			return Global_262145.f_18065;
		
		case 219:
			return Global_262145.f_18081;
		
		case 178:
			if (func_409())
			{
				return Global_262145.f_17904;
			}
			else if (bParam1)
			{
				return Global_262145.f_17905;
			}
			break;
		
		case 188:
			if (func_409())
			{
				return Global_262145.f_17988;
			}
			else if (bParam1)
			{
				return Global_262145.f_17989;
			}
			break;
		
		case 225:
			if (func_409() && !func_422())
			{
				if (func_556(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20068;
				}
				else
				{
					return Global_262145.f_20069;
				}
			}
			else if (func_422())
			{
				return Global_262145.f_20070;
			}
			break;
		
		case 226:
			if (func_409() && !func_422())
			{
				if (func_556(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20048;
				}
				else
				{
					return Global_262145.f_20049;
				}
			}
			else if (func_422())
			{
				return Global_262145.f_20050;
			}
			break;
		
		case 227:
			if (func_409() && !func_422())
			{
				if (func_556(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20060;
				}
				else
				{
					return Global_262145.f_20061;
				}
			}
			else if (func_422())
			{
				return Global_262145.f_20062;
			}
			break;
		
		case 229:
			if (func_409() && !func_422())
			{
				if (func_556(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21218;
				}
				else
				{
					return Global_262145.f_21219;
				}
			}
			else if (func_422())
			{
				return Global_262145.f_21220;
			}
			break;
		
		case 230:
			if (func_409() && !func_422())
			{
				if (func_556(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21314;
				}
				else
				{
					return Global_262145.f_21315;
				}
			}
			else if (func_422())
			{
				return Global_262145.f_21316;
			}
			break;
	}
	return 0;
}

void func_559(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_560(iParam0))
	{
		if (!func_409())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11589;
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
		*uParam1 = (Global_262145.f_17258 / 100f);
		*uParam2 = (Global_262145.f_17258 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11588;
		*uParam2 = Global_262145.f_11587;
	}
	if (func_295(iParam0))
	{
		if (func_171(unk_0x3D35F9864E4640B1(), 1))
		{
			*uParam1 = (Global_262145.f_17257 / 100f);
			*uParam2 = (Global_262145.f_17257 / 100f);
		}
	}
	else if (func_171(unk_0x3D35F9864E4640B1(), 1))
	{
		*uParam1 = Global_262145.f_11586;
		*uParam2 = Global_262145.f_11585;
	}
	iVar0 = func_231();
	if (iVar0 != func_60())
	{
		if (func_71(unk_0x3D35F9864E4640B1(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_560(int iParam0)
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

int func_561()
{
	return (Local_122.f_115 * Global_262145.f_14146);
}

int func_562()
{
	return (Local_122.f_115 * Global_262145.f_14145);
}

void func_563(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_95(unk_0x3D35F9864E4640B1());
	if (func_295(iVar0))
	{
		Global_1779238.f_2 = func_617();
		Global_1779238.f_3 = func_616();
		Global_1779238.f_50 = iParam4;
		Global_1779238.f_51 = iParam5;
		Global_1779238.f_10 = unk_0x6239D1A379D387A4();
		Global_1779238.f_20 = (Global_1779238.f_10 - Global_1779238.f_9);
		Global_1779238.f_12 = iParam1;
		Global_1779238.f_19 = func_610(iVar0, bParam0, func_615(bParam3));
		if (bParam0)
		{
			Global_1779238.f_11 = 1;
		}
		else
		{
			Global_1779238.f_11 = 0;
		}
		if ((func_114(unk_0x3D35F9864E4640B1()) || func_125(unk_0x3D35F9864E4640B1())) || func_133(unk_0x3D35F9864E4640B1()))
		{
			Global_1779238.f_8 = 1;
		}
		else
		{
			Global_1779238.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1779238.f_43 = 0;
			Global_1779238.f_45 = func_609(func_426(), iParam2);
			Global_1779238.f_47 = iParam7;
			Global_1779238.f_46 = iParam6;
			Global_1779238.f_52 = func_608(func_426(), iParam2);
		}
		func_606(iVar0);
	}
	else if (func_299(iVar0))
	{
		Global_1779291.f_2 = func_617();
		Global_1779291.f_3 = func_616();
		Global_1779291.f_10 = unk_0x6239D1A379D387A4();
		Global_1779291.f_19 = (Global_1779291.f_10 - Global_1779291.f_9);
		Global_1779291.f_12 = iParam1;
		if (bParam0)
		{
			Global_1779291.f_11 = 1;
		}
		else
		{
			Global_1779291.f_11 = 0;
		}
		if ((func_114(unk_0x3D35F9864E4640B1()) || func_125(unk_0x3D35F9864E4640B1())) || func_133(unk_0x3D35F9864E4640B1()))
		{
			Global_1779291.f_8 = 1;
		}
		else
		{
			Global_1779291.f_8 = 0;
		}
		func_604(iVar0);
	}
	else if (func_362(iVar0))
	{
		Global_1779353.f_2 = func_617();
		Global_1779353.f_3 = func_616();
		Global_1779353.f_9 = unk_0x6239D1A379D387A4();
		Global_1779353.f_18 = (Global_1779353.f_9 - Global_1779353.f_8);
		Global_1779353.f_11 = iParam1;
		Global_1779353.f_7 = func_603();
		Global_1779353.f_42 = func_601(func_19(), 5);
		iVar1 = unk_0x3D35F9864E4640B1();
		iVar2 = func_408(iVar1);
		Global_1779353.f_28 = iVar2;
		Global_1779353.f_29 = func_598((func_600(iVar1) || func_599(iVar1)));
		Global_1779353.f_30 = func_598(func_597(iVar1));
		Global_1779353.f_32 = func_598(func_596(iVar1));
		Global_1779353.f_33 = func_598(func_595(iVar1));
		Global_1779353.f_34 = func_598(func_594(iVar1));
		Global_1779353.f_35 = func_598(func_593(0, iVar1) == 1);
		Global_1779353.f_36 = func_598(func_592(iVar1));
		Global_1779353.f_37 = func_598(func_591(iVar1));
		Global_1779353.f_38 = func_598(func_590(iVar1));
		Global_1779353.f_39 = func_598(func_529(iVar1, iVar2, 0));
		Global_1779353.f_40 = func_598(func_529(iVar1, iVar2, 2));
		Global_1779353.f_41 = func_598(func_529(iVar1, iVar2, 1));
		if (func_589(iVar1))
		{
			Global_1779353.f_31 = 2;
		}
		else if (func_588(iVar1))
		{
			Global_1779353.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1779353.f_10 = 1;
		}
		else
		{
			Global_1779353.f_10 = 0;
		}
		if ((func_114(unk_0x3D35F9864E4640B1()) || func_125(unk_0x3D35F9864E4640B1())) || func_133(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_6 = 1;
		}
		else
		{
			Global_1779353.f_6 = 0;
		}
		Global_1779353.f_21 = -2;
		Global_1779353.f_22 = -2;
		func_586(iVar0);
	}
	else if (func_360(iVar0))
	{
		Global_1779396.f_2 = func_617();
		Global_1779396.f_3 = func_616();
		if ((func_114(unk_0x3D35F9864E4640B1()) || func_125(unk_0x3D35F9864E4640B1())) || func_133(unk_0x3D35F9864E4640B1()))
		{
			Global_1779396.f_6 = 1;
		}
		else
		{
			Global_1779396.f_6 = 0;
		}
		Global_1779396.f_9 = unk_0x6239D1A379D387A4();
		Global_1779396.f_10 = func_598(bParam0);
		Global_1779396.f_11 = iParam1;
		Global_1779396.f_17 = func_585(func_231());
		Global_1779396.f_18 = (Global_1779396.f_9 - Global_1779396.f_8);
		Global_1779396.f_20 = iParam8;
		Global_1779396.f_21 = -2;
		Global_1779396.f_22 = -2;
		Global_1779396.f_27 = func_584();
		Global_1779396.f_29 = func_397(6086, -1, 0);
		Global_1779396.f_30 = func_397(6082, -1, 0);
		Global_1779396.f_31 = func_397(6083, -1, 0);
		Global_1779396.f_32 = func_397(6085, -1, 0);
		Global_1779396.f_33 = func_397(6084, -1, 0);
		Global_1779396.f_34 = func_397(6087, -1, 0);
		Global_1779396.f_36 = func_598(func_228(1));
		Global_1779396.f_37 = func_581();
		func_566();
		func_564(iVar0);
	}
	else
	{
		Global_1779220.f_6 = unk_0x6239D1A379D387A4();
		if (bParam0)
		{
			Global_1779220.f_7 = 1;
		}
		else
		{
			Global_1779220.f_7 = 0;
		}
		Global_1779220.f_8 = iParam1;
		if (Global_1779220.f_4 == 0)
		{
			if ((func_114(unk_0x3D35F9864E4640B1()) || func_125(unk_0x3D35F9864E4640B1())) || func_133(unk_0x3D35F9864E4640B1()))
			{
				Global_1779220.f_4 = 1;
			}
		}
	}
}

void func_564(int iParam0)
{
	switch (iParam0)
	{
		case 230:
		case default:
	}
	unk_0x320C35147D5B5DDD(&Global_1779396);
	func_565();
}

void func_565()
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
	Global_1779396 = { Var0 };
	Global_1779396.f_23 = 0;
	Global_1779396.f_24 = 0;
	Global_1779396.f_16 = 0;
}

void func_566()
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
		iVar2 = (iVar0 + func_577(12));
		func_576(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1319069[iVar1 /*140*/].f_66 != 0 && func_568(Global_1319069[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2501777.f_863 != iVar1)
				{
					if (func_567(Global_1319069[iVar1 /*140*/].f_66))
					{
						if (Global_1319069[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1319069[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1779396.f_38 = iVar3;
								break;
							
							case 1:
								Global_1779396.f_39 = iVar3;
								break;
							
							case 2:
								Global_1779396.f_40 = iVar3;
								break;
							
							case 3:
								Global_1779396.f_41 = iVar3;
								break;
							
							case 4:
								Global_1779396.f_42 = iVar3;
								break;
							
							case 5:
								Global_1779396.f_43 = iVar3;
								break;
							
							case 6:
								Global_1779396.f_44 = iVar3;
								break;
							
							case 7:
								Global_1779396.f_45 = iVar3;
								break;
							
							case 8:
								Global_1779396.f_46 = iVar3;
								break;
							
							case 9:
								Global_1779396.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_567(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_568(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x27CA09C6DFAB1E79()) || (iParam0 == joaat("buffalo3") && !unk_0x27CA09C6DFAB1E79())) || (iParam0 == joaat("gauntlet2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blista3"))
	{
		if (!func_575())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9F1747E93F8C8B1E())
		{
			if (unk_0xF87BC0F22BCEB035(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x03CF889BDA5553A9(Var1.f_0))
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
		if ((((!func_574() && !func_573()) && !func_572()) && !func_571()) && !func_575())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_572())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_570(iParam0))
		{
			return 0;
		}
	}
	if (!func_569(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_569(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_423())
	{
		return 1;
	}
	unk_0xE2A314A6903DD12E(&iVar0, &uVar1);
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
	if (!unk_0x09E7CE4C231F1F83(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2488615)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x6239D1A379D387A4();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5994 && !Global_262145.f_12099) && iVar1 < Global_262145.f_12100)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13342 && iVar1 < Global_262145.f_13354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13338 && iVar1 < Global_262145.f_13350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13339 && iVar1 < Global_262145.f_13351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13340 && iVar1 < Global_262145.f_13352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13341 && iVar1 < Global_262145.f_13353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13343 && iVar1 < Global_262145.f_13355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13344 && iVar1 < Global_262145.f_13347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13345 && iVar1 < Global_262145.f_13348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13346 && iVar1 < Global_262145.f_13349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15973 && iVar1 < Global_262145.f_15938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15968 && iVar1 < Global_262145.f_15933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15972 && iVar1 < Global_262145.f_15937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15971 && iVar1 < Global_262145.f_15936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15965 && iVar1 < Global_262145.f_15930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15966 && iVar1 < Global_262145.f_15931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15969 && iVar1 < Global_262145.f_15934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15970 && iVar1 < Global_262145.f_15935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15967 && iVar1 < Global_262145.f_15932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15975 && iVar1 < Global_262145.f_15940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15976 && iVar1 < Global_262145.f_15941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15964 && iVar1 < Global_262145.f_15929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15963 && iVar1 < Global_262145.f_15928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15962 && iVar1 < Global_262145.f_15927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15974 && iVar1 < Global_262145.f_15939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15977 && iVar1 < Global_262145.f_15942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15978 && iVar1 < Global_262145.f_15943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15979 && iVar1 < Global_262145.f_15944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15980 && iVar1 < Global_262145.f_15945)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16125 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16126 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16127 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16128 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16129 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16130 && iVar1 < Global_262145.f_16152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16132 && iVar1 < Global_262145.f_16153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16133 && iVar1 < Global_262145.f_16154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16134 && iVar1 < Global_262145.f_16155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16135 && iVar1 < Global_262145.f_16156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16136 && iVar1 < Global_262145.f_16157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16137 && iVar1 < Global_262145.f_16158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16138 && iVar1 < Global_262145.f_16159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16144 && iVar1 < Global_262145.f_16166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16141 && iVar1 < Global_262145.f_16162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16142 && iVar1 < Global_262145.f_16163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16143 && iVar1 < Global_262145.f_16164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16131 && iVar1 < Global_262145.f_16165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16145 && iVar1 < Global_262145.f_16167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16139 && iVar1 < Global_262145.f_16160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16140 && iVar1 < Global_262145.f_16161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16146 && iVar1 < Global_262145.f_16168)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17774 && iVar1 < Global_262145.f_17815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17775 && iVar1 < Global_262145.f_17816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17776 && iVar1 < Global_262145.f_17817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17777 && iVar1 < Global_262145.f_17818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17778 && iVar1 < Global_262145.f_17819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17779 && iVar1 < Global_262145.f_17820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17780 && iVar1 < Global_262145.f_17821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17781 && iVar1 < Global_262145.f_17822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17782 && iVar1 < Global_262145.f_17823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17783 && iVar1 < Global_262145.f_17824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17784 && iVar1 < Global_262145.f_17825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17785 && iVar1 < Global_262145.f_17826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17786 && iVar1 < Global_262145.f_17827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17787 && iVar1 < Global_262145.f_17828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17788 && iVar1 < Global_262145.f_17829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17789 && iVar1 < Global_262145.f_17830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17790 && iVar1 < Global_262145.f_17831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17791 && iVar1 < Global_262145.f_17832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17792 && iVar1 < Global_262145.f_17833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17793 && iVar1 < Global_262145.f_17834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17794 && iVar1 < Global_262145.f_17835)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17795 && iVar1 < Global_262145.f_17836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17796 && iVar1 < Global_262145.f_17837)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17839)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18801 && iVar1 < Global_262145.f_18797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18802 && iVar1 < Global_262145.f_18798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18803 && iVar1 < Global_262145.f_18799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18804 && iVar1 < Global_262145.f_18800)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19643 && iVar1 < Global_262145.f_19651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19644 && iVar1 < Global_262145.f_19652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19645 && iVar1 < Global_262145.f_19653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19646 && iVar1 < Global_262145.f_19654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19647 && iVar1 < Global_262145.f_19655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19648 && iVar1 < Global_262145.f_19656)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20411 && iVar1 < Global_262145.f_20431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20414 && iVar1 < Global_262145.f_20434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20412 && iVar1 < Global_262145.f_20432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20428 && iVar1 < Global_262145.f_20448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20426 && iVar1 < Global_262145.f_20446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20427 && iVar1 < Global_262145.f_20447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20429 && iVar1 < Global_262145.f_20449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20421 && iVar1 < Global_262145.f_20441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20413 && iVar1 < Global_262145.f_20433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20415 && iVar1 < Global_262145.f_20435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20416 && iVar1 < Global_262145.f_20436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20417 && iVar1 < Global_262145.f_20437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20418 && iVar1 < Global_262145.f_20438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20419 && iVar1 < Global_262145.f_20439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20420 && iVar1 < Global_262145.f_20440)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_571()
{
	return 0;
}

int func_572()
{
	return 1;
}

int func_573()
{
	return 1;
}

int func_574()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_575()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_576(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9364)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1776225[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_577(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_580(iParam0);
		return func_579(iVar0);
	}
	return (func_578(iParam0, -1) * iParam0);
}

int func_578(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_369(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_375(iParam1))
			{
				return 0;
			}
			else if (func_367(iParam1, -1))
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
			else if (iParam1 <= 116 && iParam1 > 0)
			{
				if (Global_1049495[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 10)
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
	}
	return 0;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_580(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_581()
{
	var uVar0;
	
	uVar0 = func_583();
	if (!func_409())
	{
		if (func_426() != func_60())
		{
			uVar0 = func_582(func_426()) + 1;
		}
	}
	return uVar0;
}

int func_582(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_18;
}

int func_583()
{
	return func_582(unk_0x3D35F9864E4640B1()) + 1;
}

int func_584()
{
	return func_397(6092, -1, 0);
}

int func_585(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_371;
	}
	return -1;
}

void func_586(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x868A7E5D770758C3(&Global_1779353);
	func_587();
}

void func_587()
{
	struct<43> Var0;
	
	Global_1779353 = { Var0 };
	Global_1779353.f_23 = 0;
	Global_1779353.f_24 = 0;
	Global_1779353.f_16 = 0;
}

bool func_588(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 12);
}

bool func_589(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 13);
}

int func_590(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 12) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 13)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_591(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_592(int iParam0)
{
	if (iParam0 != func_60())
	{
		if (((((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 3) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 4)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 5)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_593(int iParam0, int iParam1)
{
	if (iParam1 == func_60())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 0))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 3))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 6))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 9))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 12))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 15))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 18))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 21))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 1))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 4))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 7))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 10))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 13))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 16))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 19))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 22))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 2))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 5))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 8))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 11))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 14))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 17))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 20))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 23))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_594(int iParam0)
{
	if (iParam0 != func_60())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 6) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 7)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_595(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 8);
}

bool func_596(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 7);
}

bool func_597(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 9);
}

int func_598(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_599(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 11);
}

bool func_600(int iParam0)
{
	if (iParam0 == func_60())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 10);
}

int func_601(int iParam0, int iParam1)
{
	return func_397(func_602(iParam1), iParam0, 0);
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3877;
		
		case 1:
			return 3906;
		
		case 2:
			return 3910;
		
		case 3:
			return 3914;
		
		case 4:
			return 3918;
		
		case 5:
			return 5429;
		
		default:
	}
	return 3877;
}

int func_603()
{
	int iVar0;
	
	if (func_422())
	{
		return 4;
	}
	else if (func_409())
	{
		if (func_556(unk_0x3D35F9864E4640B1()))
		{
			return 8;
		}
		return 6;
	}
	if (func_228(1))
	{
		iVar0 = func_585(unk_0x3D35F9864E4640B1());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_424(1))
	{
		if (func_556(func_426()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_604(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA8F7390A60969E48(&Global_1779291);
	func_605();
}

void func_605()
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
	Global_1779291 = { Var0 };
	Global_1779291.f_24 = 0;
	Global_1779291.f_25 = 0;
	Global_1779291.f_17 = 0;
}

void func_606(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA46325BE4A9EEE31(&Global_1779238);
	func_607();
}

void func_607()
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
	Global_1779238 = { Var0 };
	Global_1779238.f_29 = 0;
	Global_1779238.f_30 = 0;
	Global_1779238.f_17 = 0;
}

int func_608(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_529(iParam0, iParam1, 2);
	bVar1 = func_529(iParam0, iParam1, 1);
	bVar2 = func_529(iParam0, iParam1, 0);
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

int func_609(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_524(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_610(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_365(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 19;
	}
	else if (func_364(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_204(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16795;
			iVar1 = 20;
		}
	}
	else if (func_295(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x83FF67474F030301(func_614(func_426()), func_613(func_426()), func_617(), func_616(), iVar1, iVar0);
	}
	func_612(iVar0);
	func_611(iVar0);
	return iVar0;
}

void func_611(int iParam0)
{
	int iVar0;
	
	iVar0 = func_397(3947, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_410 = iVar0;
	func_395(3947, iVar0, -1, 1, 0);
}

void func_612(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	Global_1623799[iVar0 /*488*/].f_11.f_409 = (Global_1623799[iVar0 /*488*/].f_11.f_409 + iParam0);
	if (Global_1623799[iVar0 /*488*/].f_11.f_409 < -9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
	else if (Global_1623799[iVar0 /*488*/].f_11.f_409 > 9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
}

int func_613(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_614(int iParam0)
{
	if (iParam0 == func_60())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[0];
}

int func_615(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_114(unk_0x3D35F9864E4640B1()) || func_133(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_616()
{
	if (Global_1779220.f_3 != 0)
	{
		return Global_1779220.f_3;
	}
	return -1;
}

int func_617()
{
	if (Global_1779220.f_2 != 0)
	{
		return Global_1779220.f_2;
	}
	return -1;
}

int func_618(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_60();
	iVar1 = func_60();
	iVar2 = func_60();
	return func_619(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_619(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_351(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xCD7E92DE2BFA0B0D(&(Var0.f_67), 2);
	return func_321(&Var0);
}

int func_620(int iParam0)
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	if (iVar0 != -1)
	{
		return func_173(iVar0);
	}
	return 1;
}

char* func_621(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		uVar0 = func_382(&(Global_1623799[iParam0 /*488*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1623799[iParam0 /*488*/].f_11.f_114 != Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_114)
	{
		uVar0 = func_383(iParam0, 0);
		return uVar0;
	}
	if (((func_99(iParam0, 28) || func_99(unk_0x3D35F9864E4640B1(), 28)) || func_386(iParam0)) && !func_385(iParam0))
	{
		return func_383(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_60())
	{
		if (iVar1 != unk_0x3D35F9864E4640B1())
		{
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_383(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_60())
	{
		uVar0 = func_382(&(Global_1623799[iVar1 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(uVar0))
		{
			return func_383(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_622()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_762() && !func_276())
	{
		return;
	}
	if (!func_352())
	{
		return;
	}
	iVar0 = unk_0x3D35F9864E4640B1();
	if (func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	iVar1 = func_124(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_122.f_847)))
	{
		iVar2 = (func_10() - func_636(&(Local_122.f_847), 0, 0));
		iVar3 = (func_635() - Local_122.f_115);
		func_633(iVar2);
		if (iVar2 > 30000)
		{
			func_623(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_623(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_623(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_623(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_631(0) == 0)
	{
		return;
	}
	func_630();
	func_627(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_466(sParam4))
	{
		sVar0 = sParam4;
	}
	func_624(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_624(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_626(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_625(7, iVar0);
		Global_1356070.f_4366[iVar0] = uParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = iParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = uParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = uParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_625(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_626(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

void func_627(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_626(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_625(6, iVar0);
		Global_1356070.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_3770.f_183[iVar0] = iParam3;
		Global_1356070.f_3770.f_172[iVar0] = iParam2;
		Global_1356070.f_3770.f_260[iVar0] = iParam4;
		Global_1356070.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_3770.f_443[iVar0] = iParam7;
		Global_1356070.f_3770.f_454[iVar0] = iParam8;
		Global_1356070.f_3770.f_497[iVar0] = iParam9;
		Global_1356070.f_3770.f_508[iVar0] = iParam10;
		Global_1356070.f_3770.f_205[iVar0] = iParam11;
		Global_1356070.f_3770.f_216[iVar0] = iParam12;
		Global_1356070.f_3770.f_227[iVar0] = iParam13;
		Global_1356070.f_3770.f_238[iVar0] = iParam14;
		Global_1356070.f_3770.f_249[iVar0] = iParam15;
		Global_1356070.f_3770.f_519[iVar0] = iParam16;
		Global_1356070.f_3770.f_530[iVar0] = iParam17;
		Global_1356070.f_3770.f_541[iVar0] = iParam18;
		Global_1356070.f_3770.f_552[iVar0] = iParam19;
		Global_1356070.f_3770.f_563[iVar0] = iParam20;
		Global_1356070.f_3770.f_574[iVar0] = iParam21;
		Global_1356070.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_629())
		{
			Global_1356070.f_1088 = 1;
		}
		if (unk_0x20551D6D924ED04B())
		{
			iVar2 = 0;
			unk_0xD9151D5BCEE2689C(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1356070.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1356070.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1356070.f_1088 = 1;
			}
			if (func_628())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_628()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_629()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

void func_630()
{
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(7);
	Global_2456645 = 1;
}

int func_631(bool bParam0)
{
	if (func_632())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_853(unk_0x3D35F9864E4640B1(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_632()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 12);
}

void func_633(int iParam0)
{
	if (unk_0x2A3398C6222EB190(iLocal_1444, 8))
	{
		func_634();
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1444, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x1E420F926A7BC4D2("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 15);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 9);
				unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 1);
				unk_0x62316D43A8F729C6(0);
				unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_1444, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x2A3398C6222EB190(iLocal_1444, 11))
			{
				if (unk_0x5C7A4C010111DAF5("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 11);
				}
			}
			else
			{
				unk_0x2A3398C6222EB190(iLocal_1444, 11);
				if (!unk_0x2A3398C6222EB190(iLocal_1444, 14))
				{
					if (unk_0x1E420F926A7BC4D2("APT_COUNTDOWN_30S"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 14);
					}
				}
			}
			if (unk_0x2A3398C6222EB190(iLocal_1444, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x2A3398C6222EB190(iLocal_1444, 12))
					{
						unk_0x62316D43A8F729C6(1);
						unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x1E420F926A7BC4D2("APT_FADE_IN_RADIO"))
						{
							unk_0xC21CF0B7B81DAE04("APT_COUNTDOWN_30S_KILL");
							unk_0xD804ACF2A7171150(&iLocal_1444, 9);
						}
					}
				}
			}
		}
	}
}

void func_634()
{
	if (unk_0x2A3398C6222EB190(iLocal_1444, 8))
	{
		if (unk_0x2A3398C6222EB190(iLocal_1444, 9))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_1444, 10))
			{
				if (unk_0x2A3398C6222EB190(iLocal_1444, 11))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_1444, 12))
					{
						unk_0x62316D43A8F729C6(1);
						unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
						unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0x2A3398C6222EB190(iLocal_1444, 16))
				{
					if (unk_0x1E420F926A7BC4D2("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 16);
					}
				}
				if (unk_0x2A3398C6222EB190(iLocal_1444, 16))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_1444, 13))
					{
						if (unk_0x1E420F926A7BC4D2("APT_FADE_IN_RADIO"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 13);
						}
					}
					if (unk_0x2A3398C6222EB190(iLocal_1444, 13))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 10);
					}
				}
			}
		}
	}
}

int func_635()
{
	return 4;
}

int func_636(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0);
		}
		else
		{
			return unk_0xBC0BAC39A2995602(unk_0x51A193745FDE917D(), *uParam0);
		}
	}
	return unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0);
}

void func_637()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = unk_0x3D35F9864E4640B1();
	iVar18 = unk_0x43B24C247F35B6BC();
	if (func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar18 = func_277();
		iVar17 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	iVar19 = func_124(iVar17);
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		if (!func_352())
		{
			if (func_654("HUNT_OBJ"))
			{
				func_695();
			}
			if (func_654("HUNT_OBJ1L"))
			{
				func_695();
			}
			if (func_654("HUNT_TOBJ"))
			{
				func_695();
			}
			if (func_654("HUNT_DOBJ"))
			{
				func_695();
			}
			if (func_654("HUNT_DOBJ1L"))
			{
				func_695();
			}
			return;
		}
	}
	else if (!unk_0x2A3398C6222EB190(Local_994[iVar18 /*14*/].f_1, 6))
	{
		func_695();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_654("HUNT_OBJ"))
		{
			func_695();
		}
		if (func_654("HUNT_OBJ1L"))
		{
			func_695();
		}
		if (func_654("HUNT_TOBJ"))
		{
			func_695();
		}
		if (func_654("HUNT_DOBJ"))
		{
			func_695();
		}
		if (func_654("HUNT_DOBJ1L"))
		{
			func_695();
		}
		return;
	}
	bVar20 = func_653() == true;
	if (iVar18 == Local_122.f_118)
	{
		if (!bVar20)
		{
			if (!func_654("HUNT_OBJ"))
			{
				func_650("HUNT_OBJ", 0);
			}
		}
		else if (!func_654("HUNT_OBJ1L"))
		{
			func_650("HUNT_OBJ1L", 0);
		}
	}
	else if (func_763() == Local_122.f_118)
	{
		if (!bVar20)
		{
			if (!func_654("HUNT_OBJ"))
			{
				func_650("HUNT_OBJ", 0);
			}
		}
		else if (!func_654("HUNT_OBJ1L"))
		{
			func_650("HUNT_OBJ1L", 0);
		}
	}
	else if (func_276())
	{
		if (Local_122.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_654("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_621(unk_0xA7871E29B06DA901(Local_122.f_119)), 64);
					iVar0 = func_620(unk_0xA7871E29B06DA901(Local_122.f_119));
					func_638("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_654("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_621(unk_0xA7871E29B06DA901(Local_122.f_119)), 64);
				iVar0 = func_620(unk_0xA7871E29B06DA901(Local_122.f_119));
				func_638("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_638(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_639(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 16;
		Global_1312575.f_56 = iParam2;
	}
}

int func_639(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (func_649(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_643();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_642();
	func_641(bParam2);
	func_640();
	return 1;
}

void func_640()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 1);
}

void func_641(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_1312575.f_59), 0);
}

void func_642()
{
	Global_1312575.f_10 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 86400000);
	Global_1312575.f_11 = unk_0x898811EA80D35DE2();
}

void func_643()
{
	func_645();
	func_644(0);
}

void func_644(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x27CA09C6DFAB1E79();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x898811EA80D35DE2();
		Global_1312575.f_11 = unk_0x898811EA80D35DE2();
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

void func_645()
{
	if (!func_648())
	{
	}
	if (func_647())
	{
		unk_0x256FC007473C96F4(&(Global_1312575.f_12));
		func_646();
		unk_0xDAB2310BAD5B9F5B();
	}
}

void func_646()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			unk_0x96577CAA1D1E72DB(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_647()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_648()
{
	if (!func_647())
	{
		return 0;
	}
	unk_0xDDF591880CC70341(&(Global_1312575.f_12));
	func_646();
	return unk_0xD140B300704DB2C2();
}

bool func_649(char* sParam0, char* sParam1)
{
	if (!func_647())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam1))
	{
		return 0;
	}
	if (!unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam1) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

void func_650(char* sParam0, bool bParam1)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return;
	}
	if (func_651(sParam0))
	{
		return;
	}
	func_643();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_642();
	func_641(bParam1);
	func_640();
}

bool func_651(char* sParam0)
{
	if (!func_647())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_652(uParam0);
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12));
}

bool func_652(char* sParam0)
{
	if (!func_647())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_653()
{
	return (4 - Local_122.f_115);
}

int func_654(char* sParam0)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!func_647())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x3222F8FFDC06381F(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	return func_651(sParam0);
}

void func_655()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_762() && !func_276())
	{
		return;
	}
	if (!func_352())
	{
		return;
	}
	iVar1 = func_60();
	iVar2 = -1;
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar1 = unk_0x3D35F9864E4640B1();
		iVar2 = unk_0x43B24C247F35B6BC();
	}
	else
	{
		iVar2 = func_277();
		iVar1 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1443, 1))
	{
		iVar0 = func_124(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_122.f_118 || func_763() == Local_122.f_118)
			{
				if (func_678(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_320(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2);
					if (iVar2 == unk_0x43B24C247F35B6BC())
					{
						func_677(1);
						func_656(-1, 0, 0, -1, 0);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x43B24C247F35B6BC())
				{
					func_656(-1, 0, 0, -1, 0);
				}
				func_320(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2);
			}
		}
		unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 1);
	}
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_95(unk_0x3D35F9864E4640B1());
	if (iParam2 || func_295(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1779238 = iVar0;
		if (func_365(iVar0))
		{
			Global_1779238.f_1 = 4;
		}
		else if (func_364(iVar0))
		{
			Global_1779238.f_1 = 5;
		}
		else if (func_204(iVar0, 0))
		{
			Global_1779238.f_1 = 2;
			if (func_391(iVar0))
			{
				Global_1779238.f_1 = 3;
			}
		}
		else
		{
			Global_1779238.f_1 = 1;
		}
		if (func_426() != func_60())
		{
			Global_1779238.f_4 = func_614(func_426());
			Global_1779238.f_5 = func_613(func_426());
		}
		if (func_231() != func_60())
		{
			func_425(func_231(), &(Global_1779238.f_6), &(Global_1779238.f_7));
		}
		Global_1779238.f_9 = unk_0x6239D1A379D387A4();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1779238.f_27 = 1;
			Global_1779238.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1779238.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1779238.f_40 = func_419(iParam1);
			Global_1779238.f_41 = func_676();
			Global_1779238.f_42 = func_532(unk_0x3D35F9864E4640B1(), iParam1);
			Global_1779238.f_44 = func_609(unk_0x3D35F9864E4640B1(), iParam1);
		}
	}
	else if (func_362(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1779353 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1779353 = iParam0 + 1;
		}
		else
		{
			Global_1779353 = func_675(unk_0x3D35F9864E4640B1());
		}
		switch (iVar0)
		{
			case 225:
				if (func_674(unk_0x3D35F9864E4640B1()) == 0)
				{
					Global_1779353.f_1 = 0;
				}
				else
				{
					Global_1779353.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1779353.f_1 = 2;
				break;
			
			case 227:
				Global_1779353.f_1 = 3;
				break;
		}
		Global_1779353.f_21 = 1;
		Global_1779353.f_22 = 1;
		if (func_426() != func_60())
		{
			Global_1779353.f_4 = func_614(func_426());
			Global_1779353.f_5 = func_613(func_426());
		}
		if (func_231() != func_60())
		{
			func_425(func_231(), &(Global_1779353.f_4), &(Global_1779353.f_5));
		}
		Global_1779353.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779353.f_20 = iParam0;
		}
	}
	else if (func_299(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1779291 = iVar0;
		Global_1779238.f_1 = 1;
		if (func_426() != func_60())
		{
			Global_1779291.f_4 = func_614(func_426());
			Global_1779291.f_5 = func_613(func_426());
		}
		if (func_231() != func_60())
		{
			func_425(func_231(), &(Global_1779291.f_6), &(Global_1779291.f_7));
		}
		Global_1779291.f_9 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779291.f_21 = iParam0;
		}
	}
	else if (func_360(iVar0))
	{
		Global_1779396 = iVar0;
		Global_1779396.f_1 = iParam0;
		Global_1779396.f_21 = 1;
		Global_1779396.f_22 = 1;
		if (func_426() != func_60())
		{
			Global_1779396.f_4 = func_614(func_426());
			Global_1779396.f_5 = func_613(func_426());
		}
		if (func_231() != func_60())
		{
			func_425(func_231(), &(Global_1779396.f_4), &(Global_1779396.f_5));
		}
		Global_1779396.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779396.f_20 = iParam0;
		}
		Global_1779396.f_27 = func_601(func_19(), 5);
		Global_1779396.f_28 = func_598(func_510(unk_0x3D35F9864E4640B1()));
		Global_1779396.f_29 = func_397(6086, -1, 0);
		Global_1779396.f_30 = func_397(6082, -1, 0);
		Global_1779396.f_31 = func_397(6083, -1, 0);
		Global_1779396.f_32 = func_397(6085, -1, 0);
		Global_1779396.f_33 = func_397(6084, -1, 0);
		Global_1779396.f_34 = func_397(6087, -1, 0);
		Global_1779396.f_7 = func_603();
		Global_1779396.f_51 = func_598(bParam4);
	}
	else
	{
		if (func_426() != func_60())
		{
			Global_1779220 = func_614(func_426());
			Global_1779220.f_1 = func_613(func_426());
		}
		Global_1779220.f_5 = unk_0x6239D1A379D387A4();
		Global_1779220.f_13 = func_673();
		Global_1779220.f_15 = 0;
		if (func_424(1))
		{
			if (func_231() == func_426())
			{
				Global_1779220.f_15 = 1;
			}
		}
		if (func_672())
		{
			Global_1779353.f_28 = 1;
		}
		if ((func_671() || func_670()) || func_669())
		{
			Global_1779353.f_30 = 1;
		}
		if (func_667(func_668(joaat("trailersmall2"))))
		{
			Global_1779353.f_32 = 1;
		}
		if (func_660(func_666(joaat("caddy"))))
		{
			Global_1779353.f_31 = 1;
		}
		if (func_600(unk_0x3D35F9864E4640B1()) || func_599(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_29 = 1;
		}
		if (func_595(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_33 = 1;
			Global_1779353.f_34 = 1;
		}
		if (func_596(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_36 = 1;
		}
		if (func_593(0, unk_0x3D35F9864E4640B1()) == 1)
		{
			Global_1779353.f_35 = 1;
		}
		if (func_659(unk_0x3D35F9864E4640B1(), 3, &uVar1))
		{
			Global_1779353.f_37 = 1;
		}
		if (func_659(unk_0x3D35F9864E4640B1(), 7, &uVar1))
		{
			Global_1779353.f_38 = 1;
		}
		if (func_658(unk_0x3D35F9864E4640B1()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_657(unk_0x3D35F9864E4640B1(), iVar2);
				if (func_529(unk_0x3D35F9864E4640B1(), iVar3, 0))
				{
					Global_1779353.f_39 = 1;
				}
				if (func_529(unk_0x3D35F9864E4640B1(), iVar3, 2))
				{
					Global_1779353.f_40 = 1;
				}
				if (func_529(unk_0x3D35F9864E4640B1(), iVar3, 1))
				{
					Global_1779353.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_657(int iParam0, int iParam1)
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
	if (func_524(Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/]))
	{
		uVar0 = Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/];
	}
	return uVar0;
}

int func_658(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_659(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_60())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_593(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_660(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_665(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_577(11));
		func_576(iVar1, &iVar0, 1);
		iVar2 = func_665(func_662(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_397(func_661(4, iVar0), -1, 0);
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

int func_661(int iParam0, int iParam1)
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
			switch (iParam1)
			{
				case 159:
					return 5904;
				
				case 160:
					return 5911;
				
				case 161:
					return 5918;
				
				case 162:
					return 5925;
				
				case 163:
					return 5932;
				
				case 164:
					return 5939;
				
				case 165:
					return 5946;
				
				case 166:
					return 5953;
				
				case 167:
					return 5960;
				
				case 168:
					return 5967;
				
				case 169:
					return 5974;
				
				case 170:
					return 5981;
				
				case 171:
					return 5988;
				
				case 172:
					return 5995;
				
				case 173:
					return 6002;
				
				case 174:
					return 6009;
				
				case 175:
					return 6016;
				
				case 176:
					return 6023;
				
				case 177:
					return 6030;
				
				case 178:
					return 6037;
				
				case 179:
					return 6044;
				
				case 180:
					return 6051;
				
				case 181:
					return 6058;
				
				case 182:
					return 6065;
				
				case 183:
					return 6072;
				
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
					return 4107;
				
				case 101:
					return 4115;
				
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
					return 4267;
				
				case 121:
					return 4275;
				
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
					return 4427;
				
				case 141:
					return 4435;
				
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
			switch (iParam1)
			{
				case 159:
					return 5905;
				
				case 160:
					return 5912;
				
				case 161:
					return 5919;
				
				case 162:
					return 5926;
				
				case 163:
					return 5933;
				
				case 164:
					return 5940;
				
				case 165:
					return 5947;
				
				case 166:
					return 5954;
				
				case 167:
					return 5961;
				
				case 168:
					return 5968;
				
				case 169:
					return 5975;
				
				case 170:
					return 5982;
				
				case 171:
					return 5989;
				
				case 172:
					return 5996;
				
				case 173:
					return 6003;
				
				case 174:
					return 6010;
				
				case 175:
					return 6017;
				
				case 176:
					return 6024;
				
				case 177:
					return 6031;
				
				case 178:
					return 6038;
				
				case 179:
					return 6045;
				
				case 180:
					return 6052;
				
				case 181:
					return 6059;
				
				case 182:
					return 6066;
				
				case 183:
					return 6073;
				
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
					return 4108;
				
				case 101:
					return 4116;
				
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
					return 4268;
				
				case 121:
					return 4276;
				
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
					return 4428;
				
				case 141:
					return 4436;
				
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
			switch (iParam1)
			{
				case 159:
					return 5906;
				
				case 160:
					return 5913;
				
				case 161:
					return 5920;
				
				case 162:
					return 5927;
				
				case 163:
					return 5934;
				
				case 164:
					return 5941;
				
				case 165:
					return 5948;
				
				case 166:
					return 5955;
				
				case 167:
					return 5962;
				
				case 168:
					return 5969;
				
				case 169:
					return 5976;
				
				case 170:
					return 5983;
				
				case 171:
					return 5990;
				
				case 172:
					return 5997;
				
				case 173:
					return 6004;
				
				case 174:
					return 6011;
				
				case 175:
					return 6018;
				
				case 176:
					return 6025;
				
				case 177:
					return 6032;
				
				case 178:
					return 6039;
				
				case 179:
					return 6046;
				
				case 180:
					return 6053;
				
				case 181:
					return 6060;
				
				case 182:
					return 6067;
				
				case 183:
					return 6074;
				
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
			switch (iParam1)
			{
				case 159:
					return 5907;
				
				case 160:
					return 5914;
				
				case 161:
					return 5921;
				
				case 162:
					return 5928;
				
				case 163:
					return 5935;
				
				case 164:
					return 5942;
				
				case 165:
					return 5949;
				
				case 166:
					return 5956;
				
				case 167:
					return 5963;
				
				case 168:
					return 5970;
				
				case 169:
					return 5977;
				
				case 170:
					return 5984;
				
				case 171:
					return 5991;
				
				case 172:
					return 5998;
				
				case 173:
					return 6005;
				
				case 174:
					return 6012;
				
				case 175:
					return 6019;
				
				case 176:
					return 6026;
				
				case 177:
					return 6033;
				
				case 178:
					return 6040;
				
				case 179:
					return 6047;
				
				case 180:
					return 6054;
				
				case 181:
					return 6061;
				
				case 182:
					return 6068;
				
				case 183:
					return 6075;
				
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
					return 3325;
				
				case 78:
					return 3333;
				
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
					return 3324;
				
				case 78:
					return 3332;
				
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
					return 4112;
				
				case 101:
					return 4120;
				
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
					return 4272;
				
				case 121:
					return 4280;
				
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
					return 4432;
				
				case 141:
					return 4440;
				
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
			break;
			break;
	}
	return 1626;
}

int func_662(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 184)
	{
		iVar0 = 0;
		while (iVar0 < 13)
		{
			if (iParam0 >= func_577(iVar0) && iParam0 < func_663(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_663(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_580(iParam0);
		return func_664(iVar0);
	}
	return (func_578(iParam0, -1) * iParam0 + 1);
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_665(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16102)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_580(iParam0);
		if (iVar1 == 0 && func_397(5372, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1365065[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2536194[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 13)
		{
			return 0;
		}
		return Global_2536117[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_666(int iParam0)
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

int func_667(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_576(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_397(func_661(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_669()
{
	return func_397(5359, -1, 0) != 0;
}

bool func_670()
{
	return func_397(3807, -1, 0) != 0;
}

bool func_671()
{
	return func_397(3210, -1, 0) != 0;
}

bool func_672()
{
	return func_397(5358, -1, 0) != 0;
}

int func_673()
{
	int iVar0;
	
	iVar0 = func_426();
	if (iVar0 != func_60())
	{
		return Global_1623799[iVar0 /*488*/].f_11.f_92;
	}
	return 0;
}

int func_674(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_173;
	}
	return -1;
}

int func_675(int iParam0)
{
	if (func_95(iParam0) == 225 || func_95(iParam0) == 226)
	{
		return func_674(iParam0);
	}
	return -1;
}

var func_676()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_531(unk_0x3D35F9864E4640B1(), iVar0))
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_677(bool bParam0)
{
	if (bParam0)
	{
		if (!func_99(unk_0x3D35F9864E4640B1(), 9))
		{
			if (func_124(unk_0x3D35F9864E4640B1()) != 0)
			{
				func_100(9);
			}
		}
	}
	else if (func_99(unk_0x3D35F9864E4640B1(), 9))
	{
		func_98(9);
	}
}

int func_678(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD804ACF2A7171150(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_679(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_679(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
	{
	}
	func_689();
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
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
			{
				return 0;
			}
		}
		if (Global_104439.f_13912[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_688() == 0)
	{
		func_686();
		return 0;
	}
	func_685(Global_16812);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/]), sParam1, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_25 = iParam7;
	Global_104439.f_14002[Global_16812 /*104*/].f_26 = uParam8;
	Global_104439.f_14002[Global_16812 /*104*/].f_29 = uParam9;
	Global_104439.f_14002[Global_16812 /*104*/].f_30 = uParam12;
	Global_104439.f_14002[Global_16812 /*104*/].f_31 = uParam11;
	Global_104439.f_14002[Global_16812 /*104*/].f_28 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x2A3398C6222EB190(Global_2313, 10))
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_684(0);
		func_684(2);
		func_684(1);
	}
	else
	{
		func_689();
		switch (iParam16)
		{
			case 3:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_684(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_684(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_684(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_684(3);
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
		if (unk_0x2A3398C6222EB190(Global_2313, 10))
		{
			Global_104439.f_13912[0 /*20*/].f_17 = 1;
			Global_104439.f_13912[1 /*20*/].f_17 = 1;
			Global_104439.f_13912[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104439.f_13912[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104439.f_13912[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104439.f_13912[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104439.f_13912[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_689();
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
			if (!func_377())
			{
				unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_683(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_680(1);
			func_683(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_680(int iParam0)
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
		if (func_682(14))
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
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar2);
								unk_0x1C703A54AB4B12F6();
							}
							if (Global_2455109)
							{
								if (iVar1 == 14)
								{
									func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70785)
								{
									iVar4 = 0;
									iVar4 = Global_2606876;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2606877[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2606877[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(Global_2319);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar7);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar8);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 8)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_152(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622539.f_1;
								func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_681(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_681(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(uParam7))
	{
		func_152(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam8))
	{
		func_152(iParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		func_152(iParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam10))
	{
		func_152(iParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam11))
	{
		func_152(iParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

bool func_682(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_683(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_684(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104439.f_13912[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_685(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x6676AD594A1E113E();
	uVar1 = unk_0xE647A8424B4399CE();
	uVar2 = unk_0x41413FABD538FC3A();
	uVar3 = unk_0xEC3E0DDCEEBF8A00();
	uVar4 = unk_0x1A7BD52C0A88E679() + 1;
	uVar5 = unk_0x760D3328FB0F48C5();
	Global_104439.f_14002[iParam0 /*104*/].f_18 = uVar0;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_686()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
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
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_687(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_24 = 1;
}

int func_687(struct<6> Param0, struct<6> Param6)
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

int func_688()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
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
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0 || Global_104439.f_14002[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_687(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
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
	Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_689()
{
	if (func_682(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		Global_14443 = func_690();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_690()
{
	func_691();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_691()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_694(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_693(unk_0x0031992CA618A445());
			if (func_692(iVar0) && (!func_682(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_692(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_692(int iParam0)
{
	return iParam0 < 3;
}

int func_693(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_694(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_694(int iParam0)
{
	if (func_692(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_695()
{
	if (!func_647())
	{
		return;
	}
	if (!unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_1312575.f_9)
	{
		return;
	}
	func_643();
}

void func_696()
{
	if (func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	switch (Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_9)
	{
		case 0:
			func_698();
			func_288();
			if (Local_122.f_117 == 2)
			{
				Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_9 = 2;
			}
			else if (Local_122.f_117 == 3)
			{
				Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_288();
			if (func_697())
			{
				func_634();
			}
			if (Local_122.f_117 == 3)
			{
				Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_776();
			break;
	}
}

bool func_697()
{
	return ((unk_0x2A3398C6222EB190(Local_122.f_1, 1) || unk_0x2A3398C6222EB190(Local_122.f_1, 3)) || unk_0x2A3398C6222EB190(Local_122.f_1, 5));
}

void func_698()
{
	func_718();
	func_717();
	func_655();
	func_637();
	func_707();
	func_706();
	func_701();
	func_700();
	func_622();
	func_699();
}

void func_699()
{
}

void func_700()
{
	if (func_697())
	{
		return;
	}
	if (!func_762())
	{
		return;
	}
	if (!Global_262145.f_14138)
	{
		return;
	}
	if (Local_122.f_115 == 0)
	{
		return;
	}
}

void func_701()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_762())
	{
		return;
	}
	if (func_697())
	{
		return;
	}
	fVar4 = func_134(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1450 != iVar0)
			{
				Var1 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 0) };
				func_87(10, 0, 0, 0, 0);
				func_702(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0);
				iLocal_1450 = iVar0;
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_316();
	}
}

void func_702(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	struct<27> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xE2F358F9F113BDF1(Global_2412974.f_6))
	{
		if (!Global_2412974.f_6 == unk_0xFFDE6A3A0108B7CB())
		{
			return;
		}
	}
	else
	{
		Global_2412974.f_6 = unk_0xFFDE6A3A0108B7CB();
	}
	Var0.f_6 = Global_2412974.f_6;
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
	if (func_703(unk_0x3D35F9864E4640B1()))
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
	Var0.f_26 = iParam12;
	Global_2412974 = { Var0 };
}

int func_703(int iParam0)
{
	if ((func_704(iParam0, 1) || func_122(iParam0)) || func_96(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_704(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_705(iParam0) != 0;
	}
	return func_256(iParam0, bParam1);
}

int func_705(int iParam0)
{
	if (func_853(iParam0, 0, 1))
	{
		return Global_2422142[iParam0 /*399*/].f_1;
	}
	return 0;
}

void func_706()
{
	int iVar0;
	
	if (iLocal_1447 != Local_122.f_115)
	{
		if (func_762())
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
				{
					if (!unk_0x30758DD2AA5FF762())
					{
						iVar0 = unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1());
						switch (Local_122.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_14135)
								{
									unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), Global_262145.f_14135, 0);
									unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_14136)
								{
									unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), Global_262145.f_14136, 0);
									unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_14137)
								{
									unk_0x438B2E6B2BAD6A0D(Global_262145.f_14137);
									unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), Global_262145.f_14137, 0);
									unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
								}
								break;
						}
						iLocal_1447 = Local_122.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1447 = Local_122.f_115;
		}
	}
}

void func_707()
{
	int iVar0;
	
	if (!func_352())
	{
		if (func_716("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return;
	}
	iVar0 = func_124(unk_0x3D35F9864E4640B1());
	if (iVar0 < 2)
	{
		if (func_716("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_1443, 2))
	{
		if (!func_715(86))
		{
			if (func_709(0, 1, 1, 1))
			{
				if (unk_0x43B24C247F35B6BC() == Local_122.f_118)
				{
					func_708("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 2);
				}
				else if (func_763() == Local_122.f_118)
				{
					func_708("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_297(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 2);
				}
				else if (func_276())
				{
					func_708("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_297(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 2);
				}
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_1443, 2))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1443, 3))
		{
			if (func_709(0, 1, 1, 1))
			{
				if (!func_716("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x43B24C247F35B6BC() == Local_122.f_118 || func_763() == Local_122.f_118)
					{
						func_298("HUNT_HELPB", -1);
						func_297(1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 3);
					}
				}
			}
		}
	}
}

void func_708(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam3);
}

int func_709(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x068C69D0643C4B95())
	{
		return 0;
	}
	if (func_714())
	{
		return 0;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	if (func_266())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_256(unk_0x3D35F9864E4640B1(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_713(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (func_712())
	{
		return 0;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (Global_1574109)
	{
		return 0;
	}
	if (func_711())
	{
		return 0;
	}
	if (func_710())
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
	if (Global_2510592)
	{
		return 0;
	}
	return 1;
}

bool func_710()
{
	return Global_2445582.f_572;
}

bool func_711()
{
	return Global_2445582.f_724;
}

bool func_712()
{
	return Global_2434915.f_2792.f_578;
}

int func_713(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_714()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

bool func_715(int iParam0)
{
	return Global_2434915.f_2484[0 /*76*/].f_1 == iParam0;
}

bool func_716(char* sParam0, char* sParam1)
{
	unk_0x92C5C77953D80467(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	return unk_0x602E6661A0F13A13(0);
}

void func_717()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_134(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_117(unk_0x3D35F9864E4640B1()))
		{
			func_116();
		}
	}
}

void func_718()
{
	if (func_127())
	{
		if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1, 1))
		{
			func_102(0);
			unk_0xD804ACF2A7171150(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_124(unk_0x3D35F9864E4640B1()) == 0)
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1, 1))
	{
		if (!func_762())
		{
			if (!func_126())
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_1, 6))
				{
					func_102(1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_719()
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
		if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_2, iVar0))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_110, iVar0))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (func_763() == Local_122.f_118)
							{
								if (func_737(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_3, iVar0))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_112, iVar0))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
				{
					if (func_736(iVar0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_4, iVar0))
		{
			if (!unk_0x2A3398C6222EB190(Local_122.f_111, iVar0))
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_735(iVar0);
		if (func_352())
		{
			if (!unk_0xA761A0B6072010C8(uLocal_1458[iVar0]))
			{
				if (!func_697())
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1458[iVar0] = unk_0xE80C2D6BF636C6C4(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1));
							if (func_763() == Local_122.f_118)
							{
								unk_0xC5B4383DA70A2C1A(uLocal_1458[iVar0], 12);
								unk_0x3B815A6E8530D3A5(uLocal_1458[iVar0], 432);
								func_734(&(uLocal_1458[iVar0]), 6);
							}
							else
							{
								unk_0x3B815A6E8530D3A5(uLocal_1458[iVar0], 480);
								func_734(&(uLocal_1458[iVar0]), 9);
							}
							unk_0xB989C497205DF6E8(uLocal_1458[iVar0], 1);
							unk_0x82F6662608C79359(uLocal_1458[iVar0], 7000);
							unk_0x067D86058370B7EB(uLocal_1458[iVar0], 1.1f);
							unk_0x50B5259DFC71B8EC(uLocal_1458[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_1458[iVar0]));
				}
				else if (func_697())
				{
					unk_0x0C4BDC77192798AE(&(uLocal_1458[iVar0]));
				}
			}
		}
		else if (unk_0xA761A0B6072010C8(uLocal_1458[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1458[iVar0]));
		}
		func_733(iVar0);
		func_732(iVar0);
		func_730(iVar0);
		switch (Local_122.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0xEF0CB8FF125B9F9C())
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_122.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xEF0CB8FF125B9F9C())
				{
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_122.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0x2A3398C6222EB190(Local_122.f_108, iVar0))
										{
											unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0x2A3398C6222EB190(Local_122.f_108, iVar0))
											{
												unk_0xD804ACF2A7171150(&(Local_122.f_108), iVar0);
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
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x471E558A661279DE(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x9BE63CB00B240063(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_726(iVar0);
										if (!unk_0x8682D8A6269E52C9(uVar2))
										{
											unk_0x53E150F8F0AD7101(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x49544FB997F0AADE(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 0);
									unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x49544FB997F0AADE(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x1470C70D8E47C379(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 1);
									iVar4 = func_725(iVar0, &uVar5);
									if (iVar4 != func_60())
									{
										unk_0x70A2E7997E014555(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0xD33F4BC17EB987E5(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_122.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_728(Local_122.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x3A85AE9FA7967993(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_122.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_728(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x3A85AE9FA7967993(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_728(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_728(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_728(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											unk_0x471E558A661279DE(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
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
	if (func_762())
	{
		func_720();
	}
}

void func_720()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_721(uLocal_1704[iVar0], &(Local_1463[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_721(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		if (func_724())
		{
			Global_2434915 = unk_0x3D35F9864E4640B1();
		}
		if (bParam3)
		{
			func_723(unk_0xECB7D3275586261E(uParam0), uParam1, 1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_723(unk_0xECB7D3275586261E(uParam0), uParam1, -1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA761A0B6072010C8(*uParam1))
	{
		func_722(uParam1);
	}
}

void func_722(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
		bVar0 = true;
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_1))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x76B3C79DE564AFC6(uParam0->f_7))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_7, 0))
		{
			if (unk_0x8E124932BCA8337D(uParam0->f_7))
			{
				unk_0xFAE7EEA9EC6C8B59(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_723(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xED1168B8D2D313FA();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x8682D8A6269E52C9(uParam0))
	{
		if (!unk_0x8E124932BCA8337D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xFAE7EEA9EC6C8B59(iParam0, 1);
			}
			else
			{
				unk_0xC1F8D3D339E714E3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xCF88C2F9C02AE277(iParam0, iParam2);
			unk_0x7F39688B4D1E8A5B(iParam0, fParam6);
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x042302634EF280A7(iParam0, iParam9);
		}
		unk_0xF856340FF6FF9351(iParam0, uParam4);
		unk_0x0F321108A38FDEEF(iParam0, uParam5);
		*uParam1 = unk_0x92EB201D24EEB65C(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB934A06DDA5027D(*uParam1, iParam8);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(uParam7))
				{
					unk_0xA23268A8852A45E8("STRING");
					if (bParam10)
					{
						unk_0x50B3C23D0902259F(sParam7);
					}
					else
					{
						unk_0x7C8A7ECFBAD2C8C4(sParam7);
					}
					unk_0x05064114393805B9(*uParam1);
				}
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_6, 2))
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			uParam1->f_1 = unk_0x44DF128826D07906(iParam0);
			if (!unk_0x2A3398C6222EB190(uParam1->f_6, 3))
			{
				if (unk_0xA761A0B6072010C8(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xEB934A06DDA5027D(uParam1->f_1, iParam8);
					}
					if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
					{
						unk_0xA23268A8852A45E8("STRING");
						if (bParam10)
						{
							unk_0x50B3C23D0902259F(sParam7);
						}
						else
						{
							unk_0x7C8A7ECFBAD2C8C4(sParam7);
						}
						unk_0x05064114393805B9(uParam1->f_1);
					}
					unk_0xC5B4383DA70A2C1A(uParam1->f_1, 7);
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA761A0B6072010C8(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA761A0B6072010C8(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_724()
{
	return Global_1312830;
}

int func_725(int iParam0, var uParam1)
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
	Var3 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar6)))
		{
			iVar7 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = unk_0xD33F4BC17EB987E5(iVar7);
				if (iVar6 == Local_122.f_118 || Local_994[iVar6 /*14*/].f_10 == Local_122.f_118)
				{
					if (!unk_0x8682D8A6269E52C9(uVar8))
					{
						fVar2 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iVar8, 1), Var3);
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

var func_726(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_727(iParam0);
	if (iVar1 != func_60())
	{
		uVar0 = unk_0xD33F4BC17EB987E5(iVar1);
	}
	return uVar0;
}

int func_727(int iParam0)
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
	Var4 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar3)))
		{
			iVar7 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar3));
			uVar8 = unk_0xD33F4BC17EB987E5(iVar7);
			if (func_171(iVar7, 1))
			{
				if (!unk_0x2A3398C6222EB190(Local_994[iVar3 /*14*/].f_1, 1))
				{
					if (func_61(iVar7) == unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_122.f_118)))
					{
						if (!unk_0x8682D8A6269E52C9(uVar8))
						{
							fVar2 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iVar8, 1), Var4);
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

int func_728(var uParam0)
{
	if (unk_0x9855654AB6D34651(uParam0))
	{
		return 1;
	}
	if (func_729(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_729(var uParam0)
{
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return 0;
	}
	if (!unk_0xAA55DF0CB38F413B(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_730(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	
	if (!func_352())
	{
		return;
	}
	if (func_124(unk_0x3D35F9864E4640B1()) < 1)
	{
		return;
	}
	if (!func_762() && !func_276())
	{
		return;
	}
	if (func_697())
	{
		return;
	}
	if (func_762())
	{
		unk_0xB922891BFD232C45(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xB922891BFD232C45(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_122.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1) };
				unk_0xB207C99FFC6234D4(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = unk_0xCFA31F1E461A6BB5(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 0);
				func_731(uVar7, uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_731(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0xB207C99FFC6234D4(2, unk_0xF177E0DA126D71C8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_732(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	bool bVar8;
	
	if (Local_122.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_122.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_763() != Local_122.f_118)
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
	Var4 = { unk_0xF177E0DA126D71C8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 5625f)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_122.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_13), iParam0);
	}
}

void func_733(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (Local_122.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_122.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_763() != Local_122.f_118)
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_122.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
	Var4 = { unk_0xF177E0DA126D71C8(uVar0, 0) };
	if (unk_0xB7A628320EFF8E47(Var1, Var4) < 62500f)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_122.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_763() == Local_122.f_118)
				{
					if (unk_0xB7A628320EFF8E47(Var1, Var4) < 40000f)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
						return;
					}
					if (func_737(uVar7))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_734(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		uVar0 = func_313(iParam1);
		unk_0xEB934A06DDA5027D(*uParam0, uVar0);
	}
}

void func_735(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (Local_122.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0xA02DD6B5C8C02298(Local_122.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_122.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x38A3CC71471EC547(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 1) };
							Var5 = { Var2 };
							Var5.f_2 = (Var5.f_2 + 500f);
							if (unk_0x6192E81E5C0DCC27(Var5, &fVar1, 0))
							{
								if (unk_0x229F35E7CDDBF757((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_122.f_2[iParam0 /*26*/].f_1), 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_736(int iParam0)
{
	if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_122.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_122.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_737(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), uParam0))
	{
		return 1;
	}
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), uParam0))
	{
		return 1;
	}
	if (func_738())
	{
		if (unk_0x63683B42C74DE9C9(unk_0x3D35F9864E4640B1(), &uVar0))
		{
			if (unk_0x269F274F1955DE87(uVar0))
			{
				uVar1 = unk_0x4849801147A2BA1E(iVar0);
				if (unk_0x76B3C79DE564AFC6(uVar1))
				{
					if (!unk_0x7A6C051038031EFA(iVar1, 0))
					{
						if (unk_0x90219307C9D2728D(iVar1, 0))
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

bool func_738()
{
	return Global_1574291;
}

void func_739()
{
	int iVar0;
	int iVar1;
	
	if (Local_122.f_0 != 4)
	{
		iVar1 = unk_0xA7871E29B06DA901(iLocal_1446);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (unk_0x532CFF8D6B65E42F(iVar1))
			{
				if (!func_697())
				{
					if (!func_762())
					{
						if (func_276())
						{
							if (func_171(iVar1, 1))
							{
								iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_122.f_118));
								if (func_71(iVar1, iVar0, 1))
								{
									if (!unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_8, iLocal_1446))
									{
										func_314(iVar1, 432, 1);
										func_309(iVar1, func_313(iLocal_1735), 1);
										unk_0xCD7E92DE2BFA0B0D(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_8), iLocal_1446);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_8, iLocal_1446))
			{
				func_314(iVar1, 432, 0);
				func_309(iVar1, func_313(iLocal_1735), 0);
				unk_0xD804ACF2A7171150(&(Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_8), iLocal_1446);
			}
		}
	}
	iLocal_1446++;
	if (iLocal_1446 >= 32)
	{
		iLocal_1446 = 0;
	}
}

int func_740(bool bParam0)
{
	if (func_741(1))
	{
		return 1;
	}
	if (Global_2501777.f_4867.f_25)
	{
		Global_2501777.f_4867.f_25 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_231() == func_60() || !func_853(func_231(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_741(bool bParam0)
{
	bool bVar0;
	
	if (!func_424(1))
	{
		bVar0 = false;
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_60())
		{
			if (func_853(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, 0, 1))
			{
				if ((Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 4 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 8) || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_742(func_95(unk_0x3D35F9864E4640B1())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_478(31);
				if (func_295(func_95(unk_0x3D35F9864E4640B1())))
				{
					func_478(81);
				}
				if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_60() && unk_0x80BA8E3CC61A8625(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
				{
					Global_1622383 = func_332(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, -2, 0, 0);
					if (!func_230(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
					{
						func_478(88);
					}
				}
				else
				{
					Global_1622383 = 1;
				}
				Global_1622367 = { Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_742(int iParam0)
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

void func_743()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_122.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1704[iVar0] = Local_122.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_744()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x43B24C247F35B6BC() == Local_122.f_118 || func_763() == Local_122.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
			{
				unk_0xF3D2FD7057C04CD8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_1), unk_0x3D35F9864E4640B1(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0xF3D2FD7057C04CD8(unk_0xECB7D3275586261E(Local_122.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x3D35F9864E4640B1(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_745()
{
	if (Local_122.f_118 > -1)
	{
		iLocal_1735 = func_620(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_122.f_118)));
	}
}

void func_746(float fParam0)
{
	float fVar0;
	
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_311())
	{
		return;
	}
	fVar0 = (Global_2501777.f_4862 - fParam0);
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && unk_0x229F35E7CDDBF757(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2501777.f_4862 = fParam0;
	Global_2501777.f_4863 = unk_0xFFDE6A3A0108B7CB();
}

void func_747(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != iParam0)
	{
		func_761(-1);
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = iParam0;
		if (func_760() != -1)
		{
			func_759(-1);
		}
		if (func_758() != -1)
		{
			func_757(-1);
		}
		func_756(iParam2);
		func_754(iParam0);
		if (!func_106(iParam0))
		{
			fVar0 = func_105(iParam0);
			if (fVar0 != 1f)
			{
				func_746(fVar0);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
			}
		}
		if (!func_109(iParam0) || iParam3)
		{
			if (func_107(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x438B2E6B2BAD6A0D(0);
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
					unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
			}
			else if (unk_0x58288C08A90CC7D0() < 5)
			{
				unk_0x15007EAE63C7ECCF(1f);
				unk_0x438B2E6B2BAD6A0D(5);
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
			if ((unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4)) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 0))
			{
				func_478(6);
			}
			func_753();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
		}
		if (func_122(unk_0x3D35F9864E4640B1()) && func_114(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
		}
		func_749();
		if (func_748(iParam0))
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 6);
		}
	}
}

int func_748(int iParam0)
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

void func_749()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_752();
	iVar2 = func_61(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (func_71(iVar1, iVar2, 1) || func_750(iVar1, unk_0x3D35F9864E4640B1()))
			{
				unk_0xEC03B416811242C7(unk_0x3D35F9864E4640B1(), iVar1, uVar3);
				unk_0xEC03B416811242C7(iVar1, unk_0x3D35F9864E4640B1(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_750(int iParam0, int iParam1)
{
	if (func_171(iParam0, 1) && func_171(iParam1, 1))
	{
		return (func_751(iParam0) == func_61(iParam1) || func_751(iParam1) == func_61(iParam0));
	}
	return 0;
}

int func_751(int iParam0)
{
	if (func_171(iParam0, 1))
	{
		return Global_1623799[func_61(iParam0) /*488*/].f_11.f_404;
	}
	return func_60();
}

int func_752()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_426();
	if (iVar0 != func_60())
	{
		if (func_853(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x2A3398C6222EB190(Global_1623799[iVar1 /*488*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_753()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 4);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 6))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 6);
	}
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 0);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 2);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_553 = 0;
	if (Global_2501777.f_4514 > 0)
	{
		unk_0x438B2E6B2BAD6A0D(Global_2501777.f_4514);
	}
	Global_2501777.f_4513 = 0;
}

void func_754(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(3770, -1, 0);
	iVar1 = func_755(iParam0);
	if (iVar1 != -1)
	{
		unk_0xCD7E92DE2BFA0B0D(&iVar0, iVar1);
		func_395(3770, iVar0, -1, 1, 0);
	}
}

int func_755(int iParam0)
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

void func_756(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	if (Global_1623799[iVar0 /*488*/].f_11.f_173 != iParam0)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_173 = iParam0;
	}
}

void func_757(int iParam0)
{
	if (Global_2501777.f_4867.f_153 != iParam0)
	{
		Global_2501777.f_4867.f_153 = iParam0;
	}
}

int func_758()
{
	return Global_2501777.f_4867.f_153;
}

void func_759(int iParam0)
{
	if (Global_2501777.f_4867.f_152 != iParam0)
	{
		Global_2501777.f_4867.f_152 = iParam0;
	}
}

int func_760()
{
	return Global_2501777.f_4867.f_152;
}

void func_761(int iParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_31 = iParam0;
}

int func_762()
{
	int iVar0;
	
	iVar0 = func_763();
	if (iVar0 > -1)
	{
		if (Local_122.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_763()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_60();
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = unk_0x43B24C247F35B6BC();
		iVar1 = unk_0x3D35F9864E4640B1();
	}
	else
	{
		iVar0 = func_277();
		iVar1 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_994[iVar0 /*14*/].f_10 != -1)
	{
		return Local_994[iVar0 /*14*/].f_10;
	}
	if (func_113(iVar1))
	{
		Local_994[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_122.f_118)
		{
			func_677(1);
		}
	}
	else if (func_171(iVar1, 1))
	{
		iVar2 = func_61(iVar1);
		if (iVar2 != func_60())
		{
			if (unk_0x532CFF8D6B65E42F(iVar2))
			{
				Local_994[iVar0 /*14*/].f_10 = unk_0x3DAB36F6FA9328A6(iVar2);
			}
		}
	}
	return Local_994[iVar0 /*14*/].f_10;
}

int func_764()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xAA55DF0CB38F413B(Local_122.f_2[iVar0 /*26*/].f_1))
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

int func_765()
{
	return Local_122.f_0;
}

int func_766(int iParam0)
{
	return Local_994[iParam0 /*14*/];
}

int func_767()
{
	var uVar0;
	
	func_772(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_771())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769(157))
	{
		if (!func_768())
		{
			return 1;
		}
	}
	if (func_769(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_311() != 0)
	{
		if (unk_0x7832F791572D5809(func_311()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_768()
{
	return Global_2445582.f_579;
}

int func_769(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_770()
{
	return Global_2455114;
}

bool func_771()
{
	return Global_2445582.f_574;
}

void func_772(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_773(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_773(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_853(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_774(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_774(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(iParam0))
		{
			if (unk_0x8D0F418585E0886B(iParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
				{
					unk_0x1581691D748490F3(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(iParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_775()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_776()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x3D35F9864E4640B1(), 0))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_1443, 6))
		{
			if (unk_0x27CA09C6DFAB1E79())
			{
				if (func_762() || func_276())
				{
					func_563(0, 4, 0, 0, -1, -1, -1, -1, -1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_1443, 6);
				}
			}
		}
		uVar0 = Local_122.f_115;
		uVar1 = Local_122.f_121;
		iVar2 = -1;
		if (unk_0x27CA09C6DFAB1E79())
		{
			iVar2 = Local_994[unk_0x43B24C247F35B6BC() /*14*/].f_11;
		}
		func_822(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()) == iLocal_1448)
			{
				unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), iLocal_1449);
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_1443, 18))
	{
		func_319(1);
		unk_0xD804ACF2A7171150(&iLocal_1443, 18);
	}
	func_821();
	if (Local_122.f_119 != -1)
	{
		if (unk_0x2A3398C6222EB190(iLocal_1443, 5))
		{
			if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_122.f_119)))
			{
			}
		}
	}
	if (func_76(0))
	{
		func_75(0);
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0x2A3398C6222EB190(Local_122.f_871, iVar3))
				{
					unk_0x04021FF677078694(Local_122.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0x2A3398C6222EB190(iLocal_1443, 17))
	{
		unk_0x438B2E6B2BAD6A0D(iLocal_1737);
		unk_0xD804ACF2A7171150(&iLocal_1443, 17);
	}
	func_316();
	unk_0xCD7E92DE2BFA0B0D(&iLocal_1444, 8);
	func_634();
	unk_0x9115CF03B53799D1(1);
	func_677(0);
	func_778(1, 0);
	unk_0x438B2E6B2BAD6A0D(5);
	func_308();
	func_777();
}

void func_777()
{
	unk_0xBEE2834559A8897A();
}

void func_778(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1344830.f_1.f_108 != 0)
	{
		Global_1344830.f_1.f_108 = 0;
	}
	Global_1344830.f_1.f_109 = -1;
	Global_1344830.f_1.f_110 = -1;
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 167 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 168)
	{
		func_819();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 4);
	}
	if ((func_422() && iParam1 != 0) && Global_262145.f_16099)
	{
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 190 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192)
		{
			func_803(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 0);
			if (func_802(iParam1))
			{
				func_803(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 164 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 208)
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != -1)
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = -1;
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 14) && !func_122(unk_0x3D35F9864E4640B1()))
		{
			func_102(0);
		}
	}
	else if (func_800(unk_0x3D35F9864E4640B1()) != -1)
	{
		func_761(-1);
	}
	func_799(func_60());
	if (func_76(16))
	{
		func_75(16);
	}
	func_796(0);
	func_756(-1);
	func_795();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_794(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_792(iVar1);
		iVar1++;
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
	{
		unk_0x15007EAE63C7ECCF(1f);
		unk_0x438B2E6B2BAD6A0D(5);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 5))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 5);
	}
	iVar2 = func_301();
	if ((func_203(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_791(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_365(iVar2))
	{
		func_787(-1, 1);
	}
	else if ((((func_300(iVar2) || func_786(iVar2)) || func_785(iVar2)) || func_362(iVar2)) || func_360(iVar2))
	{
	}
	else
	{
		func_787(-1, 1);
	}
	func_98(19);
	func_98(20);
	func_98(21);
	func_98(22);
	func_98(27);
	func_75(3);
	func_75(4);
	func_75(7);
	func_784();
	if (func_114(unk_0x3D35F9864E4640B1()))
	{
		func_677(0);
	}
	func_98(29);
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_60();
	if (Global_2501777.f_4867.f_25 != 0)
	{
		Global_2501777.f_4867.f_25 = 0;
	}
	if (bParam0)
	{
		func_77();
	}
	if (!func_122(unk_0x3D35F9864E4640B1()))
	{
		func_97();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 6))
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 6);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 7))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 7);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 8))
	{
		func_783("IMPEXP_SELFDES", 0);
		func_781("IMPEXP_SELFDES");
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 8);
	}
	func_779(iVar2, 0);
}

void func_779(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
		{
			unk_0xFD69BDF108B32E5B(func_780(iParam0));
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 9);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
	{
		unk_0xB3E27A9E412BBDF8(func_780(iParam0));
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 9);
	}
}

char* func_780(int iParam0)
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

void func_781(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_689();
					Global_104439.f_14002[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_782(iVar0))
					{
					}
					else
					{
						Global_104439.f_14002[iVar0 /*104*/].f_24 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_28 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x184D9974941265BF(Global_104439.f_14002[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_782(int iParam0)
{
	if ((Global_104439.f_14002[iParam0 /*104*/].f_99[0] == 1 || Global_104439.f_14002[iParam0 /*104*/].f_99[1] == 1) || Global_104439.f_14002[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_783(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104439.f_14002[iVar0 /*104*/].f_24 = 1;
				if (Global_104439.f_14002[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104439.f_13912[0 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104439.f_13912[1 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104439.f_13912[2 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104439.f_13912[3 /*20*/].f_17 = 0;
					}
					Global_104439.f_14002[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104439.f_14002[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_784()
{
	if (func_117(unk_0x3D35F9864E4640B1()))
	{
		func_98(25);
	}
}

int func_785(int iParam0)
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

int func_786(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_787(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_426() != func_60())
		{
			if (func_790(unk_0x3D35F9864E4640B1()) == unk_0x3D35F9864E4640B1())
			{
				Global_2488853.f_93[func_789(iParam0)] = 1;
			}
		}
		iVar0 = func_789(159);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(157);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(148);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(164);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(142);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(152);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(166);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(170);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(173);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(179);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(200);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(201);
		if (func_788(iVar0, Global_262145.f_11795, bParam1))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(182);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(183);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(185);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(186);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(180);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(195);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(197);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(198);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(207);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(208);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(209);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(214);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(215);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(216);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(217);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(218);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(219);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(220);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(221);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_788(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_99(unk_0x3D35F9864E4640B1(), 19) && !func_99(unk_0x3D35F9864E4640B1(), 20)) && !func_99(unk_0x3D35F9864E4640B1(), 9))
		{
			return 0;
		}
	}
	if (Global_2488853.f_93[iParam0] == 1 && func_8(&(Global_2488853[iParam0 /*2*/])))
	{
		if (func_636(&(Global_2488853[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2488853.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_789(int iParam0)
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

int func_790(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_34;
}

void func_791(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_301();
	}
	if (iParam0 > 0)
	{
		if (func_426() != func_60())
		{
			Global_2488853.f_93[func_789(iParam0)] = 1;
		}
		iVar0 = func_789(155);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(163);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(160);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(153);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(162);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(154);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(171);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(172);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(199);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(194);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(193);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(210);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(205);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(189);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_789(211);
		if (func_788(iVar0, Global_262145.f_11796, 0))
		{
			func_145(&(Global_2488853[iVar0 /*2*/]));
			func_7(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_792(int iParam0)
{
	if (!func_28(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/], func_793(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/] = { func_793() };
	}
	if (!func_28(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/], func_793(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/] = { func_793() };
	}
}

Vector3 func_793()
{
	struct<3> Var0;
	
	return Var0;
}

void func_794(int iParam0)
{
	if (!func_28(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/], func_793(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/] = { func_793() };
	}
	if (!func_28(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/], func_793(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/] = { func_793() };
	}
}

void func_795()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573831 = { Var0 };
	Global_1573831.f_13 = func_60();
	if (unk_0x2A3398C6222EB190(Global_1573334, 3))
	{
		unk_0xD804ACF2A7171150(&Global_1573334, 3);
	}
}

void func_796(bool bParam0)
{
	if (bParam0)
	{
		if (!func_380(unk_0x3D35F9864E4640B1(), 14))
		{
			func_798(14);
		}
	}
	else if (func_380(unk_0x3D35F9864E4640B1(), 14))
	{
		func_797(14);
	}
}

void func_797(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_798(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_799(int iParam0)
{
	if (func_113(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x3D35F9864E4640B1() != iParam0)
		{
			if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 != iParam0)
			{
				Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 = iParam0;
				if (iParam0 != func_60())
				{
				}
			}
		}
	}
}

int func_800(int iParam0)
{
	if (func_801(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_31;
	}
	return -1;
}

int func_801(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_31 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_802(int iParam0)
{
	return func_419(iParam0) == 5;
}

void func_803(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_531(iParam0, iParam1) && func_818(iParam0, iParam1))
	{
		iVar0 = func_530(iParam0, iParam1);
		func_806(iVar0, bParam2, bParam3);
		func_804(iVar0, 1);
	}
}

void func_804(int iParam0, int iParam1)
{
	func_517(func_805(iParam0), iParam1, -1, 1);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_6 = iParam1;
}

int func_805(int iParam0)
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

void func_806(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_657(unk_0x3D35F9864E4640B1(), iParam0);
	if (!bParam1)
	{
		func_817(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2488772[iParam0];
		iVar0 = func_816(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1780703 = -1;
		}
		func_815(iParam0, 0, bParam2);
	}
	else if (func_813(iParam0, bParam2))
	{
		iVar0 = func_812(iVar2, 0);
		iVar3 = func_609(unk_0x3D35F9864E4640B1(), iVar2);
		iVar4 = func_811(iVar2, bParam2);
		iVar5 = func_812(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_802(iVar2) && func_810(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_817(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_809(unk_0x3D35F9864E4640B1(), iVar2) > 0)
		{
			func_808(iParam0, (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 - (func_811(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_812(iVar2, bParam2) / func_809(unk_0x3D35F9864E4640B1(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_802(iVar2) && func_810(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_807(unk_0x3D35F9864E4640B1(), iVar2, iVar0, bParam2);
}

void func_807(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return;
	}
	if (func_524(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1593076[iParam0 /*647*/].f_259.f_228 = iParam2;
				}
				else
				{
					Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_808(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2)
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_809(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_524(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_810(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_60())
	{
		return 0;
	}
	if (func_524(iParam1) && func_802(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_811(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_419(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16070;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16075;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16069;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16074;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16068;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16073;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16066;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16071;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16067;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16072;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20094;
				if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20095;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20078;
				if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20079;
				}
			}
			break;
	}
	return uVar0;
}

int func_812(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_419(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16051;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16060);
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16065);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16052;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16059);
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16064);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16053;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16058);
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16063);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16054;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16056);
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16061);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16055;
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16057);
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16062);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20091;
			}
			else
			{
				iVar0 = Global_262145.f_20075;
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20092);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20076);
				}
			}
			if (func_529(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20093);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20077);
				}
			}
			if (func_810(unk_0x3D35F9864E4640B1(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_813(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_518(15384, -1, -1);
	}
	return func_518(func_814(iParam0), -1, -1);
}

int func_814(int iParam0)
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

void func_815(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_517(15384, iParam1, -1, 1);
		return;
	}
	func_517(func_814(iParam0), iParam1, -1, 1);
}

int func_816(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2488772[iParam0];
	iVar1 = func_657(unk_0x3D35F9864E4640B1(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2488779;
	}
	if (func_802(iVar1))
	{
		if (func_810(unk_0x3D35F9864E4640B1(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_817(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2488779 = iParam1;
		return;
	}
	Global_2488772[iParam0] = iParam1;
}

int func_818(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_531(iParam0, iParam1))
	{
		iVar0 = func_530(iParam0, iParam1);
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_4 > 0 && Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_819()
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 28);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 29);
	func_820(24);
}

void func_820(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

void func_821()
{
	unk_0x15C7C9DD9A0BD58C(iLocal_1448);
}

void func_822(var uParam0, var uParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x49CAADAD1ABAB70A();
	Var1.f_0 = Global_1779220;
	Var1.f_1 = Global_1779220.f_1;
	Var1.f_2 = Global_1779220.f_2;
	Var1.f_3 = Global_1779220.f_3;
	Var1.f_4 = Global_1779220.f_4;
	Var1.f_5 = Global_1779220.f_5;
	Var1.f_6 = Global_1779220.f_6;
	Var1.f_7 = Global_1779220.f_7;
	Var1.f_8 = Global_1779220.f_8;
	Var1.f_9 = Global_1779220.f_9;
	Var1.f_10 = Global_1779220.f_10;
	Var1.f_11 = Global_1779220.f_11;
	Var1.f_12 = Global_1779220.f_12;
	Var1.f_13 = Global_1779220.f_14;
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xB3404E397FF56B3B(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1779220.f_15;
			Var15.f_15 = Global_1779220.f_16;
			Var15.f_16 = Global_1779220.f_17;
			unk_0x6CB23EEE3E5D7B2A(&Var15);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1779220.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0x8CF33ABD912EA757(&Var32);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1779220.f_15;
			Var49.f_15 = uParam0;
			unk_0xEC184C805FE67C39(&Var49);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1779220.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x5018149DB3675624(&Var65);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1779220.f_15;
			Var82.f_15 = uParam0;
			unk_0x44D9C231006F850E(&Var82);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1779220.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0x7399B873D9898C59(&Var98);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1779220.f_15;
			unk_0xF1082B35012FD69A(&Var116);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1779220.f_15;
			unk_0x20C8471D5E25D526(&Var134);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1779220.f_15;
			unk_0x51A4A73BA6594D39(&Var153);
		}
	}
	func_823();
}

void func_823()
{
	struct<18> Var0;
	
	Global_1779220 = { Var0 };
}

void func_824(struct<21> Param0)
{
	func_851(func_852(Param0.f_0), Param0);
	unk_0x8A4541F891BF3B2B(16);
	unk_0x79C80114C0FC1BE7(8);
	func_850(0, -1, 0);
	unk_0x158D750851ECBBF8(&Local_122, 872);
	unk_0xC0AFA7500AD40377(&Local_994, 449);
	if (!func_849())
	{
		func_776();
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x0BDEAF4CD9510F40(0);
		if (unk_0xEF0CB8FF125B9F9C())
		{
		}
		func_846();
		func_825(0, 0);
		Local_994[unk_0x43B24C247F35B6BC() /*14*/] = 0;
	}
	else
	{
		func_776();
	}
}

void func_825(int iParam0, int iParam1)
{
	func_845();
	func_828(1);
	if ((iParam0 != 0 && unk_0x80BA8E3CC61A8625(iParam1)) && func_827(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xCD7E92DE2BFA0B0D(&Global_1779206, 0);
				break;
			}
	}
	if (!func_409() && !func_171(unk_0x3D35F9864E4640B1(), 1))
	{
		if (func_130())
		{
			func_101(3);
		}
	}
	func_101(4);
	if (func_424(0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_426();
	}
	if (func_295(iParam0))
	{
		func_607();
		Global_1779238.f_18 = func_585(func_231());
	}
	else if (func_299(func_800(unk_0x3D35F9864E4640B1())))
	{
		func_605();
		Global_1779291.f_18 = func_585(func_231());
	}
	func_826();
}

void func_826()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1344830.f_531[iVar0 /*42*/].f_1 = func_60();
		Global_1344830.f_531[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_827(int iParam0, bool bParam1)
{
	return func_71(unk_0x3D35F9864E4640B1(), iParam0, bParam1);
}

void func_828(bool bParam0)
{
	int iVar0;
	
	func_820(33);
	func_820(34);
	func_820(35);
	func_820(36);
	func_820(37);
	func_820(38);
	func_820(39);
	func_820(40);
	func_820(43);
	func_820(41);
	func_820(54);
	func_820(42);
	func_820(47);
	func_844(23);
	func_844(24);
	func_820(92);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 2);
	func_843();
	func_838();
	func_830();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_829(3))
	{
		func_844(3);
	}
	else if (func_829(4))
	{
		func_844(4);
	}
	else if (func_829(5))
	{
		func_844(5);
	}
	else if (func_829(6))
	{
		func_844(6);
	}
	else if (func_829(7))
	{
		func_844(7);
	}
	else if (((((((((((((((((func_829(0) || func_829(1)) || func_829(2)) || func_829(8)) || func_829(9)) || func_829(10)) || func_829(11)) || func_829(12)) || func_829(13)) || func_829(14)) || func_829(15)) || func_829(16)) || func_829(17)) || func_829(18)) || func_829(19)) || func_829(20)) || func_829(21)) || func_829(22))
	{
		func_844(8);
		func_844(0);
		func_844(1);
		func_844(2);
		func_844(9);
		func_844(10);
		func_844(11);
		func_844(12);
		func_844(13);
		func_844(14);
		func_844(15);
		func_844(16);
		func_844(17);
		func_844(18);
		func_844(19);
		func_844(20);
		func_844(21);
		func_844(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_12[iVar0], iVar1);
}

void func_830()
{
	if (func_837())
	{
		func_836(0);
		func_836(1);
		func_836(2);
		func_836(3);
		func_836(4);
		func_836(5);
		func_836(6);
		func_836(7);
		if (func_835(8))
		{
			func_836(8);
		}
		if (func_835(15))
		{
			if (func_832(func_833(), 3))
			{
				func_831(func_833(), 3);
			}
			func_836(15);
		}
	}
}

void func_831(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_832(int iParam0, int iParam1)
{
	if (Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_833()
{
	if (func_834())
	{
		Global_104439.f_27911[20 /*29*/].f_24[Global_14443] = 1;
	}
	return 20;
}

int func_834()
{
	int iVar0;
	
	iVar0 = func_61(unk_0x3D35F9864E4640B1());
	if (((iVar0 != unk_0x3D35F9864E4640B1() && iVar0 != func_60()) && unk_0x80BA8E3CC61A8625(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_835(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_19[iVar0], iVar1);
}

void func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_19[iVar0]), iVar1);
}

int func_837()
{
	if ((((((((func_835(0) || func_835(1)) || func_835(2)) || func_835(3)) || func_835(4)) || func_835(5)) || func_835(6)) || func_835(7)) || func_835(8))
	{
		return 1;
	}
	return 0;
}

void func_838()
{
	if (func_842())
	{
		func_841(0);
		func_841(1);
		func_841(2);
		func_841(3);
		func_841(4);
		func_841(5);
		func_841(6);
		func_841(7);
		func_841(8);
		func_841(9);
		func_841(10);
		func_841(11);
		func_841(12);
		if (func_840(13))
		{
			if (func_832(func_839(), 3))
			{
				func_831(func_839(), 3);
			}
			func_841(13);
		}
	}
}

int func_839()
{
	if (func_834())
	{
		Global_104439.f_27911[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

bool func_840(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_17[iVar0], iVar1);
}

void func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_17[iVar0]), iVar1);
}

int func_842()
{
	if ((((((((((((func_840(0) || func_840(1)) || func_840(2)) || func_840(3)) || func_840(4)) || func_840(5)) || func_840(6)) || func_840(7)) || func_840(8)) || func_840(9)) || func_840(10)) || func_840(11)) || func_840(12))
	{
		return 1;
	}
	return 0;
}

void func_843()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2501777.f_4867.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_844(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_12[iVar0]), iVar1);
}

void func_845()
{
	struct<14> Var0;
	
	Global_1779220 = { Var0 };
	Global_1779220.f_14 = 0;
	Global_1779220.f_15 = 0;
}

void func_846()
{
	int iVar0;
	int iVar1;
	
	unk_0x659E5E147E8E6635("relHeadHunterPlayer", &iLocal_1448);
	iVar0 = unk_0x71ECD8D9F6A1FE83(unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0x85F49C37BE784CD7(5, Global_1574701[iVar1], iLocal_1448);
		unk_0x85F49C37BE784CD7(5, iLocal_1448, Global_1574701[iVar1]);
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar1], Global_1574743);
		unk_0x85F49C37BE784CD7(1, Global_1574743, Global_1574701[iVar1]);
		unk_0x85F49C37BE784CD7(iVar0, iLocal_1448, joaat("COP"));
		unk_0x85F49C37BE784CD7(iVar0, joaat("COP"), iLocal_1448);
		unk_0x85F49C37BE784CD7(1, iLocal_1448, Global_1574745[5]);
		unk_0x85F49C37BE784CD7(1, Global_1574745[5], iLocal_1448);
		unk_0x85F49C37BE784CD7(1, iLocal_1448, Global_1574734);
		unk_0x85F49C37BE784CD7(1, Global_1574734, iLocal_1448);
		iVar1++;
	}
	unk_0x85F49C37BE784CD7(5, iLocal_1448, Global_1574743);
	unk_0x85F49C37BE784CD7(5, Global_1574743, iLocal_1448);
	unk_0x85F49C37BE784CD7(1, 2017343592, Global_1574743);
	unk_0x85F49C37BE784CD7(5, 2017343592, iLocal_1448);
	func_848(1, &Global_1574743);
	func_847(&Global_1574743);
	func_847(&iLocal_1448);
}

void func_847(int iParam0)
{
	unk_0x85F49C37BE784CD7(1, -1865950624, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1865950624);
	unk_0x85F49C37BE784CD7(1, 296331235, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 296331235);
	unk_0x85F49C37BE784CD7(1, 1166638144, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1166638144);
	unk_0x85F49C37BE784CD7(1, 2037579709, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2037579709);
	unk_0x85F49C37BE784CD7(1, 2017343592, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2017343592);
	unk_0x85F49C37BE784CD7(1, -1821475077, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1821475077);
	unk_0x85F49C37BE784CD7(1, 1782292358, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1782292358);
	unk_0x85F49C37BE784CD7(1, -1033021910, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1033021910);
	unk_0x85F49C37BE784CD7(1, -1285976420, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1285976420);
}

void func_848(int iParam0, var uParam1)
{
	unk_0x85F49C37BE784CD7(iParam0, joaat("COP"), *uParam1);
	unk_0x85F49C37BE784CD7(iParam0, *uParam1, joaat("COP"));
	unk_0x85F49C37BE784CD7(iParam0, joaat("army"), *uParam1);
	unk_0x85F49C37BE784CD7(iParam0, *uParam1, joaat("army"));
	unk_0x85F49C37BE784CD7(iParam0, -183807561, *uParam1);
	unk_0x85F49C37BE784CD7(iParam0, *uParam1, -183807561);
}

int func_849()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
		{
			return 1;
		}
		if (func_771())
		{
			return 0;
		}
		if (func_769(155))
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

int func_850(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_777();
			}
			else
			{
				return 0;
			}
		}
		if (!func_724())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
				if (func_771())
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
				if (func_769(155))
				{
					if (!bParam2)
					{
						func_777();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8B05DA934032590D())
			{
				if (!bParam2)
				{
					func_777();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (!bParam2)
			{
				func_777();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8B05DA934032590D())
	{
		if (!bParam2)
		{
			func_777();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_851(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_777();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_852(int iParam0)
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

int func_853(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

