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
	if (unk_0x78BF2001491914AC(11))
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
			unk_0xA232817B0B36F2E5();
		}
	}
	uLocal_365 = unk_0x25118499AB6F447B(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x25118499AB6F447B(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x25118499AB6F447B(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x333EF04F1A5ADEB5(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x20A9229D8F4F054A(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0x10632CBB5FE7F881("WORLD_VEHICLE_DRIVE_SOLO", 0);
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
		unk_0xE57EE82872DC7A9F("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x2137828D03306CAF(Local_131[iVar0 /*18*/]) && !unk_0xA9A04898798AE9E6(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0xD1EE0E9FCD74A37B(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0xA9A04898798AE9E6(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0xD1EE0E9FCD74A37B(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Local_60 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_86))
		{
			Local_63 = { unk_0xD1EE0E9FCD74A37B(iLocal_86, 1) };
		}
		if (unk_0x2137828D03306CAF(iLocal_91) && !unk_0xA9A04898798AE9E6(iLocal_91, 0))
		{
			Local_66 = { unk_0xD1EE0E9FCD74A37B(iLocal_91, 1) };
		}
		if (!func_222())
		{
			if (unk_0xC6D11983DAD48A48())
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
						if ((func_189() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || !unk_0x7FAC45D56235AB39(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_188();
								func_272();
							}
						}
						else if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
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
			unk_0x0EA9C6F829566CB7(unk_0x0FFED3E94261A832());
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
						if (unk_0x2137828D03306CAF(iLocal_86))
						{
							unk_0x27BAC9B39BCC6522(&iLocal_86);
						}
						func_76();
					}
					break;
				
				case 11:
					func_72();
					break;
			}
			if (!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_63, 210f, 210f, 210f, 0, 1, 0))
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
				if ((!unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x3732B96D7A1859B4() - iLocal_564) > 5000) && !unk_0x769F0F6444C1ABE0(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
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
									iLocal_564 = unk_0x3732B96D7A1859B4();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x895FB9FE885E36ED(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0x3732B96D7A1859B4();
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
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		iVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			iVar1 = unk_0x8F8E5C33266ED978(iVar0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar1))
			{
				if (iVar1 != unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0x03322C3918511AA0(iVar1))
					{
						if (!unk_0xD175293EF7878334(iVar1, unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xEDF42871EAD55C9B(iVar1, unk_0x2A5EB8B0FE590B91(), 2000, 2048, 2);
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
		if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
		{
			if (unk_0xE86A53C202B21FAB(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0xE8594BE97055E9A1(Local_204[iVar0 /*18*/], unk_0x2A5EB8B0FE590B91(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0xE86A53C202B21FAB(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0xE86A53C202B21FAB(Local_204[iVar0 /*18*/])));
					unk_0x869E3FDF7FDABA6A(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0xE86A53C202B21FAB(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0xA2782778D22DC0EA(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
					unk_0xE40123A348A5FEDA(0);
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
		if (unk_0x4FF1AD2B1A443280())
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
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
	unk_0xE40123A348A5FEDA(0);
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
	unk_0x507FE690B1271947(&Global_2314, 16);
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
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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
		Global_14443 = func_19();
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
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_15()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
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
	return Global_103236.f_2164.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_23(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_22(unk_0x2A5EB8B0FE590B91());
			if (func_21(iVar0) && (!func_12(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_21(Global_103236.f_2164.f_539.f_4301))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
		if ((unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/])) && !unk_0x769F0F6444C1ABE0(iLocal_86))
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
			unk_0x0F39DF6675B2333E(joaat("a_m_y_genstreet_02"));
			unk_0x0F39DF6675B2333E(joaat("prop_pap_camera_01"));
			unk_0x0F39DF6675B2333E(joaat("cavalcade2"));
			unk_0x0F39DF6675B2333E(joaat("vader"));
			unk_0xA7C81DED990D3418(sLocal_373);
			unk_0xA7C81DED990D3418("random@paparazzi@pap_anims");
			if (((((unk_0xA1FC9D7AEA164881(joaat("a_m_y_genstreet_02")) && unk_0xA1FC9D7AEA164881(joaat("prop_pap_camera_01"))) && unk_0xA1FC9D7AEA164881(joaat("cavalcade2"))) && unk_0xA1FC9D7AEA164881(joaat("vader"))) && unk_0x45834D6C20FFF689(sLocal_373)) && unk_0x45834D6C20FFF689("random@paparazzi@pap_anims"))
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
				unk_0x8E979F037EACE55A(func_57(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(func_57(0, 1), 217.1033f);
				unk_0x8E979F037EACE55A(func_57(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(func_57(2, 1), 38.6283f);
				unk_0x8E979F037EACE55A(func_57(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(func_57(3, 1), 272.9875f);
				unk_0xF1C3427BFED79E6B(func_57(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF1C3427BFED79E6B(func_57(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF1C3427BFED79E6B(func_57(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF1C3427BFED79E6B(func_57(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF1C3427BFED79E6B(func_57(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
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
			if (unk_0x2137828D03306CAF(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0x18570CCBAF7F635C(Local_204[2 /*18*/].f_2))
				{
					unk_0x4C1FCB3943DAF647(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x769F0F6444C1ABE0(func_57(1, 0)))
					{
						unk_0x654FFF4D16298AC5(func_57(1, 0));
					}
					if (!unk_0x769F0F6444C1ABE0(func_57(1, 1)))
					{
						unk_0x654FFF4D16298AC5(func_57(1, 1));
					}
					if (!unk_0x2137828D03306CAF(Local_131[2 /*18*/]))
					{
						func_58(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0x7FAC45D56235AB39(Local_131[2 /*18*/], 0))
						{
							func_59(func_62(2), unk_0xD1EE0E9FCD74A37B(Local_131[2 /*18*/], 1), 0f);
							unk_0x01EE2412A2609146(func_57(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0x2137828D03306CAF(Local_131[3 /*18*/]))
					{
						func_58(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x769F0F6444C1ABE0(func_57(2, 1)))
					{
						unk_0x28FB7E63A217D6DE(func_57(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x769F0F6444C1ABE0(func_57(3, 1)))
					{
						unk_0x28FB7E63A217D6DE(func_57(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x2137828D03306CAF(func_57(3, 0)))
					{
						func_59(func_62(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x769F0F6444C1ABE0(func_57(1, 0)))
						{
							unk_0x28FB7E63A217D6DE(func_57(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x769F0F6444C1ABE0(func_57(1, 1)))
						{
							unk_0x28FB7E63A217D6DE(func_57(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x769F0F6444C1ABE0(func_57(0, 1)))
						{
							unk_0x28FB7E63A217D6DE(func_57(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0x2137828D03306CAF(Local_204[iVar1 /*18*/]))
						{
							unk_0x35A5A8139089E07B(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0x2137828D03306CAF(Local_131[iVar1 /*18*/]))
						{
							unk_0x35A5A8139089E07B(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((unk_0x7FAC45D56235AB39(Local_131[0 /*18*/], 0) && !unk_0x769F0F6444C1ABE0(func_57(0, 0))) && !unk_0x769F0F6444C1ABE0(func_57(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0xED057CE9299687BC(func_57(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x7FAC45D56235AB39(Local_131[2 /*18*/], 0) && !unk_0x769F0F6444C1ABE0(func_57(2, 0))) && !unk_0x769F0F6444C1ABE0(func_57(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0xED057CE9299687BC(func_57(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0x2137828D03306CAF(iLocal_86) && !unk_0x769F0F6444C1ABE0(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x769F0F6444C1ABE0(func_57(1, 0)))
							{
								if (unk_0x7DDA81F38FB30F23(func_57(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_62(1));
								}
							}
							if (!unk_0x769F0F6444C1ABE0(func_57(1, 1)))
							{
								if (unk_0x7DDA81F38FB30F23(func_57(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_60(1));
								}
							}
							if (!unk_0x769F0F6444C1ABE0(func_57(0, 1)))
							{
								if (unk_0x7DDA81F38FB30F23(func_57(0, 1), Local_590, Global_22, 0, 1, 0))
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
					if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0x7DDA81F38FB30F23(func_57(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(2));
						}
						if (unk_0x7DDA81F38FB30F23(func_57(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(3));
						}
						if (unk_0x7DDA81F38FB30F23(func_57(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_60(0));
						}
					}
					else
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_619, 3))
						{
							unk_0x654FFF4D16298AC5(Local_204[func_60(3) /*18*/]);
							unk_0xF6082E2ADA1C795B(&iLocal_619, 3);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_619, 2))
						{
							unk_0x654FFF4D16298AC5(Local_204[func_60(2) /*18*/]);
							unk_0xF6082E2ADA1C795B(&iLocal_619, 2);
						}
						if (!unk_0xAA4F14DA15DB0B51(iLocal_619, 0))
						{
							unk_0x654FFF4D16298AC5(Local_204[func_60(0) /*18*/]);
							unk_0xF6082E2ADA1C795B(&iLocal_619, 0);
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
			if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
			{
				if (unk_0xD2660BAC03EB7433(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0xBCA469D44FBFAC80());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x2137828D03306CAF(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0x2137828D03306CAF(Local_131[0 /*18*/])) || !unk_0x2137828D03306CAF(Local_131[1 /*18*/]))) && (unk_0x3732B96D7A1859B4() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0x3732B96D7A1859B4() - iLocal_370) < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0x3732B96D7A1859B4();
							}
						}
					}
					iVar2 = func_62(iVar0);
					if (!unk_0x769F0F6444C1ABE0(Local_204[iVar2 /*18*/]))
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
							if (unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x769F0F6444C1ABE0(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0x5B9B499C707C2A95(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0xE897E371352225D5(Local_204[iVar2 /*18*/], -1794415470) != 1 && unk_0x457D9E478E06E354(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0xA6AC097BEBB7B1F0(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x769F0F6444C1ABE0(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0x5B9B499C707C2A95(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0xE897E371352225D5(Local_204[iVar3 /*18*/], -1794415470) != 1 && unk_0x457D9E478E06E354(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0xA6AC097BEBB7B1F0(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x769F0F6444C1ABE0(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x769F0F6444C1ABE0(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0x5B9B499C707C2A95(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x5B9B499C707C2A95(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0x7FAC45D56235AB39(iLocal_91, 0))
											{
												if (unk_0xE897E371352225D5(Local_204[iVar2 /*18*/], -1273030092) != 1 && unk_0xE897E371352225D5(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x89AEA58335779997(Local_204[iVar2 /*18*/], 3, 0);
													unk_0x89AEA58335779997(Local_204[iVar2 /*18*/], 1, 1);
													unk_0x89AEA58335779997(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0x82D957BF5625B846(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x82D957BF5625B846(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x82D957BF5625B846(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x82D957BF5625B846(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x858BBF7A215FAC10(Local_204[iVar2 /*18*/], func_39((3f * unk_0x4A2E6F541CD8C36E(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
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
								if (!unk_0x769F0F6444C1ABE0(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0xE4B596B1029F4F6A(Local_204[iVar2 /*18*/]))
									{
										unk_0xAE833788DEAB23CA(Local_204[iVar2 /*18*/], 2, 0);
										unk_0xCD6FB688ED8B6284(Local_204[iVar2 /*18*/], unk_0x2A5EB8B0FE590B91(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x769F0F6444C1ABE0(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0xE4B596B1029F4F6A(Local_204[iVar3 /*18*/]))
										{
											unk_0xAE833788DEAB23CA(Local_204[iVar3 /*18*/], 2, 0);
											unk_0xCD6FB688ED8B6284(Local_204[iVar3 /*18*/], unk_0x2A5EB8B0FE590B91(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0xC4A39E4229BD3ABE(Local_204[iVar2 /*18*/], 0))
							{
								unk_0x8F2751B831A7B303(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x769F0F6444C1ABE0(Local_204[iVar3 /*18*/]))
								{
									if (unk_0xC4A39E4229BD3ABE(Local_204[iVar3 /*18*/], 0))
									{
										unk_0x8F2751B831A7B303(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x769F0F6444C1ABE0(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x769F0F6444C1ABE0(Local_204[iVar3 /*18*/]))) && unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x812A9839F66D4B43(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x812A9839F66D4B43(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x812A9839F66D4B43(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x5B9B499C707C2A95(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0x01EE2412A2609146(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x5B9B499C707C2A95(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0x01EE2412A2609146(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
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
					if (!unk_0x769F0F6444C1ABE0(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_60(iVar0);
					}
					else
					{
						iVar6 = func_62(iVar0);
					}
					if (unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x769F0F6444C1ABE0(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x5B9B499C707C2A95(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0xE897E371352225D5(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xA6AC097BEBB7B1F0(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x769F0F6444C1ABE0(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x5B9B499C707C2A95(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0xE897E371352225D5(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xA6AC097BEBB7B1F0(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x769F0F6444C1ABE0(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x769F0F6444C1ABE0(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0x5B9B499C707C2A95(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x5B9B499C707C2A95(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0x7FAC45D56235AB39(iLocal_91, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x3732B96D7A1859B4() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x3732B96D7A1859B4() - iLocal_85) > 4000)
									{
										unk_0x9B4809FEEC9B2C22(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0x7FAC45D56235AB39(Local_131[iVar8 /*18*/], 0) && !unk_0x769F0F6444C1ABE0(func_57(iVar8, 0))) && unk_0x5B9B499C707C2A95(func_57(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0x654FFF4D16298AC5(func_57(iVar8, 0));
												unk_0x82D957BF5625B846(func_57(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0xE897E371352225D5(Local_204[iVar5 /*18*/], -1273030092) != 1 && unk_0xE897E371352225D5(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x89AEA58335779997(Local_204[iVar5 /*18*/], 3, 0);
										unk_0x89AEA58335779997(Local_204[iVar5 /*18*/], 1, 1);
										unk_0x89AEA58335779997(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0x82D957BF5625B846(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x82D957BF5625B846(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x82D957BF5625B846(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x82D957BF5625B846(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x769F0F6444C1ABE0(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xE4B596B1029F4F6A(Local_204[iVar5 /*18*/]))
							{
								unk_0xAE833788DEAB23CA(Local_204[iVar5 /*18*/], 2, 0);
								unk_0xCD6FB688ED8B6284(Local_204[iVar5 /*18*/], unk_0x2A5EB8B0FE590B91(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x769F0F6444C1ABE0(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xE4B596B1029F4F6A(Local_204[iVar6 /*18*/]))
								{
									unk_0xAE833788DEAB23CA(Local_204[iVar6 /*18*/], 2, 0);
									unk_0xCD6FB688ED8B6284(Local_204[iVar6 /*18*/], unk_0x2A5EB8B0FE590B91(), 300f, 100000, 0, 0);
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
		if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0x58478145CAF8429C(sLocal_373))
				{
					func_28(iVar0);
					if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/].f_2) && unk_0xED01C551E3A161C0(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0xC4A39E4229BD3ABE(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0x18570CCBAF7F635C(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0x96BD442529F76EE7(Local_204[iVar0 /*18*/]))
								{
									unk_0x4C1FCB3943DAF647(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0x96BD442529F76EE7(Local_204[iVar0 /*18*/]))
							{
								unk_0x4C1FCB3943DAF647(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0x812A9839F66D4B43(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0x453DB1DBE5D81637(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0x453DB1DBE5D81637(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0xF1C3427BFED79E6B(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0xF1C3427BFED79E6B(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xA43834F3BCE62F79(sLocal_373);
								if (unk_0x13F7772A421D9FC3(sLocal_373))
								{
									unk_0xC164A800531119AE(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0xF1C3427BFED79E6B(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xDDA7775AAE5B589E(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0xB1C4356ECEE878FE(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], unk_0x0C20E539D876C5B3(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x18570CCBAF7F635C(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0x4C1FCB3943DAF647(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0x18570CCBAF7F635C(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x4C1FCB3943DAF647(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0xF1C3427BFED79E6B(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0xDDA7775AAE5B589E(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0xB833DDD4C8B30212(Local_204[iVar0 /*18*/]) && unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()))
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
			if (unk_0x2137828D03306CAF(Local_131[iVar0 /*18*/]))
			{
				if (unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_131[iVar0 /*18*/], 0))
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
	if (!unk_0xA9A04898798AE9E6(iParam0, 0) && !unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		if (unk_0xF8ED2D0629FE764D(iParam0, iParam1))
		{
			if (unk_0x8F8E5C33266ED978(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x8F8E5C33266ED978(iParam1, 2, 0) == iParam0)
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
		if (unk_0xAA4F14DA15DB0B51(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (unk_0x1E479544F884CFB5(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						unk_0x507FE690B1271947(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (unk_0x1E479544F884CFB5(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x507FE690B1271947(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0x507FE690B1271947(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		iVar0 = func_60(iLocal_568);
		if (((unk_0x2137828D03306CAF(Local_131[iLocal_568 /*18*/]) && unk_0x7FAC45D56235AB39(Local_131[iLocal_568 /*18*/], 0)) && unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/])) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
		{
			if (unk_0xEB018752B4AE9E13(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x8F8E5C33266ED978(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x3732B96D7A1859B4() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x453DB1DBE5D81637(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0xF1C3427BFED79E6B(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x8F8E5C33266ED978(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0x6D91CD1B33FD7716(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0x3732B96D7A1859B4();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0x3732B96D7A1859B4() - Local_204[iVar0 /*18*/].f_13) > 2000)
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
	
	if (!unk_0x769F0F6444C1ABE0(Local_204[iParam0 /*18*/]) && !unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		iVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0x09BFAEEB73544139(Local_204[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0x3FEF699D13BCC798(fVar7) < 10f)
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
		if (!unk_0xAA4F14DA15DB0B51(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xF6082E2ADA1C795B(&(Local_204[iParam0 /*18*/].f_15), iParam1);
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
	fVar0 = (unk_0x12E20547A5AF64B1(Param3.f_1, Param3.f_0) - unk_0x12E20547A5AF64B1(Param0.f_1, Param0.f_0));
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
	if (!unk_0x58478145CAF8429C(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xAA4F14DA15DB0B51(Local_204[iParam0 /*18*/].f_15, iVar1))
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
	
	if (unk_0x2137828D03306CAF(Local_131[iParam0 /*18*/]) && unk_0x812A9839F66D4B43(Local_131[iParam0 /*18*/]))
	{
		unk_0xA613FDAC42DBBFAD(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0xBDD3EABACAB97D09(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0x789C84F1B8496AD0(&(Local_131[iParam0 /*18*/].f_1));
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
		if (unk_0x2137828D03306CAF(Local_204[iVar1 /*18*/]) && unk_0x812A9839F66D4B43(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x2137828D03306CAF(Local_204[iVar1 /*18*/]))
			{
				unk_0xBE35B7268C680A20(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0xBDD3EABACAB97D09(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0x789C84F1B8496AD0(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0x27BAC9B39BCC6522(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x2137828D03306CAF(Local_131[iParam0 /*18*/]))
	{
		if (unk_0x7FAC45D56235AB39(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x812A9839F66D4B43(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x2137828D03306CAF(func_57(iParam0, 0)))
	{
		if (!unk_0x769F0F6444C1ABE0(func_57(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_62(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x812A9839F66D4B43(func_57(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x2137828D03306CAF(func_57(iParam0, 1)))
	{
		if (!unk_0x769F0F6444C1ABE0(func_57(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x812A9839F66D4B43(func_57(iParam0, 1)))
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
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (((((unk_0x2137828D03306CAF(iParam1) && iParam0 != iParam1) && !unk_0xC6B6C45D0DE76B0B(unk_0xD3B21CE53AA7BE51(iParam1))) && !unk_0xDA6E804770521A18(unk_0xD3B21CE53AA7BE51(iParam1))) && !unk_0x0F93427D94EAEAA2(unk_0xD3B21CE53AA7BE51(iParam1))) && !unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam1)))
		{
			if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, unk_0xD1EE0E9FCD74A37B(iParam1, 1), unk_0x37C8136AF6C0BC9B(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xEBB6A451E594E1A8(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
					*uParam5 = unk_0x6DAB28241B34DEED(iParam1);
				}
			}
			if (!unk_0x812A9839F66D4B43(iParam0))
			{
				*uParam6 = unk_0x3732B96D7A1859B4();
			}
			else if ((unk_0x3732B96D7A1859B4() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x14CEA5D3B9541B99(*uParam2, 6f))
						{
							unk_0xF128ECFE9D500DA6(*uParam2, 6f, 0);
							unk_0x17F1CA1754EDB8DB(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0x8E979F037EACE55A(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x2681BA3707AF6DA7(iParam0, *uParam3);
							unk_0x07C140F31B3CDAFA(iParam0, 1084227584);
							unk_0xDFFEF66D82BDA05C(iParam0, func_39((unk_0xD2660BAC03EB7433(iParam1) + 10f), 10f, 60f));
							unk_0x2DEA38A68AA89671(iParam0, 1, 1, 0);
							*uParam6 = unk_0x3732B96D7A1859B4();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x3732B96D7A1859B4();
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
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
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
	
	if (unk_0x2137828D03306CAF(iParam2))
	{
		unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
		unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x3FEF699D13BCC798((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x3FEF699D13BCC798((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x3FEF699D13BCC798((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x3FEF699D13BCC798(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x3FEF699D13BCC798(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0x8E979F037EACE55A(iParam2, Param3, 1, 0, 0, 1);
		unk_0xD39DE0C6C0F91C27(iParam2, Param6, 2, 1);
		Var1 = { unk_0x82D9CF397BA8C885(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x82D9CF397BA8C885(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xD1FD533D8643FA0A(Var4, Var1, fVar22, 19, unk_0x2A5EB8B0FE590B91(), 4);
		if (unk_0x4021570E17CB0020(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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
	
	if ((unk_0x3732B96D7A1859B4() - iLocal_567) > 100)
	{
		if ((unk_0x3732B96D7A1859B4() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0x2137828D03306CAF(Local_204[iLocal_566 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0xC4A39E4229BD3ABE(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x453DB1DBE5D81637(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && unk_0x1E479544F884CFB5(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && unk_0x1E479544F884CFB5(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0xA60596C647F340CC("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0x52EF42797AD5A36D(-1, "SHUTTER_FLASH", unk_0xD1EE0E9FCD74A37B(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0x52EF42797AD5A36D(-1, "SHUTTER", unk_0xD1EE0E9FCD74A37B(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x52EF42797AD5A36D(-1, "FLASH", unk_0xD1EE0E9FCD74A37B(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0x3732B96D7A1859B4();
					}
					iLocal_567 = unk_0x3732B96D7A1859B4();
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
	if (!unk_0x769F0F6444C1ABE0(Local_204[iParam1 /*18*/]) && !unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (!unk_0x16EDD647B91D8D8F(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xE897E371352225D5(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x88E3EDF9AF851486(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x3732B96D7A1859B4() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x453DB1DBE5D81637(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				unk_0xF1C3427BFED79E6B(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0x3732B96D7A1859B4();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x769F0F6444C1ABE0(Local_204[iParam1 /*18*/]) && !unk_0x769F0F6444C1ABE0(iParam0))
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, func_48(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xE897E371352225D5(Local_204[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
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
				if (unk_0xE897E371352225D5(Local_204[iParam1 /*18*/], 713668775) != 1)
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
	
	Var0 = { func_35(unk_0xD1EE0E9FCD74A37B(iParam4, 1) - Param0) };
	iVar3 = unk_0x2410C2F4DC01A40D(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x654FFF4D16298AC5(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x28FB7E63A217D6DE(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x28FB7E63A217D6DE(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
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
		if (unk_0xBDD3EABACAB97D09(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
			{
				unk_0x789C84F1B8496AD0(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0xC4A39E4229BD3ABE(Local_204[iVar0 /*18*/], 0))
			{
				unk_0x789C84F1B8496AD0(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]) && !unk_0xC4A39E4229BD3ABE(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_178(Local_204[iVar0 /*18*/], 1, 145);
			unk_0xA6B842B66643C116(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x7FAC45D56235AB39(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0xBDD3EABACAB97D09(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x052304A1A2560A55(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0xF1194645A0CA23EC(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0x789C84F1B8496AD0(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0xEB5D36079067EBA5(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0xA6B842B66643C116(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x697F84823ACFF84C(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xBDD3EABACAB97D09(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x789C84F1B8496AD0(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_51(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
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
	
	iVar1 = unk_0xCBA4F77BB9D2F115(uParam0) + 1;
	if (iParam4 || !unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x2A5EB8B0FE590B91())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x769F0F6444C1ABE0(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							if (unk_0xEA49C7D4FDCF922C(unk_0xB0BB7458627D389F(iVar2)) == 0)
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
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
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
	
	if (!unk_0x457D9E478E06E354(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_54())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
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
	if (!unk_0x769F0F6444C1ABE0(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xE897E371352225D5(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x28FB7E63A217D6DE(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x3FEF699D13BCC798((func_56(unk_0x6DAB28241B34DEED(Local_204[iParam0 /*18*/])) - func_56(fParam4))) > 10f)
		{
			if (unk_0xE897E371352225D5(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x274810FAE1CBA3EA(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x58478145CAF8429C(sParam7))
					{
						if (!unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x1E479544F884CFB5(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x453DB1DBE5D81637(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x1E479544F884CFB5(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0xF1C3427BFED79E6B(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
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
		Local_131[iParam0 /*18*/] = unk_0xE42A511281C9895B(joaat("vader"), Param1, fParam4, 1, 1, 0);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0xE42A511281C9895B(joaat("cavalcade2"), Param1, fParam4, 1, 1, 0);
		unk_0x23B7F0BEB9890E62(Local_131[iParam0 /*18*/], 0);
	}
	unk_0x07C140F31B3CDAFA(Local_131[iParam0 /*18*/], 1084227584);
	unk_0x3EACD080B21FFD9A(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x2137828D03306CAF(func_57(iParam0, 0)))
		{
			func_59(func_62(iParam0), Param1, fParam4);
		}
		if (!unk_0x2137828D03306CAF(func_57(iParam0, 1)))
		{
			func_59(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0x769F0F6444C1ABE0(func_57(iParam0, 0)) && unk_0x7FAC45D56235AB39(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x01EE2412A2609146(func_57(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x769F0F6444C1ABE0(func_57(iParam0, 1)) && unk_0x7FAC45D56235AB39(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x01EE2412A2609146(func_57(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0x2DEA38A68AA89671(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_59(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0xD00B79C0E206E082(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x89AEA58335779997(Local_204[iParam0 /*18*/], 1, 0);
	unk_0x4C47904AE69D7393(Local_204[iParam0 /*18*/], 1);
	unk_0x89AEA58335779997(Local_204[iParam0 /*18*/], 0, 1);
	unk_0xD022E7E227665647(Local_204[iParam0 /*18*/], 3);
	unk_0x30F81670C721F076(Local_204[iParam0 /*18*/], 1);
	unk_0x89AEA58335779997(Local_204[iParam0 /*18*/], 17, 1);
	unk_0xAE833788DEAB23CA(Local_204[iParam0 /*18*/], 2, 0);
	unk_0xE77EEA92586CF2E8(Local_204[iParam0 /*18*/], 0);
	unk_0x015B50BC21C88C8C(Local_204[iParam0 /*18*/], 1);
	unk_0x83153769EA6DF5B2(Local_204[iParam0 /*18*/], 100);
	unk_0x1CDF2A367CBA85B4(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x31AC59B7C21A2047(Local_204[iParam0 /*18*/], 101, 1);
	unk_0x31AC59B7C21A2047(Local_204[iParam0 /*18*/], 185, 0);
	unk_0x67E5DE1657F60AC6(Local_204[iParam0 /*18*/], 300);
	unk_0x6CA29A70250F194F(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0xF65C7766FB8D4B2C(Local_204[iParam0 /*18*/], 1);
		unk_0x67E5DE1657F60AC6(Local_204[iParam0 /*18*/], 500);
	}
	unk_0x0E05C8E294DD31A1(Local_204[iParam0 /*18*/], 1);
	unk_0x89AEA58335779997(Local_204[iParam0 /*18*/], 2, 1);
	unk_0x861C75D434F4572D(Local_204[iParam0 /*18*/], 2f);
	unk_0xE77EEA92586CF2E8(Local_204[iParam0 /*18*/], 0);
	unk_0x410FA3FFE3D2D6F6(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0xA3618B5F6184DAD2(joaat("prop_pap_camera_01"), unk_0x585F703DF3E83B6E(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x5DAB197A499B8499(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xC88C187E2120E0BE(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x2137828D03306CAF(Local_204[0 /*18*/].f_2))
	{
		unk_0x4C1FCB3943DAF647(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0xE86A53C202B21FAB(Local_204[iParam0 /*18*/]);
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
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		bVar0 = false;
		if (func_67())
		{
			if (unk_0x2137828D03306CAF(func_66()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(func_66(), 1), Local_63) < 5f && unk_0xD2660BAC03EB7433(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
		{
			if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0) && unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0xBCA469D44FBFAC80());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0xBCA469D44FBFAC80());
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
			if (!unk_0xF8ED2D0629FE764D(iLocal_86, iLocal_91))
			{
				if (unk_0x62F5757271CA0B05(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0xF8ED2D0629FE764D(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x7FAC45D56235AB39(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x7FAC45D56235AB39(iLocal_91, 0) && func_65(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x7FAC45D56235AB39(iLocal_91, 0) && unk_0xABCF7EB00A727656(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x895FB9FE885E36ED(0, 2) == 1)
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
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (((unk_0x12CF5C6534A94BEE(iParam0, 0, 7000) || unk_0x12CF5C6534A94BEE(iParam0, 3, 30000)) || unk_0x12CF5C6534A94BEE(iParam0, 2, 30000)) || unk_0x12CF5C6534A94BEE(iParam0, 1, 40000))
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
		if ((unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/])) && !unk_0x769F0F6444C1ABE0(iLocal_86))
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
	if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_86))
		{
			if (unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0) && unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
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
		if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]) || unk_0xA9A04898798AE9E6(Local_204[iVar0 /*18*/], 0))
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
		if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 7))
		{
			unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0xD42AA0CF76AFB4D8(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6) && !unk_0x2519417DF9A1715B(unk_0x2A5EB8B0FE590B91())) && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0)) && (func_70(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0xD1EE0E9FCD74A37B(iParam0, 1)) < 100f)) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0x74C3E52BCC6361BD(unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x2137828D03306CAF(iParam0) && iParam1)
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
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(iParam3, 1) };
	Var3 = { unk_0x82D9CF397BA8C885(iParam3, 0f, 1f, 0f) - Var0 };
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
		if (unk_0xBDD3EABACAB97D09(uLocal_362))
		{
			unk_0x789C84F1B8496AD0(&uLocal_362);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_363))
		{
			unk_0x789C84F1B8496AD0(&uLocal_363);
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_360))
		{
			unk_0x789C84F1B8496AD0(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
	{
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) < 3)
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
	if ((unk_0x3732B96D7A1859B4() - iLocal_667) > 5000)
	{
		if (!func_74())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0x3732B96D7A1859B4();
			}
		}
	}
}

int func_74()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0x3732B96D7A1859B4() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0x3732B96D7A1859B4() - iLocal_356) > 4000)
		{
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6) && unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
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
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0x3732B96D7A1859B4() - iLocal_354) > 15000)
		{
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6) && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
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
					iLocal_352 = unk_0x3732B96D7A1859B4();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0x3732B96D7A1859B4();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0x3732B96D7A1859B4();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0x3732B96D7A1859B4();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_76()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		unk_0x015B50BC21C88C8C(iLocal_86, 1);
		unk_0x3A8EFBE4AB457FE2(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0x31AC59B7C21A2047(iLocal_86, 317, 1);
			unk_0x4C47904AE69D7393(iLocal_86, 0);
		}
	}
	func_80(-1, 0);
	func_77();
	unk_0x1AC83BFFD9188313(62);
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
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_79(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
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
			Global_103236.f_24776.f_2 = 3;
		}
		if (func_88(iParam0, iParam1) != 322)
		{
			func_82(func_88(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_103224 = iParam1;
		if (Global_103222 == 0)
		{
			if (((Global_103225 == 1 || Global_103225 == 5) || Global_103225 == 11) || Global_103225 == 25)
			{
				func_81(2);
			}
			else if ((Global_103225 == 26 || Global_103225 == 8) || Global_103225 == 17)
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
	Global_103222 = iParam0;
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
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = uParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_85(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_84() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_87();
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_20191.f_150[iVar1]), iVar0);
	}
}

void func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_92(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_92(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_93();
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_94()
{
	func_20();
	switch (Global_103236.f_2164.f_539.f_4301)
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
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20191.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xFABF5258A318B1DC(), 64);
	uVar16 = func_99(Var0);
	return uVar16;
}

int func_99(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam0))
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
	if (unk_0xBDD3EABACAB97D09(uLocal_360))
	{
		unk_0x789C84F1B8496AD0(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x769F0F6444C1ABE0(iLocal_86))
			{
				unk_0xCD6FB688ED8B6284(iLocal_86, unk_0x2A5EB8B0FE590B91(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
				{
					if (unk_0x812A9839F66D4B43(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_204[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 900f)
					{
						if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xBE35B7268C680A20(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x27BAC9B39BCC6522(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0xBDD3EABACAB97D09(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0x789C84F1B8496AD0(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x2137828D03306CAF(Local_131[iVar0 /*18*/]))
				{
					if (unk_0x812A9839F66D4B43(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_131[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 900f)
					{
						unk_0xA613FDAC42DBBFAD(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0xBDD3EABACAB97D09(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0x789C84F1B8496AD0(&(Local_131[iVar0 /*18*/].f_1));
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
				if ((unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/])) && !unk_0xA9A04898798AE9E6(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0x2A5EB8B0FE590B91(), iVar0);
					if (unk_0x812A9839F66D4B43(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_204[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 2500f)
					{
						if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xBE35B7268C680A20(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x27BAC9B39BCC6522(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(func_66(), 1)) < 100f)
				{
					iVar2 = unk_0x895FB9FE885E36ED(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[6 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[7 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_66(), "PAP3ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[8 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[8 /*10*/]))
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
						iVar2 = unk_0x895FB9FE885E36ED(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
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
						iVar2 = unk_0x895FB9FE885E36ED(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_66(), "PAP1ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_66(), "PAP2ESCAPE", 0, 1);
								if (unk_0x2137828D03306CAF(Local_395[iVar2 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[iVar2 /*10*/]))
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
			if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
			{
				unk_0x654FFF4D16298AC5(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xBDD3EABACAB97D09(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0x789C84F1B8496AD0(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x769F0F6444C1ABE0(iLocal_86))
				{
					if (unk_0xC4A39E4229BD3ABE(Local_204[iVar0 /*18*/], 0))
					{
						unk_0x8F2751B831A7B303(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (unk_0xE897E371352225D5(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x57747A7618E67953(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x812A9839F66D4B43(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_204[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_204[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 400f)
			{
				unk_0x27BAC9B39BCC6522(&(Local_204[iVar0 /*18*/]));
				if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0xBE35B7268C680A20(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x2137828D03306CAF(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0x812A9839F66D4B43(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(Local_131[iVar0 /*18*/], 1), unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0xFECCD8AF38671477(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0xBDD3EABACAB97D09(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x789C84F1B8496AD0(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x2137828D03306CAF(iLocal_86))
	{
		if (unk_0x812A9839F66D4B43(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_63) > 2500f)
		{
			unk_0x6C559FCFFD2365CB(&iLocal_86);
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
		if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0xBDD3EABACAB97D09(uLocal_360))
			{
				unk_0x789C84F1B8496AD0(&uLocal_360);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_361))
			{
				unk_0x789C84F1B8496AD0(&uLocal_361);
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_86))
			{
				unk_0x654FFF4D16298AC5(iLocal_86);
				unk_0x861C75D434F4572D(iLocal_86, 3f);
			}
			func_103();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
							{
								unk_0x654FFF4D16298AC5(Local_204[iVar0 /*18*/]);
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
					if (unk_0x2137828D03306CAF(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
						{
							unk_0x654FFF4D16298AC5(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0x7FAC45D56235AB39(iLocal_91, 0) && unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0x457D9E478E06E354(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x219EE6A7B599E7DC(&uVar2);
					unk_0x91233DD2A90FD0C8(0, iLocal_91);
					unk_0xED057CE9299687BC(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x8170B02A098B74FD(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0xA9EDD66D1A73F31A(0, iLocal_91, unk_0xD1EE0E9FCD74A37B(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x153CD660E835E570(0, iLocal_91, 0);
					unk_0x28FB7E63A217D6DE(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xBD718C5BA2122192(uVar2);
					unk_0x234E551BB8E8813B(iLocal_86, uVar2);
					unk_0xEDD36C58DDE03C8F(&uVar2);
				}
				else
				{
					unk_0x219EE6A7B599E7DC(&uVar3);
					unk_0x91233DD2A90FD0C8(0, iLocal_91);
					unk_0x37959C6A7F431781(0, iLocal_91, 15f, 786468);
					unk_0xBD718C5BA2122192(uVar3);
					unk_0x234E551BB8E8813B(iLocal_86, uVar3);
					unk_0xEDD36C58DDE03C8F(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0xC4A39E4229BD3ABE(iLocal_86, 0))
				{
					unk_0x8F2751B831A7B303(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xCD6FB688ED8B6284(iLocal_86, unk_0x2A5EB8B0FE590B91(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0x219EE6A7B599E7DC(&uVar4);
					unk_0x28FB7E63A217D6DE(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xBD718C5BA2122192(uVar4);
					unk_0x234E551BB8E8813B(iLocal_86, uVar4);
					unk_0xEDD36C58DDE03C8F(&uVar4);
				}
				else
				{
					unk_0x57747A7618E67953(iLocal_86, 1193033728, 0);
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
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

void func_105()
{
	func_103();
	if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0x654FFF4D16298AC5(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_188();
			func_176(10);
		}
		unk_0x3C030E241A3543D2(iLocal_86, -2065892691);
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
			if (!unk_0x769F0F6444C1ABE0(iLocal_86))
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_360))
				{
					uLocal_360 = func_178(iLocal_86, 0, 145);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_363))
				{
					unk_0x789C84F1B8496AD0(&uLocal_363);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_362))
				{
					unk_0x789C84F1B8496AD0(&uLocal_362);
				}
				unk_0x654FFF4D16298AC5(iLocal_86);
				unk_0x219EE6A7B599E7DC(&uVar0);
				unk_0x153CD660E835E570(0, iLocal_91, 0);
				unk_0x28FB7E63A217D6DE(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xBD718C5BA2122192(uVar0);
				unk_0x234E551BB8E8813B(iLocal_86, uVar0);
				unk_0xEDD36C58DDE03C8F(&uVar0);
				if (unk_0xAB603D6FBED0F015(iLocal_86))
				{
					unk_0x799D2CB4039F4804(iLocal_86);
				}
				func_103();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_74() && !unk_0x769F0F6444C1ABE0(iLocal_86))
			{
				if (unk_0x7DDA81F38FB30F23(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x769F0F6444C1ABE0(iLocal_86))
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
			if (!func_74() && !unk_0x769F0F6444C1ABE0(iLocal_86))
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
	
	if (Global_103236.f_27831[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_103236.f_27831[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_109(Global_103236.f_27831[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xC225A90A8DE0D96B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xC94674712BED1A82(iVar1, iVar0, 1);
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
					switch (unk_0x120DBC40E9E3D401())
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
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_2[Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_103236.f_20345.f_233[iVar2 /*69*/]++;
		Global_103236.f_20345.f_233[iVar2 /*69*/].f_1++;
		if (Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_103236.f_20345.f_233[iVar2 /*69*/].f_1 = 0;
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
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_103236.f_20345.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_103236.f_20345[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_103236.f_20345.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_103236.f_20345.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_103236.f_20345.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_103236.f_20345.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_103236.f_20345.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_103236.f_20345.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_103236.f_20345.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_103236.f_20345.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_103236.f_20345[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_103236.f_20345.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_103236.f_20345.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_103236.f_20345.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_103236.f_20345.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_103236.f_20345.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_103236.f_20345.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_103236.f_20345.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_103236.f_20345.f_88[iVar0];
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
			unk_0xC94674712BED1A82(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC94674712BED1A82(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC94674712BED1A82(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_112(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x507FE690B1271947(&(Global_103236.f_20345.f_471), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0) || unk_0xAA4F14DA15DB0B51(Global_2097152[func_114() /*10885*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x507FE690B1271947(&(Global_103236.f_20345.f_471), iParam0);
		unk_0x507FE690B1271947(&(Global_2097152[func_114() /*10885*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD05F099FEF4ED10A("COUP_RED");
		unk_0xD5DA3EC5EEC78358(func_113(iParam0));
		unk_0xF8DCA62B36D8BCE7(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x591AF4C50B46E014())
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20345.f_471, iParam0);
	}
	return unk_0xAA4F14DA15DB0B51(Global_2097152[func_114() /*10885*/].f_7546.f_10, iParam0);
}

int func_117(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB735FB6B965DBBD2(27))
	{
		return 0;
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xC225A90A8DE0D96B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xC225A90A8DE0D96B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC94674712BED1A82(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xB735FB6B965DBBD2(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_69800)
	{
		return 0;
	}
	if (func_129(&Global_2600921))
	{
		if (func_127(&Global_2600921, iParam0))
		{
			return 0;
		}
		if (func_120(&Global_2600921, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xC5AA25967DC5CBF2(iParam0))
		{
			return 0;
		}
		if (unk_0xB735FB6B965DBBD2(iParam0))
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
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
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
	
	if (unk_0xB735FB6B965DBBD2(iParam1))
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
	func_125(uParam0, (Global_2600920 - 0.5f));
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
	
	unk_0xC225A90A8DE0D96B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC94674712BED1A82(iParam0, iVar0, 1);
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
	if (unk_0x591AF4C50B46E014())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0xC225A90A8DE0D96B(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC94674712BED1A82(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_133()
{
	int iVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		unk_0xC225A90A8DE0D96B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0xC225A90A8DE0D96B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0xC225A90A8DE0D96B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

void func_134(bool bParam0)
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0x16EDD647B91D8D8F(iLocal_86, unk_0x2A5EB8B0FE590B91(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0x654FFF4D16298AC5(iLocal_86);
				unk_0xEDF42871EAD55C9B(iLocal_86, unk_0x2A5EB8B0FE590B91(), -1, 16, 2);
				unk_0x219EE6A7B599E7DC(&uLocal_620);
				unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
				unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 16, 2);
				unk_0xBD718C5BA2122192(uLocal_620);
				unk_0x234E551BB8E8813B(iLocal_86, uLocal_620);
				unk_0xEDD36C58DDE03C8F(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0xE897E371352225D5(iLocal_86, 242628503) != 1)
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
							if (!unk_0x453DB1DBE5D81637(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1E479544F884CFB5(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0x453DB1DBE5D81637(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1E479544F884CFB5(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0x453DB1DBE5D81637(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x1E479544F884CFB5(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
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
	if (unk_0xBDD3EABACAB97D09(uLocal_364))
	{
		unk_0x789C84F1B8496AD0(&uLocal_364);
	}
}

void func_136()
{
	var uVar0;
	
	if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					func_135();
					func_140(1, 1, 0, 0);
					if (unk_0xBDD3EABACAB97D09(uLocal_362))
					{
						unk_0x789C84F1B8496AD0(&uLocal_362);
					}
					if (unk_0xBDD3EABACAB97D09(uLocal_360))
					{
						unk_0x789C84F1B8496AD0(&uLocal_360);
					}
					if (unk_0xBDD3EABACAB97D09(uLocal_361))
					{
						unk_0x789C84F1B8496AD0(&uLocal_361);
					}
					if (unk_0xAB603D6FBED0F015(iLocal_86))
					{
						unk_0x799D2CB4039F4804(iLocal_86);
					}
					func_138();
					if (!unk_0x769F0F6444C1ABE0(iLocal_86))
					{
						unk_0x6B823DB6B46BB1F2(iLocal_86, unk_0x82D9CF397BA8C885(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x6B823DB6B46BB1F2(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 1280);
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
					if (!unk_0x769F0F6444C1ABE0(iLocal_86))
					{
						unk_0x6B823DB6B46BB1F2(iLocal_86, unk_0x82D9CF397BA8C885(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0xB1D181DBFC526F52(iLocal_86, 0, 0);
					}
					unk_0x6B823DB6B46BB1F2(unk_0x2A5EB8B0FE590B91(), unk_0x82D9CF397BA8C885(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_74() && !unk_0x769F0F6444C1ABE0(iLocal_86))
				{
					unk_0x219EE6A7B599E7DC(&uVar0);
					unk_0x153CD660E835E570(0, iLocal_91, 0);
					unk_0x28FB7E63A217D6DE(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x9F4D90A6D0682C51(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xBD718C5BA2122192(uVar0);
					unk_0x234E551BB8E8813B(iLocal_86, uVar0);
					unk_0xEDD36C58DDE03C8F(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					if (!unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
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
				if ((!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x7FAC45D56235AB39(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x153CD660E835E570(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0);
					unk_0xEDF42871EAD55C9B(unk_0x2A5EB8B0FE590B91(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
				{
					unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
					func_140(0, 1, 0, 0);
					unk_0xD1A53D507962BF1F(iLocal_91, 2);
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
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xA37D20A4B77452D4();
		Global_16756 = 0;
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_147(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
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
		Global_69798 = 1;
	}
	else
	{
		func_147(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_146(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_144(unk_0x0FFED3E94261A832())) && !func_142(unk_0x0FFED3E94261A832(), 0)) && !func_141())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_144(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_141()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_143(-1, 0) == 8;
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

int func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_87();
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

int func_144(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return 1;
	}
	if (func_145())
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

bool func_145()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_146(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

void func_148()
{
	if (Global_3 || bLocal_70)
	{
		unk_0x0C0404DFB8BB22C1(0.7f);
	}
	if (bLocal_368 && !unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		if (!func_169(iLocal_86))
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_360))
			{
				uLocal_360 = func_178(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_67())
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_363))
				{
					unk_0x789C84F1B8496AD0(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_363))
				{
					uLocal_363 = func_50(Local_56, 1);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_362))
				{
					unk_0x789C84F1B8496AD0(&uLocal_362);
				}
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_360))
			{
				unk_0x789C84F1B8496AD0(&uLocal_360);
			}
		}
		if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
		{
			if ((unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0)) && func_168(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x216B434C1A609F5B(iLocal_91, 1, 1);
				unk_0xD1A53D507962BF1F(iLocal_91, 1);
				unk_0xD3E5E6DE4F3CED03(iLocal_91, 0, 0);
			}
		}
		if (unk_0xBDD3EABACAB97D09(uLocal_363) && !unk_0xC4A39E4229BD3ABE(iLocal_86, 0))
		{
			if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_176(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_67() && func_167(1, 1, 1))
			{
				if (unk_0x9A46207BB68ED2F0(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
			{
				if (unk_0xE897E371352225D5(iLocal_86, -1794415470) != 1)
				{
					unk_0xA6AC097BEBB7B1F0(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 2f, 8388608, 0);
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
				if (unk_0x9A46207BB68ED2F0(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
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
				if (unk_0x453DB1DBE5D81637(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x453DB1DBE5D81637(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x654FFF4D16298AC5(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xFBC4596E19752537(0.5f);
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
	if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
	{
		func_72();
	}
	if (func_19() == 2)
	{
		if ((func_149() && !func_162()) && iLocal_47 != 8)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_86))
			{
				if (unk_0x7DDA81F38FB30F23(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0xE7EA59D3048D0B8F(iLocal_86, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832())))
					{
						unk_0xD234B4C90ED0E156(iLocal_86, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832()));
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
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 73, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam5)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
	}
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 138, 1);
	unk_0x4E6996123FABDB93(0, 136, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 131, 1);
	unk_0x4E6996123FABDB93(0, 132, 1);
	unk_0x4E6996123FABDB93(0, 123, 1);
	unk_0x4E6996123FABDB93(0, 126, 1);
	unk_0x4E6996123FABDB93(0, 129, 1);
	unk_0x4E6996123FABDB93(0, 130, 1);
	unk_0x4E6996123FABDB93(0, 133, 1);
	unk_0x4E6996123FABDB93(0, 134, 1);
	unk_0xB5924913D8350E63();
	func_151(iParam0);
	if ((unk_0x3732B96D7A1859B4() - Global_29) > 500)
	{
		unk_0x8231579045104F87(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3732B96D7A1859B4();
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x3FEF699D13BCC798(unk_0xD2660BAC03EB7433(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_151(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x317EBF76D4EFACBF(iParam0))
		{
			if (unk_0xBCE28DDC8BEC619D(iParam0))
			{
				unk_0xE3F9604466DA5BF0(iParam0, 0);
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
					iLocal_81 = unk_0x3732B96D7A1859B4();
				}
			}
			else if ((unk_0x3732B96D7A1859B4() - iLocal_81) > 500)
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
		iVar6 = unk_0xFCB6B117B84DEF57();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x9418F0AE636D9770(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x9418F0AE636D9770(&(Global_14613[iVar8 /*6*/])))
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
		if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
		{
			if (func_67())
			{
				return 1;
			}
		}
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && !unk_0xC4A39E4229BD3ABE(iLocal_86, 0))
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
		if (!unk_0xBDD3EABACAB97D09(uLocal_364))
		{
			func_160();
			uLocal_364 = func_159(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x9FD1808EF916E312(uLocal_364, 269);
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
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_162()
{
	if (Global_103236.f_24776.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_163(bool bParam0)
{
	if (unk_0x7FAC45D56235AB39(iLocal_91, 0) && !unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		if (func_67())
		{
			if (bParam0)
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_360))
			{
				unk_0x789C84F1B8496AD0(&uLocal_360);
			}
			if (unk_0xBDD3EABACAB97D09(uLocal_361))
			{
				unk_0x789C84F1B8496AD0(&uLocal_361);
			}
		}
		else
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_362))
			{
				unk_0x789C84F1B8496AD0(&uLocal_362);
			}
			if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_361))
				{
					uLocal_361 = func_164(iLocal_91, 0, 0);
				}
			}
			if (!unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0xBDD3EABACAB97D09(uLocal_360))
				{
					uLocal_360 = func_178(iLocal_86, 0, 145);
				}
			}
			else if (unk_0xBDD3EABACAB97D09(uLocal_360))
			{
				unk_0x789C84F1B8496AD0(&uLocal_360);
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
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_51(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_51(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_51(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xCBA4F77BB9D2F115(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x457D9E478E06E354(iParam0, iVar2, 0))
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
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x457D9E478E06E354(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x457D9E478E06E354(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x457D9E478E06E354(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x457D9E478E06E354(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	if (unk_0xE7EA59D3048D0B8F(iParam0, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832())))
	{
		if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x799D2CB4039F4804(iParam0);
		}
		return 1;
	}
	else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xD234B4C90ED0E156(iParam0, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832()));
	}
	return 0;
}

void func_170()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x7FAC45D56235AB39(iLocal_91, 0))
	{
		if (!unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 1))
		{
			if (unk_0xE897E371352225D5(iLocal_86, -1794415470) != 1)
			{
				unk_0xA6AC097BEBB7B1F0(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0x2137828D03306CAF(func_66()) && unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iLocal_86, 1), unk_0xD1EE0E9FCD74A37B(func_66(), 1)) < 100f) && (unk_0xD2660BAC03EB7433(iLocal_91) < 5f || !unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0x453DB1DBE5D81637(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xF8ED2D0629FE764D(iLocal_86, iLocal_91))
				{
					unk_0xF1C3427BFED79E6B(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x453DB1DBE5D81637(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xF8ED2D0629FE764D(iLocal_86, iLocal_91))
			{
				unk_0xF1C3427BFED79E6B(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x453DB1DBE5D81637(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x453DB1DBE5D81637(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xF8ED2D0629FE764D(iLocal_86, iLocal_91))
		{
			unk_0x654FFF4D16298AC5(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x2137828D03306CAF(func_66()) && !unk_0x769F0F6444C1ABE0(func_66()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_103();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xFBC4596E19752537(0.2f);
						unk_0x4C47904AE69D7393(iLocal_86, 1);
						unk_0x3A8EFBE4AB457FE2(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0xA3618B5F6184DAD2(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0x81642E3BC0111BF2(iLocal_358, 0, 0);
						unk_0x4C1FCB3943DAF647(iLocal_358, 0, 0);
						unk_0xA32D9C84C1A93920(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_172();
				if (!unk_0x9A46207BB68ED2F0(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0x3732B96D7A1859B4();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0x2137828D03306CAF(func_66()) && unk_0x2860DA9980AC4109(func_66(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
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
					if (unk_0x2137828D03306CAF(func_66()))
					{
						if (!unk_0x2860DA9980AC4109(func_66(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 6000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
								}
							}
							break;
						
						case 5:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
								}
							}
							break;
						
						case 6:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
								}
							}
							break;
						
						case 7:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
									iLocal_671 = unk_0x3732B96D7A1859B4();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x3732B96D7A1859B4() - iLocal_671) > 8000)
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
				if (!unk_0x2137828D03306CAF(func_66()))
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
					if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_67())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0x3732B96D7A1859B4();
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
	if ((unk_0x3732B96D7A1859B4() - iLocal_666) > 5000)
	{
		if (unk_0x2137828D03306CAF(iLocal_91) && unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
		{
			if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0x3732B96D7A1859B4() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0x3732B96D7A1859B4();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x3732B96D7A1859B4();
				return 1;
			}
		}
	}
	return 0;
}

void func_172()
{
	int iVar0;
	
	if ((unk_0x3732B96D7A1859B4() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x2137828D03306CAF(func_66())) && !unk_0x769F0F6444C1ABE0(func_66()))
		{
			if (unk_0x4A2E6F541CD8C36E(Local_63, unk_0xD1EE0E9FCD74A37B(func_66(), 1), 1) < 8f)
			{
				iVar0 = unk_0x895FB9FE885E36ED(0, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
						if (unk_0x2137828D03306CAF(Local_395[4 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
								iLocal_565 = unk_0x895FB9FE885E36ED(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_66(), "PAPARAZZO", 0, 1);
						if (unk_0x2137828D03306CAF(Local_395[4 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
								iLocal_565 = unk_0x895FB9FE885E36ED(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_66(), "PAP2", 0, 1);
						if (unk_0x2137828D03306CAF(Local_395[5 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
								iLocal_565 = unk_0x895FB9FE885E36ED(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_66(), "PAP3", 0, 1);
						if (unk_0x2137828D03306CAF(Local_395[6 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
								iLocal_565 = unk_0x895FB9FE885E36ED(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_66(), "PAP4", 0, 1);
						if (unk_0x2137828D03306CAF(Local_395[7 /*10*/]) && !unk_0x769F0F6444C1ABE0(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x3732B96D7A1859B4();
								iLocal_565 = unk_0x895FB9FE885E36ED(2000, 3000);
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
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_360))
		{
			unk_0xE1E81CBB89115254(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0xA7C81DED990D3418("random@paparazzi@peek");
				unk_0xA7C81DED990D3418("random@paparazzi@trans");
				unk_0xA7C81DED990D3418("random@paparazzi@wait");
				if ((unk_0x45834D6C20FFF689("random@paparazzi@peek") && unk_0x45834D6C20FFF689("random@paparazzi@trans")) && unk_0x45834D6C20FFF689("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0x6D46C949A32B8D73(Local_653, Local_656, 2);
					unk_0x5F778B8D6D7DF47B(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0xEDF42871EAD55C9B(iLocal_86, unk_0x2A5EB8B0FE590B91(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0xFBC4596E19752537(0.2f);
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
				if (unk_0xAA4F14DA15DB0B51(iLocal_660, 0))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_660, 1))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0x35302CD5A5D37EED(sLocal_631, "right_"))
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
				if ((unk_0x354ACA1BAED67927(uLocal_625) && unk_0x58DF249E321EAB8E(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0x654FFF4D16298AC5(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0x6D46C949A32B8D73(Local_653, Local_656, 2);
						unk_0x5F778B8D6D7DF47B(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xF6082E2ADA1C795B(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0xBCA469D44FBFAC80());
					}
					if ((unk_0x3732B96D7A1859B4() - iLocal_624) > 5000 && iLocal_660 == 0)
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
								func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x654FFF4D16298AC5(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0x6D46C949A32B8D73(Local_653, Local_656, 2);
									unk_0x5F778B8D6D7DF47B(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xF6082E2ADA1C795B(&iLocal_660, 0);
								}
								iLocal_624 = unk_0x3732B96D7A1859B4();
							}
						}
					}
				}
				if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_359))
					{
						unk_0x789C84F1B8496AD0(&uLocal_359);
						if (!unk_0xBDD3EABACAB97D09(uLocal_360))
						{
							uLocal_360 = func_178(iLocal_86, 0, 145);
						}
					}
					unk_0x654FFF4D16298AC5(iLocal_86);
					uLocal_625 = unk_0x6D46C949A32B8D73(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0x5F778B8D6D7DF47B(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x5F778B8D6D7DF47B(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xF6082E2ADA1C795B(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0x354ACA1BAED67927(uLocal_625) && unk_0x58DF249E321EAB8E(uLocal_625) > 0.9f)
				{
					if (unk_0xE897E371352225D5(iLocal_86, 242628503) != 1)
					{
						unk_0x654FFF4D16298AC5(iLocal_86);
						unk_0xF1C3427BFED79E6B(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if (func_175())
					{
						unk_0xFECCD8AF38671477(&iLocal_91);
						iLocal_91 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						unk_0x216B434C1A609F5B(iLocal_91, 1, 1);
						unk_0xD3E5E6DE4F3CED03(iLocal_91, 0, 0);
						unk_0xD1A53D507962BF1F(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0xD1A53D507962BF1F(iLocal_91, 1);
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
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					if (unk_0x2860DA9980AC4109(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0xE897E371352225D5(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							unk_0x219EE6A7B599E7DC(&uVar16);
							unk_0x28FB7E63A217D6DE(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x88E3EDF9AF851486(0, unk_0x2A5EB8B0FE590B91(), 0);
							unk_0xBD718C5BA2122192(uVar16);
							unk_0x234E551BB8E8813B(iLocal_86, uVar16);
							unk_0xB1D181DBFC526F52(iLocal_86, 0, 0);
							unk_0xEDD36C58DDE03C8F(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0x861C75D434F4572D(iLocal_86, 1f);
							func_174(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_174(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
						{
							if (unk_0xBDD3EABACAB97D09(uLocal_361))
							{
								unk_0x789C84F1B8496AD0(&uLocal_361);
							}
							if (!unk_0xBDD3EABACAB97D09(uLocal_360))
							{
								uLocal_360 = func_178(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0x2860DA9980AC4109(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_168(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_103();
							if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
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
							unk_0x654FFF4D16298AC5(iLocal_86);
							unk_0xA6AC097BEBB7B1F0(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 1f, 8388608, 0);
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
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					if (func_150(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_86) && unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
					{
						if (unk_0xBDD3EABACAB97D09(uLocal_360))
						{
							unk_0x789C84F1B8496AD0(&uLocal_360);
						}
						unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
						func_176(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0) && !unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 1)) && !unk_0x9A46207BB68ED2F0(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0xAE833788DEAB23CA(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_176(6);
								}
								else
								{
									unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 1, 0);
									unk_0xAE833788DEAB23CA(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_176(6);
								}
							}
						}
						if (!unk_0x5B9B499C707C2A95(iLocal_86, iLocal_91, 0))
						{
							if (unk_0xE897E371352225D5(iLocal_86, -1794415470) != 1)
							{
								unk_0x654FFF4D16298AC5(iLocal_86);
								unk_0xA6AC097BEBB7B1F0(iLocal_86, iLocal_91, -1, func_166(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0x82D9CF397BA8C885(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0x861C75D434F4572D(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
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
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
				{
					if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0xBCA469D44FBFAC80());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0xBCA469D44FBFAC80() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
				{
					if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0) && func_175())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						unk_0x216B434C1A609F5B(iLocal_91, 1, 1);
					}
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_91, 0))
					{
						if (unk_0xBDD3EABACAB97D09(uLocal_361))
						{
							unk_0x789C84F1B8496AD0(&uLocal_361);
						}
						if (!unk_0xBDD3EABACAB97D09(uLocal_360))
						{
							uLocal_360 = func_178(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0xBDD3EABACAB97D09(uLocal_360))
						{
							unk_0x789C84F1B8496AD0(&uLocal_360);
						}
						if (!unk_0xBDD3EABACAB97D09(uLocal_361))
						{
							uLocal_361 = func_164(iLocal_91, 0, 0);
						}
					}
					if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iLocal_91))
					{
						if (unk_0xBDD3EABACAB97D09(uLocal_361))
						{
							unk_0x789C84F1B8496AD0(&uLocal_361);
						}
						if (!unk_0xBDD3EABACAB97D09(uLocal_360))
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
			if (unk_0x7FAC45D56235AB39(iLocal_91, 0))
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
			if (!unk_0x7FAC45D56235AB39(iLocal_91, 0))
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
						if (unk_0xE86A53C202B21FAB(iLocal_91) < iLocal_83)
						{
							if (unk_0xE8594BE97055E9A1(iLocal_91, unk_0x2A5EB8B0FE590B91(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0xE86A53C202B21FAB(iLocal_91)));
							}
							unk_0x869E3FDF7FDABA6A(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0x4E9A7A90A945365B(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_176(5);
							}
						}
					}
				}
				iLocal_83 = unk_0xE86A53C202B21FAB(iLocal_91);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_86))
		{
			if (unk_0xE4B596B1029F4F6A(iLocal_86))
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
		if (unk_0xE897E371352225D5(iLocal_86, 713668775) != 1)
		{
			unk_0x28FB7E63A217D6DE(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xE897E371352225D5(iLocal_86, 713668775) != 1)
	{
		func_134(bParam3);
		unk_0xEDF42871EAD55C9B(iLocal_86, unk_0x2A5EB8B0FE590B91(), -1, 16, 2);
	}
}

bool func_175()
{
	return (((((unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0) && unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), 0)) && (unk_0x6CB676485E7724F8(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))) || unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))))) && unk_0xCBA4F77BB9D2F115(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) > 0) && func_168(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0))) && !Global_102283);
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
		if (!unk_0x35302CD5A5D37EED(iLocal_560[iVar0], sParam0))
		{
			if (unk_0x8BEECCAAE312A5BA(iLocal_560[iVar0]))
			{
				unk_0x40F160C3038ECAF5(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0x35302CD5A5D37EED(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0x8BEECCAAE312A5BA(iLocal_560[iVar0]))
			{
				unk_0xB0D390F8FEB78903(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_178(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_165(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_179(int iParam0)
{
	if (func_182())
	{
		Global_103226 = 1;
		Global_103223 = unk_0x3732B96D7A1859B4();
		if (func_89(Global_103225))
		{
			func_180(0);
		}
		unk_0x016711C6F4D08FCE(1, "RE_TITLE");
		if (iParam0 && func_89(Global_103225))
		{
			unk_0x847E5C2DF89423C1();
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
			if (Global_103236.f_24776.f_2 < 3)
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_161(func_181(iParam0), -1);
					Global_103236.f_24776.f_2++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 1))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_161(func_181(iParam0), -1);
					Global_103236.f_24776.f_3++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 2))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_161(func_181(iParam0), -1);
					Global_103236.f_24776.f_4++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 2);
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
	switch (func_183(&Global_25281, 0, 5, 0, unk_0xFF09208EC90C94CB()))
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
		if (Global_89400.f_44 == 1)
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
		unk_0x1EF72C87138AD63D(unk_0x8A41C463063AFC8E(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6A11DD53643C828(8);
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
	
	if (!unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		unk_0xAE833788DEAB23CA(iLocal_86, 2, 0);
		unk_0xCD6FB688ED8B6284(iLocal_86, unk_0x2A5EB8B0FE590B91(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x769F0F6444C1ABE0(Local_204[iVar0 /*18*/]))
		{
			unk_0xCD6FB688ED8B6284(Local_204[iVar0 /*18*/], unk_0x2A5EB8B0FE590B91(), 300f, -1, 0, 0);
			unk_0x3C030E241A3543D2(Local_204[iVar0 /*18*/], -2065892691);
			unk_0x4C47904AE69D7393(Local_204[iVar0 /*18*/], 0);
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
		if (unk_0x2137828D03306CAF(Local_204[iVar1 /*18*/]) && !unk_0x769F0F6444C1ABE0(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x18570CCBAF7F635C(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0xD42AA0CF76AFB4D8(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0x4A40D388873A536C(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0xE4B596B1029F4F6A(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
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
		if (unk_0x2137828D03306CAF(Local_131[iVar1 /*18*/]))
		{
			if (unk_0x7FAC45D56235AB39(Local_131[iVar1 /*18*/], 0) && unk_0x18570CCBAF7F635C(Local_131[iVar1 /*18*/]))
			{
				if (unk_0xFB4BF464D20ED824(Local_131[iVar1 /*18*/]))
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_201())
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
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_94();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 2) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 3))
				{
					func_192(iVar32, &Var0);
					fVar35 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0.f_6, 1);
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
	if (unk_0x58478145CAF8429C(&cVar2))
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
	return Global_102954 > 0;
}

int func_199()
{
	if (Global_88844 != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

int func_201()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
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
	iLocal_86 = unk_0xD00B79C0E206E082(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0x89AEA58335779997(iLocal_86, 1, 1);
	unk_0x89AEA58335779997(iLocal_86, 17, 1);
	unk_0xAE833788DEAB23CA(iLocal_86, 128, 1);
	unk_0x015B50BC21C88C8C(iLocal_86, 1);
	unk_0x92124F49C2CE9DB0(iLocal_86, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 0, 0, 1, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 2, 0, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 3, 0, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 4, 0, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 7, 1, 0, 0);
	unk_0x6CA29A70250F194F(iLocal_86, 8, 0, 0, 0);
	unk_0x4589DF13161114E5(iLocal_86, 1);
	unk_0x4C47904AE69D7393(iLocal_86, 1);
	unk_0x2725C3746060DA66(iLocal_86, 0);
	unk_0x28AB07F44A348EFC(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0xF65C7766FB8D4B2C(iLocal_86, 1);
	}
	if (unk_0xEE8231F61ED038B0("CELEBRITY", &uLocal_69))
	{
		unk_0x3C030E241A3543D2(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0xE42A511281C9895B(joaat("surano"), Local_92, fLocal_95, 1, 1, 0);
	unk_0x8F35D7268F7D4402(iLocal_91, Local_92, 0, 0, 1);
	unk_0xF7DBB58616DE468C(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0xD3E5E6DE4F3CED03(iLocal_91, 0, 0);
	unk_0x23B7F0BEB9890E62(iLocal_91, 10);
	unk_0x07C140F31B3CDAFA(iLocal_91, 1084227584);
	unk_0xD1A53D507962BF1F(iLocal_91, 3);
	unk_0xCFE4626F633D6C6A(iLocal_91, 1);
	unk_0xA08DFE27A5FC4063(iLocal_91, 1);
	unk_0xBE304D1F44492411(iLocal_91, unk_0xD2225B71AF170B13(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
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
	unk_0x02E663D7DDAE8202(joaat("vader"), 1);
	unk_0x02E663D7DDAE8202(joaat("surano"), 1);
	unk_0x02E663D7DDAE8202(joaat("cavalcade2"), 1);
}

var func_203(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x7FF3A84437112BB2(uVar0, 0);
	unk_0x929538D619711815(uVar0, 0);
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
		unk_0x507FE690B1271947(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_84() == 0)
		{
			uVar0 = func_208(func_209(iParam0), -1, 0);
			unk_0x507FE690B1271947(&uVar0, iParam1);
			func_206(func_209(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_207(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, iParam3);
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

int func_208(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_207(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
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
			return 823;
			break;
		
		case 1:
			return 824;
			break;
		
		case 2:
			return 825;
			break;
		
		case 3:
			return 826;
			break;
		
		case 4:
			return 827;
			break;
		
		case 5:
			return 828;
			break;
		
		case 6:
			return 829;
			break;
		
		case 7:
			return 830;
			break;
		
		case 8:
			return 831;
			break;
		
		case 9:
			return 832;
			break;
		
		case 10:
			return 833;
			break;
		
		case 11:
			return 834;
			break;
		
		case 12:
			return 835;
			break;
		
		case 13:
			return 836;
			break;
		
		case 14:
			return 837;
			break;
		
		case 15:
			return 839;
			break;
		
		case 16:
			return 840;
			break;
		
		case 17:
			return 841;
			break;
		
		case 18:
			return 842;
			break;
		
		case 19:
			return 843;
			break;
		
		case 20:
			return 844;
			break;
		
		case 21:
			return 845;
			break;
		
		case 22:
			return 846;
			break;
		
		case 23:
			return 847;
			break;
		
		case 24:
			return 848;
			break;
		
		case 25:
			return 849;
			break;
		
		case 26:
			return 850;
			break;
		
		case 27:
			return 851;
			break;
		
		case 28:
			return 852;
			break;
		
		case 29:
			return 853;
			break;
		
		case 30:
			return 854;
			break;
		
		case 31:
			return 855;
			break;
		
		case 32:
			return 856;
			break;
		
		case 33:
			return 857;
			break;
		
		case 34:
			return 858;
			break;
		
		case 35:
			return 859;
			break;
		
		case 36:
			return 860;
			break;
		
		case 37:
			return 861;
			break;
		
		case 38:
			return 862;
			break;
		
		case 39:
			return 863;
			break;
		
		case 40:
			return 867;
			break;
		
		case 41:
			return 868;
			break;
		
		case 42:
			return 869;
			break;
		
		case 43:
			return 870;
			break;
		
		case 44:
			return 6134;
			break;
		
		case 45:
			return 3783;
			break;
		
		case 46:
			return 5358;
			break;
		
		default:
			break;
	}
	return 6309;
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91829.f_1315[iParam0]), iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_84() == 0)
		{
			uVar0 = func_208(func_209(iParam0), -1, 0);
			unk_0xF6082E2ADA1C795B(&uVar0, iParam1);
			func_206(func_209(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_668[iParam0]), iParam1);
	}
}

int func_211(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xAA4F14DA15DB0B51(Global_91829.f_1315[iParam0], iParam1);
	}
	else if (unk_0x591AF4C50B46E014())
	{
		if (func_84() == 0)
		{
			return unk_0xAA4F14DA15DB0B51(func_208(func_209(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_668[iParam0], iParam1);
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
	unk_0xA7C81DED990D3418("random@escape_paparazzi@standing@");
	unk_0xA7C81DED990D3418("random@paparazzi@pap_anims");
	unk_0xA7C81DED990D3418("random@paparazzi@peek");
	unk_0xA7C81DED990D3418("random@paparazzi@trans");
	unk_0xA7C81DED990D3418("random@paparazzi@wait");
	unk_0xA7C81DED990D3418("veh@std@ps@idle_panic");
	unk_0xA7C81DED990D3418("veh@low@front_ps@idle_panic");
	unk_0xA7C81DED990D3418(sLocal_374);
	unk_0xC9173FA08E7D8227("ESCPAP", 0);
	if (((((((((unk_0x45834D6C20FFF689("random@escape_paparazzi@standing@") && unk_0x45834D6C20FFF689("random@paparazzi@pap_anims")) && unk_0x45834D6C20FFF689("random@paparazzi@peek")) && unk_0x45834D6C20FFF689("random@paparazzi@trans")) && unk_0x45834D6C20FFF689("random@paparazzi@wait")) && unk_0x45834D6C20FFF689("veh@std@ps@idle_panic")) && unk_0x45834D6C20FFF689("veh@low@front_ps@idle_panic")) && unk_0x45834D6C20FFF689(sLocal_374)) && unk_0x44FB58EFDA8731B7(0)) && unk_0x741298E7009A20C9("Distant_Camera_Flash", false, -1))
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
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0xAA4F14DA15DB0B51(iParam0, 30))
	{
		if (unk_0xAA4F14DA15DB0B51(iParam0, 29))
		{
			switch (func_216(iParam0))
			{
				case 0:
					return unk_0xA1FC9D7AEA164881(uParam2);
					break;
				
				case 1:
					return unk_0x45834D6C20FFF689(sParam1);
					break;
				
				case 2:
					return unk_0x0C709135471077E2(sParam1);
					break;
				
				case 3:
					return unk_0xB5ABADF6417115F2(sParam1);
					break;
				
				case 4:
					return unk_0x3FCFBAC760CAEC03(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xF6D41300D4DD067A(sParam1);
					break;
				
				case 6:
					return unk_0x741298E7009A20C9(sParam1, unk_0xAA4F14DA15DB0B51(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x9C29C619BDECB0C6(iParam2);
					break;
				
				case 8:
					return unk_0x44FB58EFDA8731B7(iParam2);
					break;
				
				case 9:
					return unk_0x1135D5BD86A70AD2();
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
		if (unk_0xAA4F14DA15DB0B51(iParam0, iVar0))
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
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xF6082E2ADA1C795B(uParam0[iVar0 /*2*/], iParam1);
			unk_0xF6082E2ADA1C795B(uParam0[iVar0 /*2*/], 30);
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_201())
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
	if ((Global_103225 == func_98() && unk_0x0EF1484C8ECA32F8()) && Global_103226)
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
		if ((unk_0x5E60CE6A99DCBE0A() >= (uParam0->f_32 + uParam0->f_33) || unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 2)) || unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 29))
					{
						func_224(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x5E60CE6A99DCBE0A();
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
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 30))
	{
		switch (func_216(*uParam0))
		{
			case 0:
				unk_0x0F39DF6675B2333E(uParam2);
				break;
			
			case 1:
				unk_0xA7C81DED990D3418(sParam1);
				break;
			
			case 2:
				unk_0x7F37C67732B5EECD(sParam1);
				break;
			
			case 3:
				unk_0x91A9530585A5AF03(sParam1, unk_0xAA4F14DA15DB0B51(*uParam0, 28));
				break;
			
			case 4:
				unk_0x6C2A4A9F6C64E132(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBD7617BB733D8EC9(sParam1);
				break;
			
			case 6:
				unk_0x741298E7009A20C9(sParam1, unk_0xAA4F14DA15DB0B51(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA9515FF24FA319E3(iParam2);
				break;
			
			case 8:
				unk_0xC9173FA08E7D8227(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x926AB8F66F783F4D();
				break;
			
			default:
				break;
		}
		unk_0xF6082E2ADA1C795B(uParam0, 29);
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
	unk_0x2D47D0FBCE479E9D(0);
	unk_0x0A397D1B8C0E7CF0(1);
	Global_103222 = 0;
	func_227();
}

void func_227()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x02E663D7DDAE8202(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), 1);
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	}
}

void func_228(int iParam0)
{
	Global_103225 = iParam0;
}

int func_229(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_141282)
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_201())
			{
				return 0;
			}
		}
		if (!Global_103236.f_8866)
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
		if (Global_103225 != -1)
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !bParam6)
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
		if (!func_265(Global_103236.f_24776.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3732B96D7A1859B4() - Global_103227) < 150000)
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
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
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
		if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
		{
			if ((unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(377.153f, -717.567f, 10.0536f) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(320.9934f, 265.2515f, 82.1221f)) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_103236.f_2164.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_103236.f_2164.f_539.f_2276[iVar4];
				if (func_253(iVar8))
				{
					if (func_231(iVar4))
					{
						if (!func_230(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_103236.f_2164.f_539.f_2276[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_243(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
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
	
	func_252(&uVar0, unk_0xD887411BD4A4A92D());
	func_251(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_250(&uVar0, unk_0xDA870B7547A455EA());
	func_249(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_248(&uVar0, unk_0x0FD588FC21950895());
	func_247(&uVar0, unk_0x15C180E135C728D1());
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
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
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
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_263()) || Global_102283) || Global_25224) || func_262()) || func_14(8, -1)) || func_261()) || func_260()) || func_259()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_263()) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_261()) || func_260()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_263()) || Global_102283) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_261()) || func_260()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_263()) || Global_102283) || Global_25224) || func_262()) || func_14(8, -1)) || func_261()) || func_260()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_263() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_14(8, -1)) || func_258()) || func_257()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_261()) || func_260()) || func_257()) || func_256())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_263()) || Global_25224) || func_262()) || func_14(8, -1)) || func_260()) || func_259()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_263()) || func_260()) || Global_102283) || Global_25224) || func_262()) || Global_36944) || func_14(8, -1)) || func_259()) || func_257()) || func_258()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_263()) || Global_102283) || Global_25224) || func_262()) || func_14(8, -1)) || func_259()) || func_257()) || func_261()) || func_260()) || func_258())
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
	return Global_91816.f_1;
}

int func_257()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_258()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_259()
{
	if (Global_70060)
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
	return Global_91829.f_310 > 0;
}

bool func_261()
{
	return Global_91829.f_309 > 0;
}

var func_262()
{
	return Global_1312852;
}

int func_263()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
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
	return Global_103236.f_7469.f_919[iParam0];
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
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_1, iVar0);
	}
	return bVar1;
}

int func_269()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(uVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(iVar0, 0, 0)))
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
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
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
	unk_0xE5D346CBE75AD979(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0x10632CBB5FE7F881("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_285(&uLocal_97, 0);
	unk_0x15167ADA0B7D44AE("random@escape_paparazzi@standing@");
	unk_0x15167ADA0B7D44AE("random@paparazzi@pap_anims");
	unk_0x15167ADA0B7D44AE("random@paparazzi@peek");
	unk_0x15167ADA0B7D44AE("random@paparazzi@trans");
	unk_0x15167ADA0B7D44AE("random@paparazzi@wait");
	unk_0x15167ADA0B7D44AE("veh@std@ps@idle_panic");
	unk_0x15167ADA0B7D44AE("veh@low@front_ps@idle_panic");
	unk_0x15167ADA0B7D44AE(sLocal_374);
	unk_0x2A91BA279681D7D2();
	if (func_222())
	{
		unk_0xFBC4596E19752537(1f);
	}
	if (unk_0x2137828D03306CAF(iLocal_86) && !unk_0x769F0F6444C1ABE0(iLocal_86))
	{
		if (unk_0xAB603D6FBED0F015(iLocal_86))
		{
			unk_0x799D2CB4039F4804(iLocal_86);
		}
		if (unk_0xC4A39E4229BD3ABE(iLocal_86, 1))
		{
			if (!unk_0xE4B596B1029F4F6A(iLocal_86))
			{
				unk_0x8F2751B831A7B303(iLocal_86, 0, 0);
			}
		}
	}
	func_274(-1);
	unk_0xC621FE33C5D99948();
	unk_0x765A2A874BCB30A7(0);
	unk_0x02E663D7DDAE8202(joaat("vader"), 0);
	unk_0x02E663D7DDAE8202(joaat("surano"), 0);
	unk_0x02E663D7DDAE8202(joaat("cavalcade2"), 0);
	unk_0x6790C1CEA32DA629(uLocal_365, 0);
	unk_0x6790C1CEA32DA629(uLocal_366, 0);
	unk_0x6790C1CEA32DA629(uLocal_367, 0);
	unk_0x20A9229D8F4F054A(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_25460)
	{
		unk_0x988197573BDAD49A("AC_STOP");
	}
	func_273();
	unk_0xA232817B0B36F2E5();
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
		unk_0x016711C6F4D08FCE(0, 0);
		Global_103227 = unk_0x3732B96D7A1859B4();
		func_277(30000);
		StringCopy(&cVar0, func_276(Global_103225, 1), 64);
		if (func_97(Global_103225) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_103224, 64);
		}
		unk_0xFB2DC910C33320E0(&cVar0, Global_103222, (unk_0x3732B96D7A1859B4() - Global_103223), 0);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103232, 0) && Global_103236.f_24776.f_2 < 3)
	{
		unk_0x507FE690B1271947(&Global_103232, 0);
	}
	func_275(&Global_25281);
	Global_103226 = 0;
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
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
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
	Global_103236.f_24776.f_43[iParam0] = *uParam1;
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
		if (unk_0xAA4F14DA15DB0B51((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0xAA4F14DA15DB0B51(uParam0, 30))
	{
		switch (func_216(iParam0))
		{
			case 0:
				unk_0xFD213087BC4CC3B3(uParam2);
				break;
			
			case 1:
				unk_0x15167ADA0B7D44AE(sParam1);
				break;
			
			case 2:
				unk_0xD8BA8255AB229DF9(sParam1);
				break;
			
			case 3:
				unk_0x2FCDEAA8BCC22D85(sParam1);
				break;
			
			case 4:
				unk_0x0090DF2486F4EBEE(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xD431C233427B1AA2(sParam1);
				break;
			
			case 6:
				unk_0x2A91BA279681D7D2();
				break;
			
			case 7:
				unk_0xBD71E7CB90D1A6FC(uParam2);
				break;
			
			case 8:
				unk_0xEF7A86AB02E46379(uParam2, unk_0xAA4F14DA15DB0B51(iParam0, 26));
				break;
			
			case 9:
				unk_0x2C495F7C13999480();
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

