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
	if (unk_0xB9B05E900D325C36(11))
	{
		func_272();
	}
	func_271(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_229(Local_50, -1, 0, 0, 0))
		{
			func_226(-1);
		}
		else
		{
			unk_0xBEE2834559A8897A();
		}
	}
	uLocal_365 = unk_0x765BE154A2FACB3E(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x765BE154A2FACB3E(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x765BE154A2FACB3E(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x963AAB0E6FFD7E02(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x1ED966252985F895(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_223(&uLocal_97);
		if (!func_222())
		{
			if (func_221())
			{
				func_272();
			}
		}
		unk_0x2E2DB6385FA6CB7B("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x76B3C79DE564AFC6(Local_131[iVar0 /*18*/]) && !unk_0x7A6C051038031EFA(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0xF177E0DA126D71C8(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x7A6C051038031EFA(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0xF177E0DA126D71C8(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Local_60 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
		}
		if (!unk_0x8682D8A6269E52C9(iLocal_86))
		{
			Local_63 = { unk_0xF177E0DA126D71C8(iLocal_86, 1) };
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_91) && !unk_0x7A6C051038031EFA(iLocal_91, 0))
		{
			Local_66 = { unk_0xF177E0DA126D71C8(iLocal_91, 1) };
		}
		if (!func_222())
		{
			if (unk_0x7FAAAEBD3B7CE5DA())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_212())
						{
							func_202();
							iLocal_369++;
						}
						else if (func_190())
						{
							func_272();
						}
						break;
					
					case 1:
						if ((func_189() || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || !unk_0x432757A9E7AAFA96(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_188();
								func_272();
							}
						}
						else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_179(1);
							uLocal_360 = func_178(iLocal_86, 0, 145);
							func_177("MAG_2_ESCAPE_PAP_GET_CAR");
							func_176(0);
						}
						break;
				}
			}
			else
			{
				func_272();
			}
		}
		else
		{
			unk_0x7EBF60D0132BF685(unk_0x3D35F9864E4640B1());
			switch (iLocal_47)
			{
				case 0:
					func_173();
					break;
				
				case 1:
					func_170();
					break;
				
				case 2:
					func_148();
					break;
				
				case 3:
					func_136();
					break;
				
				case 4:
					func_106();
					break;
				
				case 10:
					func_272();
					break;
				
				case 5:
					func_105();
					break;
				
				case 6:
					func_102(sLocal_371);
					break;
				
				case 7:
					func_101();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_100())
					{
						if (unk_0x76B3C79DE564AFC6(iLocal_86))
						{
							unk_0xA50DE967C5813F23(&iLocal_86);
						}
						func_76();
					}
					break;
				
				case 11:
					func_72();
					break;
			}
			if (!unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_63, 210f, 210f, 210f, 0, 1, 0))
			{
				func_188();
				func_272();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_69(iLocal_86, 1, 1) || func_68())
					{
						if (iLocal_47 > 0)
						{
							func_176(5);
						}
						else
						{
							func_188();
							func_176(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_64())
						{
							func_176(6);
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
				if ((!unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x31CD6E9F83C10233() - iLocal_564) > 5000) && !unk_0x8682D8A6269E52C9(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
					{
						if (func_222())
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
									iLocal_564 = unk_0x31CD6E9F83C10233();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x3AF262D7332EEDF5(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0x31CD6E9F83C10233();
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
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		iVar0 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
		if (unk_0x432757A9E7AAFA96(iVar0, 0))
		{
			iVar1 = unk_0x3251C2B06497863C(iVar0, 0, 0);
			if (!unk_0x8682D8A6269E52C9(iVar1))
			{
				if (iVar1 != unk_0x0031992CA618A445())
				{
					if (unk_0xCC234795142FC2D2(iVar1))
					{
						if (!unk_0x0E91E9363F366FB3(iVar1, unk_0x0031992CA618A445()))
						{
							unk_0x43EC517AF665D2B9(iVar1, unk_0x0031992CA618A445(), 2000, 2048, 2);
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
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x8DB158934E64B062(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0x7CA73A79B30385F3(Local_204[iVar0 /*18*/], unk_0x0031992CA618A445(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0x8DB158934E64B062(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0x8DB158934E64B062(Local_204[iVar0 /*18*/])));
					unk_0xEA607D64503E7F21(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0x8DB158934E64B062(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x90A3B3322B687517(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
					unk_0x683F0CB6CA4C99D0(0);
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
		if (unk_0x0065EA0CBFB686EA())
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
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
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
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
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
	unk_0x683F0CB6CA4C99D0(0);
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
	unk_0xD804ACF2A7171150(&Global_2314, 16);
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
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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
		Global_14443 = func_19();
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

bool func_12(int iParam0)
{
	return Global_35813 == iParam0;
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
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_15()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
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
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
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
	return Global_104439.f_2244.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_23(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_22(unk_0x0031992CA618A445());
			if (func_21(iVar0) && (!func_12(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_21(Global_104439.f_2244.f_539.f_4301))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
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
		if ((unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/])) && !unk_0x8682D8A6269E52C9(iLocal_86))
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
			unk_0xBE91026C1FC72180(joaat("a_m_y_genstreet_02"));
			unk_0xBE91026C1FC72180(joaat("prop_pap_camera_01"));
			unk_0xBE91026C1FC72180(joaat("cavalcade2"));
			unk_0xBE91026C1FC72180(joaat("vader"));
			unk_0x9F62787D280BF2EC(sLocal_373);
			unk_0x9F62787D280BF2EC("random@paparazzi@pap_anims");
			if (((((unk_0x772F801619C83779(joaat("a_m_y_genstreet_02")) && unk_0x772F801619C83779(joaat("prop_pap_camera_01"))) && unk_0x772F801619C83779(joaat("cavalcade2"))) && unk_0x772F801619C83779(joaat("vader"))) && unk_0xB3379AC2E71D1E7E(sLocal_373)) && unk_0xB3379AC2E71D1E7E("random@paparazzi@pap_anims"))
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
					func_63(iVar0);
					func_61(func_62(iVar0));
					func_61(func_60(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_59(func_62(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_59(func_60(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_59(func_60(2), Local_596[1 /*3*/], fLocal_609[1]);
				func_59(func_60(3), Local_596[1 /*3*/], fLocal_609[1]);
				func_58(0, Local_596[0 /*3*/], fLocal_609[0], 1);
				func_58(1, Local_596[1 /*3*/], fLocal_609[1], 0);
				unk_0x0A69FBBF51E1A08F(func_57(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(func_57(0, 1), 217.1033f);
				unk_0x0A69FBBF51E1A08F(func_57(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(func_57(2, 1), 38.6283f);
				unk_0x0A69FBBF51E1A08F(func_57(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(func_57(3, 1), 272.9875f);
				unk_0xBE0E7D38FE7C495C(func_57(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(func_57(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(func_57(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(func_57(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(func_57(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_55(func_60(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_55(func_62(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_55(func_60(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_55(func_60(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_55(func_60(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x76B3C79DE564AFC6(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0x8CAADD2AA5EDCAAC(Local_204[2 /*18*/].f_2))
				{
					unk_0x477513BFF4F0CEC1(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x8682D8A6269E52C9(func_57(1, 0)))
					{
						unk_0xD706D9D85701BFBD(func_57(1, 0));
					}
					if (!unk_0x8682D8A6269E52C9(func_57(1, 1)))
					{
						unk_0xD706D9D85701BFBD(func_57(1, 1));
					}
					if (!unk_0x76B3C79DE564AFC6(Local_131[2 /*18*/]))
					{
						func_58(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0x432757A9E7AAFA96(Local_131[2 /*18*/], 0))
						{
							func_59(func_62(2), unk_0xF177E0DA126D71C8(Local_131[2 /*18*/], 1), 0f);
							unk_0x7E3C622EB2D4D2E2(func_57(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0x76B3C79DE564AFC6(Local_131[3 /*18*/]))
					{
						func_58(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x8682D8A6269E52C9(func_57(2, 1)))
					{
						unk_0x276406356F4120BB(func_57(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x8682D8A6269E52C9(func_57(3, 1)))
					{
						unk_0x276406356F4120BB(func_57(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x76B3C79DE564AFC6(func_57(3, 0)))
					{
						func_59(func_62(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x8682D8A6269E52C9(func_57(1, 0)))
						{
							unk_0x276406356F4120BB(func_57(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x8682D8A6269E52C9(func_57(1, 1)))
						{
							unk_0x276406356F4120BB(func_57(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x8682D8A6269E52C9(func_57(0, 1)))
						{
							unk_0x276406356F4120BB(func_57(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0x76B3C79DE564AFC6(Local_204[iVar1 /*18*/]))
						{
							unk_0x56AE5027D2067D0B(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0x76B3C79DE564AFC6(Local_131[iVar1 /*18*/]))
						{
							unk_0x56AE5027D2067D0B(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((unk_0x432757A9E7AAFA96(Local_131[0 /*18*/], 0) && !unk_0x8682D8A6269E52C9(func_57(0, 0))) && !unk_0x8682D8A6269E52C9(func_57(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0x9EA0A7060EF3D099(func_57(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x432757A9E7AAFA96(Local_131[2 /*18*/], 0) && !unk_0x8682D8A6269E52C9(func_57(2, 0))) && !unk_0x8682D8A6269E52C9(func_57(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0x9EA0A7060EF3D099(func_57(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0x76B3C79DE564AFC6(iLocal_86) && !unk_0x8682D8A6269E52C9(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x8682D8A6269E52C9(func_57(1, 0)))
							{
								if (unk_0xF041E50CF58AF6F9(func_57(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_62(1));
								}
							}
							if (!unk_0x8682D8A6269E52C9(func_57(1, 1)))
							{
								if (unk_0xF041E50CF58AF6F9(func_57(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_60(1));
								}
							}
							if (!unk_0x8682D8A6269E52C9(func_57(0, 1)))
							{
								if (unk_0xF041E50CF58AF6F9(func_57(0, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_60(0));
								}
							}
						}
						else
						{
							func_46(iLocal_86, func_62(1));
							func_46(iLocal_86, func_60(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_46(iLocal_86, func_62(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0xF041E50CF58AF6F9(func_57(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(2));
						}
						if (unk_0xF041E50CF58AF6F9(func_57(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(3));
						}
						if (unk_0xF041E50CF58AF6F9(func_57(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(0));
						}
					}
					else
					{
						if (!unk_0x2A3398C6222EB190(iLocal_619, 3))
						{
							unk_0xD706D9D85701BFBD(Local_204[func_60(3) /*18*/]);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_619, 3);
						}
						if (!unk_0x2A3398C6222EB190(iLocal_619, 2))
						{
							unk_0xD706D9D85701BFBD(Local_204[func_60(2) /*18*/]);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_619, 2);
						}
						if (!unk_0x2A3398C6222EB190(iLocal_619, 0))
						{
							unk_0xD706D9D85701BFBD(Local_204[func_60(0) /*18*/]);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_45(iLocal_86, func_60(3));
						}
						else
						{
							func_46(iLocal_86, func_60(3));
						}
						func_46(iLocal_86, func_60(2));
						func_46(iLocal_86, func_60(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
			{
				if (unk_0x38A3CC71471EC547(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0xCD70DA50CCD55658());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x76B3C79DE564AFC6(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0x76B3C79DE564AFC6(Local_131[0 /*18*/])) || !unk_0x76B3C79DE564AFC6(Local_131[1 /*18*/]))) && (unk_0x31CD6E9F83C10233() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0x31CD6E9F83C10233() - iLocal_370) < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0x31CD6E9F83C10233();
							}
						}
					}
					iVar2 = func_62(iVar0);
					if (!unk_0x8682D8A6269E52C9(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_60(iVar0);
					}
					else
					{
						iVar3 = func_62(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x8682D8A6269E52C9(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0xF57D21B49780A7A8(Local_204[iVar2 /*18*/], -1794415470) != 1 && unk_0x00E962E9D49FD6C4(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0x2E0E5BF2A31392F4(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x8682D8A6269E52C9(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0xF57D21B49780A7A8(Local_204[iVar3 /*18*/], -1794415470) != 1 && unk_0x00E962E9D49FD6C4(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0x2E0E5BF2A31392F4(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x8682D8A6269E52C9(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x8682D8A6269E52C9(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0xA32DC7E16AD1DFB7(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0xA32DC7E16AD1DFB7(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0x432757A9E7AAFA96(iLocal_91, 0))
											{
												if (unk_0xF57D21B49780A7A8(Local_204[iVar2 /*18*/], -1273030092) != 1 && unk_0xF57D21B49780A7A8(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0xA8A16396F3E7CD41(Local_204[iVar2 /*18*/], 3, 0);
													unk_0xA8A16396F3E7CD41(Local_204[iVar2 /*18*/], 1, 1);
													unk_0xA8A16396F3E7CD41(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0x535099724E85FE80(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x535099724E85FE80(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x535099724E85FE80(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x535099724E85FE80(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xDCDAEB946BEBD18C(Local_204[iVar2 /*18*/], func_39((3f * unk_0x1410333E912D4EC6(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
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
								if (!unk_0x8682D8A6269E52C9(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0xFD4433475BBB55D3(Local_204[iVar2 /*18*/]))
									{
										unk_0x67ABC034CBFBD349(Local_204[iVar2 /*18*/], 2, 0);
										unk_0x53E150F8F0AD7101(Local_204[iVar2 /*18*/], unk_0x0031992CA618A445(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x8682D8A6269E52C9(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0xFD4433475BBB55D3(Local_204[iVar3 /*18*/]))
										{
											unk_0x67ABC034CBFBD349(Local_204[iVar3 /*18*/], 2, 0);
											unk_0x53E150F8F0AD7101(Local_204[iVar3 /*18*/], unk_0x0031992CA618A445(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x90219307C9D2728D(Local_204[iVar2 /*18*/], 0))
							{
								unk_0x471E558A661279DE(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x8682D8A6269E52C9(Local_204[iVar3 /*18*/]))
								{
									if (unk_0x90219307C9D2728D(Local_204[iVar3 /*18*/], 0))
									{
										unk_0x471E558A661279DE(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x8682D8A6269E52C9(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x8682D8A6269E52C9(Local_204[iVar3 /*18*/]))) && unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xDBF188DE6334F01A(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xDBF188DE6334F01A(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xDBF188DE6334F01A(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0x7E3C622EB2D4D2E2(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0x7E3C622EB2D4D2E2(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
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
					iVar5 = func_62(iVar0);
					if (!unk_0x8682D8A6269E52C9(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_60(iVar0);
					}
					else
					{
						iVar6 = func_62(iVar0);
					}
					if (unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x8682D8A6269E52C9(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0xF57D21B49780A7A8(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x2E0E5BF2A31392F4(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x8682D8A6269E52C9(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xA32DC7E16AD1DFB7(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0xF57D21B49780A7A8(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x2E0E5BF2A31392F4(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x8682D8A6269E52C9(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x8682D8A6269E52C9(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0xA32DC7E16AD1DFB7(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0xA32DC7E16AD1DFB7(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0x432757A9E7AAFA96(iLocal_91, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x31CD6E9F83C10233() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x31CD6E9F83C10233() - iLocal_85) > 4000)
									{
										unk_0x10129724FC47A715(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0x432757A9E7AAFA96(Local_131[iVar8 /*18*/], 0) && !unk_0x8682D8A6269E52C9(func_57(iVar8, 0))) && unk_0xA32DC7E16AD1DFB7(func_57(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0xD706D9D85701BFBD(func_57(iVar8, 0));
												unk_0x535099724E85FE80(func_57(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0xF57D21B49780A7A8(Local_204[iVar5 /*18*/], -1273030092) != 1 && unk_0xF57D21B49780A7A8(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0xA8A16396F3E7CD41(Local_204[iVar5 /*18*/], 3, 0);
										unk_0xA8A16396F3E7CD41(Local_204[iVar5 /*18*/], 1, 1);
										unk_0xA8A16396F3E7CD41(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0x535099724E85FE80(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x535099724E85FE80(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x535099724E85FE80(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x535099724E85FE80(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x8682D8A6269E52C9(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xFD4433475BBB55D3(Local_204[iVar5 /*18*/]))
							{
								unk_0x67ABC034CBFBD349(Local_204[iVar5 /*18*/], 2, 0);
								unk_0x53E150F8F0AD7101(Local_204[iVar5 /*18*/], unk_0x0031992CA618A445(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x8682D8A6269E52C9(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xFD4433475BBB55D3(Local_204[iVar6 /*18*/]))
								{
									unk_0x67ABC034CBFBD349(Local_204[iVar6 /*18*/], 2, 0);
									unk_0x53E150F8F0AD7101(Local_204[iVar6 /*18*/], unk_0x0031992CA618A445(), 300f, 100000, 0, 0);
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
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0x0BD3CCFB6C6CFA91(sLocal_373))
				{
					func_28(iVar0);
					if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/].f_2) && unk_0x6781178AD73D2128(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0x90219307C9D2728D(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0x8CAADD2AA5EDCAAC(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0x3CE6EA6EC9DD3DE6(Local_204[iVar0 /*18*/]))
								{
									unk_0x477513BFF4F0CEC1(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0x3CE6EA6EC9DD3DE6(Local_204[iVar0 /*18*/]))
							{
								unk_0x477513BFF4F0CEC1(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0xDBF188DE6334F01A(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0x4CB2F72EA418C083(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0x4CB2F72EA418C083(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0xBE0E7D38FE7C495C(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0xBE0E7D38FE7C495C(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xD8B7C928D4C1F7FC(sLocal_373);
								if (unk_0x029DE1BF5182F07B(sLocal_373))
								{
									unk_0xEB4884D7045C371B(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0xBE0E7D38FE7C495C(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x9A7C952CE7EA4AA3(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x84432DB7C4069064(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], unk_0xCFA31F1E461A6BB5(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x8CAADD2AA5EDCAAC(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0x477513BFF4F0CEC1(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0x8CAADD2AA5EDCAAC(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x477513BFF4F0CEC1(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0xBE0E7D38FE7C495C(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0x9A7C952CE7EA4AA3(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0x20BE8D7B7834CA2D(Local_204[iVar0 /*18*/]) && unk_0xBCAD8C5FE03FBCDD(unk_0x0031992CA618A445()))
				{
					func_176(7);
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
			if (unk_0x76B3C79DE564AFC6(Local_131[iVar0 /*18*/]))
			{
				if (unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_131[iVar0 /*18*/], 0))
					{
						func_176(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0) && !unk_0x7A6C051038031EFA(iParam1, 0))
	{
		if (unk_0x26D7BF365BA84F9C(iParam0, iParam1))
		{
			if (unk_0x3251C2B06497863C(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3251C2B06497863C(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3251C2B06497863C(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3251C2B06497863C(iParam1, 2, 0) == iParam0)
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
		if (unk_0x2A3398C6222EB190(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (unk_0x2D1A3279FE1D23D4(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						unk_0xD804ACF2A7171150(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (unk_0x2D1A3279FE1D23D4(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xD804ACF2A7171150(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0xD804ACF2A7171150(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		iVar0 = func_60(iLocal_568);
		if (((unk_0x76B3C79DE564AFC6(Local_131[iLocal_568 /*18*/]) && unk_0x432757A9E7AAFA96(Local_131[iLocal_568 /*18*/], 0)) && unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/])) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
		{
			if (unk_0xEE37D610E00A6E4E(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x3251C2B06497863C(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x31CD6E9F83C10233() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x4CB2F72EA418C083(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0xBE0E7D38FE7C495C(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x3251C2B06497863C(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0xB05CE3B67169EE18(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0x31CD6E9F83C10233();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0x31CD6E9F83C10233() - Local_204[iVar0 /*18*/].f_13) > 2000)
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
	
	if (!unk_0x8682D8A6269E52C9(Local_204[iParam0 /*18*/]) && !unk_0x8682D8A6269E52C9(iLocal_86))
	{
		iVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0xE9EAE230056F8FA1(Local_204[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0x229F35E7CDDBF757(fVar7) < 10f)
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
		if (!unk_0x2A3398C6222EB190(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(Local_204[iParam0 /*18*/].f_15), iParam1);
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
	fVar0 = (unk_0x3056DED407548E89(Param3.f_1, Param3.f_0) - unk_0x3056DED407548E89(Param0.f_1, Param0.f_0));
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
	if (!unk_0x0BD3CCFB6C6CFA91(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x2A3398C6222EB190(Local_204[iParam0 /*18*/].f_15, iVar1))
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
	
	if (unk_0x76B3C79DE564AFC6(Local_131[iParam0 /*18*/]) && unk_0xDBF188DE6334F01A(Local_131[iParam0 /*18*/]))
	{
		unk_0xE9F8539D5AF6B052(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0xA761A0B6072010C8(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0x0C4BDC77192798AE(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_60(iParam0);
		}
		else
		{
			iVar1 = func_62(iParam0);
		}
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar1 /*18*/]) && unk_0xDBF188DE6334F01A(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x76B3C79DE564AFC6(Local_204[iVar1 /*18*/]))
			{
				unk_0xF2EFF31F204F4A7D(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0xA761A0B6072010C8(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0x0C4BDC77192798AE(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0xA50DE967C5813F23(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x76B3C79DE564AFC6(Local_131[iParam0 /*18*/]))
	{
		if (unk_0x432757A9E7AAFA96(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xDBF188DE6334F01A(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_57(iParam0, 0)))
	{
		if (!unk_0x8682D8A6269E52C9(func_57(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_62(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xDBF188DE6334F01A(func_57(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_57(iParam0, 1)))
	{
		if (!unk_0x8682D8A6269E52C9(func_57(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xDBF188DE6334F01A(func_57(iParam0, 1)))
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
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (((((unk_0x76B3C79DE564AFC6(iParam1) && iParam0 != iParam1) && !unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iParam1))) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iParam1))) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iParam1))) && !unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam1)))
		{
			if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, unk_0xF177E0DA126D71C8(iParam1, 1), unk_0xC82AF3CAB48E70F0(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x261E7847B591A8DC(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
					*uParam5 = unk_0x69F9721375CE60CF(iParam1);
				}
			}
			if (!unk_0xDBF188DE6334F01A(iParam0))
			{
				*uParam6 = unk_0x31CD6E9F83C10233();
			}
			else if ((unk_0x31CD6E9F83C10233() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0xAD2B8127B12C130D(*uParam2, 6f))
						{
							unk_0xD50199C9F3AD72E7(*uParam2, 6f, 0);
							unk_0xE882E0C18562237F(*uParam2, 6f, 0, 0, 0, 0, 0, 0);
							unk_0x0A69FBBF51E1A08F(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x5082D1A6D078DB20(iParam0, *uParam3);
							unk_0x24B72A49849215AE(iParam0, 1084227584);
							unk_0x5EF58B2B49A4503B(iParam0, func_39((unk_0x38A3CC71471EC547(iParam1) + 10f), 10f, 60f));
							unk_0x56B418F469976565(iParam0, 1, 1, 0);
							*uParam6 = unk_0x31CD6E9F83C10233();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x31CD6E9F83C10233();
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
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
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
	
	if (unk_0x76B3C79DE564AFC6(iParam2))
	{
		unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam0), &Var7, &Var10);
		unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x229F35E7CDDBF757((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x229F35E7CDDBF757((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x229F35E7CDDBF757((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x229F35E7CDDBF757(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x229F35E7CDDBF757(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0x0A69FBBF51E1A08F(iParam2, Param3, 1, 0, 0, 1);
		unk_0xB7E3C36A3BE003B5(iParam2, Param6, 2, 1);
		Var1 = { unk_0xCD59EF1D7098A4B4(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0xCD59EF1D7098A4B4(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xB15642D2CDE2531F(Var4, Var1, fVar22, 19, unk_0x0031992CA618A445(), 4);
		if (unk_0xF645F030F8429492(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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
	
	if ((unk_0x31CD6E9F83C10233() - iLocal_567) > 100)
	{
		if ((unk_0x31CD6E9F83C10233() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0x76B3C79DE564AFC6(Local_204[iLocal_566 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0x90219307C9D2728D(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x4CB2F72EA418C083(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && unk_0x2D1A3279FE1D23D4(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && unk_0x2D1A3279FE1D23D4(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0xE8F1E44FDA63ED29("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0x4DF52B0CF393442F(-1, "SHUTTER_FLASH", unk_0xF177E0DA126D71C8(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0x4DF52B0CF393442F(-1, "SHUTTER", unk_0xF177E0DA126D71C8(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x4DF52B0CF393442F(-1, "FLASH", unk_0xF177E0DA126D71C8(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0x31CD6E9F83C10233();
					}
					iLocal_567 = unk_0x31CD6E9F83C10233();
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
	if (!unk_0x8682D8A6269E52C9(Local_204[iParam1 /*18*/]) && !unk_0x8682D8A6269E52C9(iParam0))
	{
		if (!unk_0x51D10CE903646C26(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xF57D21B49780A7A8(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x3933C434ECC3BB69(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x31CD6E9F83C10233() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x4CB2F72EA418C083(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				unk_0xBE0E7D38FE7C495C(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0x31CD6E9F83C10233();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x8682D8A6269E52C9(Local_204[iParam1 /*18*/]) && !unk_0x8682D8A6269E52C9(iParam0))
	{
		Var0 = { unk_0xCD59EF1D7098A4B4(iParam0, func_48(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xF57D21B49780A7A8(Local_204[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
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
				if (unk_0xF57D21B49780A7A8(Local_204[iParam1 /*18*/], 713668775) != 1)
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
	
	Var0 = { func_35(unk_0xF177E0DA126D71C8(iParam4, 1) - Param0) };
	iVar3 = unk_0x5E9D1531733B27F6(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0xD706D9D85701BFBD(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x276406356F4120BB(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x276406356F4120BB(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
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
		if (unk_0xA761A0B6072010C8(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
			{
				unk_0x0C4BDC77192798AE(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0x90219307C9D2728D(Local_204[iVar0 /*18*/], 0))
			{
				unk_0x0C4BDC77192798AE(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]) && !unk_0x90219307C9D2728D(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_178(Local_204[iVar0 /*18*/], 1, 145);
			unk_0x50B5259DFC71B8EC(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x432757A9E7AAFA96(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0xA761A0B6072010C8(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x453EDE9648F86D8C(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0xAD390762A82890FB(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0x0C4BDC77192798AE(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0xEB934A06DDA5027D(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0x50B5259DFC71B8EC(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xC5B4383DA70A2C1A(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xA761A0B6072010C8(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x0C4BDC77192798AE(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_51(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
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
	
	iVar1 = unk_0xB8B31FD7EF092667(uParam0) + 1;
	if (iParam4 || !unk_0x7A6C051038031EFA(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x76B3C79DE564AFC6(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x0031992CA618A445())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x8682D8A6269E52C9(iVar2))
					{
						if (unk_0x972B5786EA49FE1A(iVar2))
						{
							if (unk_0x4347749EAD4D87DF(unk_0x46E9A8D99AF6D7BC(iVar2)) == 0)
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
				else if (!unk_0x8682D8A6269E52C9(iVar2))
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
	int iVar1;
	
	if (!unk_0x00E962E9D49FD6C4(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, iParam1, iParam3);
		iVar1 = unk_0x46E9A8D99AF6D7BC(iVar0);
		if (iVar1 != func_54())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iParam0, 0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, iParam1);
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iVar0, 451360105) == 1 || unk_0xF57D21B49780A7A8(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 0), unk_0xF177E0DA126D71C8(iVar0, 0)) < 10f)
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

int func_54()
{
	return -1;
}

void func_55(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x8682D8A6269E52C9(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xF57D21B49780A7A8(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x276406356F4120BB(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x229F35E7CDDBF757((func_56(unk_0x69F9721375CE60CF(Local_204[iParam0 /*18*/])) - func_56(fParam4))) > 10f)
		{
			if (unk_0xF57D21B49780A7A8(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0xCBA311EF4F32CB8A(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x0BD3CCFB6C6CFA91(sParam7))
					{
						if (!unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x2D1A3279FE1D23D4(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x4CB2F72EA418C083(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x2D1A3279FE1D23D4(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0xBE0E7D38FE7C495C(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_56(float fParam0)
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

var func_57(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_62(iParam0) /*18*/];
	}
	return Local_204[func_60(iParam0) /*18*/];
}

void func_58(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = unk_0x5129A9193468FF77(joaat("vader"), Param1, fParam4, 1, 1, 0);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0x5129A9193468FF77(joaat("cavalcade2"), Param1, fParam4, 1, 1, 0);
		unk_0x8D0385AF2136C38C(Local_131[iParam0 /*18*/], 0);
	}
	unk_0x24B72A49849215AE(Local_131[iParam0 /*18*/], 1084227584);
	unk_0x9DFCC19370F919F3(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x76B3C79DE564AFC6(func_57(iParam0, 0)))
		{
			func_59(func_62(iParam0), Param1, fParam4);
		}
		if (!unk_0x76B3C79DE564AFC6(func_57(iParam0, 1)))
		{
			func_59(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0x8682D8A6269E52C9(func_57(iParam0, 0)) && unk_0x432757A9E7AAFA96(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x7E3C622EB2D4D2E2(func_57(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x8682D8A6269E52C9(func_57(iParam0, 1)) && unk_0x432757A9E7AAFA96(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x7E3C622EB2D4D2E2(func_57(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0x56B418F469976565(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_59(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0x5618B819E5B9C053(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0xA8A16396F3E7CD41(Local_204[iParam0 /*18*/], 1, 0);
	unk_0xEB9B39274C401888(Local_204[iParam0 /*18*/], 1);
	unk_0xA8A16396F3E7CD41(Local_204[iParam0 /*18*/], 0, 1);
	unk_0x1ADB46574E80A3AE(Local_204[iParam0 /*18*/], 3);
	unk_0x87A7451620C12125(Local_204[iParam0 /*18*/], 1);
	unk_0xA8A16396F3E7CD41(Local_204[iParam0 /*18*/], 17, 1);
	unk_0x67ABC034CBFBD349(Local_204[iParam0 /*18*/], 2, 0);
	unk_0x583AB626B1CF33F0(Local_204[iParam0 /*18*/], 0);
	unk_0x390D16BCBFB23E1A(Local_204[iParam0 /*18*/], 1);
	unk_0x5D1F49D1932759D1(Local_204[iParam0 /*18*/], 100);
	unk_0x34DE879566222CF2(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0xD6A092D1F1B9A9F1(Local_204[iParam0 /*18*/], 101, 1);
	unk_0xD6A092D1F1B9A9F1(Local_204[iParam0 /*18*/], 185, 0);
	unk_0x990879ED64ED4138(Local_204[iParam0 /*18*/], 300);
	unk_0xD5FF2158C8907CA9(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0xC20B73867395D06D(Local_204[iParam0 /*18*/], 1);
		unk_0x990879ED64ED4138(Local_204[iParam0 /*18*/], 500);
	}
	unk_0xA84451B91C2933E5(Local_204[iParam0 /*18*/], 1);
	unk_0xA8A16396F3E7CD41(Local_204[iParam0 /*18*/], 2, 1);
	unk_0x3470926F7E037B53(Local_204[iParam0 /*18*/], 2f);
	unk_0x583AB626B1CF33F0(Local_204[iParam0 /*18*/], 0);
	unk_0x49C384CAABA72CC6(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0x766969A7CEBA91AE(joaat("prop_pap_camera_01"), unk_0x616B55A822407A37(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x251439A7DA10B1A9(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xB5B293DE66E91B64(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x76B3C79DE564AFC6(Local_204[0 /*18*/].f_2))
	{
		unk_0x477513BFF4F0CEC1(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0x8DB158934E64B062(Local_204[iParam0 /*18*/]);
}

int func_60(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_61(int iParam0)
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

int func_62(int iParam0)
{
	return iParam0 * 2;
}

void func_63(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_64()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		bVar0 = false;
		if (func_67())
		{
			if (unk_0x76B3C79DE564AFC6(func_66()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(func_66(), 1), Local_63) < 5f && unk_0x38A3CC71471EC547(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
		{
			if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0) && unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0xCD70DA50CCD55658());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0xCD70DA50CCD55658());
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
			if (!unk_0x26D7BF365BA84F9C(iLocal_86, iLocal_91))
			{
				if (unk_0xABB40063444DEDAA(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0x26D7BF365BA84F9C(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x432757A9E7AAFA96(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x432757A9E7AAFA96(iLocal_91, 0) && func_65(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x432757A9E7AAFA96(iLocal_91, 0) && unk_0x7019CC495F72B3AC(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x3AF262D7332EEDF5(0, 2) == 1)
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

int func_65(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (((unk_0xDECC749CB8B5AAB6(iParam0, 0, 7000) || unk_0xDECC749CB8B5AAB6(iParam0, 3, 30000)) || unk_0xDECC749CB8B5AAB6(iParam0, 2, 30000)) || unk_0xDECC749CB8B5AAB6(iParam0, 1, 40000))
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

int func_66()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/])) && !unk_0x8682D8A6269E52C9(iLocal_86))
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

int func_67()
{
	if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_86))
		{
			if (unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (func_69(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]) || unk_0x7A6C051038031EFA(Local_204[iVar0 /*18*/], 0))
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

int func_69(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
		if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 7))
		{
			unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0xA836CB82D16639AD(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6) && !unk_0x57550D8981DAEF6C(unk_0x0031992CA618A445())) && unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0)) && (func_70(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0xF177E0DA126D71C8(iParam0, 1)) < 100f)) && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0xD9698BC08E26CB96(unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x76B3C79DE564AFC6(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_70(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0xF177E0DA126D71C8(iParam3, 1) };
	Var3 = { unk_0xCD59EF1D7098A4B4(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_71(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_71(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_72()
{
	if (iLocal_47 != 11)
	{
		if (unk_0xA761A0B6072010C8(uLocal_362))
		{
			unk_0x0C4BDC77192798AE(&uLocal_362);
		}
		if (unk_0xA761A0B6072010C8(uLocal_363))
		{
			unk_0x0C4BDC77192798AE(&uLocal_363);
		}
		if (unk_0xA761A0B6072010C8(uLocal_360))
		{
			unk_0x0C4BDC77192798AE(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
	{
		if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 3)
		{
			if (!func_75())
			{
				func_73("REPAP_COP1");
			}
		}
		else
		{
			func_176(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_73(char* sParam0)
{
	if ((unk_0x31CD6E9F83C10233() - iLocal_667) > 5000)
	{
		if (!func_74())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0x31CD6E9F83C10233();
			}
		}
	}
}

int func_74()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0x31CD6E9F83C10233() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0x31CD6E9F83C10233() - iLocal_356) > 4000)
		{
			if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6) && unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_176(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0x31CD6E9F83C10233() - iLocal_354) > 15000)
		{
			if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
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
					iLocal_352 = unk_0x31CD6E9F83C10233();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0x31CD6E9F83C10233();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0x31CD6E9F83C10233();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0x31CD6E9F83C10233();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_76()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		unk_0x390D16BCBFB23E1A(iLocal_86, 1);
		unk_0x85F49C37BE784CD7(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0xD6A092D1F1B9A9F1(iLocal_86, 317, 1);
			unk_0xEB9B39274C401888(iLocal_86, 0);
		}
	}
	func_80(-1, 0);
	func_77();
	unk_0x74DA34593340A182(62);
	func_272();
}

void func_77()
{
	func_78();
}

int func_78()
{
	if (func_79(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_79(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_98();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_97(iParam0))
	{
		func_96(iParam0, iParam1);
		if (!func_95(51))
		{
			func_91("RE_REWARD", 1, 0, 4000, 10000, func_94(), 0, 138, 0);
			func_90(51);
		}
		if (func_89(iParam0))
		{
			Global_104439.f_24856.f_2 = 3;
		}
		if (func_88(iParam0, iParam1) != 322)
		{
			func_82(func_88(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104427 = iParam1;
		if (Global_104425 == 0)
		{
			if (((Global_104428 == 1 || Global_104428 == 5) || Global_104428 == 11) || Global_104428 == 25)
			{
				func_81(2);
			}
			else if ((Global_104428 == 26 || Global_104428 == 8) || Global_104428 == 17)
			{
				func_81(7);
			}
			else
			{
				func_81(1);
			}
		}
	}
}

void func_81(int iParam0)
{
	Global_104425 = iParam0;
}

void func_82(int iParam0, var uParam1, var uParam2)
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
		func_86((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = uParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_83();
	}
}

void func_83()
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
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_85(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_84() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_78();
				}
			}
		}
	}
}

int func_84()
{
	return Global_25222;
}

int func_85(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_87();
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

int func_87()
{
	return Global_1312735;
}

int func_88(int iParam0, int iParam1)
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

int func_89(int iParam0)
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

void func_90(int iParam0)
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
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_20271.f_150[iVar1]), iVar0);
	}
}

void func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_92(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_92(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xB3404E397FF56B3B(sParam0, ""))
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
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104439.f_20271.f_145 < 9)
	{
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_4), sParam1, 16);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_8 = (unk_0x31CD6E9F83C10233() + iParam3);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_9 = iParam5;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_11 = iParam6;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_12 = uParam2;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_13 = iParam7;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_14 = iParam8;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = ((unk_0x31CD6E9F83C10233() + iParam3) + iParam4);
		}
		else
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = -1;
		}
		Global_104439.f_20271.f_145++;
		func_93();
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104439.f_20271.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[0])
			{
				Global_104439.f_20271.f_146[0] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[1])
			{
				Global_104439.f_20271.f_146[1] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[2])
			{
				Global_104439.f_20271.f_146[2] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_94()
{
	func_20();
	switch (Global_104439.f_2244.f_539.f_4301)
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

int func_95(int iParam0)
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
		return unk_0x2A3398C6222EB190(Global_104439.f_20271.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24856.f_8[iParam0]), iParam1);
}

int func_97(int iParam0)
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

int func_98()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x49CAADAD1ABAB70A(), 64);
	uVar16 = func_99(Var0);
	return uVar16;
}

int func_99(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x50B7853132D8438E(&cParam0))
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

int func_100()
{
	if (Global_25457)
	{
		func_81(4);
		return 1;
	}
	return 0;
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (unk_0xA761A0B6072010C8(uLocal_360))
	{
		unk_0x0C4BDC77192798AE(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x8682D8A6269E52C9(iLocal_86))
			{
				unk_0x53E150F8F0AD7101(iLocal_86, unk_0x0031992CA618A445(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
				{
					if (unk_0xDBF188DE6334F01A(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_204[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 900f)
					{
						if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xF2EFF31F204F4A7D(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xA50DE967C5813F23(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0xA761A0B6072010C8(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0x0C4BDC77192798AE(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x76B3C79DE564AFC6(Local_131[iVar0 /*18*/]))
				{
					if (unk_0xDBF188DE6334F01A(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_131[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 900f)
					{
						unk_0xE9F8539D5AF6B052(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0xA761A0B6072010C8(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0x0C4BDC77192798AE(&(Local_131[iVar0 /*18*/].f_1));
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
				if ((unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/])) && !unk_0x7A6C051038031EFA(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0x0031992CA618A445(), iVar0);
					if (unk_0xDBF188DE6334F01A(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_204[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 2500f)
					{
						if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xF2EFF31F204F4A7D(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xA50DE967C5813F23(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(func_66(), 1)) < 100f)
				{
					iVar2 = unk_0x3AF262D7332EEDF5(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[6 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[7 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_66(), "PAP3ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[8 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[8 /*10*/]))
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
						iVar2 = unk_0x3AF262D7332EEDF5(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
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
						iVar2 = unk_0x3AF262D7332EEDF5(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x76B3C79DE564AFC6(Local_395[iVar2 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[iVar2 /*10*/]))
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
			if (func_68())
			{
				func_188();
				func_272();
			}
			if (iVar1 == 0)
			{
				func_272();
			}
			break;
	}
}

void func_102(char* sParam0)
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
			if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
			{
				unk_0xD706D9D85701BFBD(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xA761A0B6072010C8(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0x0C4BDC77192798AE(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x8682D8A6269E52C9(iLocal_86))
				{
					if (unk_0x90219307C9D2728D(Local_204[iVar0 /*18*/], 0))
					{
						unk_0x471E558A661279DE(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (unk_0xF57D21B49780A7A8(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x9BE63CB00B240063(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xDBF188DE6334F01A(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_204[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_204[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 400f)
			{
				unk_0xA50DE967C5813F23(&(Local_204[iVar0 /*18*/]));
				if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0xF2EFF31F204F4A7D(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x76B3C79DE564AFC6(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0xDBF188DE6334F01A(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(Local_131[iVar0 /*18*/], 1), unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0x28BB69BE14577487(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0xA761A0B6072010C8(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x0C4BDC77192798AE(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_86))
	{
		if (unk_0xDBF188DE6334F01A(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_63) > 2500f)
		{
			unk_0x056049D9941BD43D(&iLocal_86);
			func_272();
		}
	}
	if (func_68() || func_69(iLocal_86, 1, 1))
	{
		func_176(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0xA761A0B6072010C8(uLocal_360))
			{
				unk_0x0C4BDC77192798AE(&uLocal_360);
			}
			if (unk_0xA761A0B6072010C8(uLocal_361))
			{
				unk_0x0C4BDC77192798AE(&uLocal_361);
			}
			if (!unk_0x8682D8A6269E52C9(iLocal_86))
			{
				unk_0xD706D9D85701BFBD(iLocal_86);
				unk_0x3470926F7E037B53(iLocal_86, 3f);
			}
			func_103();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
							{
								unk_0xD706D9D85701BFBD(Local_204[iVar0 /*18*/]);
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
					if (unk_0x76B3C79DE564AFC6(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
						{
							unk_0xD706D9D85701BFBD(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0x432757A9E7AAFA96(iLocal_91, 0) && unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0x00E962E9D49FD6C4(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x173325AAF2CD766A(&uVar2);
					unk_0xC7703BE1A01E1086(0, iLocal_91, 0);
					unk_0x9EA0A7060EF3D099(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x6D16C83077A6AB15(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0x07291D38009EE0D2(0, iLocal_91, unk_0xF177E0DA126D71C8(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x89E71378750944C1(0, iLocal_91, 0);
					unk_0x276406356F4120BB(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF81AD3C937316CCA(uVar2);
					unk_0xEDD5437C49B7B1F8(iLocal_86, uVar2);
					unk_0x1F5B34056C3CB80B(&uVar2);
				}
				else
				{
					unk_0x173325AAF2CD766A(&uVar3);
					unk_0xC7703BE1A01E1086(0, iLocal_91, 0);
					unk_0xF48F6EEC1EBEB012(0, iLocal_91, 15f, 786468);
					unk_0xF81AD3C937316CCA(uVar3);
					unk_0xEDD5437C49B7B1F8(iLocal_86, uVar3);
					unk_0x1F5B34056C3CB80B(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x90219307C9D2728D(iLocal_86, 0))
				{
					unk_0x471E558A661279DE(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x53E150F8F0AD7101(iLocal_86, unk_0x0031992CA618A445(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x173325AAF2CD766A(&uVar4);
					unk_0x276406356F4120BB(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF81AD3C937316CCA(uVar4);
					unk_0xEDD5437C49B7B1F8(iLocal_86, uVar4);
					unk_0x1F5B34056C3CB80B(&uVar4);
				}
				else
				{
					unk_0x9BE63CB00B240063(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_272();
			}
			break;
	}
}

void func_103()
{
	Global_14611 = 0;
	func_104();
}

void func_104()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

void func_105()
{
	func_103();
	if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0xD706D9D85701BFBD(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_188();
			func_176(10);
		}
		unk_0x7F53E53C6F32D196(iLocal_86, -2065892691);
	}
	else
	{
		func_188();
		func_176(10);
	}
}

void func_106()
{
	var uVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_135();
			if (!unk_0x8682D8A6269E52C9(iLocal_86))
			{
				if (!unk_0xA761A0B6072010C8(uLocal_360))
				{
					uLocal_360 = func_178(iLocal_86, 0, 145);
				}
				if (unk_0xA761A0B6072010C8(uLocal_363))
				{
					unk_0x0C4BDC77192798AE(&uLocal_363);
				}
				if (unk_0xA761A0B6072010C8(uLocal_362))
				{
					unk_0x0C4BDC77192798AE(&uLocal_362);
				}
				unk_0xD706D9D85701BFBD(iLocal_86);
				unk_0x173325AAF2CD766A(&uVar0);
				unk_0x89E71378750944C1(0, iLocal_91, 0);
				unk_0x276406356F4120BB(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xF81AD3C937316CCA(uVar0);
				unk_0xEDD5437C49B7B1F8(iLocal_86, uVar0);
				unk_0x1F5B34056C3CB80B(&uVar0);
				if (unk_0xCA71EE26095D78BE(iLocal_86))
				{
					unk_0x38396C255EC4D248(iLocal_86);
				}
				func_103();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_74() && !unk_0x8682D8A6269E52C9(iLocal_86))
			{
				if (unk_0xF041E50CF58AF6F9(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x8682D8A6269E52C9(iLocal_86))
			{
				func_134(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_108(func_19(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_74() && !unk_0x8682D8A6269E52C9(iLocal_86))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_107())
				{
					func_76();
				}
			}
			break;
	}
}

int func_107()
{
	return 1;
}

void func_108(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_109(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x2553A7EB99AABF55(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE931A869061F7BD2(iVar1, iVar0, 1);
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_133();
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
					func_132(99, 1);
					func_131(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_131(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_131(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_117(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_116(5))
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
							func_131(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_131(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_131(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_116(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_131(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_131(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_131(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_131(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_131(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_131(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_131(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_131(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_131(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_131(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_131(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_131(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_131(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_131(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_131(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_116(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_131(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_131(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_131(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_131(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_131(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_131(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_115(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_132(95, iParam3);
					break;
				
				case 1:
					func_132(97, iParam3);
					break;
				
				case 2:
					func_132(96, iParam3);
					break;
			}
			func_132(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_112(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_112(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_131(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_131(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_131(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
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
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_111(iParam0);
	if (Global_35813 == 15)
	{
		func_110(0);
	}
	return 1;
}

void func_110(bool bParam0)
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
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_112(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_114() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_114() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_113(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_113(int iParam0)
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

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_115(int iParam0)
{
	func_132(93, iParam0);
	func_132(29, iParam0);
	func_132(30, iParam0);
}

bool func_116(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_114() /*11035*/].f_7550.f_10, iParam0);
}

int func_117(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_85(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_118(27, 1);
	return 1;
}

int func_118(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_119(iParam0, iParam1);
}

int func_119(int iParam0, int iParam1)
{
	if (func_12(14) && !func_130(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_129(&Global_2608378))
	{
		if (func_127(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_120(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_120(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_130(iParam1))
	{
		return 0;
	}
	if (func_127(uParam0, iParam1))
	{
		return 0;
	}
	if (func_126(uParam0) < 0f)
	{
		func_125(uParam0, 0);
	}
	func_123(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_121(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_121(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_130(iParam1))
	{
		return 0;
	}
	if (func_127(uParam0, iParam1))
	{
		return 0;
	}
	if (func_126(uParam0) < 0f)
	{
		func_125(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_122(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_123(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_124(uParam0, iVar0);
		iVar0++;
	}
	func_125(uParam0, (Global_2608377 - 0.5f));
}

void func_124(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_125(var uParam0, float fParam1)
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

float func_126(var uParam0)
{
	return uParam0->f_72;
}

bool func_127(var uParam0, int iParam1)
{
	return func_128(uParam0, iParam1) != -1;
}

int func_128(var uParam0, int iParam1)
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

bool func_129(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_130(int iParam0)
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

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_133()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

void func_134(bool bParam0)
{
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0x51D10CE903646C26(iLocal_86, unk_0x0031992CA618A445(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0xD706D9D85701BFBD(iLocal_86);
				unk_0x43EC517AF665D2B9(iLocal_86, unk_0x0031992CA618A445(), -1, 16, 2);
				unk_0x173325AAF2CD766A(&uLocal_620);
				unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
				unk_0x43EC517AF665D2B9(0, unk_0x0031992CA618A445(), -1, 16, 2);
				unk_0xF81AD3C937316CCA(uLocal_620);
				unk_0xEDD5437C49B7B1F8(iLocal_86, uLocal_620);
				unk_0x1F5B34056C3CB80B(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0xF57D21B49780A7A8(iLocal_86, 242628503) != 1)
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
							if (!unk_0x4CB2F72EA418C083(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x2D1A3279FE1D23D4(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0x4CB2F72EA418C083(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x2D1A3279FE1D23D4(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0x4CB2F72EA418C083(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x2D1A3279FE1D23D4(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_135()
{
	if (unk_0xA761A0B6072010C8(uLocal_364))
	{
		unk_0x0C4BDC77192798AE(&uLocal_364);
	}
}

void func_136()
{
	var uVar0;
	
	if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					func_135();
					func_140(1, 1, 0, 0);
					if (unk_0xA761A0B6072010C8(uLocal_362))
					{
						unk_0x0C4BDC77192798AE(&uLocal_362);
					}
					if (unk_0xA761A0B6072010C8(uLocal_360))
					{
						unk_0x0C4BDC77192798AE(&uLocal_360);
					}
					if (unk_0xA761A0B6072010C8(uLocal_361))
					{
						unk_0x0C4BDC77192798AE(&uLocal_361);
					}
					if (unk_0xCA71EE26095D78BE(iLocal_86))
					{
						unk_0x38396C255EC4D248(iLocal_86);
					}
					func_138();
					if (!unk_0x8682D8A6269E52C9(iLocal_86))
					{
						unk_0xC5F8FCBA959CFCF8(iLocal_86, unk_0xCD59EF1D7098A4B4(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0xC5F8FCBA959CFCF8(unk_0x0031992CA618A445(), unk_0xCD59EF1D7098A4B4(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_137(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
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
					func_108(func_19(), 1, 750, 0, 1);
					if (!unk_0x8682D8A6269E52C9(iLocal_86))
					{
						unk_0xC5F8FCBA959CFCF8(iLocal_86, unk_0xCD59EF1D7098A4B4(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0x7E54A33202605E52(iLocal_86, 0, 0);
					}
					unk_0xC5F8FCBA959CFCF8(unk_0x0031992CA618A445(), unk_0xCD59EF1D7098A4B4(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_74() && !unk_0x8682D8A6269E52C9(iLocal_86))
				{
					unk_0x173325AAF2CD766A(&uVar0);
					unk_0x89E71378750944C1(0, iLocal_91, 0);
					unk_0x276406356F4120BB(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF81AD3C937316CCA(uVar0);
					unk_0xEDD5437C49B7B1F8(iLocal_86, uVar0);
					unk_0x1F5B34056C3CB80B(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (!unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
							func_140(0, 1, 0, 0);
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
				if ((!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0x432757A9E7AAFA96(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x89E71378750944C1(unk_0x0031992CA618A445(), iLocal_91, 0);
					unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					func_140(0, 1, 0, 0);
					unk_0xFABEFEE17018AE2A(iLocal_91, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_107())
					{
						if (!bLocal_368)
						{
							if (!func_95(19))
							{
								func_91("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_90(19);
							}
						}
						func_76();
					}
				}
				break;
			}
	}
}

bool func_137(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

void func_138()
{
	Global_14611 = 0;
	func_139();
}

void func_139()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_147(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_9())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_146(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_147(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_146(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_144(unk_0x3D35F9864E4640B1())) && !func_142(unk_0x3D35F9864E4640B1(), 0)) && !func_141())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_144(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_141()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_143(-1, 0) == 8;
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

int func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_87();
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

int func_144(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return 1;
	}
	if (func_145())
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

bool func_145()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_146(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

void func_148()
{
	if (Global_3 || bLocal_70)
	{
		unk_0x68F19FECF821F7A2(0.7f);
	}
	if (bLocal_368 && !unk_0x8682D8A6269E52C9(iLocal_86))
	{
		if (!func_169(iLocal_86))
		{
			if (!unk_0xA761A0B6072010C8(uLocal_360))
			{
				uLocal_360 = func_178(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_67())
			{
				if (!unk_0xA761A0B6072010C8(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
				if (unk_0xA761A0B6072010C8(uLocal_363))
				{
					unk_0x0C4BDC77192798AE(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0xA761A0B6072010C8(uLocal_363))
				{
					uLocal_363 = func_50(Local_56, 1);
				}
				if (unk_0xA761A0B6072010C8(uLocal_362))
				{
					unk_0x0C4BDC77192798AE(&uLocal_362);
				}
			}
			if (unk_0xA761A0B6072010C8(uLocal_360))
			{
				unk_0x0C4BDC77192798AE(&uLocal_360);
			}
		}
		if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
		{
			if ((unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0)) && func_168(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				unk_0x1581691D748490F3(iLocal_91, 1, 1);
				unk_0xFABEFEE17018AE2A(iLocal_91, 1);
				unk_0x5CBEDEFFD7D137BD(iLocal_91, 0, 0);
			}
		}
		if (unk_0xA761A0B6072010C8(uLocal_363) && !unk_0x90219307C9D2728D(iLocal_86, 0))
		{
			if (unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_176(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_67() && func_167(1, 1, 1))
			{
				if (unk_0x417F21FB3F950AEE(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
			{
				if (unk_0xF57D21B49780A7A8(iLocal_86, -1794415470) != 1)
				{
					unk_0x2E0E5BF2A31392F4(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_67() && func_167(1, 1, 1))
			{
				if (unk_0x417F21FB3F950AEE(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
		}
		func_163(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_67())
			{
				if (unk_0x4CB2F72EA418C083(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x4CB2F72EA418C083(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xD706D9D85701BFBD(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x15007EAE63C7ECCF(0.5f);
					iLocal_369++;
				}
				if (!func_162())
				{
					func_157();
				}
			}
			break;
		
		case 1:
			if (!func_75())
			{
				if (func_67())
				{
					if (!func_74())
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
			if (!func_75())
			{
				if (func_67())
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
				if (func_153("REPAP_HOME1", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_153("REPAP_HOME1M", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_153("REPAP_HOME1F", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			else if (func_153("REPAP_HOME1T", (func_156() && !func_75())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_153("REPAP_HOME1L", (func_156() && !func_75())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_75())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_156())
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
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_152("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_153("REPAP_HOME2L", (func_156() && !func_75())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_152("REPAP_RESP2"))
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
				if (func_153("REPAP_HOME3", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_152("REPAP_HOME3"))
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
				if (func_153("REPAP_HOME4", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_152("REPAP_HOME4"))
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
				if (func_153("REPAP_NOBAN", (func_156() && !func_75())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_152("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_75())
			{
				if (func_156() && !func_74())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_75();
			break;
		
		case 100:
			if (func_150(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_177("");
				func_176(3);
			}
			break;
	}
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
	{
		func_72();
	}
	if (func_19() == 2)
	{
		if ((func_149() && !func_162()) && iLocal_47 != 8)
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_86))
			{
				if (unk_0xF041E50CF58AF6F9(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x03F0ADE460FD95F9(iLocal_86, unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1())))
					{
						unk_0xBF00F993DA29A169(iLocal_86, unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1()));
					}
					func_103();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_149()
{
	return Global_25456;
}

int func_150(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 73, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam5)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
	}
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 138, 1);
	unk_0xC9621A9AD282CC14(0, 136, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 131, 1);
	unk_0xC9621A9AD282CC14(0, 132, 1);
	unk_0xC9621A9AD282CC14(0, 123, 1);
	unk_0xC9621A9AD282CC14(0, 126, 1);
	unk_0xC9621A9AD282CC14(0, 129, 1);
	unk_0xC9621A9AD282CC14(0, 130, 1);
	unk_0xC9621A9AD282CC14(0, 133, 1);
	unk_0xC9621A9AD282CC14(0, 134, 1);
	unk_0x36EF10C45CB5F97A();
	func_151(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x31CD6E9F83C10233();
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x229F35E7CDDBF757(unk_0x38A3CC71471EC547(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_151(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		if (unk_0x51C1CCFBBE8CC4D1(iParam0))
		{
			if (unk_0x6753D44917FA47E9(iParam0))
			{
				unk_0x0323C8DAEC297D2A(iParam0, 0);
			}
		}
	}
}

int func_152(char* sParam0)
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

int func_153(char* sParam0, bool bParam1)
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
			if (func_155(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_74())
				{
					iLocal_81 = unk_0x31CD6E9F83C10233();
				}
			}
			else if ((unk_0x31CD6E9F83C10233() - iLocal_81) > 500)
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
		Local_75 = { func_154() };
		func_138();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_154()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0x1B2C99C290B1EF3B();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xA56C5821F50C3275(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xA56C5821F50C3275(&(Global_14613[iVar8 /*6*/])))
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

bool func_155(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

int func_156()
{
	if (bLocal_368)
	{
		if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
		{
			if (func_67())
			{
				return 1;
			}
		}
		if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && !unk_0x90219307C9D2728D(iLocal_86, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_67();
	}
	return 0;
}

void func_157()
{
	if (func_19() == 2)
	{
		if (!unk_0xA761A0B6072010C8(uLocal_364))
		{
			func_160();
			uLocal_364 = func_159(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x3B815A6E8530D3A5(uLocal_364, 269);
			func_158();
		}
	}
}

void func_158()
{
	if (!func_162())
	{
		if (func_19() == 2)
		{
			Global_25456 = 1;
		}
	}
}

var func_159(struct<3> Param0, int iParam3)
{
	return func_50(Param0, iParam3);
}

void func_160()
{
	if (func_19() == 2)
	{
		if (!Global_25458)
		{
			func_161("CULT_BLIP_HELP", -1);
			Global_25458 = 1;
		}
	}
}

void func_161(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_162()
{
	if (Global_104439.f_24856.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_163(bool bParam0)
{
	if (unk_0x432757A9E7AAFA96(iLocal_91, 0) && !unk_0x8682D8A6269E52C9(iLocal_86))
	{
		if (func_67())
		{
			if (bParam0)
			{
				if (!unk_0xA761A0B6072010C8(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
			}
			if (unk_0xA761A0B6072010C8(uLocal_360))
			{
				unk_0x0C4BDC77192798AE(&uLocal_360);
			}
			if (unk_0xA761A0B6072010C8(uLocal_361))
			{
				unk_0x0C4BDC77192798AE(&uLocal_361);
			}
		}
		else
		{
			if (unk_0xA761A0B6072010C8(uLocal_362))
			{
				unk_0x0C4BDC77192798AE(&uLocal_362);
			}
			if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
			{
				if (!unk_0xA761A0B6072010C8(uLocal_361))
				{
					uLocal_361 = func_164(iLocal_91, 0, 0);
				}
			}
			if (!unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0xA761A0B6072010C8(uLocal_360))
				{
					uLocal_360 = func_178(iLocal_86, 0, 145);
				}
			}
			else if (unk_0xA761A0B6072010C8(uLocal_360))
			{
				unk_0x0C4BDC77192798AE(&uLocal_360);
			}
		}
	}
}

int func_164(int iParam0, bool bParam1, bool bParam2)
{
	return func_165(iParam0, !bParam1, bParam2);
}

int func_165(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_51(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, bParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_51(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, bParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_51(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xB8B31FD7EF092667(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x00E962E9D49FD6C4(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8CD86DB54E1E0747())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			return 0;
		}
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (bParam0)
		{
			if (unk_0x7A6C051038031EFA(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0x3251C2B06497863C(iVar0, -1, 0) != unk_0x0031992CA618A445())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0x4F3A65A97120614D(iVar0) < 0.95f || unk_0x4F3A65A97120614D(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!unk_0x99494FDEBA30D9AF(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		if (unk_0x00E962E9D49FD6C4(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x00E962E9D49FD6C4(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x00E962E9D49FD6C4(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x00E962E9D49FD6C4(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	if (unk_0x03F0ADE460FD95F9(iParam0, unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1())))
	{
		if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x38396C255EC4D248(iParam0);
		}
		return 1;
	}
	else if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xBF00F993DA29A169(iParam0, unk_0xC95BCBF0579C6F1A(unk_0x3D35F9864E4640B1()));
	}
	return 0;
}

void func_170()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0x432757A9E7AAFA96(iLocal_91, 0))
	{
		if (!unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 1))
		{
			if (unk_0xF57D21B49780A7A8(iLocal_86, -1794415470) != 1)
			{
				unk_0x2E0E5BF2A31392F4(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0x76B3C79DE564AFC6(func_66()) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iLocal_86, 1), unk_0xF177E0DA126D71C8(func_66(), 1)) < 100f) && (unk_0x38A3CC71471EC547(iLocal_91) < 5f || !unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0x4CB2F72EA418C083(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x26D7BF365BA84F9C(iLocal_86, iLocal_91))
				{
					unk_0xBE0E7D38FE7C495C(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x4CB2F72EA418C083(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x26D7BF365BA84F9C(iLocal_86, iLocal_91))
			{
				unk_0xBE0E7D38FE7C495C(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x4CB2F72EA418C083(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x4CB2F72EA418C083(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x26D7BF365BA84F9C(iLocal_86, iLocal_91))
		{
			unk_0xD706D9D85701BFBD(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x76B3C79DE564AFC6(func_66()) && !unk_0x8682D8A6269E52C9(func_66()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_103();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x15007EAE63C7ECCF(0.2f);
						unk_0xEB9B39274C401888(iLocal_86, 1);
						unk_0x85F49C37BE784CD7(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0x766969A7CEBA91AE(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0x33808CAFB62A256D(iLocal_358, 0, 0);
						unk_0x477513BFF4F0CEC1(iLocal_358, 0, 0);
						unk_0x1F18D3C78C8C1A11(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_172();
				if (!unk_0x417F21FB3F950AEE(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0x31CD6E9F83C10233();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0x76B3C79DE564AFC6(func_66()) && unk_0x830CAE5496B8AD6B(func_66(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_74())
					{
						bLocal_669 = true;
					}
					if (unk_0x76B3C79DE564AFC6(func_66()))
					{
						if (!unk_0x830CAE5496B8AD6B(func_66(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_75())
					{
						if (!func_171())
						{
							func_172();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_152("REPAP_RES1"))
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
								{
									if (func_152("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_153("REPAP_CHT3M", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_153("REPAP_CHT3F", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_153("REPAP_CHT3T", ((func_156() && !func_75()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
								}
							}
							break;
						
						case 5:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_153("REPAP_CHT4M", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_153("REPAP_CHT4F", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_153("REPAP_CHT4T", ((func_156() && !func_75()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
								}
							}
							break;
						
						case 6:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_153("REPAP_CHT5M", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_153("REPAP_CHT5F", ((func_156() && !func_75()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_153("REPAP_CHT5T", ((func_156() && !func_75()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
								}
							}
							break;
						
						case 7:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
								{
									if (func_152("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
								{
									if (func_152("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x31CD6E9F83C10233();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x31CD6E9F83C10233() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
								{
									if (func_152("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_156()) && !func_75()) && !func_74())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!unk_0x76B3C79DE564AFC6(func_66()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
					func_138();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_67())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0x31CD6E9F83C10233();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_67())
				{
					func_177("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_176(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_163(0);
	}
}

int func_171()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x31CD6E9F83C10233() - iLocal_666) > 5000)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_91) && unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
		{
			if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0x31CD6E9F83C10233() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0x31CD6E9F83C10233();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
	}
	return 0;
}

void func_172()
{
	int iVar0;
	
	if ((unk_0x31CD6E9F83C10233() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0x76B3C79DE564AFC6(func_66())) && !unk_0x8682D8A6269E52C9(func_66()))
		{
			if (unk_0x1410333E912D4EC6(Local_63, unk_0xF177E0DA126D71C8(func_66(), 1), 1) < 8f)
			{
				iVar0 = unk_0x3AF262D7332EEDF5(0, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
						if (unk_0x76B3C79DE564AFC6(Local_395[4 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
								iLocal_565 = unk_0x3AF262D7332EEDF5(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
						if (unk_0x76B3C79DE564AFC6(Local_395[4 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
								iLocal_565 = unk_0x3AF262D7332EEDF5(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_66(), "PAP2", 0, 1);
						if (unk_0x76B3C79DE564AFC6(Local_395[5 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
								iLocal_565 = unk_0x3AF262D7332EEDF5(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_66(), "PAP3", 0, 1);
						if (unk_0x76B3C79DE564AFC6(Local_395[6 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
								iLocal_565 = unk_0x3AF262D7332EEDF5(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_66(), "PAP4", 0, 1);
						if (unk_0x76B3C79DE564AFC6(Local_395[7 /*10*/]) && !unk_0x8682D8A6269E52C9(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x31CD6E9F83C10233();
								iLocal_565 = unk_0x3AF262D7332EEDF5(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_173()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		if (unk_0xA761A0B6072010C8(uLocal_360))
		{
			unk_0x02C0454478A70EFA(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0x9F62787D280BF2EC("random@paparazzi@peek");
				unk_0x9F62787D280BF2EC("random@paparazzi@trans");
				unk_0x9F62787D280BF2EC("random@paparazzi@wait");
				if ((unk_0xB3379AC2E71D1E7E("random@paparazzi@peek") && unk_0xB3379AC2E71D1E7E("random@paparazzi@trans")) && unk_0xB3379AC2E71D1E7E("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0x87070FAB863D4019(Local_653, Local_656, 2);
					unk_0x5C774A8BEBE5BD26(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x43EC517AF665D2B9(iLocal_86, unk_0x0031992CA618A445(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0x15007EAE63C7ECCF(0.2f);
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
				if (unk_0x2A3398C6222EB190(iLocal_660, 0))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_660, 1))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0xB3404E397FF56B3B(sLocal_631, "right_"))
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
				if ((unk_0x00BF23259C14645D(uLocal_625) && unk_0xB69F54D50B0A81C6(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0xD706D9D85701BFBD(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0x87070FAB863D4019(Local_653, Local_656, 2);
						unk_0x5C774A8BEBE5BD26(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0xCD70DA50CCD55658());
					}
					if ((unk_0x31CD6E9F83C10233() - iLocal_624) > 5000 && iLocal_660 == 0)
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
								func_17(&Local_395, 1, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, unk_0x0031992CA618A445(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xD706D9D85701BFBD(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0x87070FAB863D4019(Local_653, Local_656, 2);
									unk_0x5C774A8BEBE5BD26(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xCD7E92DE2BFA0B0D(&iLocal_660, 0);
								}
								iLocal_624 = unk_0x31CD6E9F83C10233();
							}
						}
					}
				}
				if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0xA761A0B6072010C8(uLocal_359))
					{
						unk_0x0C4BDC77192798AE(&uLocal_359);
						if (!unk_0xA761A0B6072010C8(uLocal_360))
						{
							uLocal_360 = func_178(iLocal_86, 0, 145);
						}
					}
					unk_0xD706D9D85701BFBD(iLocal_86);
					uLocal_625 = unk_0x87070FAB863D4019(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0x5C774A8BEBE5BD26(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x5C774A8BEBE5BD26(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0x00BF23259C14645D(uLocal_625) && unk_0xB69F54D50B0A81C6(uLocal_625) > 0.9f)
				{
					if (unk_0xF57D21B49780A7A8(iLocal_86, 242628503) != 1)
					{
						unk_0xD706D9D85701BFBD(iLocal_86);
						unk_0xBE0E7D38FE7C495C(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (func_175())
					{
						unk_0x28BB69BE14577487(&iLocal_91);
						iLocal_91 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						unk_0x1581691D748490F3(iLocal_91, 1, 1);
						unk_0x5CBEDEFFD7D137BD(iLocal_91, 0, 0);
						unk_0xFABEFEE17018AE2A(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0xFABEFEE17018AE2A(iLocal_91, 1);
					if (func_137(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_664 = 1;
						iLocal_369 = 100;
					}
				}
				else if (func_137(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_664 = 1;
					iLocal_369++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_174(Local_87, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (unk_0x830CAE5496B8AD6B(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0xF57D21B49780A7A8(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							unk_0x173325AAF2CD766A(&uVar16);
							unk_0x276406356F4120BB(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x3933C434ECC3BB69(0, unk_0x0031992CA618A445(), 0);
							unk_0xF81AD3C937316CCA(uVar16);
							unk_0xEDD5437C49B7B1F8(iLocal_86, uVar16);
							unk_0x7E54A33202605E52(iLocal_86, 0, 0);
							unk_0x1F5B34056C3CB80B(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0x3470926F7E037B53(iLocal_86, 1f);
							func_174(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_174(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
						{
							if (unk_0xA761A0B6072010C8(uLocal_361))
							{
								unk_0x0C4BDC77192798AE(&uLocal_361);
							}
							if (!unk_0xA761A0B6072010C8(uLocal_360))
							{
								uLocal_360 = func_178(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0x830CAE5496B8AD6B(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_168(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_103();
							if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
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
							unk_0xD706D9D85701BFBD(iLocal_86);
							unk_0x2E0E5BF2A31392F4(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_174(Local_87, 1);
				}
				else
				{
					func_174(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (func_150(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (!unk_0x8682D8A6269E52C9(iLocal_86) && unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
					{
						if (unk_0xA761A0B6072010C8(uLocal_360))
						{
							unk_0x0C4BDC77192798AE(&uLocal_360);
						}
						unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
						func_176(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0) && !unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 1)) && !unk_0x417F21FB3F950AEE(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0x67ABC034CBFBD349(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_176(6);
								}
								else
								{
									unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 1, 0);
									unk_0x67ABC034CBFBD349(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_176(6);
								}
							}
						}
						if (!unk_0xA32DC7E16AD1DFB7(iLocal_86, iLocal_91, 0))
						{
							if (unk_0xF57D21B49780A7A8(iLocal_86, -1794415470) != 1)
							{
								unk_0xD706D9D85701BFBD(iLocal_86);
								unk_0x2E0E5BF2A31392F4(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0xCD59EF1D7098A4B4(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0x3470926F7E037B53(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (!func_74())
					{
						func_103();
						if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 0)
						{
							func_103();
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
				func_174(Local_87, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0x38A3CC71471EC547(unk_0x0031992CA618A445()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0xCD70DA50CCD55658());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0xCD70DA50CCD55658() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
				{
					if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0) && func_175())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						unk_0x1581691D748490F3(iLocal_91, 1, 1);
					}
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_91, 0))
					{
						if (unk_0xA761A0B6072010C8(uLocal_361))
						{
							unk_0x0C4BDC77192798AE(&uLocal_361);
						}
						if (!unk_0xA761A0B6072010C8(uLocal_360))
						{
							uLocal_360 = func_178(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0xA761A0B6072010C8(uLocal_360))
						{
							unk_0x0C4BDC77192798AE(&uLocal_360);
						}
						if (!unk_0xA761A0B6072010C8(uLocal_361))
						{
							uLocal_361 = func_164(iLocal_91, 0, 0);
						}
					}
					if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iLocal_91))
					{
						if (unk_0xA761A0B6072010C8(uLocal_361))
						{
							unk_0x0C4BDC77192798AE(&uLocal_361);
						}
						if (!unk_0xA761A0B6072010C8(uLocal_360))
						{
							uLocal_360 = func_178(iLocal_86, 0, 145);
						}
						func_177("MAG_2_ESCAPE_PAP_CHASE");
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
				func_174(Local_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (unk_0x432757A9E7AAFA96(iLocal_91, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_60, Local_87) > 75f)
				{
					func_176(6);
				}
				if (func_189())
				{
					func_176(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!unk_0x432757A9E7AAFA96(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_176(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (unk_0x8DB158934E64B062(iLocal_91) < iLocal_83)
						{
							if (unk_0x7CA73A79B30385F3(iLocal_91, unk_0x0031992CA618A445(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0x8DB158934E64B062(iLocal_91)));
							}
							unk_0xEA607D64503E7F21(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0xF950BD7C02B9AF2C(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_176(5);
							}
						}
					}
				}
				iLocal_83 = unk_0x8DB158934E64B062(iLocal_91);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iLocal_86))
		{
			if (unk_0xFD4433475BBB55D3(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_176(5);
				}
			}
		}
	}
}

void func_174(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_63, Param0) > 2.5f)
	{
		if (unk_0xF57D21B49780A7A8(iLocal_86, 713668775) != 1)
		{
			unk_0x276406356F4120BB(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xF57D21B49780A7A8(iLocal_86, 713668775) != 1)
	{
		func_134(bParam3);
		unk_0x43EC517AF665D2B9(iLocal_86, unk_0x0031992CA618A445(), -1, 16, 2);
	}
}

bool func_175()
{
	return (((((unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0)) && (unk_0x2076012573940835(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))) || unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))))) && unk_0xB8B31FD7EF092667(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) > 0) && func_168(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))) && !Global_103486);
}

void func_176(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_177(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!unk_0xB3404E397FF56B3B(iLocal_560[iVar0], sParam0))
		{
			if (unk_0x3A7B47D96E536F61(iLocal_560[iVar0]))
			{
				unk_0xB3E27A9E412BBDF8(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0xB3404E397FF56B3B(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0x3A7B47D96E536F61(iLocal_560[iVar0]))
			{
				unk_0xFD69BDF108B32E5B(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_178(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_165(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA761A0B6072010C8(uVar0)) && unk_0xA56C5821F50C3275(&(Global_104439.f_27911[iParam2 /*29*/].f_3)))
	{
		unk_0x50B5259DFC71B8EC(uVar0, &(Global_104439.f_27911[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_179(int iParam0)
{
	if (func_182())
	{
		Global_104429 = 1;
		Global_104426 = unk_0x31CD6E9F83C10233();
		if (func_89(Global_104428))
		{
			func_180(0);
		}
		unk_0xD1DEB22AEDCCED60(1, "RE_TITLE");
		if (iParam0 && func_89(Global_104428))
		{
			unk_0x292298DDE6D3EE2A();
		}
		return 1;
	}
	return 0;
}

void func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104439.f_24856.f_2 < 3)
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_161(func_181(iParam0), -1);
					Global_104439.f_24856.f_2++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(Global_104435, 1))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_161(func_181(iParam0), -1);
					Global_104439.f_24856.f_3++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_104435, 2))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_161(func_181(iParam0), -1);
					Global_104439.f_24856.f_4++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 2);
				}
			}
			break;
	}
}

char* func_181(int iParam0)
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

int func_182()
{
	switch (func_183(&Global_25281, 0, 5, 0, unk_0xFFDE6A3A0108B7CB()))
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

int func_183(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90385.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_187(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x94EB0EFC2C10DAF6(unk_0xED1168B8D2D313FA(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x7EF668988342648C(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_185(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_184(uParam0, iParam4);
		}
	}
	return 2;
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_185(int iParam0)
{
	return func_186(iParam0, Global_35813);
}

int func_186(int iParam0, int iParam1)
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

int func_187(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_185(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_188()
{
	int iVar0;
	
	if (!unk_0x8682D8A6269E52C9(iLocal_86))
	{
		unk_0x67ABC034CBFBD349(iLocal_86, 2, 0);
		unk_0x53E150F8F0AD7101(iLocal_86, unk_0x0031992CA618A445(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x8682D8A6269E52C9(Local_204[iVar0 /*18*/]))
		{
			unk_0x53E150F8F0AD7101(Local_204[iVar0 /*18*/], unk_0x0031992CA618A445(), 300f, -1, 0, 0);
			unk_0x7F53E53C6F32D196(Local_204[iVar0 /*18*/], -2065892691);
			unk_0xEB9B39274C401888(Local_204[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_189()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204.f_0)
	{
		if (unk_0x76B3C79DE564AFC6(Local_204[iVar1 /*18*/]) && !unk_0x8682D8A6269E52C9(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x8CAADD2AA5EDCAAC(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0xA836CB82D16639AD(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0x40F3590C2FDAEDCC(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0xFD4433475BBB55D3(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
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
		if (unk_0x76B3C79DE564AFC6(Local_131[iVar1 /*18*/]))
		{
			if (unk_0x432757A9E7AAFA96(Local_131[iVar1 /*18*/], 0) && unk_0x8CAADD2AA5EDCAAC(Local_131[iVar1 /*18*/]))
			{
				if (unk_0xB3D4A3F00B489CC7(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_190()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_201())
		{
			return 0;
		}
	}
	if (func_197())
	{
		return 1;
	}
	if (func_191(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_191(float fParam0, bool bParam1)
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
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_94();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 2) && !unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 3))
				{
					func_192(iVar32, &Var0);
					fVar35 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0.f_6, 1);
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

void func_192(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_193(uParam1, "Abigail1", func_195(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 1:
			func_193(uParam1, "Abigail2", func_195(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 2:
			func_193(uParam1, "Barry1", func_195(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 3:
			func_193(uParam1, "Barry2", func_195(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 4:
			func_193(uParam1, "Barry3", func_195(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 5:
			func_193(uParam1, "Barry3A", func_195(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 6:
			func_193(uParam1, "Barry3C", func_195(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 7:
			func_193(uParam1, "Barry4", func_195(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_194(iParam0), 0, 0);
			break;
		
		case 8:
			func_193(uParam1, "Dreyfuss1", func_195(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 9:
			func_193(uParam1, "Epsilon1", func_195(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 10:
			func_193(uParam1, "Epsilon2", func_195(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 11:
			func_193(uParam1, "Epsilon3", func_195(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 12:
			func_193(uParam1, "Epsilon4", func_195(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 13:
			func_193(uParam1, "Epsilon5", func_195(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 14:
			func_193(uParam1, "Epsilon6", func_195(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 15:
			func_193(uParam1, "Epsilon7", func_195(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 16:
			func_193(uParam1, "Epsilon8", func_195(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 17:
			func_193(uParam1, "Extreme1", func_195(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 18:
			func_193(uParam1, "Extreme2", func_195(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 19:
			func_193(uParam1, "Extreme3", func_195(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 20:
			func_193(uParam1, "Extreme4", func_195(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 21:
			func_193(uParam1, "Fanatic1", func_195(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_194(iParam0), 1, 0);
			break;
		
		case 22:
			func_193(uParam1, "Fanatic2", func_195(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_194(iParam0), 1, 0);
			break;
		
		case 23:
			func_193(uParam1, "Fanatic3", func_195(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_194(iParam0), 0, 1);
			break;
		
		case 24:
			func_193(uParam1, "Hao1", func_195(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_194(iParam0), 0, 1);
			break;
		
		case 25:
			func_193(uParam1, "Hunting1", func_195(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 26:
			func_193(uParam1, "Hunting2", func_195(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 27:
			func_193(uParam1, "Josh1", func_195(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 28:
			func_193(uParam1, "Josh2", func_195(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 29:
			func_193(uParam1, "Josh3", func_195(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 30:
			func_193(uParam1, "Josh4", func_195(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 31:
			func_193(uParam1, "Maude1", func_195(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 32:
			func_193(uParam1, "Minute1", func_195(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 33:
			func_193(uParam1, "Minute2", func_195(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 34:
			func_193(uParam1, "Minute3", func_195(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 35:
			func_193(uParam1, "MrsPhilips1", func_195(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 36:
			func_193(uParam1, "MrsPhilips2", func_195(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 37:
			func_193(uParam1, "Nigel1", func_195(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 38:
			func_193(uParam1, "Nigel1A", func_195(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 39:
			func_193(uParam1, "Nigel1B", func_195(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
		
		case 40:
			func_193(uParam1, "Nigel1C", func_195(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
		
		case 41:
			func_193(uParam1, "Nigel1D", func_195(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
		
		case 42:
			func_193(uParam1, "Nigel2", func_195(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 43:
			func_193(uParam1, "Nigel3", func_195(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
		
		case 44:
			func_193(uParam1, "Omega1", func_195(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 45:
			func_193(uParam1, "Omega2", func_195(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 46:
			func_193(uParam1, "Paparazzo1", func_195(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 47:
			func_193(uParam1, "Paparazzo2", func_195(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 48:
			func_193(uParam1, "Paparazzo3", func_195(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 49:
			func_193(uParam1, "Paparazzo3A", func_195(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 50:
			func_193(uParam1, "Paparazzo3B", func_195(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 51:
			func_193(uParam1, "Paparazzo4", func_195(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 52:
			func_193(uParam1, "Rampage1", func_195(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 54:
			func_193(uParam1, "Rampage3", func_195(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 55:
			func_193(uParam1, "Rampage4", func_195(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 56:
			func_193(uParam1, "Rampage5", func_195(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
		
		case 53:
			func_193(uParam1, "Rampage2", func_195(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
		
		case 57:
			func_193(uParam1, "TheLastOne", func_195(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 58:
			func_193(uParam1, "Tonya1", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 59:
			func_193(uParam1, "Tonya2", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 60:
			func_193(uParam1, "Tonya3", func_195(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 61:
			func_193(uParam1, "Tonya4", func_195(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		case 62:
			func_193(uParam1, "Tonya5", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_193(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_194(int iParam0)
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

struct<2> func_195(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_196(iParam0) };
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_196(int iParam0)
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

int func_197()
{
	if (func_200() && !func_201())
	{
		return 1;
	}
	if (func_199() && func_198())
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return Global_104157 > 0;
}

int func_199()
{
	if (Global_89829 != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 20);
	}
	return 0;
}

int func_201()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xEAD4F97609714B93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_202()
{
	func_204(39, 1);
	func_204(40, 1);
	func_204(41, 1);
	func_204(42, 1);
	func_204(43, 1);
	func_204(44, 1);
	uLocal_359 = func_203(Local_87);
	iLocal_86 = unk_0x5618B819E5B9C053(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0xA8A16396F3E7CD41(iLocal_86, 1, 1);
	unk_0xA8A16396F3E7CD41(iLocal_86, 17, 1);
	unk_0x67ABC034CBFBD349(iLocal_86, 128, 1);
	unk_0x390D16BCBFB23E1A(iLocal_86, 1);
	unk_0x8F39F46EB434FA61(iLocal_86, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 0, 0, 1, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 2, 0, 0, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 3, 0, 0, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 4, 0, 0, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 7, 1, 0, 0);
	unk_0xD5FF2158C8907CA9(iLocal_86, 8, 0, 0, 0);
	unk_0x3D4C0ADDD75A1FE7(iLocal_86, 1);
	unk_0xEB9B39274C401888(iLocal_86, 1);
	unk_0x0EB00C68DDFABE19(iLocal_86, 0);
	unk_0x37907A374973B718(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0xC20B73867395D06D(iLocal_86, 1);
	}
	if (unk_0x659E5E147E8E6635("CELEBRITY", &uLocal_69))
	{
		unk_0x7F53E53C6F32D196(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0x5129A9193468FF77(joaat("surano"), Local_92, fLocal_95, 1, 1, 0);
	unk_0x0AF5FA388AAEFF13(iLocal_91, Local_92, 0, 0, 1);
	unk_0x64EA04E5D627DB4A(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x5CBEDEFFD7D137BD(iLocal_91, 0, 0);
	unk_0x8D0385AF2136C38C(iLocal_91, 10);
	unk_0x24B72A49849215AE(iLocal_91, 1084227584);
	unk_0xFABEFEE17018AE2A(iLocal_91, 3);
	unk_0x5B8D16E3613D9A4D(iLocal_91, 1);
	unk_0x8B226AF43C5C1AD3(iLocal_91, 1);
	unk_0x3A34071ED707A472(iLocal_91, unk_0x3B6901D890F3121F(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, unk_0x0031992CA618A445(), "TREVOR", 0, 1);
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
	unk_0x05C9FC8771682275(joaat("vader"), 1);
	unk_0x05C9FC8771682275(joaat("surano"), 1);
	unk_0x05C9FC8771682275(joaat("cavalcade2"), 1);
}

var func_203(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x18EC814D577B92CE(uVar0, 0);
	unk_0x10B7FEC9D017D330(uVar0, 0);
	return uVar0;
}

void func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_211(iParam0, 2, 1))
		{
			func_210(iParam0, 2, 1);
		}
	}
	else if (func_211(iParam0, 2, 1))
	{
		func_205(iParam0, 2, 1);
	}
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD804ACF2A7171150(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_84() == 0)
		{
			uVar0 = func_208(func_209(iParam0), -1, 0);
			unk_0xD804ACF2A7171150(&uVar0, iParam1);
			func_206(func_209(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_207(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, iParam3);
	}
}

int func_207(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_87();
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

int func_208(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_207(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 6632;
			break;
		
		case 45:
			return 3787;
			break;
		
		case 46:
			return 5362;
			break;
		
		default:
			break;
	}
	return 7237;
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_92814.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_84() == 0)
		{
			uVar0 = func_208(func_209(iParam0), -1, 0);
			unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam1);
			func_206(func_209(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_668[iParam0]), iParam1);
	}
}

int func_211(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x2A3398C6222EB190(Global_92814.f_1315[iParam0], iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_84() == 0)
		{
			return unk_0x2A3398C6222EB190(func_208(func_209(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_212()
{
	if (!iLocal_96)
	{
		func_220(&uLocal_97, joaat("surano"));
		func_220(&uLocal_97, joaat("prop_ld_test_01"));
		func_220(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_220(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_220(&uLocal_97, joaat("vader"));
		func_220(&uLocal_97, joaat("cavalcade2"));
		func_220(&uLocal_97, joaat("prop_pap_camera_01"));
		func_217(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_213(&uLocal_97))
	{
		return 0;
	}
	unk_0x9F62787D280BF2EC("random@escape_paparazzi@standing@");
	unk_0x9F62787D280BF2EC("random@paparazzi@pap_anims");
	unk_0x9F62787D280BF2EC("random@paparazzi@peek");
	unk_0x9F62787D280BF2EC("random@paparazzi@trans");
	unk_0x9F62787D280BF2EC("random@paparazzi@wait");
	unk_0x9F62787D280BF2EC("veh@std@ps@idle_panic");
	unk_0x9F62787D280BF2EC("veh@low@front_ps@idle_panic");
	unk_0x9F62787D280BF2EC(sLocal_374);
	unk_0x1D69C39ECF71C85C("ESCPAP", 0);
	if (((((((((unk_0xB3379AC2E71D1E7E("random@escape_paparazzi@standing@") && unk_0xB3379AC2E71D1E7E("random@paparazzi@pap_anims")) && unk_0xB3379AC2E71D1E7E("random@paparazzi@peek")) && unk_0xB3379AC2E71D1E7E("random@paparazzi@trans")) && unk_0xB3379AC2E71D1E7E("random@paparazzi@wait")) && unk_0xB3379AC2E71D1E7E("veh@std@ps@idle_panic")) && unk_0xB3379AC2E71D1E7E("veh@low@front_ps@idle_panic")) && unk_0xB3379AC2E71D1E7E(sLocal_374)) && unk_0xF376F1492C8D737F(0)) && unk_0x1F1D255CB6501243("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_213(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_214(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_214(var uParam0)
{
	return func_215(*uParam0, "NULL", uParam0->f_1);
}

int func_215(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x2A3398C6222EB190(iParam0, 30))
	{
		if (unk_0x2A3398C6222EB190(iParam0, 29))
		{
			switch (func_216(iParam0))
			{
				case 0:
					return unk_0x772F801619C83779(uParam2);
					break;
				
				case 1:
					return unk_0xB3379AC2E71D1E7E(sParam1);
					break;
				
				case 2:
					return unk_0x88D617EDD6923CC0(sParam1);
					break;
				
				case 3:
					return unk_0xB56F0E1C89B9E069(sParam1);
					break;
				
				case 4:
					return unk_0x4B59C07015859DF4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x44731FF13F4F33EF(sParam1);
					break;
				
				case 6:
					return unk_0x1F1D255CB6501243(sParam1, unk_0x2A3398C6222EB190(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x388802672AA51883(iParam2);
					break;
				
				case 8:
					return unk_0xF376F1492C8D737F(iParam2);
					break;
				
				case 9:
					return unk_0x980AD2F46D0AFC4E();
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

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A3398C6222EB190(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_217(var uParam0)
{
	func_218(uParam0, 9, -1, 0);
}

void func_218(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_219(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0 /*2*/], iParam1);
			unk_0xCD7E92DE2BFA0B0D(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_219(int iParam0)
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

void func_220(var uParam0, int iParam1)
{
	func_218(uParam0, 0, iParam1, 0);
}

int func_221()
{
	if (!func_185(5))
	{
		return 1;
	}
	if (func_197())
	{
		return 1;
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_201())
		{
			return 0;
		}
	}
	if (func_191(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if ((Global_104428 == func_98() && unk_0x86EEE9A2AEF6EC88()) && Global_104429)
	{
		return 1;
	}
	return 0;
}

void func_223(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xA83FFA3FA7711E6D() >= (uParam0->f_32 + uParam0->f_33) || unk_0x2A3398C6222EB190(Global_92762.f_20, 2)) || unk_0x2A3398C6222EB190(Global_92762.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 29))
					{
						func_224(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xA83FFA3FA7711E6D();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_224(var uParam0)
{
	func_225(uParam0, "NULL", uParam0->f_1);
}

void func_225(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x2A3398C6222EB190(*uParam0, 30))
	{
		switch (func_216(*uParam0))
		{
			case 0:
				unk_0xBE91026C1FC72180(uParam2);
				break;
			
			case 1:
				unk_0x9F62787D280BF2EC(sParam1);
				break;
			
			case 2:
				unk_0x9CA1D58A37E9394C(sParam1);
				break;
			
			case 3:
				unk_0x59B2F61C9D01132B(sParam1, unk_0x2A3398C6222EB190(*uParam0, 28));
				break;
			
			case 4:
				unk_0xB1F4C6EA4D59C5D0(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x8EC6855B27DBF450(sParam1);
				break;
			
			case 6:
				unk_0x1F1D255CB6501243(sParam1, unk_0x2A3398C6222EB190(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x089FF988344A3611(iParam2);
				break;
			
			case 8:
				unk_0x1D69C39ECF71C85C(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xE21C454556502C7D();
				break;
			
			default:
				break;
		}
		unk_0xCD7E92DE2BFA0B0D(uParam0, 29);
	}
}

void func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_98();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_228(iParam0);
	unk_0x5048E5ECEC23D271(0);
	unk_0x4FA59397643FB016(1);
	Global_104425 = 0;
	func_227();
}

void func_227()
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			unk_0x05C9FC8771682275(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)), 1);
		}
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
}

void func_228(int iParam0)
{
	Global_104428 = iParam0;
}

int func_229(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142565)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_98();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_270())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_201())
			{
				return 0;
			}
		}
		if (!Global_104439.f_8946)
		{
			return 0;
		}
		if (func_79(0))
		{
			return 0;
		}
		if (func_197())
		{
			return 0;
		}
		if (func_269())
		{
			return 0;
		}
		if (Global_104428 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_191(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_268(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_267(func_19()) == 4 || func_267(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_266(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_265(Global_104439.f_24856.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x31CD6E9F83C10233() - Global_104430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_264())
		{
			return 0;
		}
		if (unk_0xD532AAF71376B5E8())
		{
			return 0;
		}
		if (unk_0x86EEE9A2AEF6EC88())
		{
			return 0;
		}
		if (!func_255(4))
		{
			return 0;
		}
		if (!func_185(5))
		{
			return 0;
		}
		if (func_254(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x68BBDCBE8B7849EB(unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445())))
		{
			if ((unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(377.153f, -717.567f, 10.0536f) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(320.9934f, 265.2515f, 82.1221f)) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_254(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_268(30) && !func_254(30, 0))
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
				Var5 = { Global_104439.f_2244.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104439.f_2244.f_539.f_2276[iVar4];
				if (func_253(iVar8))
				{
					if (func_231(iVar4))
					{
						if (!func_230(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var5) < (210f * 210f))
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

bool func_230(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104439.f_2244.f_539.f_2276[iParam0];
	return func_232(iVar0);
}

int func_232(int iParam0)
{
	return func_233(iParam0, 1);
}

int func_233(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_253(iParam0))
	{
		return 0;
	}
	func_234(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_234(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_235(func_246(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_235(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_245(iParam0, iParam1))
	{
		iVar0 = func_244(iParam1);
		iVar1 = func_242(iParam0);
		iVar2 = (func_242(iParam0) - func_242(iParam1));
		iVar3 = (func_244(iParam0) - func_244(iParam1));
		iVar4 = (func_241(iParam0) - func_241(iParam1));
		iVar5 = (func_240(iParam0) - func_240(iParam1));
		iVar6 = (func_239(iParam0) - func_239(iParam1));
		iVar7 = (func_238(iParam0) - func_238(iParam1));
	}
	else
	{
		iVar0 = func_244(iParam0);
		iVar1 = func_242(iParam1);
		iVar2 = (func_242(iParam1) - func_242(iParam0));
		iVar3 = (func_244(iParam1) - func_244(iParam0));
		iVar4 = (func_241(iParam1) - func_241(iParam0));
		iVar5 = (func_240(iParam1) - func_240(iParam0));
		iVar6 = (func_239(iParam1) - func_239(iParam0));
		iVar7 = (func_238(iParam1) - func_238(iParam0));
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
		iVar4 = (iVar4 + func_237(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_236(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_236(float fParam0, float fParam1, float fParam2)
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

int func_237(int iParam0, int iParam1)
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

int func_238(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_239(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_240(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_241(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_242(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_243(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_243(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_244(int iParam0)
{
	return iParam0 & 15;
}

int func_245(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_253(iParam1) || !func_253(iParam0))
	{
		return 1;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_246()
{
	var uVar0;
	
	func_252(&uVar0, unk_0x6676AD594A1E113E());
	func_251(&uVar0, unk_0xE647A8424B4399CE());
	func_250(&uVar0, unk_0x41413FABD538FC3A());
	func_249(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_248(&uVar0, unk_0x1A7BD52C0A88E679());
	func_247(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

void func_247(var uParam0, int iParam1)
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

void func_248(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_242(*uParam0);
	if (iParam1 < 1 || iParam1 > func_237(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_253(int iParam0)
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
	iVar0 = func_238(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_239(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_240(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_242(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_244(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_241(iParam0);
	if (iVar5 < 1 || iVar5 > func_237(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_254(int iParam0, int iParam1)
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24856.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
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
						if (((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_263()) || Global_103486) || Global_25224) || func_262()) || func_14(8, -1)) || func_261()) || func_260()) || func_259()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1) || func_263()) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_261()) || func_260()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_263()) || Global_103486) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_261()) || func_260()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_263()) || Global_103486) || Global_25224) || func_262()) || func_14(8, -1)) || func_261()) || func_260()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_263() || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || func_14(8, -1)) || func_258()) || func_257()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_261()) || func_260()) || func_257()) || func_256())
						{
							return 0;
						}
						if ((unk_0x003E46CBEF6CE07A() && unk_0xEBDBC787B1778ACF() != 3) && unk_0x3AA42F4BDAE68399() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
						{
							if ((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_263()) || Global_25224) || func_262()) || func_14(8, -1)) || func_260()) || func_259()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || func_263()) || func_260()) || Global_103486) || Global_25224) || func_262()) || Global_36944) || func_14(8, -1)) || func_259()) || func_257()) || func_258()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0)) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1)) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0x5BB7DB96F2D9F1A9(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_263()) || Global_103486) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_257()) || func_261()) || func_260()) || func_258())
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

var func_256()
{
	return Global_92801.f_1;
}

int func_257()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 13);
	}
	return 0;
}

int func_258()
{
	if (unk_0x7832F791572D5809(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_259()
{
	if (Global_71045)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_260()
{
	return Global_92814.f_310 > 0;
}

bool func_261()
{
	return Global_92814.f_309 > 0;
}

var func_262()
{
	return Global_1312853;
}

int func_263()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return Global_90385.f_44 == 1;
	}
	return 0;
}

int func_264()
{
	func_11();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_265(int iParam0)
{
	return func_245(func_246(), iParam0);
}

int func_266(int iParam0, int iParam1, int iParam2)
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

int func_267(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_104439.f_7549.f_919[iParam0];
}

bool func_268(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_270())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856.f_1, iVar0);
	}
	return bVar1;
}

int func_269()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(uVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x3251C2B06497863C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_270()
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

void func_271(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_272()
{
	func_290(0);
	unk_0xEE470B9028B06E0A(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xB8EFDF266981AB1A("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_285(&uLocal_97, 0);
	unk_0xBE238DB7614E8074("random@escape_paparazzi@standing@");
	unk_0xBE238DB7614E8074("random@paparazzi@pap_anims");
	unk_0xBE238DB7614E8074("random@paparazzi@peek");
	unk_0xBE238DB7614E8074("random@paparazzi@trans");
	unk_0xBE238DB7614E8074("random@paparazzi@wait");
	unk_0xBE238DB7614E8074("veh@std@ps@idle_panic");
	unk_0xBE238DB7614E8074("veh@low@front_ps@idle_panic");
	unk_0xBE238DB7614E8074(sLocal_374);
	unk_0x616FBCC20E22C43A();
	if (func_222())
	{
		unk_0x15007EAE63C7ECCF(1f);
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_86) && !unk_0x8682D8A6269E52C9(iLocal_86))
	{
		if (unk_0xCA71EE26095D78BE(iLocal_86))
		{
			unk_0x38396C255EC4D248(iLocal_86);
		}
		if (unk_0x90219307C9D2728D(iLocal_86, 1))
		{
			if (!unk_0xFD4433475BBB55D3(iLocal_86))
			{
				unk_0x471E558A661279DE(iLocal_86, 0, 0);
			}
		}
	}
	func_274(-1);
	unk_0x5BE457FB3A01F7C2();
	unk_0x802EE7B12B5BF67E(0);
	unk_0x05C9FC8771682275(joaat("vader"), 0);
	unk_0x05C9FC8771682275(joaat("surano"), 0);
	unk_0x05C9FC8771682275(joaat("cavalcade2"), 0);
	unk_0x04021FF677078694(uLocal_365, 0);
	unk_0x04021FF677078694(uLocal_366, 0);
	unk_0x04021FF677078694(uLocal_367, 0);
	unk_0x1ED966252985F895(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_25460)
	{
		unk_0x1E420F926A7BC4D2("AC_STOP");
	}
	func_273();
	unk_0xBEE2834559A8897A();
}

void func_273()
{
	Global_25456 = 0;
	Global_25457 = 0;
	Global_25459 = 0;
	Global_25460 = 0;
	Global_25461 = 0;
}

void func_274(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_98();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_222())
	{
		func_278(iParam0);
		unk_0xD1DEB22AEDCCED60(0, 0);
		Global_104430 = unk_0x31CD6E9F83C10233();
		func_277(30000);
		StringCopy(&cVar0, func_276(Global_104428, 1), 64);
		if (func_97(Global_104428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104427, 64);
		}
		unk_0xBE71FB92F44391FF(&cVar0, Global_104425, (unk_0x31CD6E9F83C10233() - Global_104426), 0);
	}
	else if (unk_0x2A3398C6222EB190(Global_104435, 0) && Global_104439.f_24856.f_2 < 3)
	{
		unk_0xD804ACF2A7171150(&Global_104435, 0);
	}
	func_275(&Global_25281);
	Global_104429 = 0;
	func_228(-1);
}

void func_275(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

char* func_276(int iParam0, bool bParam1)
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

void func_277(int iParam0)
{
	Global_36364 = (unk_0x31CD6E9F83C10233() + iParam0);
}

void func_278(int iParam0)
{
	func_279(iParam0, 0, func_284(iParam0));
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_246();
	func_282(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_281(iParam0, &uVar0);
	Var1 = { func_280(&uVar0) };
}

struct<16> func_280(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_241(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_244(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_242(*uParam0), 64);
	return Var0;
}

void func_281(int iParam0, var uParam1)
{
	Global_104439.f_24856.f_43[iParam0] = *uParam1;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_242(*uParam0);
	iVar1 = func_244(*uParam0);
	iVar2 = func_241(*uParam0);
	iVar3 = func_240(*uParam0);
	iVar4 = func_239(*uParam0);
	iVar5 = func_238(*uParam0);
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
	iVar6 = func_237(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_237(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_283(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_252(uParam0, iParam1);
	func_251(uParam0, iParam2);
	func_250(uParam0, iParam3);
	func_248(uParam0, iParam5);
	func_249(uParam0, iParam4);
	func_247(uParam0, iParam6);
}

int func_284(int iParam0)
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

void func_285(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_287(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_286(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_287(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x2A3398C6222EB190((*uParam0)[iVar0 /*2*/], 30))
		{
			func_288(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_288(var uParam0)
{
	func_289(*uParam0, "NULL", uParam0->f_1);
}

void func_289(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x2A3398C6222EB190(uParam0, 30))
	{
		switch (func_216(iParam0))
		{
			case 0:
				unk_0x9793B48C4C8275F8(uParam2);
				break;
			
			case 1:
				unk_0xBE238DB7614E8074(sParam1);
				break;
			
			case 2:
				unk_0xC6D00BD1BEFACD9B(sParam1);
				break;
			
			case 3:
				unk_0x40C8D24AE8508DEC(sParam1);
				break;
			
			case 4:
				unk_0x0EA5304CED5FD5D1(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xD4B8FC41ABE48E25(sParam1);
				break;
			
			case 6:
				unk_0x616FBCC20E22C43A();
				break;
			
			case 7:
				unk_0x601546C2E8935047(uParam2);
				break;
			
			case 8:
				unk_0x84D19A34E1A97ABC(uParam2, unk_0x2A3398C6222EB190(iParam0, 26));
				break;
			
			case 9:
				unk_0xAC4E213EC292CE4D();
				break;
			
			default:
				break;
		}
	}
}

void func_290(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 47)
	{
		func_204(iVar0, bParam0);
		iVar0++;
	}
}

