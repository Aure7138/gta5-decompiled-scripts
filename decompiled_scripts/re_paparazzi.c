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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	struct<3> Local_575 = { 0, 0, 0 } ;
	struct<3> Local_578 = { 0, 0, 0 } ;
	struct<3> Local_581 = { 0, 0, 0 } ;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	struct<3> Local_596[4];
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	struct<3> Local_632 = { 0, 0, 0 } ;
	struct<3> Local_635 = { 0, 0, 0 } ;
	float fLocal_638 = 0f;
	struct<3> Local_639 = { 0, 0, 0 } ;
	struct<3> Local_642 = { 0, 0, 0 } ;
	float fLocal_645 = 0f;
	struct<3> Local_646 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_652 = 0f;
	struct<3> Local_653 = { 0, 0, 0 } ;
	struct<3> Local_656 = { 0, 0, 0 } ;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_53 = { 226.6825f, 681.0297f, 188.4987f };
	Local_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	Local_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	Local_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	Local_575 = { 272.6356f, 155.5618f, 103.3306f };
	Local_578 = { 247.5795f, 88.7094f, 92.9859f };
	Local_581 = { 259.0348f, 114.0369f, 98.9984f };
	Local_584 = { 255.4971f, 116.8744f, 99.8162f };
	Local_587 = { 266.8217f, 139.7698f, 103.2269f };
	Local_590 = { 270.0174f, 139.1181f, 103.2195f };
	Local_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	Local_632 = { 261.9341f, 126.2429f, 95.15405f };
	Local_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	Local_639 = { 261.9341f, 126.2429f, 107.6541f };
	Local_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	Local_646 = { 256.6779f, 126.573f, 99.54784f };
	Local_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	Local_653 = { 260.242f, 127.423f, 101.65f };
	Local_656 = { 0f, 0f, -20f };
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2170E7BC25114A22(11))
	{
		func_271();
	}
	func_270(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_228(Local_50, -1, 0, 0, 0))
		{
			func_225(-1);
		}
		else
		{
			unk_0x01DFCA3621B68C4A();
		}
	}
	uLocal_365 = unk_0x2B2CCF3F6B9ED3A3(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x2B2CCF3F6B9ED3A3(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x2B2CCF3F6B9ED3A3(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x500FFA49AC5ABB1D(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0xE6C975AE756267A4(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_222(&uLocal_97);
		if (!func_221())
		{
			if (func_220())
			{
				func_271();
			}
		}
		unk_0xC60972F08795B988("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x7887B64A08364778(Local_131[iVar0 /*18*/]) && !unk_0xB529B2A4B7C64D6D(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0xC086F8D75730FA3A(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0xB529B2A4B7C64D6D(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0xC086F8D75730FA3A(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			Local_60 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
		}
		if (!unk_0x00B5B0B68211D89B(iLocal_86))
		{
			Local_63 = { unk_0xC086F8D75730FA3A(iLocal_86, 1) };
		}
		if (unk_0x7887B64A08364778(iLocal_91) && !unk_0xB529B2A4B7C64D6D(iLocal_91, 0))
		{
			Local_66 = { unk_0xC086F8D75730FA3A(iLocal_91, 1) };
		}
		if (!func_221())
		{
			if (unk_0x0943F317505D1E39())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_211())
						{
							func_201();
							iLocal_369++;
						}
						else if (func_189())
						{
							func_271();
						}
						break;
					
					case 1:
						if ((func_188() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || !unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_187();
								func_271();
							}
						}
						else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_178(1);
							uLocal_360 = func_177(iLocal_86, 0, 145);
							func_176("MAG_2_ESCAPE_PAP_GET_CAR");
							func_175(0);
						}
						break;
				}
			}
			else
			{
				func_271();
			}
		}
		else
		{
			unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
			switch (iLocal_47)
			{
				case 0:
					func_172();
					break;
				
				case 1:
					func_169();
					break;
				
				case 2:
					func_147();
					break;
				
				case 3:
					func_135();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_271();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_371);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0x7887B64A08364778(iLocal_86))
						{
							unk_0xA2AC407F9132DD0B(&iLocal_86);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_63, 210f, 210f, 210f, 0, 1, 0))
			{
				func_187();
				func_271();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_68(iLocal_86, 1, 1) || func_67())
					{
						if (iLocal_47 > 0)
						{
							func_175(5);
						}
						else
						{
							func_187();
							func_175(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_63())
						{
							func_175(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_74 || func_19() != 0))
			{
				if ((!unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x84A97C70FFDEC0C8() - iLocal_564) > 5000) && !unk_0x00B5B0B68211D89B(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
					{
						if (func_221())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_18(&Local_395, 4);
								func_17(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = unk_0x84A97C70FFDEC0C8();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x7BC26452241AC7C9(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0x84A97C70FFDEC0C8();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		iVar0 = unk_0x3349F29CAC088F0B(unk_0xD5A676B97920D126());
		if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
		{
			iVar1 = unk_0x98BE504E8B389665(iVar0, 0, 0);
			if (!unk_0x00B5B0B68211D89B(iVar1))
			{
				if (iVar1 != unk_0xD5A676B97920D126())
				{
					if (unk_0x2A29BF08180E7ADF(iVar1))
					{
						if (!unk_0xE1A5247B3FE06469(iVar1, unk_0xD5A676B97920D126()))
						{
							unk_0x0988FFC0C75637DF(iVar1, unk_0xD5A676B97920D126(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
		{
			if (unk_0xB38A470B669AC00B(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0x7D720C677145C91C(Local_204[iVar0 /*18*/], unk_0xD5A676B97920D126(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0xB38A470B669AC00B(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0xB38A470B669AC00B(Local_204[iVar0 /*18*/])));
					unk_0x3C05FE2296BF5F53(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0xB38A470B669AC00B(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x063B714A2080E45E(uParam0, cParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()
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

void func_8()
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

int func_9()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
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

void func_11()
{
	if (func_12(14))
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
		Global_14443 = func_19();
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

bool func_12(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_13()
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

bool func_14(int iParam0, int iParam1)
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

void func_15()
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()
{
	func_20();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_23(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_22(unk_0xD5A676B97920D126());
			if (func_21(iVar0) && (!func_12(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_21(Global_101652.f_2079.f_539.f_3549))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/])) && !unk_0x00B5B0B68211D89B(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			unk_0x4ACD1E4CBA159ED1(joaat("a_m_y_genstreet_02"));
			unk_0x4ACD1E4CBA159ED1(joaat("prop_pap_camera_01"));
			unk_0x4ACD1E4CBA159ED1(joaat("cavalcade2"));
			unk_0x4ACD1E4CBA159ED1(joaat("vader"));
			unk_0x49E996A1E39EAAD7(sLocal_373);
			unk_0x49E996A1E39EAAD7("random@paparazzi@pap_anims");
			if (((((unk_0x7AD0E9452821C95D(joaat("a_m_y_genstreet_02")) && unk_0x7AD0E9452821C95D(joaat("prop_pap_camera_01"))) && unk_0x7AD0E9452821C95D(joaat("cavalcade2"))) && unk_0x7AD0E9452821C95D(joaat("vader"))) && unk_0xD7669BF035CDA5F6(sLocal_373)) && unk_0xD7669BF035CDA5F6("random@paparazzi@pap_anims"))
			{
				Local_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), Local_596[1 /*3*/], fLocal_609[1]);
				func_58(func_59(3), Local_596[1 /*3*/], fLocal_609[1]);
				func_57(0, Local_596[0 /*3*/], fLocal_609[0], 1);
				func_57(1, Local_596[1 /*3*/], fLocal_609[1], 0);
				unk_0xBB9A2DB94A862D7A(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(func_56(0, 1), 217.1033f);
				unk_0xBB9A2DB94A862D7A(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(func_56(2, 1), 38.6283f);
				unk_0xBB9A2DB94A862D7A(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x99569FEC2425586D(func_56(3, 1), 272.9875f);
				unk_0x290A57C93304EF16(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x290A57C93304EF16(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x7887B64A08364778(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0xA3E7DE487D314279(Local_204[2 /*18*/].f_2))
				{
					unk_0xB5024B946329EB6A(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x00B5B0B68211D89B(func_56(1, 0)))
					{
						unk_0x37338B7B7C4982DC(func_56(1, 0));
					}
					if (!unk_0x00B5B0B68211D89B(func_56(1, 1)))
					{
						unk_0x37338B7B7C4982DC(func_56(1, 1));
					}
					if (!unk_0x7887B64A08364778(Local_131[2 /*18*/]))
					{
						func_57(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0xA4DB44DF73EF4FE5(Local_131[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0xC086F8D75730FA3A(Local_131[2 /*18*/], 1), 0f);
							unk_0x5467EF651716201E(func_56(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0x7887B64A08364778(Local_131[3 /*18*/]))
					{
						func_57(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x00B5B0B68211D89B(func_56(2, 1)))
					{
						unk_0x1D2CBA8F2F00D745(func_56(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x00B5B0B68211D89B(func_56(3, 1)))
					{
						unk_0x1D2CBA8F2F00D745(func_56(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x7887B64A08364778(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x00B5B0B68211D89B(func_56(1, 0)))
						{
							unk_0x1D2CBA8F2F00D745(func_56(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x00B5B0B68211D89B(func_56(1, 1)))
						{
							unk_0x1D2CBA8F2F00D745(func_56(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x00B5B0B68211D89B(func_56(0, 1)))
						{
							unk_0x1D2CBA8F2F00D745(func_56(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0x7887B64A08364778(Local_204[iVar1 /*18*/]))
						{
							unk_0x233D2784147A4FE4(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0x7887B64A08364778(Local_131[iVar1 /*18*/]))
						{
							unk_0x233D2784147A4FE4(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xA4DB44DF73EF4FE5(Local_131[0 /*18*/], 0) && !unk_0x00B5B0B68211D89B(func_56(0, 0))) && !unk_0x00B5B0B68211D89B(func_56(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0xCE8917A47B1D85F4(func_56(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xA4DB44DF73EF4FE5(Local_131[2 /*18*/], 0) && !unk_0x00B5B0B68211D89B(func_56(2, 0))) && !unk_0x00B5B0B68211D89B(func_56(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0xCE8917A47B1D85F4(func_56(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0x7887B64A08364778(iLocal_86) && !unk_0x00B5B0B68211D89B(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x00B5B0B68211D89B(func_56(1, 0)))
							{
								if (unk_0x1AAFFE4111587B35(func_56(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_61(1));
								}
							}
							if (!unk_0x00B5B0B68211D89B(func_56(1, 1)))
							{
								if (unk_0x1AAFFE4111587B35(func_56(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_59(1));
								}
							}
							if (!unk_0x00B5B0B68211D89B(func_56(0, 1)))
							{
								if (unk_0x1AAFFE4111587B35(func_56(0, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_86, func_61(1));
							func_46(iLocal_86, func_59(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_46(iLocal_86, func_61(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0x1AAFFE4111587B35(func_56(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(2));
						}
						if (unk_0x1AAFFE4111587B35(func_56(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(3));
						}
						if (unk_0x1AAFFE4111587B35(func_56(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(0));
						}
					}
					else
					{
						if (!unk_0xF44A5E894FE76438(iLocal_619, 3))
						{
							unk_0x37338B7B7C4982DC(Local_204[func_59(3) /*18*/]);
							unk_0xB8A73E7DA87B2968(&iLocal_619, 3);
						}
						if (!unk_0xF44A5E894FE76438(iLocal_619, 2))
						{
							unk_0x37338B7B7C4982DC(Local_204[func_59(2) /*18*/]);
							unk_0xB8A73E7DA87B2968(&iLocal_619, 2);
						}
						if (!unk_0xF44A5E894FE76438(iLocal_619, 0))
						{
							unk_0x37338B7B7C4982DC(Local_204[func_59(0) /*18*/]);
							unk_0xB8A73E7DA87B2968(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_45(iLocal_86, func_59(3));
						}
						else
						{
							func_46(iLocal_86, func_59(3));
						}
						func_46(iLocal_86, func_59(2));
						func_46(iLocal_86, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
			{
				if (unk_0x78D3CDB884C74FEB(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0x758A470BA92498EA());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x7887B64A08364778(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0x7887B64A08364778(Local_131[0 /*18*/])) || !unk_0x7887B64A08364778(Local_131[1 /*18*/]))) && (unk_0x84A97C70FFDEC0C8() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0x84A97C70FFDEC0C8() - iLocal_370) < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0x84A97C70FFDEC0C8();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0x00B5B0B68211D89B(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x00B5B0B68211D89B(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0x04D83291EB9DE51D(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0x1774A68441553185(Local_204[iVar2 /*18*/], -1794415470) != 1 && unk_0x06F2E112EBC0C4FB(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0x87D70F1F81DB77D3(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x00B5B0B68211D89B(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0x04D83291EB9DE51D(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0x1774A68441553185(Local_204[iVar3 /*18*/], -1794415470) != 1 && unk_0x06F2E112EBC0C4FB(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0x87D70F1F81DB77D3(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x00B5B0B68211D89B(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x00B5B0B68211D89B(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0x04D83291EB9DE51D(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x04D83291EB9DE51D(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
											{
												if (unk_0x1774A68441553185(Local_204[iVar2 /*18*/], -1273030092) != 1 && unk_0x1774A68441553185(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x77E24C0B92B4FC24(Local_204[iVar2 /*18*/], 3, 0);
													unk_0x77E24C0B92B4FC24(Local_204[iVar2 /*18*/], 1, 1);
													unk_0x77E24C0B92B4FC24(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0xAFB9178F82948856(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0xAFB9178F82948856(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0xAFB9178F82948856(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0xAFB9178F82948856(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xBE59118F0063886A(Local_204[iVar2 /*18*/], func_39((3f * unk_0x8E92CDAEB8357ABD(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x00B5B0B68211D89B(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0xFCDC1684830866E8(Local_204[iVar2 /*18*/]))
									{
										unk_0x738326127C161284(Local_204[iVar2 /*18*/], 2, 0);
										unk_0xBB8F1D58B7578137(Local_204[iVar2 /*18*/], unk_0xD5A676B97920D126(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x00B5B0B68211D89B(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0xFCDC1684830866E8(Local_204[iVar3 /*18*/]))
										{
											unk_0x738326127C161284(Local_204[iVar3 /*18*/], 2, 0);
											unk_0xBB8F1D58B7578137(Local_204[iVar3 /*18*/], unk_0xD5A676B97920D126(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x6A0583ECFCCECC9B(Local_204[iVar2 /*18*/], 0))
							{
								unk_0xE9148EE8AA200B60(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x00B5B0B68211D89B(Local_204[iVar3 /*18*/]))
								{
									if (unk_0x6A0583ECFCCECC9B(Local_204[iVar3 /*18*/], 0))
									{
										unk_0xE9148EE8AA200B60(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x00B5B0B68211D89B(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x00B5B0B68211D89B(Local_204[iVar3 /*18*/]))) && unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x27A556D1AF39812E(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x27A556D1AF39812E(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x27A556D1AF39812E(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x04D83291EB9DE51D(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0x5467EF651716201E(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x04D83291EB9DE51D(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0x5467EF651716201E(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0x00B5B0B68211D89B(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x00B5B0B68211D89B(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x04D83291EB9DE51D(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x1774A68441553185(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x87D70F1F81DB77D3(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x00B5B0B68211D89B(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x04D83291EB9DE51D(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0x1774A68441553185(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x87D70F1F81DB77D3(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x00B5B0B68211D89B(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x00B5B0B68211D89B(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0x04D83291EB9DE51D(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x04D83291EB9DE51D(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x84A97C70FFDEC0C8() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x84A97C70FFDEC0C8() - iLocal_85) > 4000)
									{
										unk_0x59F13C3A11B77BB8(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0xA4DB44DF73EF4FE5(Local_131[iVar8 /*18*/], 0) && !unk_0x00B5B0B68211D89B(func_56(iVar8, 0))) && unk_0x04D83291EB9DE51D(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0x37338B7B7C4982DC(func_56(iVar8, 0));
												unk_0xAFB9178F82948856(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0x1774A68441553185(Local_204[iVar5 /*18*/], -1273030092) != 1 && unk_0x1774A68441553185(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x77E24C0B92B4FC24(Local_204[iVar5 /*18*/], 3, 0);
										unk_0x77E24C0B92B4FC24(Local_204[iVar5 /*18*/], 1, 1);
										unk_0x77E24C0B92B4FC24(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0xAFB9178F82948856(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0xAFB9178F82948856(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0xAFB9178F82948856(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0xAFB9178F82948856(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x00B5B0B68211D89B(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xFCDC1684830866E8(Local_204[iVar5 /*18*/]))
							{
								unk_0x738326127C161284(Local_204[iVar5 /*18*/], 2, 0);
								unk_0xBB8F1D58B7578137(Local_204[iVar5 /*18*/], unk_0xD5A676B97920D126(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x00B5B0B68211D89B(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xFCDC1684830866E8(Local_204[iVar6 /*18*/]))
								{
									unk_0x738326127C161284(Local_204[iVar6 /*18*/], 2, 0);
									unk_0xBB8F1D58B7578137(Local_204[iVar6 /*18*/], unk_0xD5A676B97920D126(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_617, 10f))
				{
					func_37(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_617, 1125515264))
			{
				func_37(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0xC55B9553B3EDADE9(sLocal_373))
				{
					func_28(iVar0);
					if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/].f_2) && unk_0x4FAD9D28DF12811B(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0x6A0583ECFCCECC9B(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0xA3E7DE487D314279(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0x03D369634BAB7D91(Local_204[iVar0 /*18*/]))
								{
									unk_0xB5024B946329EB6A(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0x03D369634BAB7D91(Local_204[iVar0 /*18*/]))
							{
								unk_0xB5024B946329EB6A(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0x27A556D1AF39812E(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0xEBA40DFF7CCE3511(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0xEBA40DFF7CCE3511(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0x290A57C93304EF16(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0x290A57C93304EF16(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x34868F78B53C7F66(sLocal_373);
								if (unk_0x7F2866878D364099(sLocal_373))
								{
									unk_0xA14ECBA790322506(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0x290A57C93304EF16(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x63CCF298723C4BD4(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x81C4995860081BC3(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], unk_0x0DBD8FE531FD620D(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0xA3E7DE487D314279(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0xB5024B946329EB6A(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0xA3E7DE487D314279(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xB5024B946329EB6A(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0x290A57C93304EF16(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0x63CCF298723C4BD4(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0x63F7D2743457E11D(Local_204[iVar0 /*18*/]) && unk_0x3DFB3BFF04D48E00(unk_0xD5A676B97920D126()))
				{
					func_175(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x7887B64A08364778(Local_131[iVar0 /*18*/]))
			{
				if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Local_131[iVar0 /*18*/], 0))
					{
						func_175(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) && !unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
		{
			if (unk_0x98BE504E8B389665(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x98BE504E8B389665(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x98BE504E8B389665(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (unk_0x1F2CF2B9307EAB08(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						unk_0x4EA098C870B73AB7(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (unk_0x1F2CF2B9307EAB08(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x4EA098C870B73AB7(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0x4EA098C870B73AB7(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		iVar0 = func_59(iLocal_568);
		if (((unk_0x7887B64A08364778(Local_131[iLocal_568 /*18*/]) && unk_0xA4DB44DF73EF4FE5(Local_131[iLocal_568 /*18*/], 0)) && unk_0x7887B64A08364778(Local_204[iVar0 /*18*/])) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x960985BE189C5A3B(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x98BE504E8B389665(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x84A97C70FFDEC0C8() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0xEBA40DFF7CCE3511(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0x290A57C93304EF16(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x98BE504E8B389665(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0xBE261F99A780CCE4(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0x84A97C70FFDEC0C8();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0x84A97C70FFDEC0C8() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131.f_0)
		{
			iLocal_568 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x00B5B0B68211D89B(Local_204[iParam0 /*18*/]) && !unk_0x00B5B0B68211D89B(iLocal_86))
	{
		iVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0xF42BD66111346ACC(Local_204[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0xC3D3EC28F0EB3C6D(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0xF44A5E894FE76438(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xB8A73E7DA87B2968(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_34(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_35(Param0) };
	Param3 = { func_35(Param3) };
	fVar0 = (unk_0x2047800436E7B1E2(Param3.f_1, Param3.f_0) - unk_0x2047800436E7B1E2(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xC55B9553B3EDADE9(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xF44A5E894FE76438(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(Local_131[iParam0 /*18*/]) && unk_0x27A556D1AF39812E(Local_131[iParam0 /*18*/]))
	{
		unk_0xAA8D7DFFDAAB903E(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0x6901135DDCC4904D(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0x8A3D7569826A325D(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0x7887B64A08364778(Local_204[iVar1 /*18*/]) && unk_0x27A556D1AF39812E(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x7887B64A08364778(Local_204[iVar1 /*18*/]))
			{
				unk_0x77CEDAB7C44BFD4E(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0x6901135DDCC4904D(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0x8A3D7569826A325D(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0xA2AC407F9132DD0B(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x7887B64A08364778(Local_131[iParam0 /*18*/]))
	{
		if (unk_0xA4DB44DF73EF4FE5(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x27A556D1AF39812E(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7887B64A08364778(func_56(iParam0, 0)))
	{
		if (!unk_0x00B5B0B68211D89B(func_56(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x27A556D1AF39812E(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7887B64A08364778(func_56(iParam0, 1)))
	{
		if (!unk_0x00B5B0B68211D89B(func_56(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x27A556D1AF39812E(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (((((unk_0x7887B64A08364778(iParam1) && iParam0 != iParam1) && !unk_0xDA82A890460AACEE(unk_0xA0A4DA31DEDFAC4F(iParam1))) && !unk_0x825416FB822BF706(unk_0xA0A4DA31DEDFAC4F(iParam1))) && !unk_0x4B09D3321F53E524(unk_0xA0A4DA31DEDFAC4F(iParam1))) && !unk_0x8F8A0D55EBDCBE44(unk_0xA0A4DA31DEDFAC4F(iParam1)))
		{
			if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, unk_0xC086F8D75730FA3A(iParam1, 1), unk_0xB73B9913DD4EE2AA(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x0A0C20E171493CD0(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
					*uParam5 = unk_0x714F015B4D2DE1DC(iParam1);
				}
			}
			if (!unk_0x27A556D1AF39812E(iParam0))
			{
				*uParam6 = unk_0x84A97C70FFDEC0C8();
			}
			else if ((unk_0x84A97C70FFDEC0C8() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0xBB36CABE30AE5FC4(*uParam2, 6f))
						{
							unk_0x7B2D1A3447B0AD5C(*uParam2, 6f, 0);
							unk_0xBCDF9E3086B4229C(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0xBB9A2DB94A862D7A(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x99569FEC2425586D(iParam0, *uParam3);
							unk_0x2D739561304957CC(iParam0, 1084227584);
							unk_0x9773EF10686D53C8(iParam0, func_39((unk_0x78D3CDB884C74FEB(iParam1) + 10f), 10f, 60f));
							unk_0x09AB636BA0F9BE90(iParam0, 1, 1, 0);
							*uParam6 = unk_0x84A97C70FFDEC0C8();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x84A97C70FFDEC0C8();
		}
	}
}

int func_41(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, int iParam2)
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

int func_43(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	var uVar35;
	
	if (unk_0x7887B64A08364778(iParam2))
	{
		unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
		unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam1), &Var13, &uVar16);
		fVar19 = unk_0xC3D3EC28F0EB3C6D((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0xC3D3EC28F0EB3C6D((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0xC3D3EC28F0EB3C6D((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0xC3D3EC28F0EB3C6D(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0xC3D3EC28F0EB3C6D(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xBB9A2DB94A862D7A(iParam2, Param3, 1, 0, 0, 1);
		unk_0x0033076C5BC6D1E9(iParam2, Param6, 2, 1);
		Var1 = { unk_0x7E140C583F91AE2B(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x7E140C583F91AE2B(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xF9A18E213C1E726D(Var4, Var1, fVar22, 19, unk_0xD5A676B97920D126(), 4);
		if (unk_0xEE7715D6C4A7B1F2(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()
{
	bool bVar0;
	
	if ((unk_0x84A97C70FFDEC0C8() - iLocal_567) > 100)
	{
		if ((unk_0x84A97C70FFDEC0C8() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0x7887B64A08364778(Local_204[iLocal_566 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0x6A0583ECFCCECC9B(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0xEBA40DFF7CCE3511(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && unk_0x1F2CF2B9307EAB08(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && unk_0x1F2CF2B9307EAB08(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0x613C35B63D0905A3("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0xEE59E0DAFA4B08CD(-1, "SHUTTER_FLASH", unk_0xC086F8D75730FA3A(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0xEE59E0DAFA4B08CD(-1, "SHUTTER", unk_0xC086F8D75730FA3A(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0xEE59E0DAFA4B08CD(-1, "FLASH", unk_0xC086F8D75730FA3A(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0x84A97C70FFDEC0C8();
					}
					iLocal_567 = unk_0x84A97C70FFDEC0C8();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204.f_0)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0x00B5B0B68211D89B(Local_204[iParam1 /*18*/]) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		if (!unk_0x205B4FC17ACAF4C8(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0x1774A68441553185(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0xBE29918F5B8EC2EF(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x84A97C70FFDEC0C8() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0xEBA40DFF7CCE3511(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				unk_0x290A57C93304EF16(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x00B5B0B68211D89B(Local_204[iParam1 /*18*/]) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, func_48(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x1774A68441553185(Local_204[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (unk_0x1774A68441553185(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_35(unk_0xC086F8D75730FA3A(iParam4, 1) - Param0) };
	iVar3 = unk_0x1467106C5D2966B9(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x37338B7B7C4982DC(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x1D2CBA8F2F00D745(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x1D2CBA8F2F00D745(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x6901135DDCC4904D(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
			{
				unk_0x8A3D7569826A325D(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0x6A0583ECFCCECC9B(Local_204[iVar0 /*18*/], 0))
			{
				unk_0x8A3D7569826A325D(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]) && !unk_0x6A0583ECFCCECC9B(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_177(Local_204[iVar0 /*18*/], 1, 145);
			unk_0x2EDAF851B28036F0(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0x6901135DDCC4904D(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0xAEB3F4D3AF0E0C0B(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x4B55FF1D49C3A70D(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0x8A3D7569826A325D(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0x4F095059F1C175D5(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0x2EDAF851B28036F0(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x0D792BA553E57B27(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0x6901135DDCC4904D(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x8A3D7569826A325D(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0xF563C3AC64885E69(uVar0, func_51(unk_0x1995B52453EF6537(), 1f, 1f));
	unk_0xD947D2F43FD7F6D7(uVar0, iParam3);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x7D44D16B4A9E941E(uParam0) + 1;
	if (iParam4 || !unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
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

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x06F2E112EBC0C4FB(uParam0, iParam1, iParam3))
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

void func_54(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x00B5B0B68211D89B(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0x1774A68441553185(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x1D2CBA8F2F00D745(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0xC3D3EC28F0EB3C6D((func_55(unk_0x714F015B4D2DE1DC(Local_204[iParam0 /*18*/])) - func_55(fParam4))) > 10f)
		{
			if (unk_0x1774A68441553185(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0xA7D2EDC881768869(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0xC55B9553B3EDADE9(sParam7))
					{
						if (!unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x1F2CF2B9307EAB08(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0xEBA40DFF7CCE3511(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x1F2CF2B9307EAB08(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x290A57C93304EF16(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_61(iParam0) /*18*/];
	}
	return Local_204[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = unk_0xDE8A46A23FDCBBFE(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0xDE8A46A23FDCBBFE(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		unk_0xE7D6BFCADFE1076B(Local_131[iParam0 /*18*/], 0);
	}
	unk_0x2D739561304957CC(Local_131[iParam0 /*18*/], 1084227584);
	unk_0xD7F5C6888DC98485(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x7887B64A08364778(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), Param1, fParam4);
		}
		if (!unk_0x7887B64A08364778(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), Param1, fParam4);
		}
		if (!unk_0x00B5B0B68211D89B(func_56(iParam0, 0)) && unk_0xA4DB44DF73EF4FE5(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x5467EF651716201E(func_56(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x00B5B0B68211D89B(func_56(iParam0, 1)) && unk_0xA4DB44DF73EF4FE5(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x5467EF651716201E(func_56(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0x09AB636BA0F9BE90(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_58(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0x8C855D8124E955CE(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x77E24C0B92B4FC24(Local_204[iParam0 /*18*/], 1, 0);
	unk_0x5457695C257D1470(Local_204[iParam0 /*18*/], 1);
	unk_0x77E24C0B92B4FC24(Local_204[iParam0 /*18*/], 0, 1);
	unk_0x178D16D6E43C6FAE(Local_204[iParam0 /*18*/], 3);
	unk_0x58A5671D02E335D1(Local_204[iParam0 /*18*/], 1);
	unk_0x77E24C0B92B4FC24(Local_204[iParam0 /*18*/], 17, 1);
	unk_0x738326127C161284(Local_204[iParam0 /*18*/], 2, 0);
	unk_0x0BD3F78CDD5346A8(Local_204[iParam0 /*18*/], 0);
	unk_0x7D99F00F48D15ADB(Local_204[iParam0 /*18*/], 1);
	unk_0xB785E6EFFAAD2E3C(Local_204[iParam0 /*18*/], 100);
	unk_0x7EA5FBD90937FE97(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x237B0CFB6EEBD3BA(Local_204[iParam0 /*18*/], 101, 1);
	unk_0x237B0CFB6EEBD3BA(Local_204[iParam0 /*18*/], 185, 0);
	unk_0xE81D470B804DC69A(Local_204[iParam0 /*18*/], 300);
	unk_0x5BD2F51088536150(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0x0A924F4E6E826379(Local_204[iParam0 /*18*/], 1);
		unk_0xE81D470B804DC69A(Local_204[iParam0 /*18*/], 500);
	}
	unk_0x37B0D239F4029CF2(Local_204[iParam0 /*18*/], 1);
	unk_0x77E24C0B92B4FC24(Local_204[iParam0 /*18*/], 2, 1);
	unk_0x759857815829A6A8(Local_204[iParam0 /*18*/], 2f);
	unk_0x0BD3F78CDD5346A8(Local_204[iParam0 /*18*/], 0);
	unk_0xAD9B2747252CCD14(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0xF21B698F4FCCA3D3(joaat("prop_pap_camera_01"), unk_0x6DE9A8183DA7678E(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0xD157F7C56C5A2FCC(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xF9F732E1B7BD0FE4(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x7887B64A08364778(Local_204[0 /*18*/].f_2))
	{
		unk_0xB5024B946329EB6A(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0xB38A470B669AC00B(Local_204[iParam0 /*18*/]);
}

int func_59(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)
{
	return iParam0 * 2;
}

void func_62(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_63()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0x7887B64A08364778(func_65()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(func_65(), 1), Local_63) < 5f && unk_0x78D3CDB884C74FEB(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
		{
			if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0) && unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0x758A470BA92498EA());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0x758A470BA92498EA());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!unk_0xE4133A0C3C6C74A7(iLocal_86, iLocal_91))
			{
				if (unk_0x9B0C8A2FC23E64AB(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0xE4133A0C3C6C74A7(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && func_64(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && unk_0x3ACA21A90E0A949C(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x7BC26452241AC7C9(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (((unk_0x4EC2DD24B6F44441(iParam0, 0, 7000) || unk_0x4EC2DD24B6F44441(iParam0, 3, 30000)) || unk_0x4EC2DD24B6F44441(iParam0, 2, 30000)) || unk_0x4EC2DD24B6F44441(iParam0, 1, 40000))
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

int func_65()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/])) && !unk_0x00B5B0B68211D89B(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_66()
{
	if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_86))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (func_68(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]) || unk_0xB529B2A4B7C64D6D(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
		if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 7))
		{
			unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x1DEB1994A3C25E35(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) && !unk_0xAB3AA0F867F67480(unk_0xD5A676B97920D126())) && unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0x515E262CBF491958(unk_0xD5A676B97920D126())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iParam0) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iParam0)) && (func_69(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0xC086F8D75730FA3A(iParam0, 1)) < 100f)) && unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0xB8BA2B805FCFD11B(unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x7887B64A08364778(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0xC086F8D75730FA3A(iParam3, 1) };
	Var3 = { unk_0x7E140C583F91AE2B(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_70(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_71()
{
	if (iLocal_47 != 11)
	{
		if (unk_0x6901135DDCC4904D(uLocal_362))
		{
			unk_0x8A3D7569826A325D(&uLocal_362);
		}
		if (unk_0x6901135DDCC4904D(uLocal_363))
		{
			unk_0x8A3D7569826A325D(&uLocal_363);
		}
		if (unk_0x6901135DDCC4904D(uLocal_360))
		{
			unk_0x8A3D7569826A325D(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_175(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_72(char* sParam0)
{
	if ((unk_0x84A97C70FFDEC0C8() - iLocal_667) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
}

int func_73()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0x84A97C70FFDEC0C8() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0x84A97C70FFDEC0C8() - iLocal_356) > 4000)
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) && unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_175(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0x84A97C70FFDEC0C8() - iLocal_354) > 15000)
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = unk_0x84A97C70FFDEC0C8();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0x84A97C70FFDEC0C8();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0x84A97C70FFDEC0C8();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0x84A97C70FFDEC0C8();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_75()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		unk_0x7D99F00F48D15ADB(iLocal_86, 1);
		unk_0x42AFB71D42AF78EA(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0x237B0CFB6EEBD3BA(iLocal_86, 317, 1);
			unk_0x5457695C257D1470(iLocal_86, 0);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0x5008FE1ECDFA67CF(62);
	func_271();
}

void func_76()
{
	func_77();
}

int func_77()
{
	if (func_78(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_78(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_101652.f_23938.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_101640 = iParam1;
		if (Global_101638 == 0)
		{
			if (((Global_101641 == 1 || Global_101641 == 5) || Global_101641 == 11) || Global_101641 == 25)
			{
				func_80(2);
			}
			else if ((Global_101641 == 26 || Global_101641 == 8) || Global_101641 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)
{
	Global_101638 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_85((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = uParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_82();
	}
}

void func_82()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_84(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_83() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()
{
	return Global_25185;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_86()
{
	return Global_1312731;
}

int func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_19353.f_150[iVar1]), iVar0);
	}
}

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCC257DA11A122B5F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_101652.f_19353[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101652.f_19353.f_145 < 9)
	{
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_4), sParam1, 16);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_8 = (unk_0x84A97C70FFDEC0C8() + iParam3);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_9 = iParam5;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_11 = iParam6;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_12 = uParam2;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_13 = iParam7;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_14 = iParam8;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = ((unk_0x84A97C70FFDEC0C8() + iParam3) + iParam4);
		}
		else
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = -1;
		}
		Global_101652.f_19353.f_145++;
		func_92();
	}
}

void func_92()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101652.f_19353.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[0])
			{
				Global_101652.f_19353.f_146[0] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[1])
			{
				Global_101652.f_19353.f_146[1] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[2])
			{
				Global_101652.f_19353.f_146[2] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_93()
{
	func_20();
	switch (Global_101652.f_2079.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19353.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_23938.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_97()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0FBCE11007AF301F(), 64);
	uVar16 = func_98(Var0);
	return uVar16;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6D9FF4C899CD785F(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_99()
{
	if (Global_25420)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (unk_0x6901135DDCC4904D(uLocal_360))
	{
		unk_0x8A3D7569826A325D(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(iLocal_86))
			{
				unk_0xBB8F1D58B7578137(iLocal_86, unk_0xD5A676B97920D126(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
				{
					if (unk_0x27A556D1AF39812E(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_204[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 900f)
					{
						if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x77CEDAB7C44BFD4E(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xA2AC407F9132DD0B(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0x6901135DDCC4904D(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0x8A3D7569826A325D(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x7887B64A08364778(Local_131[iVar0 /*18*/]))
				{
					if (unk_0x27A556D1AF39812E(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_131[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 900f)
					{
						unk_0xAA8D7DFFDAAB903E(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0x6901135DDCC4904D(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0x8A3D7569826A325D(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if ((unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/])) && !unk_0xB529B2A4B7C64D6D(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0xD5A676B97920D126(), iVar0);
					if (unk_0x27A556D1AF39812E(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_204[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 2500f)
					{
						if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x77CEDAB7C44BFD4E(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xA2AC407F9132DD0B(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(func_65(), 1)) < 100f)
				{
					iVar2 = unk_0x7BC26452241AC7C9(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[6 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[7 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[8 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = unk_0x7BC26452241AC7C9(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = unk_0x7BC26452241AC7C9(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7887B64A08364778(Local_395[iVar2 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_187();
				func_271();
			}
			if (iVar1 == 0)
			{
				func_271();
			}
			break;
	}
}

void func_101(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
			{
				unk_0x37338B7B7C4982DC(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x6901135DDCC4904D(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0x8A3D7569826A325D(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x00B5B0B68211D89B(iLocal_86))
				{
					if (unk_0x6A0583ECFCCECC9B(Local_204[iVar0 /*18*/], 0))
					{
						unk_0xE9148EE8AA200B60(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (unk_0x1774A68441553185(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xEBF1276539CCAA92(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x27A556D1AF39812E(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_204[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_204[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 400f)
			{
				unk_0xA2AC407F9132DD0B(&(Local_204[iVar0 /*18*/]));
				if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0x77CEDAB7C44BFD4E(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x7887B64A08364778(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0x27A556D1AF39812E(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(Local_131[iVar0 /*18*/], 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0xB24D3BF5DABD13AA(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0x6901135DDCC4904D(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x8A3D7569826A325D(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x7887B64A08364778(iLocal_86))
	{
		if (unk_0x27A556D1AF39812E(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_63) > 2500f)
		{
			unk_0xD4B3FF1E63C36391(&iLocal_86);
			func_271();
		}
	}
	if (func_67() || func_68(iLocal_86, 1, 1))
	{
		func_175(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0x6901135DDCC4904D(uLocal_360))
			{
				unk_0x8A3D7569826A325D(&uLocal_360);
			}
			if (unk_0x6901135DDCC4904D(uLocal_361))
			{
				unk_0x8A3D7569826A325D(&uLocal_361);
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_86))
			{
				unk_0x37338B7B7C4982DC(iLocal_86);
				unk_0x759857815829A6A8(iLocal_86, 3f);
			}
			func_102();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
							{
								unk_0x37338B7B7C4982DC(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204.f_0)
				{
					if (unk_0x7887B64A08364778(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
						{
							unk_0x37338B7B7C4982DC(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0x06F2E112EBC0C4FB(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x456121A0AAC868D4(&uVar2);
					unk_0x1F2491165090EA68(0, iLocal_91);
					unk_0xCE8917A47B1D85F4(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xB19F1873A6D9D2CB(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0x3690E6B5EAFA8E93(0, iLocal_91, unk_0xC086F8D75730FA3A(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x458C747DC544B598(0, iLocal_91, 0);
					unk_0x1D2CBA8F2F00D745(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xCFE67FBB69F1C410(uVar2);
					unk_0x8B06B801B92CEC2D(iLocal_86, uVar2);
					unk_0x873418BFBF9A6780(&uVar2);
				}
				else
				{
					unk_0x456121A0AAC868D4(&uVar3);
					unk_0x1F2491165090EA68(0, iLocal_91);
					unk_0xB192238F4F854097(0, iLocal_91, 15f, 786468);
					unk_0xCFE67FBB69F1C410(uVar3);
					unk_0x8B06B801B92CEC2D(iLocal_86, uVar3);
					unk_0x873418BFBF9A6780(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x6A0583ECFCCECC9B(iLocal_86, 0))
				{
					unk_0xE9148EE8AA200B60(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xBB8F1D58B7578137(iLocal_86, unk_0xD5A676B97920D126(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x456121A0AAC868D4(&uVar4);
					unk_0x1D2CBA8F2F00D745(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xCFE67FBB69F1C410(uVar4);
					unk_0x8B06B801B92CEC2D(iLocal_86, uVar4);
					unk_0x873418BFBF9A6780(&uVar4);
				}
				else
				{
					unk_0xEBF1276539CCAA92(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_271();
			}
			break;
	}
}

void func_102()
{
	Global_14611 = 0;
	func_103();
}

void func_103()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

void func_104()
{
	func_102();
	if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0x37338B7B7C4982DC(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_187();
			func_175(10);
		}
		unk_0x417BCC1ECC12E9A2(iLocal_86, -2065892691);
	}
	else
	{
		func_187();
		func_175(10);
	}
}

void func_105()
{
	var uVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_134();
			if (!unk_0x00B5B0B68211D89B(iLocal_86))
			{
				if (!unk_0x6901135DDCC4904D(uLocal_360))
				{
					uLocal_360 = func_177(iLocal_86, 0, 145);
				}
				if (unk_0x6901135DDCC4904D(uLocal_363))
				{
					unk_0x8A3D7569826A325D(&uLocal_363);
				}
				if (unk_0x6901135DDCC4904D(uLocal_362))
				{
					unk_0x8A3D7569826A325D(&uLocal_362);
				}
				unk_0x37338B7B7C4982DC(iLocal_86);
				unk_0x456121A0AAC868D4(&uVar0);
				unk_0x458C747DC544B598(0, iLocal_91, 0);
				unk_0x1D2CBA8F2F00D745(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xCFE67FBB69F1C410(uVar0);
				unk_0x8B06B801B92CEC2D(iLocal_86, uVar0);
				unk_0x873418BFBF9A6780(&uVar0);
				if (unk_0xE9FC689BC2AB1F82(iLocal_86))
				{
					unk_0x195690A8FA7145B8(iLocal_86);
				}
				func_102();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0x00B5B0B68211D89B(iLocal_86))
			{
				if (unk_0x1AAFFE4111587B35(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x00B5B0B68211D89B(iLocal_86))
			{
				func_133(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0x00B5B0B68211D89B(iLocal_86))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_108(Global_101652.f_26993[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x5BC7B5709E38CBE0(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB924315F0872835A(iVar1, iVar0, 1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_132();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_131(99, 1);
					func_130(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_130(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_130(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_116(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_115(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_130(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_130(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_130(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_115(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_130(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_130(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_130(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_130(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_130(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_130(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_130(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_130(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_130(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x0B5EEA126C23F8E6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_130(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_130(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_130(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_130(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_130(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_130(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_115(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_130(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_130(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_130(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_130(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_130(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_130(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_114(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_131(95, iParam3);
					break;
				
				case 1:
					func_131(97, iParam3);
					break;
				
				case 2:
					func_131(96, iParam3);
					break;
			}
			func_131(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
	}
	iVar5 = (Global_52992[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52992[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52992[iVar2] = 2147483647;
				}
				else
				{
					Global_52992[iVar2] = (Global_52992[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_130(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_130(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_130(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52992[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52992[iVar2];
			Global_52992[iVar2] = (Global_52992[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101652.f_19507.f_233[iVar2 /*69*/]++;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_1++;
		if (Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_110(iParam0);
	if (Global_35777 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52992[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB924315F0872835A(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xB924315F0872835A(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xB924315F0872835A(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_111(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_113() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_113() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_112(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0)
{
	func_131(93, iParam0);
	func_131(29, iParam0);
	func_131(30, iParam0);
}

bool func_115(int iParam0)
{
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_113() /*10730*/].f_7546.f_10, iParam0);
}

int func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC588321444C4C223(27))
	{
		return 0;
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB924315F0872835A(joaat("num_cash_spent"), iVar1, 1);
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_117(27, 1);
	return 1;
}

int func_117(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_118(iParam0, iParam1);
}

int func_118(int iParam0, int iParam1)
{
	if (func_12(14) && !func_129(iParam0))
	{
		return 0;
	}
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_128(&Global_2595490))
	{
		if (func_126(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_119(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_129(iParam1))
	{
		return 0;
	}
	if (func_126(uParam0, iParam1))
	{
		return 0;
	}
	if (func_125(uParam0) < 0f)
	{
		func_124(uParam0, 0);
	}
	func_122(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_120(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_120(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC588321444C4C223(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_129(iParam1))
	{
		return 0;
	}
	if (func_126(uParam0, iParam1))
	{
		return 0;
	}
	if (func_125(uParam0) < 0f)
	{
		func_124(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_121(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_121(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_122(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_123(uParam0, iVar0);
		iVar0++;
	}
	func_124(uParam0, (Global_2595489 - 0.5f));
}

void func_123(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_124(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_125(var uParam0)
{
	return uParam0->f_72;
}

bool func_126(var uParam0, int iParam1)
{
	return func_127(uParam0, iParam1) != -1;
}

int func_127(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_128(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_132()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52992[0] == iVar0)
		{
			Global_52992[0] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52992[1] == iVar0)
		{
			Global_52992[1] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52992[2] == iVar0)
		{
			Global_52992[2] = iVar0;
		}
	}
}

void func_133(bool bParam0)
{
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0x205B4FC17ACAF4C8(iLocal_86, unk_0xD5A676B97920D126(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0x37338B7B7C4982DC(iLocal_86);
				unk_0x0988FFC0C75637DF(iLocal_86, unk_0xD5A676B97920D126(), -1, 16, 2);
				unk_0x456121A0AAC868D4(&uLocal_620);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 16, 2);
				unk_0xCFE67FBB69F1C410(uLocal_620);
				unk_0x8B06B801B92CEC2D(iLocal_86, uLocal_620);
				unk_0x873418BFBF9A6780(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0x1774A68441553185(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!unk_0xEBA40DFF7CCE3511(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1F2CF2B9307EAB08(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0xEBA40DFF7CCE3511(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1F2CF2B9307EAB08(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0xEBA40DFF7CCE3511(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1F2CF2B9307EAB08(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_134()
{
	if (unk_0x6901135DDCC4904D(uLocal_364))
	{
		unk_0x8A3D7569826A325D(&uLocal_364);
	}
}

void func_135()
{
	var uVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					func_134();
					func_139(1, 1, 0, 0);
					if (unk_0x6901135DDCC4904D(uLocal_362))
					{
						unk_0x8A3D7569826A325D(&uLocal_362);
					}
					if (unk_0x6901135DDCC4904D(uLocal_360))
					{
						unk_0x8A3D7569826A325D(&uLocal_360);
					}
					if (unk_0x6901135DDCC4904D(uLocal_361))
					{
						unk_0x8A3D7569826A325D(&uLocal_361);
					}
					if (unk_0xE9FC689BC2AB1F82(iLocal_86))
					{
						unk_0x195690A8FA7145B8(iLocal_86);
					}
					func_137();
					if (!unk_0x00B5B0B68211D89B(iLocal_86))
					{
						unk_0x8AEEE13F802C81D6(iLocal_86, unk_0x7E140C583F91AE2B(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x8AEEE13F802C81D6(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_136(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0x00B5B0B68211D89B(iLocal_86))
					{
						unk_0x8AEEE13F802C81D6(iLocal_86, unk_0x7E140C583F91AE2B(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0xCE607BF2D136923E(iLocal_86, 0, 0);
					}
					unk_0x8AEEE13F802C81D6(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0x00B5B0B68211D89B(iLocal_86))
				{
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0x458C747DC544B598(0, iLocal_91, 0);
					unk_0x1D2CBA8F2F00D745(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x8B06B801B92CEC2D(iLocal_86, uVar0);
					unk_0x873418BFBF9A6780(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (!unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
							func_139(0, 1, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x458C747DC544B598(unk_0xD5A676B97920D126(), iLocal_91, 0);
					unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && !unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
				{
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
					func_139(0, 1, 0, 0);
					unk_0xAFC3B32426D08964(iLocal_91, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_368)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_136(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_137()
{
	Global_14611 = 0;
	func_138();
}

void func_138()
{
	if (unk_0x33688D334D224255())
	{
		unk_0xB6A622037A2FE913();
		Global_16756 = 0;
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_139(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_146(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_9())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_145(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_146(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_145(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_143(unk_0xFB6B3EEFAB2DD12C())) && !func_141(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_140())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_143(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_140()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_142(-1, 0) == 8;
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

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_143(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_144())
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

bool func_144()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_145(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_146(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

void func_147()
{
	if (Global_3 || bLocal_70)
	{
		unk_0x43C5A23247934BA2(0.7f);
	}
	if (bLocal_368 && !unk_0x00B5B0B68211D89B(iLocal_86))
	{
		if (!func_168(iLocal_86))
		{
			if (!unk_0x6901135DDCC4904D(uLocal_360))
			{
				uLocal_360 = func_177(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0x6901135DDCC4904D(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
				if (unk_0x6901135DDCC4904D(uLocal_363))
				{
					unk_0x8A3D7569826A325D(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0x6901135DDCC4904D(uLocal_363))
				{
					uLocal_363 = func_50(Local_56, 1);
				}
				if (unk_0x6901135DDCC4904D(uLocal_362))
				{
					unk_0x8A3D7569826A325D(&uLocal_362);
				}
			}
			if (unk_0x6901135DDCC4904D(uLocal_360))
			{
				unk_0x8A3D7569826A325D(&uLocal_360);
			}
		}
		if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
		{
			if ((unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0)) && func_167(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				unk_0xC53606C390BE2727(iLocal_91, 1, 1);
				unk_0xAFC3B32426D08964(iLocal_91, 1);
				unk_0x4790D4CCED5150A0(iLocal_91, 0, 0);
			}
		}
		if (unk_0x6901135DDCC4904D(uLocal_363) && !unk_0x6A0583ECFCCECC9B(iLocal_86, 0))
		{
			if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_175(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_66() && func_166(1, 1, 1))
			{
				if (unk_0x1AC9C20D51EE6DC3(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
			{
				if (unk_0x1774A68441553185(iLocal_86, -1794415470) != 1)
				{
					unk_0x87D70F1F81DB77D3(iLocal_86, iLocal_91, -1, func_165(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_66() && func_166(1, 1, 1))
			{
				if (unk_0x1AC9C20D51EE6DC3(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
		}
		func_162(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_66())
			{
				if (unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x37338B7B7C4982DC(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xFA5E84DCAE200259(0.5f);
					iLocal_369++;
				}
				if (!func_161())
				{
					func_156();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_152("REPAP_HOME1", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_152("REPAP_HOME1M", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_152("REPAP_HOME1F", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_152("REPAP_HOME1T", (func_155() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_152("REPAP_HOME1L", (func_155() && !func_74())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_155())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_151("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_152("REPAP_HOME2L", (func_155() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_151("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_152("REPAP_HOME3", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_151("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_152("REPAP_HOME4", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_151("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_152("REPAP_NOBAN", (func_155() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_151("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_155() && !func_73())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_149(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_176("");
				func_175(3);
			}
			break;
	}
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_148() && !func_161()) && iLocal_47 != 8)
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_86))
			{
				if (unk_0x1AAFFE4111587B35(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x1906CFCBD9C30E25(iLocal_86, unk_0xB31CADDD9247FE2C(unk_0xFB6B3EEFAB2DD12C())))
					{
						unk_0xB3AD67B7714E1E77(iLocal_86, unk_0xB31CADDD9247FE2C(unk_0xFB6B3EEFAB2DD12C()));
					}
					func_102();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_148()
{
	return Global_25419;
}

int func_149(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_150(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_150(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
		}
	}
}

int func_151(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_152(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_154(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_73())
				{
					iLocal_81 = unk_0x84A97C70FFDEC0C8();
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_153() };
		func_137();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_153()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xF29A0451BC42EF27();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xA6AD4206830E160C(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xA6AD4206830E160C(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_154(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_155()
{
	if (bLocal_368)
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && !unk_0x6A0583ECFCCECC9B(iLocal_86, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_156()
{
	if (func_19() == 2)
	{
		if (!unk_0x6901135DDCC4904D(uLocal_364))
		{
			func_159();
			uLocal_364 = func_158(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xD6507DB77BCBD904(uLocal_364, 269);
			func_157();
		}
	}
}

void func_157()
{
	if (!func_161())
	{
		if (func_19() == 2)
		{
			Global_25419 = 1;
		}
	}
}

var func_158(struct<3> Param0, int iParam3)
{
	return func_50(Param0, iParam3);
}

void func_159()
{
	if (func_19() == 2)
	{
		if (!Global_25421)
		{
			func_160("CULT_BLIP_HELP", -1);
			Global_25421 = 1;
		}
	}
}

void func_160(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_161()
{
	if (Global_101652.f_23938.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_162(bool bParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0) && !unk_0x00B5B0B68211D89B(iLocal_86))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0x6901135DDCC4904D(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
			}
			if (unk_0x6901135DDCC4904D(uLocal_360))
			{
				unk_0x8A3D7569826A325D(&uLocal_360);
			}
			if (unk_0x6901135DDCC4904D(uLocal_361))
			{
				unk_0x8A3D7569826A325D(&uLocal_361);
			}
		}
		else
		{
			if (unk_0x6901135DDCC4904D(uLocal_362))
			{
				unk_0x8A3D7569826A325D(&uLocal_362);
			}
			if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
			{
				if (!unk_0x6901135DDCC4904D(uLocal_361))
				{
					uLocal_361 = func_163(iLocal_91, 0, 0);
				}
			}
			if (!unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0x6901135DDCC4904D(uLocal_360))
				{
					uLocal_360 = func_177(iLocal_86, 0, 145);
				}
			}
			else if (unk_0x6901135DDCC4904D(uLocal_360))
			{
				unk_0x8A3D7569826A325D(&uLocal_360);
			}
		}
	}
}

int func_163(int iParam0, bool bParam1, bool bParam2)
{
	return func_164(iParam0, !bParam1, bParam2);
}

int func_164(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_51(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_51(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_51(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x7D44D16B4A9E941E(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x06F2E112EBC0C4FB(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94EB20429840304E())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (bParam0)
		{
			if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) != unk_0xD5A676B97920D126())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6016987E9628A7F6(iVar0) < 0.95f || unk_0x6016987E9628A7F6(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!unk_0x120A59070FBE9283(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0x06F2E112EBC0C4FB(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x06F2E112EBC0C4FB(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x06F2E112EBC0C4FB(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x06F2E112EBC0C4FB(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	if (unk_0x1906CFCBD9C30E25(iParam0, unk_0xB31CADDD9247FE2C(unk_0xFB6B3EEFAB2DD12C())))
	{
		if (!unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x195690A8FA7145B8(iParam0);
		}
		return 1;
	}
	else if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xB3AD67B7714E1E77(iParam0, unk_0xB31CADDD9247FE2C(unk_0xFB6B3EEFAB2DD12C()));
	}
	return 0;
}

void func_169()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
	{
		if (!unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 1))
		{
			if (unk_0x1774A68441553185(iLocal_86, -1794415470) != 1)
			{
				unk_0x87D70F1F81DB77D3(iLocal_86, iLocal_91, -1, func_165(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0x7887B64A08364778(func_65()) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iLocal_86, 1), unk_0xC086F8D75730FA3A(func_65(), 1)) < 100f) && (unk_0x78D3CDB884C74FEB(iLocal_91) < 5f || !unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xE4133A0C3C6C74A7(iLocal_86, iLocal_91))
				{
					unk_0x290A57C93304EF16(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xE4133A0C3C6C74A7(iLocal_86, iLocal_91))
			{
				unk_0x290A57C93304EF16(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xEBA40DFF7CCE3511(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xE4133A0C3C6C74A7(iLocal_86, iLocal_91))
		{
			unk_0x37338B7B7C4982DC(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x7887B64A08364778(func_65()) && !unk_0x00B5B0B68211D89B(func_65()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_102();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xFA5E84DCAE200259(0.2f);
						unk_0x5457695C257D1470(iLocal_86, 1);
						unk_0x42AFB71D42AF78EA(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0xF21B698F4FCCA3D3(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0x01976E3C7B2E5437(iLocal_358, 0, 0);
						unk_0xB5024B946329EB6A(iLocal_358, 0, 0);
						unk_0xBBAF4B768DDB7572(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_171();
				if (!unk_0x1AC9C20D51EE6DC3(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0x84A97C70FFDEC0C8();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0x7887B64A08364778(func_65()) && unk_0x108650178993C477(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_669 = true;
					}
					if (unk_0x7887B64A08364778(func_65()))
					{
						if (!unk_0x108650178993C477(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_74())
					{
						if (!func_170())
						{
							func_171();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_151("REPAP_RES1"))
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
								{
									if (func_151("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_152("REPAP_CHT3M", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_152("REPAP_CHT3F", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_152("REPAP_CHT3T", ((func_155() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
								}
							}
							break;
						
						case 5:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_152("REPAP_CHT4M", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_152("REPAP_CHT4F", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_152("REPAP_CHT4T", ((func_155() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
								}
							}
							break;
						
						case 6:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_152("REPAP_CHT5M", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_152("REPAP_CHT5F", ((func_155() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_152("REPAP_CHT5T", ((func_155() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
								}
							}
							break;
						
						case 7:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
								{
									if (func_151("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
								{
									if (func_151("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x84A97C70FFDEC0C8();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x84A97C70FFDEC0C8() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
								{
									if (func_151("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_155()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!unk_0x7887B64A08364778(func_65()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
					func_137();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_66())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0x84A97C70FFDEC0C8();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_66())
				{
					func_176("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_175(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_162(0);
	}
}

int func_170()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x84A97C70FFDEC0C8() - iLocal_666) > 5000)
	{
		if (unk_0x7887B64A08364778(iLocal_91) && unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
		{
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0x84A97C70FFDEC0C8() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0x84A97C70FFDEC0C8();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
	}
	return 0;
}

void func_171()
{
	int iVar0;
	
	if ((unk_0x84A97C70FFDEC0C8() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0x7887B64A08364778(func_65())) && !unk_0x00B5B0B68211D89B(func_65()))
		{
			if (unk_0x8E92CDAEB8357ABD(Local_63, unk_0xC086F8D75730FA3A(func_65(), 1), 1) < 8f)
			{
				iVar0 = unk_0x7BC26452241AC7C9(0, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x7887B64A08364778(Local_395[4 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
								iLocal_565 = unk_0x7BC26452241AC7C9(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x7887B64A08364778(Local_395[4 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
								iLocal_565 = unk_0x7BC26452241AC7C9(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_65(), "PAP2", 0, 1);
						if (unk_0x7887B64A08364778(Local_395[5 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
								iLocal_565 = unk_0x7BC26452241AC7C9(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_65(), "PAP3", 0, 1);
						if (unk_0x7887B64A08364778(Local_395[6 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
								iLocal_565 = unk_0x7BC26452241AC7C9(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_65(), "PAP4", 0, 1);
						if (unk_0x7887B64A08364778(Local_395[7 /*10*/]) && !unk_0x00B5B0B68211D89B(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x84A97C70FFDEC0C8();
								iLocal_565 = unk_0x7BC26452241AC7C9(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_172()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		if (unk_0x6901135DDCC4904D(uLocal_360))
		{
			unk_0x576211BDE434AC9A(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0x49E996A1E39EAAD7("random@paparazzi@peek");
				unk_0x49E996A1E39EAAD7("random@paparazzi@trans");
				unk_0x49E996A1E39EAAD7("random@paparazzi@wait");
				if ((unk_0xD7669BF035CDA5F6("random@paparazzi@peek") && unk_0xD7669BF035CDA5F6("random@paparazzi@trans")) && unk_0xD7669BF035CDA5F6("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0x0C17C9FDFC9120BD(Local_653, Local_656, 2);
					unk_0xECA52D26609A09F3(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x0988FFC0C75637DF(iLocal_86, unk_0xD5A676B97920D126(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0xFA5E84DCAE200259(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					iLocal_664 = 0;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (unk_0xF44A5E894FE76438(iLocal_660, 0))
				{
					if (!unk_0xF44A5E894FE76438(iLocal_660, 1))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0xCC257DA11A122B5F(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xC8FC1161FDD0E597(uLocal_625) && unk_0x2C3B61BDCED77B45(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0x37338B7B7C4982DC(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0x0C17C9FDFC9120BD(Local_653, Local_656, 2);
						unk_0xECA52D26609A09F3(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xB8A73E7DA87B2968(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0x758A470BA92498EA());
					}
					if ((unk_0x84A97C70FFDEC0C8() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x37338B7B7C4982DC(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0x0C17C9FDFC9120BD(Local_653, Local_656, 2);
									unk_0xECA52D26609A09F3(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xB8A73E7DA87B2968(&iLocal_660, 0);
								}
								iLocal_624 = unk_0x84A97C70FFDEC0C8();
							}
						}
					}
				}
				if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0x6901135DDCC4904D(uLocal_359))
					{
						unk_0x8A3D7569826A325D(&uLocal_359);
						if (!unk_0x6901135DDCC4904D(uLocal_360))
						{
							uLocal_360 = func_177(iLocal_86, 0, 145);
						}
					}
					unk_0x37338B7B7C4982DC(iLocal_86);
					uLocal_625 = unk_0x0C17C9FDFC9120BD(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0xECA52D26609A09F3(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0xECA52D26609A09F3(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xB8A73E7DA87B2968(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0xC8FC1161FDD0E597(uLocal_625) && unk_0x2C3B61BDCED77B45(uLocal_625) > 0.9f)
				{
					if (unk_0x1774A68441553185(iLocal_86, 242628503) != 1)
					{
						unk_0x37338B7B7C4982DC(iLocal_86);
						unk_0x290A57C93304EF16(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					if (func_174())
					{
						unk_0xB24D3BF5DABD13AA(&iLocal_91);
						iLocal_91 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
						unk_0xC53606C390BE2727(iLocal_91, 1, 1);
						unk_0x4790D4CCED5150A0(iLocal_91, 0, 0);
						unk_0xAFC3B32426D08964(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0xAFC3B32426D08964(iLocal_91, 1);
					if (func_136(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_664 = 1;
						iLocal_369 = 100;
					}
				}
				else if (func_136(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_664 = 1;
					iLocal_369++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_173(Local_87, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (unk_0x108650178993C477(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0x1774A68441553185(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							unk_0x456121A0AAC868D4(&uVar16);
							unk_0x1D2CBA8F2F00D745(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
							unk_0xCFE67FBB69F1C410(uVar16);
							unk_0x8B06B801B92CEC2D(iLocal_86, uVar16);
							unk_0xCE607BF2D136923E(iLocal_86, 0, 0);
							unk_0x873418BFBF9A6780(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0x759857815829A6A8(iLocal_86, 1f);
							func_173(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_173(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
						{
							if (unk_0x6901135DDCC4904D(uLocal_361))
							{
								unk_0x8A3D7569826A325D(&uLocal_361);
							}
							if (!unk_0x6901135DDCC4904D(uLocal_360))
							{
								uLocal_360 = func_177(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0x108650178993C477(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_167(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_102();
							if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							unk_0x37338B7B7C4982DC(iLocal_86);
							unk_0x87D70F1F81DB77D3(iLocal_86, iLocal_91, -1, func_165(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_173(Local_87, 1);
				}
				else
				{
					func_173(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (func_149(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_86) && unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
					{
						if (unk_0x6901135DDCC4904D(uLocal_360))
						{
							unk_0x8A3D7569826A325D(&uLocal_360);
						}
						unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
						func_175(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0) && !unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 1)) && !unk_0x1AC9C20D51EE6DC3(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0x738326127C161284(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_175(6);
								}
								else
								{
									unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
									unk_0x738326127C161284(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_175(6);
								}
							}
						}
						if (!unk_0x04D83291EB9DE51D(iLocal_86, iLocal_91, 0))
						{
							if (unk_0x1774A68441553185(iLocal_86, -1794415470) != 1)
							{
								unk_0x37338B7B7C4982DC(iLocal_86);
								unk_0x87D70F1F81DB77D3(iLocal_86, iLocal_91, -1, func_165(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0x7E140C583F91AE2B(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0x759857815829A6A8(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_173(Local_87, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0x78D3CDB884C74FEB(unk_0xD5A676B97920D126()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0x758A470BA92498EA());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0x758A470BA92498EA() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
				{
					if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0) && func_174())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
						unk_0xC53606C390BE2727(iLocal_91, 1, 1);
					}
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_91, 0))
					{
						if (unk_0x6901135DDCC4904D(uLocal_361))
						{
							unk_0x8A3D7569826A325D(&uLocal_361);
						}
						if (!unk_0x6901135DDCC4904D(uLocal_360))
						{
							uLocal_360 = func_177(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0x6901135DDCC4904D(uLocal_360))
						{
							unk_0x8A3D7569826A325D(&uLocal_360);
						}
						if (!unk_0x6901135DDCC4904D(uLocal_361))
						{
							uLocal_361 = func_163(iLocal_91, 0, 0);
						}
					}
					if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iLocal_91))
					{
						if (unk_0x6901135DDCC4904D(uLocal_361))
						{
							unk_0x8A3D7569826A325D(&uLocal_361);
						}
						if (!unk_0x6901135DDCC4904D(uLocal_360))
						{
							uLocal_360 = func_177(iLocal_86, 0, 145);
						}
						func_176("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_66) < 9f && func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_173(Local_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_60, Local_87) > 75f)
				{
					func_175(6);
				}
				if (func_188())
				{
					func_175(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!unk_0xA4DB44DF73EF4FE5(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_175(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (unk_0xB38A470B669AC00B(iLocal_91) < iLocal_83)
						{
							if (unk_0x7D720C677145C91C(iLocal_91, unk_0xD5A676B97920D126(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0xB38A470B669AC00B(iLocal_91)));
							}
							unk_0x3C05FE2296BF5F53(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0xEC1217CD8003F6C6(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_175(5);
							}
						}
					}
				}
				iLocal_83 = unk_0xB38A470B669AC00B(iLocal_91);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iLocal_86))
		{
			if (unk_0xFCDC1684830866E8(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_175(5);
				}
			}
		}
	}
}

void func_173(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_63, Param0) > 2.5f)
	{
		if (unk_0x1774A68441553185(iLocal_86, 713668775) != 1)
		{
			unk_0x1D2CBA8F2F00D745(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0x1774A68441553185(iLocal_86, 713668775) != 1)
	{
		func_133(bParam3);
		unk_0x0988FFC0C75637DF(iLocal_86, unk_0xD5A676B97920D126(), -1, 16, 2);
	}
}

bool func_174()
{
	return (((((unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0)) && (unk_0x1F4C5E9E5F24C698(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0))) || unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0))))) && unk_0x7D44D16B4A9E941E(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)) > 0) && func_167(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0))) && !Global_100699);
}

void func_175(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_176(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!unk_0xCC257DA11A122B5F(iLocal_560[iVar0], sParam0))
		{
			if (unk_0x0FE8D1B72C1924FE(iLocal_560[iVar0]))
			{
				unk_0xB3C38A4B84C152BF(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0xCC257DA11A122B5F(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0x0FE8D1B72C1924FE(iLocal_560[iVar0]))
			{
				unk_0xE3E53903AE9B5BD5(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_177(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_164(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_178(int iParam0)
{
	if (func_181())
	{
		Global_101642 = 1;
		Global_101639 = unk_0x84A97C70FFDEC0C8();
		if (func_88(Global_101641))
		{
			func_179(0);
		}
		unk_0x2CD0538D8247BA65(1, "RE_TITLE");
		if (iParam0 && func_88(Global_101641))
		{
			unk_0xB77AFA5DEFB190B1();
		}
		return 1;
	}
	return 0;
}

void func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101652.f_23938.f_2 < 3)
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_160(func_180(iParam0), -1);
					Global_101652.f_23938.f_2++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_101648, 1))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_160(func_180(iParam0), -1);
					Global_101652.f_23938.f_3++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_101648, 2))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_160(func_180(iParam0), -1);
					Global_101652.f_23938.f_4++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 2);
				}
			}
			break;
	}
}

char* func_180(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_181()
{
	switch (func_182(&Global_25244, 0, 5, 0, unk_0x3ED6DDB11A7AD67F()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_182(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89297.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_186(0))
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		unk_0x680452B13E83C406(unk_0xF3F8195C98263BF5(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x503D3643C5FE49F7(8);
		}
		Global_35777 = iParam2;
		Global_35739 = *uParam0;
		Global_35740 = iParam4;
		Global_35738 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35738 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35738)
			{
				if (Global_35744[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35739 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_184(iParam2))
		{
			return 0;
		}
		if (Global_35738 == 8)
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		Global_35744[Global_35738 /*4*/] = Global_35741;
		Global_35744[Global_35738 /*4*/].f_1 = iParam1;
		Global_35744[Global_35738 /*4*/].f_2 = iParam2;
		Global_35744[Global_35738 /*4*/].f_3 = 0;
		Global_35738++;
		if (iParam4 != 0)
		{
			func_183(uParam0, iParam4);
		}
	}
	return 2;
}

void func_183(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35738 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35738)
	{
		if (Global_35744[iVar0 /*4*/] == *uParam0)
		{
			Global_35744[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_184(int iParam0)
{
	return func_185(iParam0, Global_35777);
}

int func_185(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_186(int iParam0)
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	if (func_184(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_187()
{
	int iVar0;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_86))
	{
		unk_0x738326127C161284(iLocal_86, 2, 0);
		unk_0xBB8F1D58B7578137(iLocal_86, unk_0xD5A676B97920D126(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x00B5B0B68211D89B(Local_204[iVar0 /*18*/]))
		{
			unk_0xBB8F1D58B7578137(Local_204[iVar0 /*18*/], unk_0xD5A676B97920D126(), 300f, -1, 0, 0);
			unk_0x417BCC1ECC12E9A2(Local_204[iVar0 /*18*/], -2065892691);
			unk_0x5457695C257D1470(Local_204[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_188()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204.f_0)
	{
		if (unk_0x7887B64A08364778(Local_204[iVar1 /*18*/]) && !unk_0x00B5B0B68211D89B(Local_204[iVar1 /*18*/]))
		{
			if (unk_0xA3E7DE487D314279(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0x1DEB1994A3C25E35(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0x4404F63C94223B29(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0xFCDC1684830866E8(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131.f_0)
	{
		if (unk_0x7887B64A08364778(Local_131[iVar1 /*18*/]))
		{
			if (unk_0xA4DB44DF73EF4FE5(Local_131[iVar1 /*18*/], 0) && unk_0xA3E7DE487D314279(Local_131[iVar1 /*18*/]))
			{
				if (unk_0xF60B0BCAFB1D30FF(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_189()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_200())
		{
			return 0;
		}
	}
	if (func_196())
	{
		return 1;
	}
	if (func_190(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_190(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_93();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 2) && !unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 3))
				{
					func_191(iVar32, &Var0);
					fVar35 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_191(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_192(uParam1, "Abigail1", func_194(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 1:
			func_192(uParam1, "Abigail2", func_194(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 2:
			func_192(uParam1, "Barry1", func_194(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 3:
			func_192(uParam1, "Barry2", func_194(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 4:
			func_192(uParam1, "Barry3", func_194(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 5:
			func_192(uParam1, "Barry3A", func_194(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 6:
			func_192(uParam1, "Barry3C", func_194(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 7:
			func_192(uParam1, "Barry4", func_194(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_193(iParam0), 0, 0);
			break;
		
		case 8:
			func_192(uParam1, "Dreyfuss1", func_194(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 9:
			func_192(uParam1, "Epsilon1", func_194(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 10:
			func_192(uParam1, "Epsilon2", func_194(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 11:
			func_192(uParam1, "Epsilon3", func_194(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 12:
			func_192(uParam1, "Epsilon4", func_194(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 13:
			func_192(uParam1, "Epsilon5", func_194(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 14:
			func_192(uParam1, "Epsilon6", func_194(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 15:
			func_192(uParam1, "Epsilon7", func_194(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 16:
			func_192(uParam1, "Epsilon8", func_194(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 17:
			func_192(uParam1, "Extreme1", func_194(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 18:
			func_192(uParam1, "Extreme2", func_194(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 19:
			func_192(uParam1, "Extreme3", func_194(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 20:
			func_192(uParam1, "Extreme4", func_194(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 21:
			func_192(uParam1, "Fanatic1", func_194(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_193(iParam0), 1, 0);
			break;
		
		case 22:
			func_192(uParam1, "Fanatic2", func_194(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_193(iParam0), 1, 0);
			break;
		
		case 23:
			func_192(uParam1, "Fanatic3", func_194(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_193(iParam0), 0, 1);
			break;
		
		case 24:
			func_192(uParam1, "Hao1", func_194(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_193(iParam0), 0, 1);
			break;
		
		case 25:
			func_192(uParam1, "Hunting1", func_194(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 26:
			func_192(uParam1, "Hunting2", func_194(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 27:
			func_192(uParam1, "Josh1", func_194(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 28:
			func_192(uParam1, "Josh2", func_194(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 29:
			func_192(uParam1, "Josh3", func_194(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 30:
			func_192(uParam1, "Josh4", func_194(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 31:
			func_192(uParam1, "Maude1", func_194(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 32:
			func_192(uParam1, "Minute1", func_194(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 33:
			func_192(uParam1, "Minute2", func_194(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 34:
			func_192(uParam1, "Minute3", func_194(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 35:
			func_192(uParam1, "MrsPhilips1", func_194(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 36:
			func_192(uParam1, "MrsPhilips2", func_194(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 37:
			func_192(uParam1, "Nigel1", func_194(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 38:
			func_192(uParam1, "Nigel1A", func_194(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 39:
			func_192(uParam1, "Nigel1B", func_194(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_193(iParam0), 1, 1);
			break;
		
		case 40:
			func_192(uParam1, "Nigel1C", func_194(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_193(iParam0), 1, 1);
			break;
		
		case 41:
			func_192(uParam1, "Nigel1D", func_194(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_193(iParam0), 1, 1);
			break;
		
		case 42:
			func_192(uParam1, "Nigel2", func_194(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 43:
			func_192(uParam1, "Nigel3", func_194(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_193(iParam0), 1, 1);
			break;
		
		case 44:
			func_192(uParam1, "Omega1", func_194(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 45:
			func_192(uParam1, "Omega2", func_194(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 46:
			func_192(uParam1, "Paparazzo1", func_194(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 47:
			func_192(uParam1, "Paparazzo2", func_194(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 48:
			func_192(uParam1, "Paparazzo3", func_194(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 49:
			func_192(uParam1, "Paparazzo3A", func_194(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 50:
			func_192(uParam1, "Paparazzo3B", func_194(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 51:
			func_192(uParam1, "Paparazzo4", func_194(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 52:
			func_192(uParam1, "Rampage1", func_194(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 54:
			func_192(uParam1, "Rampage3", func_194(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 55:
			func_192(uParam1, "Rampage4", func_194(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 56:
			func_192(uParam1, "Rampage5", func_194(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_193(iParam0), 0, 0);
			break;
		
		case 53:
			func_192(uParam1, "Rampage2", func_194(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_193(iParam0), 1, 0);
			break;
		
		case 57:
			func_192(uParam1, "TheLastOne", func_194(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 58:
			func_192(uParam1, "Tonya1", func_194(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 59:
			func_192(uParam1, "Tonya2", func_194(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 60:
			func_192(uParam1, "Tonya3", func_194(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 61:
			func_192(uParam1, "Tonya4", func_194(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		case 62:
			func_192(uParam1, "Tonya5", func_194(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_193(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_192(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_194(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_195(iParam0) };
	if (unk_0xC55B9553B3EDADE9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_195(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_196()
{
	if (func_199() && !func_200())
	{
		return 1;
	}
	if (func_198() && func_197())
	{
		return 1;
	}
	return 0;
}

bool func_197()
{
	return Global_101370 > 0;
}

int func_198()
{
	if (Global_88741 != -1)
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 20);
	}
	return 0;
}

int func_200()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x6DAE83305DF67FC4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_201()
{
	func_203(39, 1);
	func_203(40, 1);
	func_203(41, 1);
	func_203(42, 1);
	func_203(43, 1);
	func_203(44, 1);
	uLocal_359 = func_202(Local_87);
	iLocal_86 = unk_0x8C855D8124E955CE(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0x77E24C0B92B4FC24(iLocal_86, 1, 1);
	unk_0x77E24C0B92B4FC24(iLocal_86, 17, 1);
	unk_0x738326127C161284(iLocal_86, 128, 1);
	unk_0x7D99F00F48D15ADB(iLocal_86, 1);
	unk_0x91AAF5BB8226AB32(iLocal_86, 0);
	unk_0x5BD2F51088536150(iLocal_86, 0, 0, 1, 0);
	unk_0x5BD2F51088536150(iLocal_86, 2, 0, 0, 0);
	unk_0x5BD2F51088536150(iLocal_86, 3, 0, 0, 0);
	unk_0x5BD2F51088536150(iLocal_86, 4, 0, 0, 0);
	unk_0x5BD2F51088536150(iLocal_86, 7, 1, 0, 0);
	unk_0x5BD2F51088536150(iLocal_86, 8, 0, 0, 0);
	unk_0xB0971107E83A187D(iLocal_86, 1);
	unk_0x5457695C257D1470(iLocal_86, 1);
	unk_0x74084690B489CA8D(iLocal_86, 0);
	unk_0x545EC2C7EB66F6DD(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0x0A924F4E6E826379(iLocal_86, 1);
	}
	if (unk_0x5CF7BD3BFEB33582("CELEBRITY", &uLocal_69))
	{
		unk_0x417BCC1ECC12E9A2(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0xDE8A46A23FDCBBFE(joaat("surano"), Local_92, fLocal_95, 1, 1);
	unk_0x5477ED2CB1DDA160(iLocal_91, Local_92, 0, 0, 1);
	unk_0xB6FD5372B7266BAE(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x4790D4CCED5150A0(iLocal_91, 0, 0);
	unk_0xE7D6BFCADFE1076B(iLocal_91, 10);
	unk_0x2D739561304957CC(iLocal_91, 1084227584);
	unk_0xAFC3B32426D08964(iLocal_91, 3);
	unk_0x7E1EA48517D28990(iLocal_91, 1);
	unk_0x5BB208226A4F07C5(iLocal_91, 1);
	unk_0x3C0C3899D44B517C(iLocal_91, unk_0x609D1508B10D01AD(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
	}
	func_17(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0xFA03BA297FE81584(joaat("vader"), 1);
	unk_0xFA03BA297FE81584(joaat("surano"), 1);
	unk_0xFA03BA297FE81584(joaat("cavalcade2"), 1);
}

var func_202(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0x97C445677A852D45(uVar0, 0);
	unk_0xBEC798FF88A42020(uVar0, 0);
	return uVar0;
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_210(iParam0, 2, 1))
		{
			func_209(iParam0, 2, 1);
		}
	}
	else if (func_210(iParam0, 2, 1))
	{
		func_204(iParam0, 2, 1);
	}
}

void func_204(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_83() == 0)
		{
			uVar0 = func_207(func_208(iParam0), -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, iParam1);
			func_205(func_208(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_206(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, iParam3);
	}
}

int func_206(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

int func_207(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_206(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

void func_209(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_83() == 0)
		{
			uVar0 = func_207(func_208(iParam0), -1, 0);
			unk_0xB8A73E7DA87B2968(&uVar0, iParam1);
			func_205(func_208(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

int func_210(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_83() == 0)
		{
			return unk_0xF44A5E894FE76438(func_207(func_208(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_211()
{
	if (!iLocal_96)
	{
		func_219(&uLocal_97, joaat("surano"));
		func_219(&uLocal_97, joaat("prop_ld_test_01"));
		func_219(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_219(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_219(&uLocal_97, joaat("vader"));
		func_219(&uLocal_97, joaat("cavalcade2"));
		func_219(&uLocal_97, joaat("prop_pap_camera_01"));
		func_216(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_212(&uLocal_97))
	{
		return 0;
	}
	unk_0x49E996A1E39EAAD7("random@escape_paparazzi@standing@");
	unk_0x49E996A1E39EAAD7("random@paparazzi@pap_anims");
	unk_0x49E996A1E39EAAD7("random@paparazzi@peek");
	unk_0x49E996A1E39EAAD7("random@paparazzi@trans");
	unk_0x49E996A1E39EAAD7("random@paparazzi@wait");
	unk_0x49E996A1E39EAAD7("veh@std@ps@idle_panic");
	unk_0x49E996A1E39EAAD7("veh@low@front_ps@idle_panic");
	unk_0x49E996A1E39EAAD7(sLocal_374);
	unk_0x68A99AC5778ED123("ESCPAP", 0);
	if (((((((((unk_0xD7669BF035CDA5F6("random@escape_paparazzi@standing@") && unk_0xD7669BF035CDA5F6("random@paparazzi@pap_anims")) && unk_0xD7669BF035CDA5F6("random@paparazzi@peek")) && unk_0xD7669BF035CDA5F6("random@paparazzi@trans")) && unk_0xD7669BF035CDA5F6("random@paparazzi@wait")) && unk_0xD7669BF035CDA5F6("veh@std@ps@idle_panic")) && unk_0xD7669BF035CDA5F6("veh@low@front_ps@idle_panic")) && unk_0xD7669BF035CDA5F6(sLocal_374)) && unk_0x4A980428C9937F4E(0)) && unk_0x3F51F950AB346CCA("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_213(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_213(var uParam0)
{
	return func_214(*uParam0, "NULL", uParam0->f_1);
}

int func_214(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xF44A5E894FE76438(iParam0, 30))
	{
		if (unk_0xF44A5E894FE76438(iParam0, 29))
		{
			switch (func_215(iParam0))
			{
				case 0:
					return unk_0x7AD0E9452821C95D(uParam2);
					break;
				
				case 1:
					return unk_0xD7669BF035CDA5F6(sParam1);
					break;
				
				case 2:
					return unk_0x51CCEEF52EBADA6D(sParam1);
					break;
				
				case 3:
					return unk_0xB3BFE702989F8358(sParam1);
					break;
				
				case 4:
					return unk_0x536796E3DCB32FB1(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x37F8AED05948ACB2(sParam1);
					break;
				
				case 6:
					return unk_0x3F51F950AB346CCA(sParam1, unk_0xF44A5E894FE76438(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x23B232D16F343B26(iParam2);
					break;
				
				case 8:
					return unk_0x4A980428C9937F4E(iParam2);
					break;
				
				case 9:
					return unk_0x65A854A1D5D4913A();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xF44A5E894FE76438(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_216(var uParam0)
{
	func_217(uParam0, 9, -1, 0);
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_218(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*2*/], iParam1);
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_219(var uParam0, int iParam1)
{
	func_217(uParam0, 0, iParam1, 0);
}

int func_220()
{
	if (!func_184(5))
	{
		return 1;
	}
	if (func_196())
	{
		return 1;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_200())
		{
			return 0;
		}
	}
	if (func_190(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if ((Global_101641 == func_97() && unk_0xC9DD3DCF0C4F247D()) && Global_101642)
	{
		return 1;
	}
	return 0;
}

void func_222(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xAF48077651290FAC() >= (uParam0->f_32 + uParam0->f_33) || unk_0xF44A5E894FE76438(Global_91486.f_20, 2)) || unk_0xF44A5E894FE76438(Global_91486.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 29))
					{
						func_223(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xAF48077651290FAC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_223(var uParam0)
{
	func_224(uParam0, "NULL", uParam0->f_1);
}

void func_224(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xF44A5E894FE76438(*uParam0, 30))
	{
		switch (func_215(*uParam0))
		{
			case 0:
				unk_0x4ACD1E4CBA159ED1(uParam2);
				break;
			
			case 1:
				unk_0x49E996A1E39EAAD7(sParam1);
				break;
			
			case 2:
				unk_0xC39D3BD9BB3688FF(sParam1);
				break;
			
			case 3:
				unk_0xCB5E0E0EB67B3ECE(sParam1, unk_0xF44A5E894FE76438(*uParam0, 28));
				break;
			
			case 4:
				unk_0x3E276C5F51A6C832(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x6F92871B78A401BC(sParam1);
				break;
			
			case 6:
				unk_0x3F51F950AB346CCA(sParam1, unk_0xF44A5E894FE76438(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x1D072EB961765FED(iParam2);
				break;
			
			case 8:
				unk_0x68A99AC5778ED123(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9CD38B75BED5A7C7();
				break;
			
			default:
				break;
		}
		unk_0xB8A73E7DA87B2968(uParam0, 29);
	}
}

void func_225(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_227(iParam0);
	unk_0x2D619292AF9BA314(0);
	unk_0x9B7FB1F4FDC71D5B(1);
	Global_101638 = 0;
	func_226();
}

void func_226()
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			unk_0xFA03BA297FE81584(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)), 1);
		}
		unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	}
}

void func_227(int iParam0)
{
	Global_101641 = iParam0;
}

int func_228(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138860)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_97();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_269())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_200())
			{
				return 0;
			}
		}
		if (!Global_101652.f_8028)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_196())
		{
			return 0;
		}
		if (func_268())
		{
			return 0;
		}
		if (Global_101641 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_190(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_267(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_266(func_19()) == 4 || func_266(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_265(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_264(Global_101652.f_23938.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x84A97C70FFDEC0C8() - Global_101643) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_263())
		{
			return 0;
		}
		if (unk_0xC19959490984F18E())
		{
			return 0;
		}
		if (unk_0xC9DD3DCF0C4F247D())
		{
			return 0;
		}
		if (!func_254(4))
		{
			return 0;
		}
		if (!func_184(5))
		{
			return 0;
		}
		if (func_253(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x7B66213B5E371C3F(unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126())))
		{
			if ((unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(377.153f, -717.567f, 10.0536f) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(320.9934f, 265.2515f, 82.1221f)) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_253(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_267(30) && !func_253(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_101652.f_2079.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101652.f_2079.f_539.f_1524[iVar4];
				if (func_252(iVar8))
				{
					if (func_230(iVar4))
					{
						if (!func_229(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var5) < (210f * 210f))
							{
								if (func_19() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_229(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101652.f_2079.f_539.f_1524[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_252(iParam0))
	{
		return 0;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_245(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_244(iParam0, iParam1))
	{
		iVar0 = func_243(iParam1);
		iVar1 = func_241(iParam0);
		iVar2 = (func_241(iParam0) - func_241(iParam1));
		iVar3 = (func_243(iParam0) - func_243(iParam1));
		iVar4 = (func_240(iParam0) - func_240(iParam1));
		iVar5 = (func_239(iParam0) - func_239(iParam1));
		iVar6 = (func_238(iParam0) - func_238(iParam1));
		iVar7 = (func_237(iParam0) - func_237(iParam1));
	}
	else
	{
		iVar0 = func_243(iParam0);
		iVar1 = func_241(iParam1);
		iVar2 = (func_241(iParam1) - func_241(iParam0));
		iVar3 = (func_243(iParam1) - func_243(iParam0));
		iVar4 = (func_240(iParam1) - func_240(iParam0));
		iVar5 = (func_239(iParam1) - func_239(iParam0));
		iVar6 = (func_238(iParam1) - func_238(iParam0));
		iVar7 = (func_237(iParam1) - func_237(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_236(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_235(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_235(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_236(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_237(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_238(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_239(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_240(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_241(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_242(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_242(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_243(int iParam0)
{
	return iParam0 & 15;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_252(iParam1) || !func_252(iParam0))
	{
		return 1;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	var uVar0;
	
	func_251(&uVar0, unk_0xABA05E2C283C3D5F());
	func_250(&uVar0, unk_0xF72CA3D5BA977203());
	func_249(&uVar0, unk_0x83D6515EE2CBF18C());
	func_248(&uVar0, unk_0x3D13C79BF80EB767());
	func_247(&uVar0, unk_0xA93FEF8677A8AF58());
	func_246(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_243(*uParam0);
	iVar1 = func_241(*uParam0);
	if (iParam1 < 1 || iParam1 > func_236(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_239(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_241(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_243(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_240(iParam0);
	if (iVar5 < 1 || iVar5 > func_236(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (unk_0xF44A5E894FE76438(Global_101652.f_23938.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_262()) || Global_100699) || Global_25187) || func_261()) || func_14(8, -1)) || func_260()) || func_259()) || func_258()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1) || func_262()) || Global_25187) || func_261()) || func_14(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_262()) || Global_100699) || Global_25187) || func_261()) || func_14(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5) || Global_36324 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_262()) || Global_100699) || Global_25187) || func_261()) || func_14(8, -1)) || func_260()) || func_259()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_262() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || func_14(8, -1)) || func_257()) || func_256()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_260()) || func_259()) || func_256()) || func_255())
						{
							return 0;
						}
						if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
						{
							if ((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_262()) || Global_25187) || func_261()) || func_14(8, -1)) || func_259()) || func_258()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_262()) || func_259()) || Global_100699) || Global_25187) || func_261()) || Global_36908) || func_14(8, -1)) || func_258()) || func_256()) || func_257()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_262()) || Global_100699) || Global_25187) || func_261()) || func_14(8, -1)) || func_258()) || func_256()) || func_260()) || func_259()) || func_257())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_255()
{
	return Global_91525.f_1;
}

int func_256()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 13);
	}
	return 0;
}

int func_257()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
	{
		return 1;
	}
	return 0;
}

bool func_259()
{
	return Global_91538.f_304 > 0;
}

bool func_260()
{
	return Global_91538.f_303 > 0;
}

var func_261()
{
	return Global_1315229;
}

int func_262()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_263()
{
	func_11();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_264(int iParam0)
{
	return func_244(func_245(), iParam0);
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_266(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_101652.f_6631.f_919[iParam0];
}

bool func_267(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_269())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938.f_1, iVar0);
	}
	return bVar1;
}

int func_268()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x98BE504E8B389665(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_269()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					iVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&iVar0, 0);
					unk_0xC0F82A66B119B68A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_270(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_271()
{
	func_289(0);
	unk_0x56E36EF46CD901B4(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_284(&uLocal_97, 0);
	unk_0x6989DACCC7A558AE("random@escape_paparazzi@standing@");
	unk_0x6989DACCC7A558AE("random@paparazzi@pap_anims");
	unk_0x6989DACCC7A558AE("random@paparazzi@peek");
	unk_0x6989DACCC7A558AE("random@paparazzi@trans");
	unk_0x6989DACCC7A558AE("random@paparazzi@wait");
	unk_0x6989DACCC7A558AE("veh@std@ps@idle_panic");
	unk_0x6989DACCC7A558AE("veh@low@front_ps@idle_panic");
	unk_0x6989DACCC7A558AE(sLocal_374);
	unk_0x480B760C1687F038();
	if (func_221())
	{
		unk_0xFA5E84DCAE200259(1f);
	}
	if (unk_0x7887B64A08364778(iLocal_86) && !unk_0x00B5B0B68211D89B(iLocal_86))
	{
		if (unk_0xE9FC689BC2AB1F82(iLocal_86))
		{
			unk_0x195690A8FA7145B8(iLocal_86);
		}
		if (unk_0x6A0583ECFCCECC9B(iLocal_86, 1))
		{
			if (!unk_0xFCDC1684830866E8(iLocal_86))
			{
				unk_0xE9148EE8AA200B60(iLocal_86, 0, 0);
			}
		}
	}
	func_273(-1);
	unk_0xEF14AD354D9E2237();
	unk_0x905724898AD77C0C(0);
	unk_0xFA03BA297FE81584(joaat("vader"), 0);
	unk_0xFA03BA297FE81584(joaat("surano"), 0);
	unk_0xFA03BA297FE81584(joaat("cavalcade2"), 0);
	unk_0x1AAA727AD9762D22(uLocal_365, 0);
	unk_0x1AAA727AD9762D22(uLocal_366, 0);
	unk_0x1AAA727AD9762D22(uLocal_367, 0);
	unk_0xE6C975AE756267A4(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_25423)
	{
		unk_0xC86A1E7DAC7A9357("AC_STOP");
	}
	func_272();
	unk_0x01DFCA3621B68C4A();
}

void func_272()
{
	Global_25419 = 0;
	Global_25420 = 0;
	Global_25422 = 0;
	Global_25423 = 0;
	Global_25424 = 0;
}

void func_273(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_221())
	{
		func_277(iParam0);
		unk_0x2CD0538D8247BA65(0, 0);
		Global_101643 = unk_0x84A97C70FFDEC0C8();
		func_276(30000);
		StringCopy(&cVar0, func_275(Global_101641, 1), 64);
		if (func_96(Global_101641) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101640, 64);
		}
		unk_0x0ED8A10006DC8E99(&cVar0, Global_101638, (unk_0x84A97C70FFDEC0C8() - Global_101639), 0);
	}
	else if (unk_0xF44A5E894FE76438(Global_101648, 0) && Global_101652.f_23938.f_2 < 3)
	{
		unk_0x4EA098C870B73AB7(&Global_101648, 0);
	}
	func_274(&Global_25244);
	Global_101642 = 0;
	func_227(-1);
}

void func_274(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35739)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35738 = 0;
	Global_35740 = 0;
	Global_35777 = 15;
	Global_55815 = 0;
	Global_55816 = 0;
}

char* func_275(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_276(int iParam0)
{
	Global_36328 = (unk_0x84A97C70FFDEC0C8() + iParam0);
}

void func_277(int iParam0)
{
	func_278(iParam0, 0, func_283(iParam0));
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_245();
	func_281(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_280(iParam0, &uVar0);
	Var1 = { func_279(&uVar0) };
}

struct<16> func_279(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_239(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_238(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_237(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_241(*uParam0), 64);
	return Var0;
}

void func_280(int iParam0, var uParam1)
{
	Global_101652.f_23938.f_43[iParam0] = *uParam1;
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_241(*uParam0);
	iVar1 = func_243(*uParam0);
	iVar2 = func_240(*uParam0);
	iVar3 = func_239(*uParam0);
	iVar4 = func_238(*uParam0);
	iVar5 = func_237(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_236(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_236(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_282(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, iParam1);
	func_250(uParam0, iParam2);
	func_249(uParam0, iParam3);
	func_247(uParam0, iParam5);
	func_248(uParam0, iParam4);
	func_246(uParam0, iParam6);
}

int func_283(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_284(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_286(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_285(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*2*/], 30))
		{
			func_287(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_287(var uParam0)
{
	func_288(*uParam0, "NULL", uParam0->f_1);
}

void func_288(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xF44A5E894FE76438(uParam0, 30))
	{
		switch (func_215(iParam0))
		{
			case 0:
				unk_0x8188DB74546FF484(uParam2);
				break;
			
			case 1:
				unk_0x6989DACCC7A558AE(sParam1);
				break;
			
			case 2:
				unk_0x01E28B98EC24352A(sParam1);
				break;
			
			case 3:
				unk_0x500F58A641B1CB9F(sParam1);
				break;
			
			case 4:
				unk_0x66EB3531711325DB(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xD0DA5B2F3C42D97E(sParam1);
				break;
			
			case 6:
				unk_0x480B760C1687F038();
				break;
			
			case 7:
				unk_0x38142EBEA2AF3714(uParam2);
				break;
			
			case 8:
				unk_0x16CE7E4DDB18D2F8(uParam2, unk_0xF44A5E894FE76438(iParam0, 26));
				break;
			
			case 9:
				unk_0x2BC06D600B2B7A9A();
				break;
			
			default:
				break;
		}
	}
}

void func_289(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_203(iVar0, bParam0);
		iVar0++;
	}
}

