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
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(3))
	{
		if (!unk_0xCA042B6957743895(Local_35.f_88))
		{
			unk_0x706D57B0F50DA710(Local_35.f_88);
		}
		func_41(2);
		func_37(&Local_35);
	}
	while (true)
	{
		if (iLocal_141 > unk_0x9CD27B0045628463())
		{
			unk_0xAF66DCEE6609B148();
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
	if (!unk_0xCA042B6957743895(Local_35.f_88))
	{
		unk_0x706D57B0F50DA710(Local_35.f_88);
	}
	func_41(2);
	func_37(&Local_35);
}

void func_3()
{
	if (!unk_0xCA042B6957743895(Local_35.f_87))
	{
		unk_0x706D57B0F50DA710(Local_35.f_87);
	}
	func_41(1);
	func_37(&Local_35);
}

void func_4()
{
	switch (Local_35.f_3)
	{
		case 9:
			unk_0x07FB139B592FA687(1435f, -2385f, 1690f, -1885f);
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
	if (unk_0xF1B760881820C952(func_5(Local_35.f_3), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) > 300f)
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
							if (unk_0x7239B21A38F536BA((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0x5F9532F3B5CC2551((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0x3C606747B23E497B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x4D9CA1009AFBD057((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x9F7794730795E019((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, unk_0x997ABD671D25CA0B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false));
												unk_0x9F7794730795E019((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !unk_0x997ABD671D25CA0B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													unk_0xFF41B4B141ED981C((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													unk_0x9F7794730795E019((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													unk_0xF9B8F91AAD3B953E((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, false);
												}
												unk_0x7BF835BB9E2698C8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x9F8AA94D6D97DBF4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = unk_0x9CD27B0045628463();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0x9CD27B0045628463() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
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
													if ((unk_0x9CD27B0045628463() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], true), true) < 25f)
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
												unk_0x74D4E028107450A9((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												unk_0x4D9CA1009AFBD057((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x9F7794730795E019((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												unk_0x9F7794730795E019((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												unk_0x7BF835BB9E2698C8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x9F8AA94D6D97DBF4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
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
	if (unk_0x7239B21A38F536BA((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0x5F9532F3B5CC2551((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
		{
			unk_0x971D38760FBC02EF((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], true);
		}
		unk_0x2595DD4236549CE3(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_7))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_7))
		{
			if (unk_0x15B8ECF844EE67ED(iParam0->f_7))
			{
				unk_0xD30C50DF888D58B5(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0);
}

int func_11(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(iParam0))
		{
			unk_0xD30C50DF888D58B5(iParam0, true);
			uParam1->f_7 = iParam0;
			unk_0xE52B8E7F85D39A08(iParam0, iParam2);
			unk_0x97C65887D4B37FA9(iParam0, fParam6);
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
			}
		}
		unk_0x0C4BBF625CA98C4E(iParam0, bParam4);
		unk_0x3EED80DFF7325CAA(iParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(iParam0);
		if (!unk_0xA921AA820C25702F(uParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!unk_0xCA042B6957743895(sParam7))
				{
					unk_0xF9113A30DE5C6670("MCUSTBLIP");
					unk_0x6C188BE134E074AA(sParam7);
					unk_0xBC38B49BCB83BC9B(*uParam1);
				}
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(iParam0);
			if (!unk_0xA921AA820C25702F(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					unk_0xAE9FC9EF6A9FAC79(uParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
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
		if (!unk_0x7239B21A38F536BA((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
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

void func_14(int iParam0, struct<61> Param1, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, int iParam92)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			iVar0 = Param1.f_60[unk_0xD53343AA4FB7DD28(0, 3)];
			if (iParam92 != 0)
			{
				iVar0 = iParam92;
			}
			unk_0xBF0FD6E56C964FCB(iParam0, iVar0, -1, true, true);
			unk_0xADF692B254977C0C(iParam0, iVar0, true);
			unk_0x3EDCB0505123623B(iParam0, true, iVar0);
		}
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD49F9B0955C367DE(26, Local_35.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, true, true);
	unk_0x5BA7919BED300023(iVar0, true);
	unk_0x02A0C9720B854BFA(iVar0, true);
	unk_0xC80A74AC829DDD92(iVar0, Local_35.f_52);
	unk_0xEA02E132F5C68722(iVar0, true, 0f);
	unk_0x9F7794730795E019(iVar0, 5, true);
	unk_0x0703B9079823DA4A(iVar0, 1);
	unk_0x1913FE4CBF41C463(iVar0, 42, true);
	unk_0x1913FE4CBF41C463(iVar0, 132, true);
	unk_0xFF41B4B141ED981C(iVar0, 12, 30f);
	unk_0x7AEFB85C1D49DEB6(iVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (unk_0x7239B21A38F536BA((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!unk_0x5F9532F3B5CC2551((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0xF75B0D629E1C063D(iVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_141 = unk_0x9CD27B0045628463() + 1000;
	return iVar0;
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
		if (!unk_0x7239B21A38F536BA((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0xAF35D0D2583051B0((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, 1, 1);
	unk_0x0AD9E8F87FF7C16F(iVar0, false);
	return iVar0;
}

int func_18(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xD53343AA4FB7DD28(0, 10);
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
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	if (iParam9 == 1)
	{
		if (unk_0x50CAD495A460B305(Param0, 1.5f) > 0)
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (fParam6 > 0f)
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0, true) <= (fParam8 + fParam6))
			{
				if (unk_0xE33D59DA70B58FDF(Param0, fParam6))
				{
					return 0;
				}
			}
		}
	}
	if (fParam10 > 0f)
	{
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0, true) < fParam10)
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
					if (unk_0x7239B21A38F536BA((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0x5F9532F3B5CC2551((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (unk_0x4859F1FC66A6278E((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_35.f_84 == 1)
									{
										Local_35.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										unk_0x7BF835BB9E2698C8((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
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
			if (!unk_0xCA042B6957743895(Local_35.f_85))
			{
				if (unk_0x706D57B0F50DA710(Local_35.f_85))
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
			if (!unk_0xCA042B6957743895(Local_35.f_86))
			{
				if (unk_0x706D57B0F50DA710(Local_35.f_86))
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
				if (unk_0xA6DB27D19ECBB7DA(Local_142[0 /*122*/].f_2[iVar0 /*20*/].f_1))
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
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, false);
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
			if (!unk_0x7239B21A38F536BA(Local_142[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
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
			if (!unk_0x7239B21A38F536BA(Local_142[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
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
			if (unk_0xF372BC22FCB88606("PMD_ENEMIES", &(Local_35.f_52)))
			{
				unk_0xBF25EB89375A37AD(5, joaat("player"), Local_35.f_52);
				unk_0xBF25EB89375A37AD(5, Local_35.f_52, joaat("COP"));
				unk_0xBF25EB89375A37AD(5, Local_35.f_52, joaat("player"));
				unk_0xBF25EB89375A37AD(1, Local_35.f_52, Local_35.f_52);
			}
			Local_35.f_0 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	if (((((((((((Param0.f_53[0] == 0 || unk_0x98A4EB5D89A0C952(Param0.f_53[0])) && (Param0.f_53[1] == 0 || unk_0x98A4EB5D89A0C952(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || unk_0x98A4EB5D89A0C952(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || unk_0x98A4EB5D89A0C952(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0x98A4EB5D89A0C952(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || unk_0x1BBE0523B8DB9A21(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0x1BBE0523B8DB9A21(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || unk_0x36E353271F0E90EE(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || unk_0x36E353271F0E90EE(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || unk_0x36E353271F0E90EE(Param0.f_60[2]))) && unk_0x02245FE4BED318B8(0))
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
			unk_0x963D27A58DF860AC(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0x963D27A58DF860AC(Param0.f_57[iVar0]);
			unk_0x81A15811460FAB3A(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0x5443438F033E29C3(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	unk_0x71A78003C8E71424("PMD", 0);
}

void func_30(var uParam0)
{
	if (!func_20(uParam0->f_76) && !func_20(uParam0->f_79))
	{
		uParam0->f_82 = unk_0x1B5C85C612E5256E((uParam0->f_76 - uParam0->f_79), (uParam0->f_76.f_1 - uParam0->f_79.f_1), (uParam0->f_76.f_2 - uParam0->f_79.f_2), (uParam0->f_76 + uParam0->f_79), (uParam0->f_76.f_1 + uParam0->f_79.f_1), (uParam0->f_76.f_2 + uParam0->f_79.f_2), false, true, true, true);
	}
	if (!func_20(uParam0->f_72) && !uParam0->f_75 <= 0f)
	{
		unk_0xA56F01F3765B93A0(uParam0->f_72, uParam0->f_75, true, false, false, false);
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
		unk_0x31D16B74C6E29D66(uParam0->f_82, false);
	}
	unk_0x1090044AD1DA76FA();
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
			if (unk_0x7239B21A38F536BA((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0x629BFA74418D6239(&((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
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
			unk_0xE532F5D78798DAAB(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0xE532F5D78798DAAB(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0xAA08EF13F341C8FC(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

