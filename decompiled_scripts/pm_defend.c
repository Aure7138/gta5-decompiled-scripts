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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	struct<91> Local_35 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 3;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 3;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	struct<122> Local_142[5];
	var uLocal_753 = 3;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	unk_0xA81035D922E28F10(1);
	if (unk_0x7547D7CF93115D6D(3))
	{
		if (!unk_0x8FA72E132AAFA62F(Local_35.f_88))
		{
			unk_0xF74C93D9036BCC1E(Local_35.f_88);
		}
		func_41(2);
		func_37(&Local_35);
	}
	while (true)
	{
		if (iLocal_141 > unk_0xF976C624234A4AA8())
		{
			unk_0x9871B9F47D2318AE();
		}
		switch (Local_35.f_0)
		{
			case 0:
				func_27();
				break;
			
			case 1:
				func_4();
				break;
			
			case 2:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (Local_35.f_1)
	{
		case 1:
			func_3();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	if (!unk_0x8FA72E132AAFA62F(Local_35.f_88))
	{
		unk_0xF74C93D9036BCC1E(Local_35.f_88);
	}
	func_41(2);
	func_37(&Local_35);
}

void func_3()
{
	if (!unk_0x8FA72E132AAFA62F(Local_35.f_87))
	{
		unk_0xF74C93D9036BCC1E(Local_35.f_87);
	}
	func_41(1);
	func_37(&Local_35);
}

void func_4()
{
	switch (Local_35.f_3)
	{
		case 9:
			unk_0x32BB0750E9174D6C(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_35.f_83)
	{
		case 0:
			if (func_26(&Local_35))
			{
				Local_35.f_68 = 0;
				Local_35.f_83++;
			}
			break;
		
		case 1:
			if (func_25(&Local_35))
			{
				Local_35.f_68 = 0;
				Local_35.f_83++;
			}
			break;
		
		case 2:
			func_23();
			func_22();
			func_21(&Local_142);
			func_6(&Local_142);
			break;
	}
	if (Local_35.f_70 >= Local_35.f_69)
	{
		Local_35.f_0 = 2;
		Local_35.f_1 = 1;
	}
	if (unk_0x8FE221761D524CFE(func_5(Local_35.f_3), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 1) > 300f)
	{
		Local_35.f_0 = 2;
		Local_35.f_1 = 2;
	}
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_35.f_70 >= (iParam0[iVar1 /*122*/])->f_116)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					
					case 1:
						if (func_18(&Var2, &uVar5))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_118 = { Var2 };
							(iParam0[iVar1 /*122*/])->f_121 = uVar5;
						}
						break;
					
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (unk_0xFD68187442384158((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0xE5D56342B0FF1D0D((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0xD149F8A3FE6B4956((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x48FFA098B5BE8ED0((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x3A1E687904400847((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, unk_0x2A24448FF232F834((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												unk_0x3A1E687904400847((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !unk_0x2A24448FF232F834((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													unk_0x6C5E5193D2E6CED0((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													unk_0x3A1E687904400847((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													unk_0x416C9B1337D7A700((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, 0);
												}
												unk_0xF266F4D5C3D0BAE2((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x2DC5B31EBB810396((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = unk_0xF976C624234A4AA8();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0xF976C624234A4AA8() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0xF976C624234A4AA8() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1), 1) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0xC00A761B5BB4E38B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x48FFA098B5BE8ED0((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x3A1E687904400847((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												unk_0x3A1E687904400847((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												unk_0xF266F4D5C3D0BAE2((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x2DC5B31EBB810396((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_35.f_84);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_35);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)
{
	uParam0->f_70++;
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFD68187442384158((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0xE5D56342B0FF1D0D((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
		{
			unk_0xA1E4BA3B17C6D931((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 1);
		}
		unk_0xCA4DD92F1F2931F3(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xD361727124133DF3(*uParam0))
	{
		unk_0xA0A65B537B1F11EC(uParam0);
		bVar0 = true;
	}
	if (unk_0xD361727124133DF3(uParam0->f_1))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFD68187442384158(uParam0->f_7))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_7))
		{
			if (unk_0xF9A4CF70DB92FFF6(uParam0->f_7))
			{
				unk_0xADAC7AEDE592E5FF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0);
}

int func_11(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4D82797EF5035A9F();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		if (!unk_0xF9A4CF70DB92FFF6(uParam0))
		{
			unk_0xADAC7AEDE592E5FF(uParam0, 1);
			uParam1->f_7 = uParam0;
			unk_0x84A6F440181ACC23(uParam0, iParam2);
			unk_0x5A510F8866FE43EA(uParam0, fParam6);
			if (unk_0xD361727124133DF3(*uParam1))
			{
				unk_0xAE9EE75C62A1DACD(*uParam1, 7);
			}
		}
		unk_0x89B93927F67D1769(uParam0, bParam4);
		unk_0x9F23324EC3A61137(uParam0, iParam5);
		*uParam1 = unk_0x0D45FE2149D749B3(uParam0);
		if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 2))
		{
			if (unk_0xD361727124133DF3(*uParam1))
			{
				if (!unk_0x8FA72E132AAFA62F(iParam7))
				{
					unk_0x900AC0BD5F16D935("MCUSTBLIP");
					unk_0xD1F22DD7F7363AB6(iParam7);
					unk_0x3BF044F0B5B79140(*uParam1);
				}
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x2A24448FF232F834(uParam0, 0))
		{
			uParam1->f_1 = unk_0x793BA2783243F773(uParam0);
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 3))
			{
				if (unk_0xD361727124133DF3(uParam1->f_1))
				{
					unk_0xAE9EE75C62A1DACD(uParam1->f_1, 7);
					unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD361727124133DF3(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCD27BF29FB9012E2(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_111)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_113 == (iParam0[iParam1 /*122*/])->f_111)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_113;
		if (!unk_0xFD68187442384158((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_10 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_13 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_35, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_15);
			(iParam0[iParam1 /*122*/])->f_113++;
		}
	}
	return 0;
}

void func_14(var uParam0, struct<61> Param1, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, int iParam92)
{
	int iVar0;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0))
		{
			iVar0 = Param1.f_60[unk_0x4D3E68F73B727E49(0, 3)];
			if (iParam92 != 0)
			{
				iVar0 = iParam92;
			}
			unk_0x3F9EDC2D18464273(uParam0, iVar0, -1, 1, 1);
			unk_0x0A000D03DB5B545F(uParam0, iVar0, 1);
			unk_0x278C9D6141B17BA8(uParam0, 1, iVar0);
		}
	}
}

var func_15(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x7B88529CAE3B7F15(26, Local_35.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, 1, 1);
	unk_0x78BFEA1E2E65768C(uVar0, 1);
	unk_0x15DE8332B7C67C99(uVar0, 1);
	unk_0xE440546F94B26235(uVar0, Local_35.f_52);
	unk_0x7AB733311E18F96E(uVar0, 1, 0);
	unk_0x3A1E687904400847(uVar0, 5, true);
	unk_0x9B02246888A617A8(uVar0, 1);
	unk_0x7FEDD088E489CE41(uVar0, 42, 1);
	unk_0x7FEDD088E489CE41(uVar0, 132, 1);
	unk_0x6C5E5193D2E6CED0(uVar0, 12, 30f);
	unk_0xE7962295F4C99484(uVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (unk_0xFD68187442384158((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!unk_0xE5D56342B0FF1D0D((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0x11460EBE0487B44F(uVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_141 = unk_0xF976C624234A4AA8() + 1000;
	return uVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_114 == (iParam0[iParam1 /*122*/])->f_112)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_114;
		if (!unk_0xFD68187442384158((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x546974B676313326((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, 1, 1);
	unk_0xF17C1232FE70C3D1(uVar0, 0);
	return uVar0;
}

int func_18(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x4D3E68F73B727E49(0, 10);
	Var1 = { Local_35.f_8[iVar0 /*3*/] };
	if (func_19(Var1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240))
	{
		*uParam0 = { Var1 };
		*uParam1 = Local_35.f_39[iVar0];
		return 1;
	}
	return 0;
}

int func_19(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, float fParam8, int iParam9, float fParam10)
{
	if (func_20(Param0))
	{
		return 0;
	}
	if (fParam3 > 0f)
	{
		if (unk_0x1DB23BF4B2FFF9BA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x98DDD45D8A6467D0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x98DDD45D8A6467D0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3D4E28BCE4C60954(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	if (iParam9 == 1)
	{
		if (unk_0xF97CA70F2DB85F21(Param0, 1.5f) > 0)
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (fParam6 > 0f)
		{
			if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Param0, 1) <= (fParam8 + fParam6))
			{
				if (unk_0x23A9305227426F8B(Param0, fParam6))
				{
					return 0;
				}
			}
		}
	}
	if (fParam10 > 0f)
	{
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Param0, 1) < fParam10)
		{
			return 0;
		}
	}
	return 1;
}

int func_20(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xFD68187442384158((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0xE5D56342B0FF1D0D((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (unk_0xC20B334EFA64243F((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_35.f_84 == 1)
									{
										Local_35.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										unk_0xF266F4D5C3D0BAE2((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_35.f_84);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_35);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	if (Local_35.f_89 == 0)
	{
		if (Local_35.f_71 == 1)
		{
			if (!unk_0x8FA72E132AAFA62F(Local_35.f_85))
			{
				if (unk_0xF74C93D9036BCC1E(Local_35.f_85))
				{
					Local_35.f_89 = 1;
				}
			}
		}
	}
	if (Local_35.f_90 == 0)
	{
		if (Local_35.f_84 == 1)
		{
			if (!unk_0x8FA72E132AAFA62F(Local_35.f_86))
			{
				if (unk_0xF74C93D9036BCC1E(Local_35.f_86))
				{
					Local_35.f_90 = 1;
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	
	if (Local_35.f_71 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (unk_0xD361727124133DF3(Local_142[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_35.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_24(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 0);
}

int func_25(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_66 == uParam0->f_64)
	{
		return 1;
	}
	else if (Local_142[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_142[uParam0->f_68 /*122*/].f_113 == Local_142[uParam0->f_68 /*122*/].f_111)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_142[uParam0->f_68 /*122*/].f_113;
			if (!unk_0xFD68187442384158(Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_142, uParam0->f_68, iVar0);
				func_14(Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_35, Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_142[uParam0->f_68 /*122*/].f_113++;
				uParam0->f_66++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_67 == uParam0->f_65)
	{
		return 1;
	}
	else if (Local_142[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_142[uParam0->f_68 /*122*/].f_114 == Local_142[uParam0->f_68 /*122*/].f_112)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_142[uParam0->f_68 /*122*/].f_114;
			if (!unk_0xFD68187442384158(Local_142[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
			{
				Local_142[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_142, uParam0->f_68, iVar0);
				Local_142[uParam0->f_68 /*122*/].f_114++;
				uParam0->f_67++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

void func_27()
{
	switch (Local_35.f_51)
	{
		case 0:
			func_31(&Local_35, func_36());
			func_30(&Local_35);
			Local_35.f_51++;
			break;
		
		case 1:
			func_29(Local_35);
			Local_35.f_51++;
			break;
		
		case 2:
			if (func_28(Local_35))
			{
				Local_35.f_51++;
			}
			break;
		
		case 3:
			if (unk_0x46B6351EE89452C8("PMD_ENEMIES", &(Local_35.f_52)))
			{
				unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), Local_35.f_52);
				unk_0xCA4EA7D4F6DCCD43(5, Local_35.f_52, joaat("COP"));
				unk_0xCA4EA7D4F6DCCD43(5, Local_35.f_52, joaat("player"));
				unk_0xCA4EA7D4F6DCCD43(1, Local_35.f_52, Local_35.f_52);
			}
			Local_35.f_0 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	if (((((((((((Param0.f_53[0] == 0 || unk_0xD291857D0C9C7FEC(Param0.f_53[0])) && (Param0.f_53[1] == 0 || unk_0xD291857D0C9C7FEC(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || unk_0xD291857D0C9C7FEC(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || unk_0xD291857D0C9C7FEC(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0xD291857D0C9C7FEC(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || unk_0xFA32E3333C5BD56A(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0xFA32E3333C5BD56A(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || unk_0xC35CCF23F0A1E055(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || unk_0xC35CCF23F0A1E055(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || unk_0xC35CCF23F0A1E055(Param0.f_60[2]))) && unk_0x6C741637F73EA9EC(0))
	{
		return 1;
	}
	return 0;
}

void func_29(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0xCBE6AC5010E5CE5C(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0xCBE6AC5010E5CE5C(Param0.f_57[iVar0]);
			unk_0x958003C8F1315BF5(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0x75EC07FC3A76FA6B(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	unk_0x481B0AD01AC057F7("PMD", 0);
}

void func_30(var uParam0)
{
	if (!func_20(uParam0->f_76) && !func_20(uParam0->f_79))
	{
		uParam0->f_82 = unk_0x92832F671263F8E0((uParam0->f_76 - uParam0->f_79), (uParam0->f_76.f_1 - uParam0->f_79.f_1), (uParam0->f_76.f_2 - uParam0->f_79.f_2), (uParam0->f_76 + uParam0->f_79), (uParam0->f_76.f_1 + uParam0->f_79.f_1), (uParam0->f_76.f_2 + uParam0->f_79.f_2), 0, 1, 1, 1);
	}
	if (!func_20(uParam0->f_72) && !uParam0->f_75 <= 0f)
	{
		unk_0x4BCBC9058A5CECE1(uParam0->f_72, uParam0->f_75, 1, 0, 0, 0);
	}
}

void func_31(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 9:
			uParam0->f_3 = 9;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_2 = 4;
			uParam0->f_53[0] = joaat("g_m_y_lost_01");
			uParam0->f_53[1] = 0;
			uParam0->f_53[2] = 0;
			uParam0->f_57[0] = joaat("gburrito");
			uParam0->f_57[1] = joaat("hexer");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_sawnoffshotgun");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_72 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_75 = 90f;
			uParam0->f_76 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_79 = { 54f, 72f, 8f };
			uParam0->f_50 = 9;
			uParam0->f_8[0 /*3*/] = { 1578.134f, -2317.858f, 86.636f };
			uParam0->f_39[0] = 36.2503f;
			uParam0->f_8[1 /*3*/] = { 1571.414f, -2314.379f, 86.0904f };
			uParam0->f_39[1] = 37.4325f;
			uParam0->f_8[2 /*3*/] = { 1555.674f, -2321.857f, 85.2531f };
			uParam0->f_39[2] = 2.4637f;
			uParam0->f_8[3 /*3*/] = { 1516.694f, -1980.273f, 70.1538f };
			uParam0->f_39[3] = 203.6018f;
			uParam0->f_8[4 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			uParam0->f_39[4] = 217.0733f;
			uParam0->f_8[5 /*3*/] = { 1498.166f, -1981.469f, 69.5705f };
			uParam0->f_39[5] = 256.7048f;
			uParam0->f_8[6 /*3*/] = { 1670.858f, -2022.844f, 99.5899f };
			uParam0->f_39[6] = 142.5751f;
			uParam0->f_8[7 /*3*/] = { 1677.085f, -2035.785f, 98.5593f };
			uParam0->f_39[7] = 109.2985f;
			uParam0->f_8[8 /*3*/] = { 1659.187f, -2090.027f, 99.2239f };
			uParam0->f_39[8] = 9.0974f;
			Local_142[0 /*122*/] = 0;
			Local_142[0 /*122*/].f_111 = 4;
			Local_142[0 /*122*/].f_112 = 2;
			Local_142[0 /*122*/].f_83[0 /*9*/].f_1 = { 1533.375f, -2087.209f, 76.0832f };
			Local_142[0 /*122*/].f_83[0 /*9*/].f_7 = 152.9678f;
			Local_142[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_142[0 /*122*/].f_83[1 /*9*/].f_1 = { 1547.824f, -2091.365f, 76.1018f };
			Local_142[0 /*122*/].f_83[1 /*9*/].f_7 = 55.5566f;
			Local_142[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("gburrito");
			Local_142[0 /*122*/].f_2[0 /*20*/].f_10 = { 1525.76f, -2092.838f, 76.0174f };
			Local_142[0 /*122*/].f_2[0 /*20*/].f_13 = 232.9176f;
			Local_142[0 /*122*/].f_2[1 /*20*/].f_10 = { 1527.138f, -2091.832f, 76.031f };
			Local_142[0 /*122*/].f_2[1 /*20*/].f_13 = 190.6337f;
			Local_142[0 /*122*/].f_2[2 /*20*/].f_10 = { 1523.108f, -2115.134f, 75.6351f };
			Local_142[0 /*122*/].f_2[2 /*20*/].f_13 = 350.4627f;
			Local_142[0 /*122*/].f_2[3 /*20*/].f_10 = { 1522.629f, -2112.768f, 75.6853f };
			Local_142[0 /*122*/].f_2[3 /*20*/].f_13 = 264.9478f;
			Local_142[1 /*122*/] = 1;
			Local_142[1 /*122*/].f_111 = 4;
			Local_142[1 /*122*/].f_112 = 1;
			Local_142[1 /*122*/].f_116 = 2;
			Local_142[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_142[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_142[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_142[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_142[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_142[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_142[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_142[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_142[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_142[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_142[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_142[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_142[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_142[2 /*122*/] = 1;
			Local_142[2 /*122*/].f_111 = 4;
			Local_142[2 /*122*/].f_112 = 1;
			Local_142[2 /*122*/].f_116 = 3;
			Local_142[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_142[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_142[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_142[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_142[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_142[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_142[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_142[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_142[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_142[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_142[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_142[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_142[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			break;
		
		default:
			uParam0->f_2 = 6;
			uParam0->f_53[0] = joaat("g_m_y_mexgoon_01");
			uParam0->f_53[1] = joaat("g_m_y_mexgoon_02");
			uParam0->f_53[2] = joaat("g_m_y_mexgoon_03");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_microsmg");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_69 = 10;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_142[iVar0 /*122*/] == 0)
		{
			uParam0->f_64 = (uParam0->f_64 + Local_142[iVar0 /*122*/].f_111);
			uParam0->f_65 = (uParam0->f_65 + Local_142[iVar0 /*122*/].f_112);
		}
		uParam0->f_69 = (uParam0->f_69 + Local_142[iVar0 /*122*/].f_111);
		iVar0++;
	}
}

void func_33(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 9:
			switch (uParam0->f_4)
			{
				case 0:
					uParam0->f_85 = "PM_CV1_START";
					uParam0->f_86 = "PM_CV1_GF";
					uParam0->f_87 = "PM_CV1_STOP";
					uParam0->f_88 = "PM_CV1_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
				
				case 1:
					uParam0->f_85 = "PM_CV2_START";
					uParam0->f_86 = "PM_CV2_GF";
					uParam0->f_87 = "PM_CV2_STOP";
					uParam0->f_88 = "PM_CV2_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
			}
			break;
	}
}

int func_34()
{
	return func_35(Global_95887.f_20, Global_95887.f_29);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_36()
{
	return Global_95887.f_20;
}

void func_37(var uParam0)
{
	func_40(*uParam0);
	func_39(&Local_142);
	func_38(&Local_142);
	if (uParam0->f_82 != 0)
	{
		unk_0x1D6153ECFEB26B2A(uParam0->f_82, 0);
	}
	unk_0x883793591E631A3B();
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xFD68187442384158((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0xB67623A401171555(&((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0xFF467904A8A12BBE(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0xFF467904A8A12BBE(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0x59A935DC5B1115A0(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

